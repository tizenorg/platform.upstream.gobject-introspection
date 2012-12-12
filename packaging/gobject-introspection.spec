Name:           gobject-introspection
Version:        1.35.2
Release:        0
Summary:        GObject Introspection Tools
License:        LGPL-2.1+ and GPL-2.0+
Group:          Development/Libraries/GNOME
Url:            http://live.gnome.org/GObjectIntrospection
Source0:        http://download.gnome.org/sources/gobject-introspection/1.34/%{name}-%{version}.tar.xz
Source1:        gi-find-deps.sh
Source2:        gobjectintrospection.attr
Source3:        gobject-introspection-typelib.template
Source99:       %{name}-rpmlintrc
BuildRequires:  bison
BuildRequires:  fdupes
BuildRequires:  flex
BuildRequires:  libffi-devel
BuildRequires:  libtool
BuildRequires:  python-devel
BuildRequires:  python-xml
BuildRequires:  pkgconfig(cairo)
BuildRequires:  pkgconfig(cairo-gobject)
BuildRequires:  pkgconfig(gobject-2.0)
BuildRequires:  pkgconfig(gtk-doc)
Requires:       libgirepository = %{version}
Requires:       python-xml
BuildRoot:      %{_tmppath}/%{name}-%{version}-build

%description
The goal of the project is to describe the APIs and collect them in
a uniform, machine readable format.

%package -n libgirepository
Summary:        GObject Introspection Library
License:        LGPL-2.1+
Group:          System/Libraries
Requires:       girepository >= %{version}

%description -n libgirepository
The goal of the project is to describe the APIs and collect them in
a uniform, machine readable format.

%package -n girepository
Summary:        Base GObject Introspection Bindings
License:        LGPL-2.1+
Group:          System/Libraries
Requires:       libgirepository >= %{version}
%(cat %{S:3} | awk '{ print "Provides: " $0}')

%description -n girepository
The goal of the project is to describe the APIs and collect them in
a uniform, machine readable format.

%package devel
Summary:        GObject Introspection Development Files
License:        LGPL-2.1+
Group:          Development/Libraries/GNOME
# Note: the devel package requires the binaries, not just the library
Requires:       %{name} = %{version}
Requires:       libffi-devel

%description devel
The goal of the project is to describe the APIs and collect them in
a uniform, machine readable format.

%prep
%setup -q

%if 0%{?BUILD_FROM_VCS}
[ -x ./autogen.sh ] && NOCONFIGURE=1 ./autogen.sh
%endif

%build
gtkdocize --copy
autoreconf -fi
%configure \
%if 0%{?BUILD_FROM_VCS}
        --enable-gtk-doc \
%endif
        --disable-static
%__make %{?_smp_mflags} V=1

%install
%make_install
find %{buildroot} -type f -name "*.la" -delete -print
install -D %{S:1} %{buildroot}%{_rpmconfigdir}/gi-find-deps.sh
install -D %{S:2} -m 0644 %{buildroot}%{_rpmconfigdir}/fileattrs/gobjectintrospection.attr
# comparing, if we provide all the symbols expected.
ls %{buildroot}%{_libdir}/girepository-1.0/*.typelib | sh %{S:1} -P > gobject-introspection-typelib.installed
diff -s %{S:3} gobject-introspection-typelib.installed
%fdupes %{buildroot}


%post -n libgirepository -p /sbin/ldconfig

%postun -n libgirepository -p /sbin/ldconfig

%docs_package

%files
%defattr(-,root,root)
%doc COPYING COPYING.GPL
%{_bindir}/g-ir-annotation-tool
%{_bindir}/g-ir-compiler
%{_bindir}/g-ir-dep-tool
%{_bindir}/g-ir-generate
%{_bindir}/g-ir-scanner
%{_datadir}/aclocal/introspection.m4
%{_datadir}/gir-1.0/*.gir
%dir %{_libdir}/gobject-introspection
%{_libdir}/gobject-introspection/giscanner/
%dir %{_datadir}/gobject-introspection-1.0
%{_datadir}/gobject-introspection-1.0/Makefile.introspection
%{_datadir}/gobject-introspection-1.0/tests/
%{_datadir}/gobject-introspection-1.0/gdump.c
%{_rpmconfigdir}/gi-find-deps.sh
%{_rpmconfigdir}/fileattrs/gobjectintrospection.attr

%files -n libgirepository
%defattr(-,root,root)
%doc COPYING.LGPL
%dir %{_datadir}/gir-1.0
%{_libdir}/libgirepository-1.0.so.*
%dir %{_libdir}/girepository-1.0

%files -n girepository
%defattr(-,root,root)
%{_libdir}/girepository-1.0/*.typelib

%files devel
%defattr(-,root,root)
%{_includedir}/gobject-introspection-1.0/
%{_libdir}/libgirepository-1.0.so
%{_libdir}/pkgconfig/gobject-introspection-1.0.pc
%{_libdir}/pkgconfig/gobject-introspection-no-export-1.0.pc
