
/* -*- Mode: C; c-file-style: "gnu"; -*- */
/* GObject introspection: typelib dependency scanner
 *
 * Copyright (C) 2011 Dominique Leuenberger
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#include <glib.h>
#include <girepository.h>

int main(int argc, char *argv[]) {
	GError *err = NULL;
	GITypelib *typelib;
	gchar **deps;
	const gchar *shlibs;
	int i;
	const char *namespace = argv[1];
	const char *version = argv[2];

	g_type_init();

	if (argc < 2 || argc > 3) {
		g_print ("Usage: %s <typelib> [<version>]\n\n", argv[0]);
		g_print ("       typelib: The namespace of the typelib to inspect\n");
		g_print ("       version: The version of the typelib to inspect\n");
		return 1;
	}

	/* Try to load the typelib specified as parameter */
	typelib = g_irepository_require (NULL, namespace, version, 0, &err);

	if (!typelib) {
		g_printerr ("ERROR: Failed to load typelib '%s'\n", namespace);
		return 2;
	}

	/* Finding all the typelib based Requires */
	deps = g_irepository_get_dependencies (NULL, namespace);
	if (deps) {
		for (i=0; deps[i]; i++) {
			g_print ("typelib: %s\n", deps[i]);
		}
		g_strfreev (deps);
	}

	/* Finding the shared library we depend on (if any) */
	shlibs = g_irepository_get_shared_library (NULL, namespace);

	if (shlibs != NULL && shlibs[0] != '\0')
	{
		/* libs is a comma-separated list of libraries */
		gchar **libs = g_strsplit (shlibs, ",", 0);

		for (i = 0; libs[i]; i++)
		{
			g_print ("shlib: %s\n", libs[i]);
		}
	}

	g_typelib_free (typelib);

	return 0;
}
