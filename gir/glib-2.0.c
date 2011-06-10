/************************************************************/
/* THIS FILE IS GENERATED DO NOT EDIT */
/************************************************************/

/**
 * GAllocator:
 *
 * The #GAllocator struct contains private data. and should only be
 * accessed using the following functions.
 */


/**
 * GArray:
 * @data: a pointer to the element data. The data may be moved as elements are added to the #GArray.
 * @len: the number of elements in the #GArray not including the possible terminating zero element.
 *
 * Contains the public fields of an <link linkend="glib-Arrays">Array</link>.
 */


/**
 * GAsyncQueue:
 *
 * The GAsyncQueue struct is an opaque data structure, which represents
 * an asynchronous queue. It should only be accessed through the
 * <function>g_async_queue_*</function> functions.
 */


/**
 * GBaseFinalizeFunc:
 * @g_class: The #GTypeClass structure to finalize.
 *
 * A callback function used by the type system to finalize those portions
 * of a derived types class structure that were setup from the corresponding
 * GBaseInitFunc() function. Class finalization basically works the inverse
 * way in which class intialization is performed.
 * See GClassInitFunc() for a discussion of the class intialization process.
 */


/**
 * GBaseInitFunc:
 * @g_class: The #GTypeClass structure to initialize.
 *
 * A callback function used by the type system to do base initialization
 * of the class structures of derived types. It is called as part of the
 * initialization process of all derived classes and should reallocate
 * or reset all dynamic class members copied over from the parent class.
 * For example, class members (such as strings) that are not sufficiently
 * handled by a plain memory copy of the parent class into the derived class
 * have to be altered. See GClassInitFunc() for a discussion of the class
 * intialization process.
 */


/**
 * GBinding:
 *
 * <structname>GBinding</structname> is an opaque structure whose members
 * cannot be accessed directly.
 *
 * Since: 2.26
 */


/**
 * GBindingFlags:
 * @G_BINDING_DEFAULT: The default binding; if the source property changes, the target property is updated with its value.
 * @G_BINDING_BIDIRECTIONAL: Bidirectional binding; if either the property of the source or the property of the target changes, the other is updated.
 * @G_BINDING_SYNC_CREATE: Synchronize the values of the source and target properties when creating the binding; the direction of the synchronization is always from the source to the target.
 * @G_BINDING_INVERT_BOOLEAN: If the two properties being bound are booleans, setting one to %TRUE will result in the other being set to %FALSE and vice versa. This flag will only work for boolean properties, and cannot be used when passing custom transformation functions to g_object_bind_property_full().
 *
 * Flags to be passed to g_object_bind_property() or
 * g_object_bind_property_full().
 * This enumeration can be extended at later date.
 *
 * Since: 2.26
 */


/**
 * GBindingTransformFunc:
 * @binding: a #GBinding
 * @source_value: the value of the source property
 * @target_value: the value of the target property
 * @user_data: data passed to the transform function
 *
 * A function to be called to transform the source property of @source
 * from @source_value into the target property of @target
 * using @target_value.
 * otherwise
 *
 * Returns: %TRUE if the transformation was successful, and %FALSE
 * Since: 2.26
 */


/**
 * GBookmarkFile:
 *
 * The <structname>GBookmarkFile</structname> struct contains only
 * private data and should not be directly accessed.
 */


/**
 * GBookmarkFileError:
 * @G_BOOKMARK_FILE_ERROR_INVALID_URI: URI was ill-formed
 * @G_BOOKMARK_FILE_ERROR_INVALID_VALUE: a requested field was not found
 * @G_BOOKMARK_FILE_ERROR_APP_NOT_REGISTERED: a requested application did not register a bookmark
 * @G_BOOKMARK_FILE_ERROR_URI_NOT_FOUND: a requested URI was not found
 * @G_BOOKMARK_FILE_ERROR_READ: document was ill formed
 * @G_BOOKMARK_FILE_ERROR_UNKNOWN_ENCODING: the text being parsed was in an unknown encoding
 * @G_BOOKMARK_FILE_ERROR_WRITE: an error occurred while writing
 * @G_BOOKMARK_FILE_ERROR_FILE_NOT_FOUND: requested file was not found
 *
 * Error codes returned by bookmark file parsing.
 */


/**
 * GBoxedCopyFunc:
 * @boxed: The boxed structure to be copied.
 *
 * This function is provided by the user and should produce a copy
 * of the passed in boxed structure.
 *
 * Returns: The newly created copy of the boxed structure.
 */


/**
 * GBoxedFreeFunc:
 * @boxed: The boxed structure to be freed.
 *
 * This function is provided by the user and should free the boxed
 * structure passed.
 */


/**
 * GByteArray:
 * @data: a pointer to the element data. The data may be moved as elements are added to the #GByteArray.
 * @len: the number of elements in the #GByteArray.
 *
 * The <structname>GByteArray</structname> struct allows access to the
 * public fields of a <structname>GByteArray</structname>.
 */


/**
 * GCClosure:
 * @closure: the #GClosure
 * @callback: the callback function
 *
 * A #GCClosure is a specialization of #GClosure for C function callbacks.
 */


/**
 * GCache:
 *
 * The #GCache struct is an opaque data structure containing
 * information about a #GCache. It should only be accessed via the
 * following functions.
 */


/**
 * GCacheDestroyFunc:
 * @value: the #GCache value to destroy.
 *
 * Specifies the type of the @value_destroy_func and @key_destroy_func
 * functions passed to g_cache_new(). The functions are passed a
 * pointer to the #GCache key or #GCache value and should free any
 * memory and other resources associated with it.
 */


/**
 * GCacheDupFunc:
 * @value: the #GCache key to destroy (<emphasis>not</emphasis> a #GCache value as it seems).
 * @Returns: a copy of the #GCache key.
 *
 * Specifies the type of the @key_dup_func function passed to
 * g_cache_new(). The function is passed a key
 * (<emphasis>not</emphasis> a value as the prototype implies) and
 * should return a duplicate of the key.
 */


/**
 * GCacheNewFunc:
 * @key: a #GCache key.
 * @Returns: a new #GCache value corresponding to the key.
 *
 * Specifies the type of the @value_new_func function passed to
 * g_cache_new(). It is passed a #GCache key and should create the
 * value corresponding to the key.
 */


/**
 * GCallback:
 *
 * The type used for callback functions in structure definitions and function
 * signatures. This doesn't mean that all callback functions must take no
 * parameters and return void. The required signature of a callback function
 * is determined by the context in which is used (e.g. the signal to which it
 * is connected). Use G_CALLBACK() to cast the callback function to a #GCallback.
 */


/**
 * GChecksum:
 *
 * An opaque structure representing a checksumming operation.
 * To create a new GChecksum, use g_checksum_new(). To free
 * a GChecksum, use g_checksum_free().
 *
 * Since: 2.16
 */


/**
 * GChecksumType:
 * @G_CHECKSUM_MD5: Use the MD5 hashing algorithm
 * @G_CHECKSUM_SHA1: Use the SHA-1 hashing algorithm
 * @G_CHECKSUM_SHA256: Use the SHA-256 hashing algorithm
 *
 * The hashing algorithm to be used by #GChecksum when performing the
 * digest of some data.
 * Note that the #GChecksumType enumeration may be extended at a later
 * date to include new hashing algorithm types.
 *
 * Since: 2.16
 */


/**
 * GChildWatchFunc:
 * @pid: the process id of the child process
 * @status: Status information about the child process, see waitpid(2) for more information about this field
 * @data: user data passed to g_child_watch_add()
 *
 * The type of functions to be called when a child exists.
 */


/**
 * GClassFinalizeFunc:
 * @g_class: The #GTypeClass structure to finalize.
 * @class_data: The @class_data member supplied via the #GTypeInfo structure.
 *
 * A callback function used by the type system to finalize a class.
 * This function is rarely needed, as dynamically allocated class resources
 * should be handled by GBaseInitFunc() and GBaseFinalizeFunc().
 * Also, specification of a GClassFinalizeFunc() in the #GTypeInfo
 * structure of a static type is invalid, because classes of static types
 * will never be finalized (they are artificially kept alive when their
 * reference count drops to zero).
 */


/**
 * GClassInitFunc:
 * @g_class: The #GTypeClass structure to initialize.
 * @class_data: The @class_data member supplied via the #GTypeInfo structure.
 *
 * A callback function used by the type system to initialize the class
 * of a specific type. This function should initialize all static class
 * members.
 * The initialization process of a class involves:
 * <itemizedlist>
 * <listitem><para>
 * 1 - Copying common members from the parent class over to the
 * derived class structure.
 * </para></listitem>
 * <listitem><para>
 * 2 -  Zero initialization of the remaining members not copied
 * over from the parent class.
 * </para></listitem>
 * <listitem><para>
 * 3 - Invocation of the GBaseInitFunc() initializers of all parent
 * types and the class' type.
 * </para></listitem>
 * <listitem><para>
 * 4 - Invocation of the class' GClassInitFunc() initializer.
 * </para></listitem>
 * </itemizedlist>
 * Since derived classes are partially initialized through a memory copy
 * of the parent class, the general rule is that GBaseInitFunc() and
 * GBaseFinalizeFunc() should take care of necessary reinitialization
 * and release of those class members that were introduced by the type
 * that specified these GBaseInitFunc()/GBaseFinalizeFunc().
 * GClassInitFunc() should only care about initializing static
 * class members, while dynamic class members (such as allocated strings
 * or reference counted resources) are better handled by a GBaseInitFunc()
 * for this type, so proper initialization of the dynamic class members
 * is performed for class initialization of derived types as well.
 * An example may help to correspond the intend of the different class
 * initializers:
 * |[
 * typedef struct {
 * GObjectClass parent_class;
 * gint         static_integer;
 * gchar       *dynamic_string;
 * } TypeAClass;
 * static void
 * type_a_base_class_init (TypeAClass *class)
 * {
 * class->dynamic_string = g_strdup ("some string");
 * }
 * static void
 * type_a_base_class_finalize (TypeAClass *class)
 * {
 * g_free (class->dynamic_string);
 * }
 * static void
 * type_a_class_init (TypeAClass *class)
 * {
 * class->static_integer = 42;
 * }
 * typedef struct {
 * TypeAClass   parent_class;
 * gfloat       static_float;
 * GString     *dynamic_gstring;
 * } TypeBClass;
 * static void
 * type_b_base_class_init (TypeBClass *class)
 * {
 * class->dynamic_gstring = g_string_new ("some other string");
 * }
 * static void
 * type_b_base_class_finalize (TypeBClass *class)
 * {
 * g_string_free (class->dynamic_gstring);
 * }
 * static void
 * type_b_class_init (TypeBClass *class)
 * {
 * class->static_float = 3.14159265358979323846;
 * }
 * ]|
 * Initialization of TypeBClass will first cause initialization of
 * TypeAClass (derived classes reference their parent classes, see
 * g_type_class_ref() on this).
 * Initialization of TypeAClass roughly involves zero-initializing its fields,
 * then calling its GBaseInitFunc() type_a_base_class_init() to allocate
 * its dynamic members (dynamic_string), and finally calling its GClassInitFunc()
 * type_a_class_init() to initialize its static members (static_integer).
 * The first step in the initialization process of TypeBClass is then
 * a plain memory copy of the contents of TypeAClass into TypeBClass and
 * zero-initialization of the remaining fields in TypeBClass.
 * The dynamic members of TypeAClass within TypeBClass now need
 * reinitialization which is performed by calling type_a_base_class_init()
 * with an argument of TypeBClass.
 * After that, the GBaseInitFunc() of TypeBClass, type_b_base_class_init()
 * is called to allocate the dynamic members of TypeBClass (dynamic_gstring),
 * and finally the GClassInitFunc() of TypeBClass, type_b_class_init(),
 * is called to complete the initialization process with the static members
 * (static_float).
 * Corresponding finalization counter parts to the GBaseInitFunc() functions
 * have to be provided to release allocated resources at class finalization
 * time.
 */


/**
 * GClosure:
 * @in_marshal: Indicates whether the closure is currently being invoked with g_closure_invoke()
 * @is_invalid: Indicates whether the closure has been invalidated by g_closure_invalidate()
 *
 * A #GClosure represents a callback supplied by the programmer.
 */


/**
 * GClosureMarshal:
 * @closure: the #GClosure to which the marshaller belongs
 * @return_value: a #GValue to store the return value. May be %NULL if the callback of @closure doesn't return a value.
 * @n_param_values: the length of the @param_values array
 * @param_values: an array of #GValue<!-- -->s holding the arguments on which to invoke the callback of @closure
 * @invocation_hint: the invocation hint given as the last argument to g_closure_invoke()
 * @marshal_data: additional data specified when registering the marshaller, see g_closure_set_marshal() and g_closure_set_meta_marshal()
 *
 * The type used for marshaller functions.
 */


/**
 * GClosureNotify:
 * @data: data specified when registering the notification callback
 * @closure: the #GClosure on which the notification is emitted
 *
 * The type used for the various notification callbacks which can be registered
 * on closures.
 */


/**
 * GCompareDataFunc:
 * @a: a value.
 * @b: a value to compare with.
 * @user_data: user data to pass to comparison function.
 * @Returns: negative value if @a &lt; @b; zero if @a = @b; positive value if @a > @b.
 *
 * Specifies the type of a comparison function used to compare two
 * values.  The function should return a negative integer if the first
 * value comes before the second, 0 if they are equal, or a positive
 * integer if the first value comes after the second.
 */


/**
 * GCompareFunc:
 * @a: a value.
 * @b: a value to compare with.
 * @Returns: negative value if @a &lt; @b; zero if @a = @b; positive value if @a > @b.
 *
 * Specifies the type of a comparison function used to compare two
 * values.  The function should return a negative integer if the first
 * value comes before the second, 0 if they are equal, or a positive
 * integer if the first value comes after the second.
 */


/**
 * GCompletion:
 * @items: list of target items (strings or data structures).
 * @func: function which is called to get the string associated with a target item. It is %NULL if the target items are strings.
 * @prefix: the last prefix passed to g_completion_complete() or g_completion_complete_utf8().
 * @cache: the list of items which begin with @prefix.
 * @strncmp_func: The function to use when comparing strings.  Use g_completion_set_compare() to modify this function.
 *
 * The data structure used for automatic completion.
 */


/**
 * GCompletionFunc:
 * @Param1: the completion item.
 * @Returns: the string corresponding to the item.
 *
 * Specifies the type of the function passed to g_completion_new(). It
 * should return the string corresponding to the given target item.
 * This is used when you use data structures as #GCompletion items.
 */


/**
 * GCompletionStrncmpFunc:
 * @s1: string to compare with @s2.
 * @s2: string to compare with @s1.
 * @n: maximal number of bytes to compare.
 * @Returns: an integer less than, equal to, or greater than zero if the first @n bytes of @s1 is found, respectively, to be less than, to match, or to be greater than the first @n bytes of @s2.
 *
 * Specifies the type of the function passed to
 * g_completion_set_compare(). This is used when you use strings as
 * #GCompletion items.
 */


/**
 * GCond:
 *
 * The #GCond struct is an opaque data structure that represents a
 * condition. Threads can block on a #GCond if they find a certain
 * condition to be false. If other threads change the state of this
 * condition they signal the #GCond, and that causes the waiting
 * threads to be woken up.
 * <example>
 * <title>
 * Using GCond to block a thread until a condition is satisfied
 * </title>
 * <programlisting>
 * GCond* data_cond = NULL; /<!-- -->* Must be initialized somewhere *<!-- -->/
 * GMutex* data_mutex = NULL; /<!-- -->* Must be initialized somewhere *<!-- -->/
 * gpointer current_data = NULL;
 * void
 * push_data (gpointer data)
 * {
 * g_mutex_lock (data_mutex);
 * current_data = data;
 * g_cond_signal (data_cond);
 * g_mutex_unlock (data_mutex);
 * }
 * gpointer
 * pop_data (void)
 * {
 * gpointer data;
 * g_mutex_lock (data_mutex);
 * while (!current_data)
 * g_cond_wait (data_cond, data_mutex);
 * data = current_data;
 * current_data = NULL;
 * g_mutex_unlock (data_mutex);
 * return data;
 * }
 * </programlisting>
 * </example>
 * Whenever a thread calls <function>pop_data()</function> now, it will
 * wait until current_data is non-%NULL, i.e. until some other thread
 * has called <function>push_data()</function>.
 * <note><para>It is important to use the g_cond_wait() and
 * g_cond_timed_wait() functions only inside a loop which checks for the
 * condition to be true.  It is not guaranteed that the waiting thread
 * will find the condition fulfilled after it wakes up, even if the
 * have altered the condition before the waiting thread got the chance
 * to be woken up, even if the condition itself is protected by a
 * #GMutex, like above.</para></note>
 * A #GCond should only be accessed via the following functions.
 * <note><para>All of the <function>g_cond_*</function> functions are
 * actually macros. Apart from taking their addresses, you can however
 * use them as if they were functions.</para></note>
 *
 * Signaling thread left the condition in that state: another thread may
 */


/**
 * GConnectFlags:
 * @G_CONNECT_AFTER: whether the handler should be called before or after the default handler of the signal.
 * @G_CONNECT_SWAPPED: whether the instance and data should be swapped when calling the handler.
 *
 * The connection flags are used to specify the behaviour of a signal's
 * connection.
 */


/**
 * GConvertError:
 * @G_CONVERT_ERROR_NO_CONVERSION: Conversion between the requested character sets is not supported.
 * @G_CONVERT_ERROR_ILLEGAL_SEQUENCE: Invalid byte sequence in conversion input.
 * @G_CONVERT_ERROR_FAILED: Conversion failed for some reason.
 * @G_CONVERT_ERROR_PARTIAL_INPUT: Partial character sequence at end of input.
 * @G_CONVERT_ERROR_BAD_URI: URI is invalid.
 * @G_CONVERT_ERROR_NOT_ABSOLUTE_PATH: Pathname is not an absolute path.
 *
 * Error codes returned by character set conversion routines.
 */


/**
 * GCopyFunc:
 * @src: A pointer to the data which should be copied
 * @data: Additional data
 *
 * A function of this signature is used to copy the node data
 * when doing a deep-copy of a tree.
 *
 * Returns: A pointer to the copy
 * Since: 2.4
 */


/**
 * GData:
 *
 * The #GData struct is an opaque data structure to represent a <link
 * linkend="glib-Keyed-Data-Lists">Keyed Data List</link>. It should
 * only be accessed via the following functions.
 */


/**
 * GDataForeachFunc:
 * @key_id: the #GQuark id to identifying the data element.
 * @data: the data element.
 * @user_data: user data passed to g_dataset_foreach().
 *
 * Specifies the type of function passed to g_dataset_foreach(). It is
 * called with each #GQuark id and associated data element, together
 * with the @user_data parameter supplied to g_dataset_foreach().
 */


/**
 * GDateTime:
 *
 * <structname>GDateTime</structname> is an opaque structure whose members
 * cannot be accessed directly.
 *
 * Since: 2.26
 */


/**
 * GDebugKey:
 * @key: the string
 * @value: the flag
 *
 * Associates a string with a bit flag.
 * Used in g_parse_debug_string().
 */


/**
 * GDestroyNotify:
 * @data: the data element.
 *
 * Specifies the type of function which is called when a data element
 * is destroyed. It is passed the pointer to the data element and
 * should free any memory and resources allocated for it.
 */


/**
 * GEnumClass:
 * @g_type_class: the parent class
 * @minimum: the smallest possible value.
 * @maximum: the largest possible value.
 * @n_values: the number of possible values.
 * @values: an array of #GEnumValue structs describing the individual values.
 *
 * The class of an enumeration type holds information about its
 * possible values.
 */


/**
 * GEnumValue:
 * @value: the enum value
 * @value_name: the name of the value
 * @value_nick: the nickname of the value
 *
 * A structure which contains a single enum value, its name, and its
 * nickname.
 */


/**
 * GEqualFunc:
 * @a: a value.
 * @b: a value to compare with.
 * @Returns: %TRUE if @a = @b; %FALSE otherwise.
 *
 * Specifies the type of a function used to test two values for
 * equality. The function should return %TRUE if both values are equal
 * and %FALSE otherwise.
 */


/**
 * GFlagsClass:
 * @g_type_class: the parent class
 * @mask: a mask covering all possible values.
 * @n_values: the number of possible values.
 * @values: an array of #GFlagsValue structs describing the individual values.
 *
 * The class of a flags type holds information about its
 * possible values.
 */


/**
 * GFlagsValue:
 * @value: the flags value
 * @value_name: the name of the value
 * @value_nick: the nickname of the value
 *
 * A structure which contains a single flags value, its name, and its
 * nickname.
 */


/**
 * GFreeFunc:
 * @data: a data pointer
 *
 * Declares a type of function which takes an arbitrary
 * data pointer argument and has no return value. It is
 * not currently used in GLib or GTK+.
 */


/**
 * GFunc:
 * @data: the element's data.
 * @user_data: user data passed to g_list_foreach() or g_slist_foreach().
 *
 * Specifies the type of functions passed to g_list_foreach() and
 * g_slist_foreach().
 */


/**
 * GHFunc:
 * @key: a key.
 * @value: the value corresponding to the key.
 * @user_data: user data passed to g_hash_table_foreach().
 *
 * Specifies the type of the function passed to g_hash_table_foreach().
 * It is called with each key/value pair, together with the @user_data
 * parameter which is passed to g_hash_table_foreach().
 */


/**
 * GHRFunc:
 * @key: a key.
 * @value: the value associated with the key.
 * @user_data: user data passed to g_hash_table_remove().
 * @Returns: %TRUE if the key/value pair should be removed from the #GHashTable.
 *
 * Specifies the type of the function passed to
 * g_hash_table_foreach_remove(). It is called with each key/value
 * pair, together with the @user_data parameter passed to
 * g_hash_table_foreach_remove(). It should return %TRUE if the
 * key/value pair should be removed from the #GHashTable.
 */


/**
 * GHashFunc:
 * @key: a key.
 * @Returns: the hash value corresponding to the key.
 *
 * Specifies the type of the hash function which is passed to
 * g_hash_table_new() when a #GHashTable is created.
 * The function is passed a key and should return a #guint hash value.
 * The functions g_direct_hash(), g_int_hash() and g_str_hash() provide
 * hash functions which can be used when the key is a #gpointer, #gint,
 * and #gchar* respectively.
 * <!-- FIXME: Need more here. --> The hash values should be evenly
 * distributed over a fairly large range? The modulus is taken with the
 * hash table size (a prime number) to find the 'bucket' to place each
 * key into. The function should also be very fast, since it is called
 * for each key lookup.
 */


/**
 * GHashTable:
 *
 * The #GHashTable struct is an opaque data structure to represent a
 * <link linkend="glib-Hash-Tables">Hash Table</link>. It should only be
 * accessed via the following functions.
 */


/**
 * GHashTableIter:
 *
 * A GHashTableIter structure represents an iterator that can be used
 * to iterate over the elements of a #GHashTable. GHashTableIter
 * structures are typically allocated on the stack and then initialized
 * with g_hash_table_iter_init().
 */


/**
 * GIOChannel:
 *
 * A data structure representing an IO Channel. The fields should be
 * considered private and should only be accessed with the following
 * functions.
 */


/**
 * GIOChannelError:
 * @G_IO_CHANNEL_ERROR_FBIG: File too large.
 * @G_IO_CHANNEL_ERROR_INVAL: Invalid argument.
 * @G_IO_CHANNEL_ERROR_IO: IO error.
 * @G_IO_CHANNEL_ERROR_ISDIR: File is a directory.
 * @G_IO_CHANNEL_ERROR_NOSPC: No space left on device.
 * @G_IO_CHANNEL_ERROR_NXIO: No such device or address.
 * @G_IO_CHANNEL_ERROR_OVERFLOW: Value too large for defined datatype.
 * @G_IO_CHANNEL_ERROR_PIPE: Broken pipe.
 * @G_IO_CHANNEL_ERROR_FAILED: Some other error.
 *
 * Error codes returned by #GIOChannel operations.
 */


/**
 * GIOCondition:
 * @G_IO_IN: There is data to read.
 * @G_IO_OUT: Data can be written (without blocking).
 * @G_IO_PRI: There is urgent data to read.
 * @G_IO_ERR: Error condition.
 * @G_IO_HUP: Hung up (the connection has been broken, usually for pipes and sockets).
 * @G_IO_NVAL: Invalid request. The file descriptor is not open.
 *
 * A bitwise combination representing a condition to watch for on an
 * event source.
 */


/**
 * GIOError:
 * @G_IO_ERROR_NONE: no error
 * @G_IO_ERROR_AGAIN: an EAGAIN error occurred
 * @G_IO_ERROR_INVAL: an EINVAL error occurred
 * @G_IO_ERROR_UNKNOWN: another error occurred
 *
 * #GIOError is only used by the deprecated functions
 * g_io_channel_read(), g_io_channel_write(), and g_io_channel_seek().
 */


/**
 * GIOFlags:
 * @G_IO_FLAG_APPEND: turns on append mode, corresponds to %O_APPEND (see the documentation of the UNIX open() syscall).
 * @G_IO_FLAG_NONBLOCK: turns on nonblocking mode, corresponds to %O_NONBLOCK/%O_NDELAY (see the documentation of the UNIX open() syscall).
 * @G_IO_FLAG_IS_READABLE: indicates that the io channel is readable. This flag cannot be changed.
 * @G_IO_FLAG_IS_WRITEABLE: indicates that the io channel is writable. This flag cannot be changed.
 * @G_IO_FLAG_IS_SEEKABLE: indicates that the io channel is seekable, i.e. that g_io_channel_seek_position() can be used on it.  This flag cannot be changed.
 * @G_IO_FLAG_MASK: the mask that specifies all the valid flags.
 * @G_IO_FLAG_GET_MASK: the mask of the flags that are returned from g_io_channel_get_flags().
 * @G_IO_FLAG_SET_MASK: the mask of the flags that the user can modify with g_io_channel_set_flags().
 *
 * Specifies properties of a #GIOChannel. Some of the flags can only be
 * read with g_io_channel_get_flags(), but not changed with
 * g_io_channel_set_flags().
 */


/**
 * GIOFunc:
 * @source: the #GIOChannel event source
 * @condition: the condition which has been satisfied
 * @data: user data set in g_io_add_watch() or g_io_add_watch_full()
 * @Returns: the function should return %FALSE if the event source should be removed
 *
 * Specifies the type of function passed to g_io_add_watch() or
 * g_io_add_watch_full(), which is called when the requested condition
 * on a #GIOChannel is satisfied.
 */


/**
 * GIOFuncs:
 * @io_read: reads raw bytes from the channel.  This is called from various functions such as g_io_channel_read_chars() to read raw bytes from the channel.  Encoding and buffering issues are dealt with at a higher level.
 * @io_write: writes raw bytes to the channel.  This is called from various functions such as g_io_channel_write_chars() to write raw bytes to the channel.  Encoding and buffering issues are dealt with at a higher level.
 * @io_seek: (optional) seeks the channel.  This is called from g_io_channel_seek() on channels that support it.
 * @io_close: closes the channel.  This is called from g_io_channel_close() after flushing the buffers.
 * @io_create_watch: creates a watch on the channel.  This call corresponds directly to g_io_create_watch().
 * @io_free: called from g_io_channel_unref() when the channel needs to be freed.  This function must free the memory associated with the channel, including freeing the #GIOChannel structure itself.  The channel buffers have been flushed and possibly @io_close has been called by the time this function is called.
 * @io_set_flags: sets the #GIOFlags on the channel.  This is called from g_io_channel_set_flags() with all flags except for %G_IO_FLAG_APPEND and %G_IO_FLAG_NONBLOCK masked out.
 * @io_get_flags: gets the #GIOFlags for the channel.  This function need only return the %G_IO_FLAG_APPEND and %G_IO_FLAG_NONBLOCK flags; g_io_channel_get_flags() automatically adds the others as appropriate.
 *
 * A table of functions used to handle different types of #GIOChannel
 * in a generic way.
 */


/**
 * GIOStatus:
 * @G_IO_STATUS_ERROR: An error occurred.
 * @G_IO_STATUS_NORMAL: Success.
 * @G_IO_STATUS_EOF: End of file.
 * @G_IO_STATUS_AGAIN: Resource temporarily unavailable.
 *
 * Stati returned by most of the #GIOFuncs functions.
 */


/**
 * GIconv:
 *
 * The <structname>GIConv</structname> struct wraps an
 * iconv() conversion descriptor. It contains private data
 * and should only be accessed using the following functions.
 */


/**
 * GInitiallyUnowned:
 *
 * All the fields in the <structname>GInitiallyUnowned</structname> structure
 * are private to the #GInitiallyUnowned implementation and should never be
 * accessed directly.
 */


/**
 * GInitiallyUnownedClass:
 *
 * The class structure for the <structname>GInitiallyUnowned</structname> type.
 */


/**
 * GInstanceInitFunc:
 * @instance: The instance to initialize.
 * @g_class: The class of the type the instance is created for.
 *
 * A callback function used by the type system to initialize a new
 * instance of a type. This function initializes all instance members and
 * allocates any resources required by it.
 * Initialization of a derived instance involves calling all its parent
 * types instance initializers, so the class member of the instance
 * is altered during its initialization to always point to the class that
 * belongs to the type the current initializer was introduced for.
 */


/**
 * GInterfaceFinalizeFunc:
 * @g_iface: The interface structure to finalize.
 * @iface_data: The @interface_data supplied via the #GInterfaceInfo structure.
 *
 * A callback function used by the type system to finalize an interface.
 * This function should destroy any internal data and release any resources
 * allocated by the corresponding GInterfaceInitFunc() function.
 */


/**
 * GInterfaceInfo:
 * @interface_init: location of the interface initialization function
 * @interface_finalize: location of the interface finalization function
 * @interface_data: user-supplied data passed to the interface init/finalize functions
 *
 * A structure that provides information to the type system which is
 * used specifically for managing interface types.
 */


/**
 * GInterfaceInitFunc:
 * @g_iface: The interface structure to initialize.
 * @iface_data: The @interface_data supplied via the #GInterfaceInfo structure.
 *
 * A callback function used by the type system to initialize a new
 * interface.  This function should initialize all internal data and
 * allocate any resources required by the interface.
 */


/**
 * GList:
 * @data: holds the element's data, which can be a pointer to any kind of data, or any integer value using the <link linkend="glib-Type-Conversion-Macros">Type Conversion Macros</link>.
 * @next: contains the link to the next element in the list.
 * @prev: contains the link to the previous element in the list.
 *
 * The #GList struct is used for each element in a doubly-linked list.
 */


/**
 * GMainContext:
 *
 * The <structname>GMainContext</structname> struct is an opaque data
 * type representing a set of sources to be handled in a main loop.
 */


/**
 * GMainLoop:
 *
 * The <structname>GMainLoop</structname> struct is an opaque data type
 * representing the main event loop of a GLib or GTK+ application.
 */


/**
 * GMarkupCollectType:
 * @G_MARKUP_COLLECT_INVALID: used to terminate the list of attributes to collect
 * @G_MARKUP_COLLECT_STRING: collect the string pointer directly from the attribute_values[] array. Expects a parameter of type (const char **). If %G_MARKUP_COLLECT_OPTIONAL is specified and the attribute isn't present then the pointer will be set to %NULL
 * @G_MARKUP_COLLECT_STRDUP: as with %G_MARKUP_COLLECT_STRING, but expects a parameter of type (char **) and g_strdup()s the returned pointer. The pointer must be freed with g_free()
 * @G_MARKUP_COLLECT_BOOLEAN: expects a parameter of type (gboolean *) and parses the attribute value as a boolean. Sets %FALSE if the attribute isn't present. Valid boolean values consist of (case-insensitive) "false", "f", "no", "n", "0" and "true", "t", "yes", "y", "1"
 * @G_MARKUP_COLLECT_TRISTATE: as with %G_MARKUP_COLLECT_BOOLEAN, but in the case of a missing attribute a value is set that compares equal to neither %FALSE nor %TRUE G_MARKUP_COLLECT_OPTIONAL is implied
 * @G_MARKUP_COLLECT_OPTIONAL: can be bitwise ORed with the other fields. If present, allows the attribute not to appear. A default value is set depending on what value type is used
 *
 * A mixed enumerated type and flags field. You must specify one type
 * (string, strdup, boolean, tristate).  Additionally, you may  optionally
 * bitwise OR the type with the flag %G_MARKUP_COLLECT_OPTIONAL.
 * It is likely that this enum will be extended in the future to
 * support other types.
 */


/**
 * GMarkupError:
 * @G_MARKUP_ERROR_BAD_UTF8: text being parsed was not valid UTF-8
 * @G_MARKUP_ERROR_EMPTY: document contained nothing, or only whitespace
 * @G_MARKUP_ERROR_PARSE: document was ill-formed
 * @G_MARKUP_ERROR_UNKNOWN_ELEMENT: error should be set by #GMarkupParser functions; element wasn't known
 * @G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE: error should be set by #GMarkupParser functions; attribute wasn't known
 * @G_MARKUP_ERROR_INVALID_CONTENT: error should be set by #GMarkupParser functions; content was invalid
 * @G_MARKUP_ERROR_MISSING_ATTRIBUTE: error should be set by #GMarkupParser functions; a required attribute was missing
 *
 * Error codes returned by markup parsing.
 */


/**
 * GMarkupParseContext:
 *
 * A parse context is used to parse a stream of bytes that
 * you expect to contain marked-up text.
 * See g_markup_parse_context_new(), #GMarkupParser, and so
 * on for more details.
 */


/**
 * GMarkupParseFlags:
 * @G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG: flag you should not use
 * @G_MARKUP_TREAT_CDATA_AS_TEXT: When this flag is set, CDATA marked sections are not passed literally to the @passthrough function of the parser. Instead, the content of the section (without the <literal>&lt;![CDATA[</literal> and <literal>]]&gt;</literal>) is passed to the @text function. This flag was added in GLib 2.12
 * @G_MARKUP_PREFIX_ERROR_POSITION: Normally errors caught by GMarkup itself have line/column information prefixed to them to let the caller know the location of the error. When this flag is set the location information is also prefixed to errors generated by the #GMarkupParser implementation functions
 *
 * Flags that affect the behaviour of the parser.
 */


/**
 * GMarkupParser:
 * @start_element: Callback to invoke when the opening tag of an element is seen.
 * @end_element: Callback to invoke when the closing tag of an element is seen. Note that this is also called for empty tags like <literal>&lt;empty/&gt;</literal>.
 * @text: Callback to invoke when some text is seen (text is always inside an element). Note that the text of an element may be spread over multiple calls of this function. If the %G_MARKUP_TREAT_CDATA_AS_TEXT flag is set, this function is also called for the content of CDATA marked sections.
 * @passthrough: Callback to invoke for comments, processing instructions and doctype declarations; if you're re-writing the parsed document, write the passthrough text back out in the same position. If the %G_MARKUP_TREAT_CDATA_AS_TEXT flag is not set, this function is also called for CDATA marked sections.
 * @error: Callback to invoke when an error occurs.
 *
 * Any of the fields in #GMarkupParser can be %NULL, in which case they
 * will be ignored. Except for the @error function, any of these callbacks
 * can set an error; in particular the %G_MARKUP_ERROR_UNKNOWN_ELEMENT,
 * %G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE, and %G_MARKUP_ERROR_INVALID_CONTENT
 * errors are intended to be set from these callbacks. If you set an error
 * from a callback, g_markup_parse_context_parse() will report that error
 * back to its caller.
 */


/**
 * GMemChunk:
 *
 * The #GMemChunk struct is an opaque data structure representing a
 * memory chunk. It should be accessed only through the use of the
 * following functions.
 */


/**
 * GMemVTable:
 * @malloc: function to use for allocating memory.
 * @realloc: function to use for reallocating memory.
 * @free: function to use to free memory.
 * @calloc: function to use for allocating zero-filled memory.
 * @try_malloc: function to use for allocating memory without a default error handler.
 * @try_realloc: function to use for reallocating memory without a default error handler.
 *
 * A set of functions used to perform memory allocation. The same #GMemVTable must
 * be used for all allocations in the same program; a call to g_mem_set_vtable(),
 * if it exists, should be prior to any use of GLib.
 */


/**
 * GMutex:
 *
 * The #GMutex struct is an opaque data structure to represent a mutex
 * (mutual exclusion). It can be used to protect data against shared
 * access. Take for example the following function:
 * <example>
 * <title>A function which will not work in a threaded environment</title>
 * <programlisting>
 * int
 * give_me_next_number (void)
 * {
 * static int current_number = 0;
 * /<!-- -->* now do a very complicated calculation to calculate the new
 * * number, this might for example be a random number generator
 * *<!-- -->/
 * current_number = calc_next_number (current_number);
 * return current_number;
 * }
 * </programlisting>
 * </example>
 * It is easy to see that this won't work in a multi-threaded
 * application. There current_number must be protected against shared
 * access. A first naive implementation would be:
 * <example>
 * <title>The wrong way to write a thread-safe function</title>
 * <programlisting>
 * int
 * give_me_next_number (void)
 * {
 * static int current_number = 0;
 * int ret_val;
 * static GMutex * mutex = NULL;
 * if (!mutex) mutex = g_mutex_new (<!-- -->);
 * g_mutex_lock (mutex);
 * ret_val = current_number = calc_next_number (current_number);
 * g_mutex_unlock (mutex);
 * return ret_val;
 * }
 * </programlisting>
 * </example>
 * This looks like it would work, but there is a race condition while
 * constructing the mutex and this code cannot work reliable. Please do
 * not use such constructs in your own programs! One working solution
 * is:
 * <example>
 * <title>A correct thread-safe function</title>
 * <programlisting>
 * static GMutex *give_me_next_number_mutex = NULL;
 * /<!-- -->* this function must be called before any call to
 * * give_me_next_number(<!-- -->)
 * *
 * * it must be called exactly once.
 * *<!-- -->/
 * void
 * init_give_me_next_number (void)
 * {
 * g_assert (give_me_next_number_mutex == NULL);
 * give_me_next_number_mutex = g_mutex_new (<!-- -->);
 * }
 * int
 * give_me_next_number (void)
 * {
 * static int current_number = 0;
 * int ret_val;
 * g_mutex_lock (give_me_next_number_mutex);
 * ret_val = current_number = calc_next_number (current_number);
 * g_mutex_unlock (give_me_next_number_mutex);
 * return ret_val;
 * }
 * </programlisting>
 * </example>
 * #GStaticMutex provides a simpler and safer way of doing this.
 * If you want to use a mutex, and your code should also work without
 * calling g_thread_init() first, then you cannot use a #GMutex, as
 * g_mutex_new() requires that the thread system be initialized. Use a
 * #GStaticMutex instead.
 * A #GMutex should only be accessed via the following functions.
 * <note><para>All of the <function>g_mutex_*</function> functions are
 * actually macros. Apart from taking their addresses, you can however
 * use them as if they were functions.</para></note>
 */


/**
 * GNode:
 * @data: contains the actual data of the node.
 * @next: points to the node's next sibling (a sibling is another #GNode with the same parent).
 * @prev: points to the node's previous sibling.
 * @parent: points to the parent of the #GNode, or is %NULL if the #GNode is the root of the tree.
 * @children: points to the first child of the #GNode.  The other children are accessed by using the @next pointer of each child.
 *
 * The #GNode struct represents one node in a
 * <link linkend="glib-N-ary-Trees">N-ary Tree</link>. fields
 */


/**
 * GNodeForeachFunc:
 * @node: a #GNode.
 * @data: user data passed to g_node_children_foreach().
 *
 * Specifies the type of function passed to g_node_children_foreach().
 * The function is called with each child node, together with the user
 * data passed to g_node_children_foreach().
 */


/**
 * GNodeTraverseFunc:
 * @node: a #GNode.
 * @data: user data passed to g_node_traverse().
 * @Returns: %TRUE to stop the traversal.
 *
 * Specifies the type of function passed to g_node_traverse(). The
 * function is called with each of the nodes visited, together with the
 * user data passed to g_node_traverse(). If the function returns
 * %TRUE, then the traversal is stopped.
 */


/**
 * GObject:
 *
 * All the fields in the <structname>GObject</structname> structure are private
 * to the #GObject implementation and should never be accessed directly.
 */


/**
 * GObjectClass:
 * @g_type_class: the parent class
 * @constructor: the @constructor function is called by g_object_new () to complete the object initialization after all the construction properties are set. The first thing a @constructor implementation must do is chain up to the needed, e.g. to handle construct properties, or to implement singletons.
 * @set_property: the generic setter for all properties of this type. Should be overridden for every type with properties. Implementations of @set_property don't need to emit property change notification explicitly, this is handled by the type system.
 * @get_property: the generic getter for all properties of this type. Should be overridden for every type with properties.
 * @dispose: the @dispose function is supposed to drop all references to other objects, but keep the instance otherwise intact, so that client method invocations still work. It may be run multiple times (due to reference loops). Before returning, @dispose should chain up to the @dispose method of the parent class.
 * @finalize: instance finalization function, should finish the finalization of the instance begun in @dispose and chain up to the @finalize method of the parent class.
 * @dispatch_properties_changed: emits property change notification for a bunch of properties. Overriding @dispatch_properties_changed should be rarely needed.
 * @notify: the class closure for the notify signal
 * @constructed: the @constructed function is called by g_object_new() as the final step of the object creation process.  At the point of the call, all construction properties have been set on the object.  The purpose of this call is to allow for object initialisation steps that can only be performed after construction properties have been set.  @constructed implementors should chain up to the @constructed call of their parent class to allow it to complete its initialisation.
 *
 * The class structure for the <structname>GObject</structname> type.
 * <example>
 * <title>Implementing singletons using a constructor</title>
 * <programlisting>
 * static MySingleton *the_singleton = NULL;
 * static GObject*
 * my_singleton_constructor (GType                  type,
 * guint                  n_construct_params,
 * GObjectConstructParam *construct_params)
 * {
 * GObject *object;
 * if (!the_singleton)
 * {
 * object = G_OBJECT_CLASS (parent_class)->constructor (type,
 * n_construct_params,
 * construct_params);
 * the_singleton = MY_SINGLETON (object);
 * }
 * else
 * object = g_object_ref (G_OBJECT (the_singleton));
 * return object;
 * }
 * </programlisting></example>
 */


/**
 * GObjectConstructParam:
 * @pspec: the #GParamSpec of the construct parameter
 * @value: the value to set the parameter to
 *
 * The <structname>GObjectConstructParam</structname> struct is an auxiliary
 * structure used to hand #GParamSpec/#GValue pairs to the @constructor of
 * a #GObjectClass.
 */


/**
 * GObjectFinalizeFunc:
 * @object: the #GObject being finalized
 *
 * The type of the @finalize function of #GObjectClass.
 */


/**
 * GObjectGetPropertyFunc:
 * @object: a #GObject
 * @property_id: the numeric id under which the property was registered with g_object_class_install_property().
 * @value: a #GValue to return the property value in
 * @pspec: the #GParamSpec describing the property
 *
 * The type of the @get_property function of #GObjectClass.
 */


/**
 * GObjectSetPropertyFunc:
 * @object: a #GObject
 * @property_id: the numeric id under which the property was registered with g_object_class_install_property().
 * @value: the new value for the property
 * @pspec: the #GParamSpec describing the property
 *
 * The type of the @set_property function of #GObjectClass.
 */


/**
 * GOnce:
 * @status: the status of the #GOnce
 * @retval: the value returned by the call to the function, if @status is %G_ONCE_STATUS_READY
 *
 * A #GOnce struct controls a one-time initialization function. Any
 * one-time initialization function must have its own unique #GOnce
 * struct.
 *
 * Since: 2.4
 */


/**
 * GOnceStatus:
 * @G_ONCE_STATUS_NOTCALLED: the function has not been called yet.
 * @G_ONCE_STATUS_PROGRESS: the function call is currently in progress.
 * @G_ONCE_STATUS_READY: the function has been called.
 *
 * The possible statuses of a one-time initialization function
 * controlled by a #GOnce struct.
 *
 * Since: 2.4
 */


/**
 * GOptionArg:
 * @G_OPTION_ARG_NONE: No extra argument. This is useful for simple flags.
 * @G_OPTION_ARG_STRING: The option takes a string argument.
 * @G_OPTION_ARG_INT: The option takes an integer argument.
 * @G_OPTION_ARG_CALLBACK: The option provides a callback to parse the extra argument.
 * @G_OPTION_ARG_FILENAME: The option takes a filename as argument.
 * @G_OPTION_ARG_STRING_ARRAY: The option takes a string argument, multiple uses of the option are collected into an array of strings.
 * @G_OPTION_ARG_FILENAME_ARRAY: The option takes a filename as argument, multiple uses of the option are collected into an array of strings.
 * @G_OPTION_ARG_DOUBLE: The option takes a double argument. The argument can be formatted either for the user's locale or for the "C" locale. Since 2.12
 * @G_OPTION_ARG_INT64: The option takes a 64-bit integer. Like %G_OPTION_ARG_INT but for larger numbers. The number can be in decimal base, or in hexadecimal (when prefixed with <literal>0x</literal>, for example, <literal>0xffffffff</literal>). Since 2.12
 *
 * The #GOptionArg enum values determine which type of extra argument the
 * options expect to find. If an option expects an extra argument, it
 * can be specified in several ways; with a short option:
 * <option>-x arg</option>, with a long option: <option>--name arg</option>
 *
 * Or combined in a single argument: <option>--name=arg</option>.
 */


/**
 * GOptionArgFunc:
 * @option_name: The name of the option being parsed. This will be either a single dash followed by a single letter (for a short name) or two dashes followed by a long option name.
 * @value: The value to be parsed.
 * @data: User data added to the #GOptionGroup containing the option when it was created with g_option_group_new()
 * @error: A return location for errors. The error code %G_OPTION_ERROR_FAILED is intended to be used for errors in #GOptionArgFunc callbacks.
 *
 * The type of function to be passed as callback for %G_OPTION_ARG_CALLBACK
 * options.
 * occurred, in which case @error should be set with g_set_error()
 *
 * Returns: %TRUE if the option was successfully parsed, %FALSE if an error
 */


/**
 * GOptionContext:
 *
 * A <structname>GOptionContext</structname> struct defines which options
 * are accepted by the commandline option parser. The struct has only private
 * fields and should not be directly accessed.
 */


/**
 * GOptionEntry:
 * @long_name: The long name of an option can be used to specify it in a commandline as --<replaceable>long_name</replaceable>. Every option must have a long name. To resolve conflicts if multiple option groups contain the same long name, it is also possible to specify the option as --<replaceable>groupname</replaceable>-<replaceable>long_name</replaceable>.
 * @short_name: If an option has a short name, it can be specified -<replaceable>short_name</replaceable> in a commandline. @short_name must be a printable ASCII character different from '-', or zero if the option has no short name.
 * @flags: Flags from #GOptionFlags.
 * @arg: The type of the option, as a #GOptionArg.
 * @arg_data: If the @arg type is %G_OPTION_ARG_CALLBACK, then @arg_data must point to a #GOptionArgFunc callback function, which will be called to handle the extra argument. Otherwise, @arg_data is a pointer to a location to store the value, the required type of the location depends on the @arg type: <variablelist> <varlistentry> <term>%G_OPTION_ARG_NONE</term> <listitem><para>%gboolean</para></listitem> </varlistentry> <varlistentry> <term>%G_OPTION_ARG_STRING</term> <listitem><para>%gchar*</para></listitem> </varlistentry> <varlistentry> <term>%G_OPTION_ARG_INT</term> <listitem><para>%gint</para></listitem> </varlistentry> <varlistentry> <term>%G_OPTION_ARG_FILENAME</term> <listitem><para>%gchar*</para></listitem> </varlistentry> <varlistentry> <term>%G_OPTION_ARG_STRING_ARRAY</term> <listitem><para>%gchar**</para></listitem> </varlistentry> <varlistentry> <term>%G_OPTION_ARG_FILENAME_ARRAY</term> <listitem><para>%gchar**</para></listitem> </varlistentry> <varlistentry> <term>%G_OPTION_ARG_DOUBLE</term> <listitem><para>%gdouble</para></listitem> </varlistentry> </variablelist> If @arg type is %G_OPTION_ARG_STRING or %G_OPTION_ARG_FILENAME the location will contain a newly allocated string if the option was given. That string needs to be freed by the callee using g_free(). Likewise if @arg type is %G_OPTION_ARG_STRING_ARRAY or %G_OPTION_ARG_FILENAME_ARRAY, the data should be freed using g_strfreev().
 * @description: the description for the option in <option>--help</option> output. The @description is translated using the @translate_func of the group, see g_option_group_set_translation_domain().
 * @arg_description: The placeholder to use for the extra argument parsed by the option in <option>--help</option> output. The @arg_description is translated using the @translate_func of the group, see g_option_group_set_translation_domain().
 *
 * A <structname>GOptionEntry</structname> defines a single option.
 * To have an effect, they must be added to a #GOptionGroup with
 * g_option_context_add_main_entries() or g_option_group_add_entries().
 */


/**
 * GOptionError:
 * @G_OPTION_ERROR_UNKNOWN_OPTION: An option was not known to the parser. This error will only be reported, if the parser hasn't been instructed to ignore unknown options, see g_option_context_set_ignore_unknown_options().
 * @G_OPTION_ERROR_BAD_VALUE: A value couldn't be parsed.
 * @G_OPTION_ERROR_FAILED: A #GOptionArgFunc callback failed.
 *
 * Error codes returned by option parsing.
 */


/**
 * GOptionErrorFunc:
 * @context: The active #GOptionContext
 * @group: The group to which the function belongs
 * @data: User data added to the #GOptionGroup containing the option when it was created with g_option_group_new()
 * @error: The #GError containing details about the parse error
 *
 * The type of function to be used as callback when a parse error occurs.
 */


/**
 * GOptionFlags:
 * @G_OPTION_FLAG_HIDDEN: The option doesn't appear in <option>--help</option> output.
 * @G_OPTION_FLAG_IN_MAIN: The option appears in the main section of the <option>--help</option> output, even if it is defined in a group.
 * @G_OPTION_FLAG_REVERSE: For options of the %G_OPTION_ARG_NONE kind, this flag indicates that the sense of the option is reversed.
 * @G_OPTION_FLAG_NO_ARG: For options of the %G_OPTION_ARG_CALLBACK kind, this flag indicates that the callback does not take any argument (like a %G_OPTION_ARG_NONE option). Since 2.8
 * @G_OPTION_FLAG_FILENAME: For options of the %G_OPTION_ARG_CALLBACK kind, this flag indicates that the argument should be passed to the callback in the GLib filename encoding rather than UTF-8. Since 2.8
 * @G_OPTION_FLAG_OPTIONAL_ARG: For options of the %G_OPTION_ARG_CALLBACK kind, this flag indicates that the argument supply is optional. If no argument is given then data of %GOptionParseFunc will be set to NULL. Since 2.8
 * @G_OPTION_FLAG_NOALIAS: This flag turns off the automatic conflict resolution which prefixes long option names with <literal>groupname-</literal> if there is a conflict. This option should only be used in situations where aliasing is necessary to model some legacy commandline interface. It is not safe to use this option, unless all option groups are under your direct control. Since 2.8.
 *
 * Flags which modify individual options.
 */


/**
 * GOptionGroup:
 *
 * A <structname>GOptionGroup</structname> struct defines the options in a single
 * group. The struct has only private fields and should not be directly accessed.
 * All options in a group share the same translation function. Libraries which
 * need to parse commandline options are expected to provide a function for
 * getting a <structname>GOptionGroup</structname> holding their options, which
 * the application can then add to its #GOptionContext.
 */


/**
 * GOptionParseFunc:
 * @context: The active #GOptionContext
 * @group: The group to which the function belongs
 * @data: User data added to the #GOptionGroup containing the option when it was created with g_option_group_new()
 * @error: A return location for error details
 *
 * The type of function that can be called before and after parsing.
 * occurred, in which case @error should be set with g_set_error()
 *
 * Returns: %TRUE if the function completed successfully, %FALSE if an error
 */


/**
 * GParamFlags:
 * @G_PARAM_READABLE: the parameter is readable
 * @G_PARAM_WRITABLE: the parameter is writable
 * @G_PARAM_CONSTRUCT: the parameter will be set upon object construction
 * @G_PARAM_CONSTRUCT_ONLY: the parameter will only be set upon object construction
 * @G_PARAM_LAX_VALIDATION: upon parameter conversion (see g_param_value_convert()) strict validation is not required
 * @G_PARAM_STATIC_NAME: the string used as name when constructing the parameter is guaranteed to remain valid and unmodified for the lifetime of the parameter. Since 2.8
 * @G_PARAM_STATIC_NICK: the string used as nick when constructing the parameter is guaranteed to remain valid and unmmodified for the lifetime of the parameter. Since 2.8
 * @G_PARAM_STATIC_BLURB: the string used as blurb when constructing the parameter is guaranteed to remain valid and unmodified for the lifetime of the parameter. Since 2.8
 * @G_PARAM_PRIVATE: internal
 * @G_PARAM_DEPRECATED: the parameter is deprecated and will be removed in a future version. A warning will be generated if it is used while running with G_ENABLE_DIAGNOSTIC=1. Since: 2.26
 *
 * Through the #GParamFlags flag values, certain aspects of parameters
 * can be configured.
 */


/**
 * GParamSpec:
 * @g_type_instance: private #GTypeInstance portion
 * @name: name of this parameter
 * @flags: #GParamFlags flags for this parameter
 * @value_type: the #GValue type for this parameter
 * @owner_type: #GType type that uses (introduces) this parameter
 *
 * All other fields of the <structname>GParamSpec</structname> struct are private and
 * should not be used directly.
 */


/**
 * GParamSpecBoolean:
 * @parent_instance: private #GParamSpec portion
 * @default_value: default value for the property specified
 *
 * A #GParamSpec derived structure that contains the meta data for boolean properties.
 */


/**
 * GParamSpecBoxed:
 * @parent_instance: private #GParamSpec portion
 *
 * A #GParamSpec derived structure that contains the meta data for boxed properties.
 */


/**
 * GParamSpecChar:
 * @parent_instance: private #GParamSpec portion
 * @minimum: minimum value for the property specified
 * @maximum: maximum value for the property specified
 * @default_value: default value for the property specified
 *
 * A #GParamSpec derived structure that contains the meta data for character properties.
 */


/**
 * GParamSpecClass:
 * @g_type_class: the parent class
 * @value_type: the #GValue type for this parameter
 * @finalize: The instance finalization function (optional), should chain up to the finalize method of the parent class.
 * @value_set_default: Resets a @value to the default value for this type (recommended, the default is g_value_reset()), see g_param_value_set_default().
 * @value_validate: Ensures that the contents of @value comply with the specifications set out by this type (optional), see g_param_value_set_validate().
 * @values_cmp: Compares @value1 with @value2 according to this type (recommended, the default is memcmp()), see g_param_values_cmp().
 *
 * The class structure for the <structname>GParamSpec</structname> type.
 * Normally, <structname>GParamSpec</structname> classes are filled by
 * g_param_type_register_static().
 */


/**
 * GParamSpecDouble:
 * @parent_instance: private #GParamSpec portion
 * @minimum: minimum value for the property specified
 * @maximum: maximum value for the property specified
 * @default_value: default value for the property specified
 * @epsilon: values closer than @epsilon will be considered identical by g_param_values_cmp(); the default value is 1e-90.
 *
 * A #GParamSpec derived structure that contains the meta data for double properties.
 */


/**
 * GParamSpecEnum:
 * @parent_instance: private #GParamSpec portion
 * @enum_class: the #GEnumClass for the enum
 * @default_value: default value for the property specified
 *
 * A #GParamSpec derived structure that contains the meta data for enum
 * properties.
 */


/**
 * GParamSpecFlags:
 * @parent_instance: private #GParamSpec portion
 * @flags_class: the #GFlagsClass for the flags
 * @default_value: default value for the property specified
 *
 * A #GParamSpec derived structure that contains the meta data for flags
 * properties.
 */


/**
 * GParamSpecFloat:
 * @parent_instance: private #GParamSpec portion
 * @minimum: minimum value for the property specified
 * @maximum: maximum value for the property specified
 * @default_value: default value for the property specified
 * @epsilon: values closer than @epsilon will be considered identical by g_param_values_cmp(); the default value is 1e-30.
 *
 * A #GParamSpec derived structure that contains the meta data for float properties.
 */


/**
 * GParamSpecGType:
 * @parent_instance: private #GParamSpec portion
 * @is_a_type: a #GType whose subtypes can occur as values
 *
 * A #GParamSpec derived structure that contains the meta data for #GType properties.
 *
 * Since: 2.10
 */


/**
 * GParamSpecInt:
 * @parent_instance: private #GParamSpec portion
 * @minimum: minimum value for the property specified
 * @maximum: maximum value for the property specified
 * @default_value: default value for the property specified
 *
 * A #GParamSpec derived structure that contains the meta data for integer properties.
 */


/**
 * GParamSpecInt64:
 * @parent_instance: private #GParamSpec portion
 * @minimum: minimum value for the property specified
 * @maximum: maximum value for the property specified
 * @default_value: default value for the property specified
 *
 * A #GParamSpec derived structure that contains the meta data for 64bit integer properties.
 */


/**
 * GParamSpecLong:
 * @parent_instance: private #GParamSpec portion
 * @minimum: minimum value for the property specified
 * @maximum: maximum value for the property specified
 * @default_value: default value for the property specified
 *
 * A #GParamSpec derived structure that contains the meta data for long integer properties.
 */


/**
 * GParamSpecObject:
 * @parent_instance: private #GParamSpec portion
 *
 * A #GParamSpec derived structure that contains the meta data for object properties.
 */


/**
 * GParamSpecOverride:
 *
 * This is a type of #GParamSpec type that simply redirects operations to
 * another paramspec.  All operations other than getting or
 * setting the value are redirected, including accessing the nick and
 * blurb, validating a value, and so forth. See
 * g_param_spec_get_redirect_target() for retrieving the overidden
 * property. #GParamSpecOverride is used in implementing
 * g_object_class_override_property(), and will not be directly useful
 * unless you are implementing a new base type similar to GObject.
 *
 * Since: 2.4
 */


/**
 * GParamSpecParam:
 * @parent_instance: private #GParamSpec portion
 *
 * A #GParamSpec derived structure that contains the meta data for %G_TYPE_PARAM
 * properties.
 */


/**
 * GParamSpecPointer:
 * @parent_instance: private #GParamSpec portion
 *
 * A #GParamSpec derived structure that contains the meta data for pointer properties.
 */


/**
 * GParamSpecString:
 * @parent_instance: private #GParamSpec portion
 * @default_value: default value for the property specified
 * @cset_first: a string containing the allowed values for the first byte
 * @cset_nth: a string containing the allowed values for the subsequent bytes
 * @substitutor: the replacement byte for bytes which don't match @cset_first or @cset_nth.
 * @null_fold_if_empty: replace empty string by %NULL
 * @ensure_non_null: replace %NULL strings by an empty string
 *
 * A #GParamSpec derived structure that contains the meta data for string
 * properties.
 */


/**
 * GParamSpecTypeInfo:
 * @instance_size: Size of the instance (object) structure.
 * @n_preallocs: Prior to GLib 2.10, it specified the number of pre-allocated (cached) instances to reserve memory for (0 indicates no caching). Since GLib 2.10, it is ignored, since instances are allocated with the <link linkend="glib-Memory-Slices">slice allocator</link> now.
 * @instance_init: Location of the instance initialization function (optional).
 * @value_type: The #GType of values conforming to this #GParamSpec
 * @finalize: The instance finalization function (optional).
 * @value_set_default: Resets a @value to the default value for @pspec (recommended, the default is g_value_reset()), see g_param_value_set_default().
 * @value_validate: Ensures that the contents of @value comply with the specifications set out by @pspec (optional), see g_param_value_set_validate().
 * @values_cmp: Compares @value1 with @value2 according to @pspec (recommended, the default is memcmp()), see g_param_values_cmp().
 *
 * This structure is used to provide the type system with the information
 * required to initialize and destruct (finalize) a parameter's class and
 * instances thereof.
 * The initialized structure is passed to the g_param_type_register_static()
 * The type system will perform a deep copy of this structure, so its memory
 * does not need to be persistent across invocation of
 * g_param_type_register_static().
 */


/**
 * GParamSpecUChar:
 * @parent_instance: private #GParamSpec portion
 * @minimum: minimum value for the property specified
 * @maximum: maximum value for the property specified
 * @default_value: default value for the property specified
 *
 * A #GParamSpec derived structure that contains the meta data for unsigned character properties.
 */


/**
 * GParamSpecUInt:
 * @parent_instance: private #GParamSpec portion
 * @minimum: minimum value for the property specified
 * @maximum: maximum value for the property specified
 * @default_value: default value for the property specified
 *
 * A #GParamSpec derived structure that contains the meta data for unsigned integer properties.
 */


/**
 * GParamSpecUInt64:
 * @parent_instance: private #GParamSpec portion
 * @minimum: minimum value for the property specified
 * @maximum: maximum value for the property specified
 * @default_value: default value for the property specified
 *
 * A #GParamSpec derived structure that contains the meta data for unsigned 64bit integer properties.
 */


/**
 * GParamSpecULong:
 * @parent_instance: private #GParamSpec portion
 * @minimum: minimum value for the property specified
 * @maximum: maximum value for the property specified
 * @default_value: default value for the property specified
 *
 * A #GParamSpec derived structure that contains the meta data for unsigned long integer properties.
 */


/**
 * GParamSpecUnichar:
 * @parent_instance: private #GParamSpec portion
 * @default_value: default value for the property specified
 *
 * A #GParamSpec derived structure that contains the meta data for unichar (unsigned integer) properties.
 */


/**
 * GParamSpecValueArray:
 * @parent_instance: private #GParamSpec portion
 * @element_spec: a #GParamSpec describing the elements contained in arrays of this property, may be %NULL
 * @fixed_n_elements: if greater than 0, arrays of this property will always have this many elements
 *
 * A #GParamSpec derived structure that contains the meta data for #GValueArray properties.
 */


/**
 * GParamSpecVariant:
 * @parent_instance: private #GParamSpec portion
 * @type: a #GVariantType, or %NULL
 * @default_value: a #GVariant, or %NULL
 *
 * A #GParamSpec derived structure that contains the meta data for #GVariant properties.
 *
 * Since: 2.26
 */


/**
 * GParameter:
 * @name: the parameter name
 * @value: the parameter value
 *
 * The <structname>GParameter</structname> struct is an auxiliary structure used
 * to hand parameter name/value pairs to g_object_newv().
 */


/**
 * GPatternSpec:
 *
 * A <structname>GPatternSpec</structname> is the 'compiled' form of a
 * pattern. This structure is opaque and its fields cannot be accessed
 * directly.
 */


/**
 * GPid:
 *
 * A type which is used to hold a process identification.
 * On UNIX, processes are identified by a process id (an integer),
 * while Windows uses process handles (which are pointers).
 */


/**
 * GPollFD:
 * @fd: the file descriptor to poll (or a <type>HANDLE</type> on Win32)
 * @events: a bitwise combination from #GIOCondition, specifying which events should be polled for. Typically for reading from a file descriptor you would use %G_IO_IN | %G_IO_HUP | %G_IO_ERR, and for writing you would use %G_IO_OUT | %G_IO_ERR.
 * @revents: a bitwise combination of flags from #GIOCondition, returned from the poll() function to indicate which events occurred.
 *
 *
 */


/**
 * GPollFunc:
 * @ufds: an array of #GPollFD elements
 * @nfsd: the number of elements in @ufds
 * @timeout_: the maximum time to wait for an event of the file descriptors. A negative value indicates an infinite timeout.
 *
 * Specifies the type of function passed to g_main_context_set_poll_func().
 * The semantics of the function should match those of the poll() system call.
 * reported, or -1 if an error occurred.
 *
 * Returns: the number of #GPollFD elements which have events or errors
 */


/**
 * GPrivate:
 *
 * The #GPrivate struct is an opaque data structure to represent a
 * thread private data key. Threads can thereby obtain and set a
 * pointer which is private to the current thread. Take our
 * <function>give_me_next_number(<!-- -->)</function> example from
 * above.  Suppose we don't want <literal>current_number</literal> to be
 * shared between the threads, but instead to be private to each thread.
 * This can be done as follows:
 * <example>
 * <title>Using GPrivate for per-thread data</title>
 * <programlisting>
 * GPrivate* current_number_key = NULL; /<!-- -->* Must be initialized somewhere
 * with g_private_new (g_free); *<!-- -->/
 * int
 * give_me_next_number (void)
 * {
 * int *current_number = g_private_get (current_number_key);
 * if (!current_number)
 * {
 * current_number = g_new (int, 1);
 * *current_number = 0;
 * g_private_set (current_number_key, current_number);
 * }
 * *current_number = calc_next_number (*current_number);
 * return *current_number;
 * }
 * </programlisting>
 * </example>
 * Here the pointer belonging to the key
 * <literal>current_number_key</literal> is read. If it is %NULL, it has
 * not been set yet. Then get memory for an integer value, assign this
 * memory to the pointer and write the pointer back. Now we have an
 * integer value that is private to the current thread.
 * The #GPrivate struct should only be accessed via the following
 * functions.
 * <note><para>All of the <function>g_private_*</function> functions are
 * actually macros. Apart from taking their addresses, you can however
 * use them as if they were functions.</para></note>
 */


/**
 * GPtrArray:
 * @pdata: points to the array of pointers, which may be moved when the array grows.
 * @len: number of pointers in the array.
 *
 * Contains the public fields of a pointer array.
 */


/**
 * GQuark:
 *
 * A GQuark is a non-zero integer which uniquely identifies a
 * particular string. A GQuark value of zero is associated to %NULL.
 */


/**
 * GRand:
 *
 * The #GRand struct is an opaque data structure. It should only be
 * accessed through the <function>g_rand_*</function> functions.
 */


/**
 * GRegex:
 *
 * A GRegex is the "compiled" form of a regular expression pattern. This
 * structure is opaque and its fields cannot be accessed directly.
 *
 * Since: 2.14
 */


/**
 * GRegexCompileFlags:
 * @G_REGEX_CASELESS: Letters in the pattern match both upper- and lowercase letters. This option can be changed within a pattern by a "(?i)" option setting.
 * @G_REGEX_MULTILINE: By default, GRegex treats the strings as consisting of a single line of characters (even if it actually contains newlines). The "start of line" metacharacter ("^") matches only at the start of the string, while the "end of line" metacharacter ("$") matches only at the end of the string, or before a terminating newline (unless #G_REGEX_DOLLAR_ENDONLY is set). When #G_REGEX_MULTILINE is set, the "start of line" and "end of line" constructs match immediately following or immediately before any newline in the string, respectively, as well as at the very start and end. This can be changed within a pattern by a "(?m)" option setting.
 * @G_REGEX_DOTALL: A dot metacharater (".") in the pattern matches all characters, including newlines. Without it, newlines are excluded. This option can be changed within a pattern by a ("?s") option setting.
 * @G_REGEX_EXTENDED: Whitespace data characters in the pattern are totally ignored except when escaped or inside a character class. Whitespace does not include the VT character (code 11). In addition, characters between an unescaped "#" outside a character class and the next newline character, inclusive, are also ignored. This can be changed within a pattern by a "(?x)" option setting.
 * @G_REGEX_ANCHORED: The pattern is forced to be "anchored", that is, it is constrained to match only at the first matching point in the string that is being searched. This effect can also be achieved by appropriate constructs in the pattern itself such as the "^" metacharater.
 * @G_REGEX_DOLLAR_ENDONLY: A dollar metacharacter ("$") in the pattern matches only at the end of the string. Without this option, a dollar also matches immediately before the final character if it is a newline (but not before any other newlines). This option is ignored if #G_REGEX_MULTILINE is set.
 * @G_REGEX_UNGREEDY: Inverts the "greediness" of the quantifiers so that they are not greedy by default, but become greedy if followed by "?". It can also be set by a "(?U)" option setting within the pattern.
 * @G_REGEX_RAW: Usually strings must be valid UTF-8 strings, using this flag they are considered as a raw sequence of bytes.
 * @G_REGEX_NO_AUTO_CAPTURE: Disables the use of numbered capturing parentheses in the pattern. Any opening parenthesis that is not followed by "?" behaves as if it were followed by "?:" but named parentheses can still be used for capturing (and they acquire numbers in the usual way).
 * @G_REGEX_OPTIMIZE: Optimize the regular expression. If the pattern will be used many times, then it may be worth the effort to optimize it to improve the speed of matches.
 * @G_REGEX_DUPNAMES: Names used to identify capturing subpatterns need not be unique. This can be helpful for certain types of pattern when it is known that only one instance of the named subpattern can ever be matched.
 * @G_REGEX_NEWLINE_CR: Usually any newline character is recognized, if this option is set, the only recognized newline character is '\r'.
 * @G_REGEX_NEWLINE_LF: Usually any newline character is recognized, if this option is set, the only recognized newline character is '\n'.
 * @G_REGEX_NEWLINE_CRLF: Usually any newline character is recognized, if this option is set, the only recognized newline character sequence is '\r\n'.
 *
 * Flags specifying compile-time options.
 *
 * Since: 2.14
 */


/**
 * GRegexError:
 * @G_REGEX_ERROR_COMPILE: Compilation of the regular expression failed.
 * @G_REGEX_ERROR_OPTIMIZE: Optimization of the regular expression failed.
 * @G_REGEX_ERROR_REPLACE: Replacement failed due to an ill-formed replacement string.
 * @G_REGEX_ERROR_MATCH: The match process failed.
 * @G_REGEX_ERROR_INTERNAL: Internal error of the regular expression engine. Since 2.16
 * @G_REGEX_ERROR_STRAY_BACKSLASH: "\\" at end of pattern. Since 2.16
 * @G_REGEX_ERROR_MISSING_CONTROL_CHAR: "\\c" at end of pattern. Since 2.16
 * @G_REGEX_ERROR_UNRECOGNIZED_ESCAPE: Unrecognized character follows "\\". Since 2.16
 * @G_REGEX_ERROR_QUANTIFIERS_OUT_OF_ORDER: Numbers out of order in "{}" quantifier. Since 2.16
 * @G_REGEX_ERROR_QUANTIFIER_TOO_BIG: Number too big in "{}" quantifier. Since 2.16
 * @G_REGEX_ERROR_UNTERMINATED_CHARACTER_CLASS: Missing terminating "]" for character class. Since 2.16
 * @G_REGEX_ERROR_INVALID_ESCAPE_IN_CHARACTER_CLASS: Invalid escape sequence in character class. Since 2.16
 * @G_REGEX_ERROR_RANGE_OUT_OF_ORDER: Range out of order in character class. Since 2.16
 * @G_REGEX_ERROR_NOTHING_TO_REPEAT: Nothing to repeat. Since 2.16
 * @G_REGEX_ERROR_UNRECOGNIZED_CHARACTER: Unrecognized character after "(?", "(?&lt;" or "(?P". Since 2.16
 * @G_REGEX_ERROR_POSIX_NAMED_CLASS_OUTSIDE_CLASS: POSIX named classes are supported only within a class. Since 2.16
 * @G_REGEX_ERROR_UNMATCHED_PARENTHESIS: Missing terminating ")" or ")" without opening "(". Since 2.16
 * @G_REGEX_ERROR_INEXISTENT_SUBPATTERN_REFERENCE: Reference to non-existent subpattern. Since 2.16
 * @G_REGEX_ERROR_UNTERMINATED_COMMENT: Missing terminating ")" after comment. Since 2.16
 * @G_REGEX_ERROR_EXPRESSION_TOO_LARGE: Regular expression too large. Since 2.16
 * @G_REGEX_ERROR_MEMORY_ERROR: Failed to get memory. Since 2.16
 * @G_REGEX_ERROR_VARIABLE_LENGTH_LOOKBEHIND: Lookbehind assertion is not fixed length. Since 2.16
 * @G_REGEX_ERROR_MALFORMED_CONDITION: Malformed number or name after "(?(". Since 2.16
 * @G_REGEX_ERROR_TOO_MANY_CONDITIONAL_BRANCHES: Conditional group contains more than two branches. Since 2.16
 * @G_REGEX_ERROR_ASSERTION_EXPECTED: Assertion expected after "(?(". Since 2.16
 * @G_REGEX_ERROR_UNKNOWN_POSIX_CLASS_NAME: Unknown POSIX class name. Since 2.16
 * @G_REGEX_ERROR_POSIX_COLLATING_ELEMENTS_NOT_SUPPORTED: POSIX collating elements are not supported. Since 2.16
 * @G_REGEX_ERROR_HEX_CODE_TOO_LARGE: Character value in "\\x{...}" sequence is too large. Since 2.16
 * @G_REGEX_ERROR_INVALID_CONDITION: Invalid condition "(?(0)". Since 2.16
 * @G_REGEX_ERROR_SINGLE_BYTE_MATCH_IN_LOOKBEHIND: \\C not allowed in lookbehind assertion. Since 2.16
 * @G_REGEX_ERROR_INFINITE_LOOP: Recursive call could loop indefinitely. Since 2.16
 * @G_REGEX_ERROR_MISSING_SUBPATTERN_NAME_TERMINATOR: Missing terminator in subpattern name. Since 2.16
 * @G_REGEX_ERROR_DUPLICATE_SUBPATTERN_NAME: Two named subpatterns have the same name. Since 2.16
 * @G_REGEX_ERROR_MALFORMED_PROPERTY: Malformed "\\P" or "\\p" sequence. Since 2.16
 * @G_REGEX_ERROR_UNKNOWN_PROPERTY: Unknown property name after "\\P" or "\\p". Since 2.16
 * @G_REGEX_ERROR_SUBPATTERN_NAME_TOO_LONG: Subpattern name is too long (maximum 32 characters). Since 2.16
 * @G_REGEX_ERROR_TOO_MANY_SUBPATTERNS: Too many named subpatterns (maximum 10,000). Since 2.16
 * @G_REGEX_ERROR_INVALID_OCTAL_VALUE: Octal value is greater than "\\377". Since 2.16
 * @G_REGEX_ERROR_TOO_MANY_BRANCHES_IN_DEFINE: "DEFINE" group contains more than one branch. Since 2.16
 * @G_REGEX_ERROR_DEFINE_REPETION: Repeating a "DEFINE" group is not allowed. Since 2.16
 * @G_REGEX_ERROR_INCONSISTENT_NEWLINE_OPTIONS: Inconsistent newline options. Since 2.16
 * @G_REGEX_ERROR_MISSING_BACK_REFERENCE: "\\g" is not followed by a braced name or an optionally braced non-zero number. Since 2.16
 *
 * Error codes returned by regular expressions functions.
 *
 * Since: 2.14
 */


/**
 * GRegexEvalCallback:
 * @match_info: the #GMatchInfo generated by the match. Use g_match_info_get_regex() and g_match_info_get_string() if you need the #GRegex or the matched string.
 * @result: a #GString containing the new string
 * @user_data: user data passed to g_regex_replace_eval()
 *
 * Specifies the type of the function passed to g_regex_replace_eval().
 * It is called for each occurance of the pattern in the string passed
 * to g_regex_replace_eval(), and it should append the replacement to
 *
 * Returns: %FALSE to continue the replacement process, %TRUE to stop it
 * Since: 2.14
 */


/**
 * GRegexMatchFlags:
 * @G_REGEX_MATCH_ANCHORED: The pattern is forced to be "anchored", that is, it is constrained to match only at the first matching point in the string that is being searched. This effect can also be achieved by appropriate constructs in the pattern itself such as the "^" metacharater.
 * @G_REGEX_MATCH_NOTBOL: Specifies that first character of the string is not the beginning of a line, so the circumflex metacharacter should not match before it. Setting this without #G_REGEX_MULTILINE (at compile time) causes circumflex never to match. This option affects only the behaviour of the circumflex metacharacter, it does not affect "\A".
 * @G_REGEX_MATCH_NOTEOL: Specifies that the end of the subject string is not the end of a line, so the dollar metacharacter should not match it nor (except in multiline mode) a newline immediately before it. Setting this without #G_REGEX_MULTILINE (at compile time) causes dollar never to match. This option affects only the behaviour of the dollar metacharacter, it does not affect "\Z" or "\z".
 * @G_REGEX_MATCH_NOTEMPTY: An empty string is not considered to be a valid match if this option is set. If there are alternatives in the pattern, they are tried. If all the alternatives match the empty string, the entire match fails. For example, if the pattern "a?b?" is applied to a string not beginning with "a" or "b", it matches the empty string at the start of the string. With this flag set, this match is not valid, so GRegex searches further into the string for occurrences of "a" or "b".
 * @G_REGEX_MATCH_PARTIAL: Turns on the partial matching feature, for more documentation on partial matching see g_match_info_is_partial_match().
 * @G_REGEX_MATCH_NEWLINE_CR: Overrides the newline definition set when creating a new #GRegex, setting the '\r' character as line terminator.
 * @G_REGEX_MATCH_NEWLINE_LF: Overrides the newline definition set when creating a new #GRegex, setting the '\n' character as line terminator.
 * @G_REGEX_MATCH_NEWLINE_CRLF: Overrides the newline definition set when creating a new #GRegex, setting the '\r\n' characters as line terminator.
 * @G_REGEX_MATCH_NEWLINE_ANY: Overrides the newline definition set when creating a new #GRegex, any newline character or character sequence is recognized.
 *
 * Flags specifying match-time options.
 *
 * Since: 2.14
 */


/**
 * GRelation:
 *
 * The #GRelation struct is an opaque data structure to represent a
 * <link linkend="glib-Relations-and-Tuples">Relation</link>. It should
 * only be accessed via the following functions.
 */


/**
 * GSList:
 * @data: holds the element's data, which can be a pointer to any kind of data, or any integer value using the <link linkend="glib-Type-Conversion-Macros">Type Conversion Macros</link>.
 * @next: contains the link to the next element in the list.
 *
 * The #GSList struct is used for each element in the singly-linked
 * list.
 */


/**
 * GSeekType:
 * @G_SEEK_CUR: the current position in the file.
 * @G_SEEK_SET: the start of the file.
 * @G_SEEK_END: the end of the file.
 *
 * An enumeration specifying the base position for a
 * g_io_channel_seek_position() operation.
 */


/**
 * GSequence:
 *
 * The #GSequence struct is an opaque data type representing a
 * <link linkend="glib-Sequences">Sequence</link> data type.
 */


/**
 * GSequenceIter:
 *
 * The #GSequenceIter struct is an opaque data type representing an
 * iterator pointing into a #GSequence.
 */


/**
 * GSequenceIterCompareFunc:
 * @a: a #GSequenceIter
 * @b: a #GSequenceIter
 * @data: user data
 * @Returns: zero if the iterators are equal, a negative value if @a comes before @b, and a positive value if @b comes before
 *
 * A #GSequenceIterCompareFunc is a function used to compare iterators.
 * It must return zero if the iterators compare equal, a negative value
 * if @a comes before @b, and a positive value if @b comes before @a.
 */


/**
 * GShellError:
 * @G_SHELL_ERROR_BAD_QUOTING: Mismatched or otherwise mangled quoting.
 * @G_SHELL_ERROR_EMPTY_STRING: String to be parsed was empty.
 * @G_SHELL_ERROR_FAILED: Some other error.
 *
 * Error codes returned by shell functions.
 */


/**
 * GSignalAccumulator:
 * @ihint: Signal invocation hint, see #GSignalInvocationHint.
 * @return_accu: Accumulator to collect callback return values in, this is the return value of the current signal emission.
 * @handler_return: A #GValue holding the return value of the signal handler.
 * @data: Callback data that was specified when creating the signal.
 *
 * The signal accumulator is a special callback function that can be used
 * to collect return values of the various callbacks that are called
 * during a signal emission. The signal accumulator is specified at signal
 * creation time, if it is left %NULL, no accumulation of callback return
 * values is performed. The return value of signal emissions is then the
 * value returned by the last callback.
 * should be aborted. Returning %FALSE means to abort the
 * current emission and %TRUE is returned for continuation.
 *
 * Returns: The accumulator function returns whether the signal emission
 */


/**
 * GSignalCMarshaller:
 *
 * This is the signature of marshaller functions, required to marshall
 * arrays of parameter values to signal emissions into C language callback
 * invocations. It is merely an alias to #GClosureMarshal since the #GClosure
 * mechanism takes over responsibility of actual function invocation for the
 * signal system.
 */


/**
 * GSignalEmissionHook:
 * @ihint: Signal invocation hint, see #GSignalInvocationHint.
 * @n_param_values: the number of parameters to the function, including the instance on which the signal was emitted.
 * @param_values: the instance on which the signal was emitted, followed by the parameters of the emission.
 * @data: user data associated with the hook.
 *
 * A simple function pointer to get invoked when the signal is emitted. This
 * allows you to tie a hook to the signal type, so that it will trap all
 * emissions of that signal, from any object.
 * You may not attach these to signals created with the #G_SIGNAL_NO_HOOKS flag.
 * hook is disconnected (and destroyed).
 *
 * Returns: whether it wants to stay connected. If it returns %FALSE, the signal
 */


/**
 * GSignalFlags:
 * @G_SIGNAL_RUN_FIRST: Invoke the object method handler in the first emission stage.
 * @G_SIGNAL_RUN_LAST: Invoke the object method handler in the third emission stage.
 * @G_SIGNAL_RUN_CLEANUP: Invoke the object method handler in the last emission stage.
 * @G_SIGNAL_NO_RECURSE: Signals being emitted for an object while currently being in emission for this very object will not be emitted recursively, but instead cause the first emission to be restarted.
 * @G_SIGNAL_DETAILED: This signal supports "::detail" appendices to the signal name upon handler connections and emissions.
 * @G_SIGNAL_ACTION: Action signals are signals that may freely be emitted on alive objects from user code via g_signal_emit() and friends, without the need of being embedded into extra code that performs pre or post emission adjustments on the object. They can also be thought of as object methods which can be called generically by third-party code.
 * @G_SIGNAL_NO_HOOKS: No emissions hooks are supported for this signal.
 * @G_SIGNAL_MUST_COLLECT: Varargs signal emission will always collect the arguments, even if there are no signal handlers connected.  Since 2.30.
 *
 * The signal flags are used to specify a signal's behaviour, the overall
 * signal description outlines how especially the RUN flags control the
 * stages of a signal emission.
 */


/**
 * GSignalInvocationHint:
 * @signal_id: The signal id of the signal invoking the callback
 * @detail: The detail passed on for this emission
 * @run_type: The stage the signal emission is currently in, this field will contain one of %G_SIGNAL_RUN_FIRST, %G_SIGNAL_RUN_LAST or %G_SIGNAL_RUN_CLEANUP.
 *
 * The #GSignalInvocationHint structure is used to pass on additional information
 * to callbacks during a signal emission.
 */


/**
 * GSignalMatchType:
 * @G_SIGNAL_MATCH_ID: The signal id must be equal.
 * @G_SIGNAL_MATCH_DETAIL: The signal detail be equal.
 * @G_SIGNAL_MATCH_CLOSURE: The closure must be the same.
 * @G_SIGNAL_MATCH_FUNC: The C closure callback must be the same.
 * @G_SIGNAL_MATCH_DATA: The closure data must be the same.
 * @G_SIGNAL_MATCH_UNBLOCKED: Only unblocked signals may matched.
 *
 * The match types specify what g_signal_handlers_block_matched(),
 * g_signal_handlers_unblock_matched() and g_signal_handlers_disconnect_matched()
 * match signals by.
 */


/**
 * GSignalQuery:
 * @signal_id: The signal id of the signal being queried, or 0 if the signal to be queried was unknown.
 * @signal_name: The signal name.
 * @itype: The interface/instance type that this signal can be emitted for.
 * @signal_flags: The signal flags as passed in to g_signal_new().
 * @return_type: The return type for user callbacks.
 * @n_params: The number of parameters that user callbacks take.
 * @param_types: The individual parameter types for user callbacks, note that the effective callback signature is: <programlisting> [#param_types param_names,] #gpointer     data2); </programlisting>
 *
 * A structure holding in-depth information for a specific signal. It is
 * filled in by the g_signal_query() function.
 */


/**
 * GSource:
 *
 * The <structname>GSource</structname> struct is an opaque data type
 * representing an event source.
 */


/**
 * GSourceCallbackFuncs:
 * @ref: Called when a reference is added to the callback object
 * @unref: Called when a reference to the callback object is dropped
 * @get: Called to extract the callback function and data from the callback object.
 *
 * The <structname>GSourceCallbackFuncs</structname> struct contains
 * functions for managing callback objects.
 */


/**
 * GSourceDummyMarshal:
 *
 * This is just a placeholder for #GClosureMarshal,
 * which cannot be used here for dependency reasons.
 */


/**
 * GSourceFunc:
 * @data: data passed to the function, set when the source was created with one of the above functions
 *
 * Specifies the type of function passed to g_timeout_add(),
 * g_timeout_add_full(), g_idle_add(), and g_idle_add_full().
 *
 * Returns: %FALSE if the source should be removed
 */


/**
 * GSourceFuncs:
 * @prepare: Called before all the file descriptors are polled. If the source can determine that it is ready here (without waiting for the results of the poll() call) it should return %TRUE. It can also return a @timeout_ value which should be the maximum timeout (in milliseconds) which should be passed to the poll() call. The actual timeout used will be -1 if all sources returned -1, or it will be the minimum of all the
 * @check: Called after all the file descriptors are polled. The source should return %TRUE if it is ready to be dispatched. Note that some time may have passed since the previous prepare function was called, so the source should be checked again here.
 * @dispatch: Called to dispatch the event source, after it has returned %TRUE in either its @prepare or its @check function. The @dispatch function is passed in a callback function and data. The callback function may be %NULL if the source was never connected to a callback using g_source_set_callback(). The @dispatch function should call the callback function with @user_data and whatever additional parameters are needed for this type of event source.
 * @finalize: Called when the source is finalized.
 *
 * The <structname>GSourceFuncs</structname> struct contains a table of
 * functions used to handle event sources in a generic manner.
 * For idle sources, the prepare and check functions always return %TRUE
 * to indicate that the source is always ready to be processed. The prepare
 * function also returns a timeout value of 0 to ensure that the poll() call
 * doesn't block (since that would be time wasted which could have been spent
 * running the idle function).
 * For timeout sources, the prepare and check functions both return %TRUE
 * if the timeout interval has expired. The prepare function also returns
 * a timeout value to ensure that the poll() call doesn't block too long
 * and miss the next timeout.
 * For file descriptor sources, the prepare function typically returns %FALSE,
 * since it must wait until poll() has been called before it knows whether
 * any events need to be processed. It sets the returned timeout to -1 to
 * indicate that it doesn't mind how long the poll() call blocks. In the
 * check function, it tests the results of the poll() call to see if the
 * required condition has been met, and returns %TRUE if so.
 */


/**
 * GStatBuf:
 *
 * A type corresponding to the appropriate struct type for the stat
 * system call, depending on the platform and/or compiler being used.
 * See g_stat() for more information.
 */


/**
 * GStaticMutex:
 *
 * A #GStaticMutex works like a #GMutex, but it has one significant
 * advantage. It doesn't need to be created at run-time like a #GMutex,
 * but can be defined at compile-time. Here is a shorter, easier and
 * safer version of our <function>give_me_next_number()</function>
 * example:
 * <example>
 * <title>
 * Using <structname>GStaticMutex</structname>
 * to simplify thread-safe programming
 * </title>
 * <programlisting>
 * int
 * give_me_next_number (void)
 * {
 * static int current_number = 0;
 * int ret_val;
 * static GStaticMutex mutex = G_STATIC_MUTEX_INIT;
 * g_static_mutex_lock (&amp;mutex);
 * ret_val = current_number = calc_next_number (current_number);
 * g_static_mutex_unlock (&amp;mutex);
 * return ret_val;
 * }
 * </programlisting>
 * </example>
 * Sometimes you would like to dynamically create a mutex. If you don't
 * want to require prior calling to g_thread_init(), because your code
 * should also be usable in non-threaded programs, you are not able to
 * use g_mutex_new() and thus #GMutex, as that requires a prior call to
 * g_thread_init(). In theses cases you can also use a #GStaticMutex.
 * It must be initialized with g_static_mutex_init() before using it
 * and freed with with g_static_mutex_free() when not needed anymore to
 * free up any allocated resources.
 * Even though #GStaticMutex is not opaque, it should only be used with
 * the following functions, as it is defined differently on different
 * platforms.
 * All of the <function>g_static_mutex_*</function> functions apart
 * from <function>g_static_mutex_get_mutex</function> can also be used
 * even if g_thread_init() has not yet been called. Then they do
 * nothing, apart from <function>g_static_mutex_trylock</function>,
 * which does nothing but returning %TRUE.
 * <note><para>All of the <function>g_static_mutex_*</function>
 * functions are actually macros. Apart from taking their addresses, you
 * can however use them as if they were functions.</para></note>
 */


/**
 * GStaticPrivate:
 *
 * A #GStaticPrivate works almost like a #GPrivate, but it has one
 * significant advantage. It doesn't need to be created at run-time
 * like a #GPrivate, but can be defined at compile-time. This is
 * similar to the difference between #GMutex and #GStaticMutex. Now
 * look at our <function>give_me_next_number()</function> example with
 * #GStaticPrivate:
 * <example>
 * <title>Using GStaticPrivate for per-thread data</title>
 * <programlisting>
 * int
 * give_me_next_number (<!-- -->)
 * {
 * static GStaticPrivate current_number_key = G_STATIC_PRIVATE_INIT;
 * int *current_number = g_static_private_get (&amp;current_number_key);
 * if (!current_number)
 * {
 * current_number = g_new (int,1);
 * *current_number = 0;
 * g_static_private_set (&amp;current_number_key, current_number, g_free);
 * }
 * *current_number = calc_next_number (*current_number);
 * return *current_number;
 * }
 * </programlisting>
 * </example>
 */


/**
 * GStaticRWLock:
 *
 * The #GStaticRWLock struct represents a read-write lock. A read-write
 * lock can be used for protecting data that some portions of code only
 * read from, while others also write. In such situations it is
 * desirable that several readers can read at once, whereas of course
 * only one writer may write at a time. Take a look at the following
 * example:
 * <example>
 * <title>An array with access functions</title>
 * <programlisting>
 * GStaticRWLock rwlock = G_STATIC_RW_LOCK_INIT;
 * GPtrArray *array;
 * gpointer
 * my_array_get (guint index)
 * {
 * gpointer retval = NULL;
 * if (!array)
 * return NULL;
 * g_static_rw_lock_reader_lock (&amp;rwlock);
 * if (index &lt; array->len)
 * retval = g_ptr_array_index (array, index);
 * g_static_rw_lock_reader_unlock (&amp;rwlock);
 * return retval;
 * }
 * void
 * my_array_set (guint index, gpointer data)
 * {
 * g_static_rw_lock_writer_lock (&amp;rwlock);
 * if (!array)
 * array = g_ptr_array_new (<!-- -->);
 * if (index >= array->len)
 * g_ptr_array_set_size (array, index+1);
 * g_ptr_array_index (array, index) = data;
 * g_static_rw_lock_writer_unlock (&amp;rwlock);
 * }
 * </programlisting>
 * </example>
 * This example shows an array which can be accessed by many readers
 * (the <function>my_array_get()</function> function) simultaneously,
 * whereas the writers (the <function>my_array_set()</function>
 * function) will only be allowed once at a time and only if no readers
 * currently access the array. This is because of the potentially
 * dangerous resizing of the array. Using these functions is fully
 * multi-thread safe now.
 * Most of the time, writers should have precedence over readers. That
 * means, for this implementation, that as soon as a writer wants to
 * lock the data, no other reader is allowed to lock the data, whereas,
 * of course, the readers that already have locked the data are allowed
 * to finish their operation. As soon as the last reader unlocks the
 * data, the writer will lock it.
 * Even though #GStaticRWLock is not opaque, it should only be used
 * with the following functions.
 * All of the <function>g_static_rw_lock_*</function> functions can be
 * used even if g_thread_init() has not been called. Then they do
 * nothing, apart from <function>g_static_rw_lock_*_trylock</function>,
 * which does nothing but returning %TRUE.
 * <note><para>A read-write lock has a higher overhead than a mutex. For
 * example, both g_static_rw_lock_reader_lock() and
 * g_static_rw_lock_reader_unlock() have to lock and unlock a
 * #GStaticMutex, so it takes at least twice the time to lock and unlock
 * a #GStaticRWLock that it does to lock and unlock a #GStaticMutex. So
 * only data structures that are accessed by multiple readers, and which
 * keep the lock for a considerable time justify a #GStaticRWLock. The
 * above example most probably would fare better with a
 * #GStaticMutex.</para></note>
 */


/**
 * GStaticRecMutex:
 *
 * A #GStaticRecMutex works like a #GStaticMutex, but it can be locked
 * multiple times by one thread. If you enter it n times, you have to
 * unlock it n times again to let other threads lock it. An exception
 * unlock a #GStaticRecMutex completely returning the depth, (i.e. the
 * number of times this mutex was locked). The depth can later be used
 * to restore the state of the #GStaticRecMutex by calling
 * g_static_rec_mutex_lock_full().
 * Even though #GStaticRecMutex is not opaque, it should only be used
 * with the following functions.
 * All of the <function>g_static_rec_mutex_*</function> functions can
 * be used even if g_thread_init() has not been called. Then they do
 * nothing, apart from <function>g_static_rec_mutex_trylock</function>,
 * which does nothing but returning %TRUE.
 *
 * Is the function g_static_rec_mutex_unlock_full(): that allows you to
 */


/**
 * GStringChunk:
 *
 * An opaque data structure representing String Chunks. It should only
 * be accessed by using the following functions.
 */


/**
 * GStrv:
 *
 * A C representable type name for #G_TYPE_STRV.
 */


/**
 * GTestDataFunc:
 * @user_data: the data provided when registering the test
 *
 * The type used for test case functions that take an extra pointer
 * argument.
 *
 * Since: 2.28
 */


/**
 * GTestFixtureFunc:
 * @fixture: the test fixture
 * @user_data: the data provided when registering the test
 *
 * The type used for functions that operate on test fixtures.  This is
 * used for the fixture setup and teardown functions as well as for the
 * testcases themselves.
 * the test case.
 * test framework, of the size requested.  If the requested size was
 * zero then @fixture will be equal to @user_data.
 *
 * Since: 2.28
 */


/**
 * GTestFunc:
 *
 * The type used for test case functions.
 *
 * Since: 2.28
 */


/**
 * GTestLogFatalFunc:
 * @log_domain: the log domain of the message
 * @log_level: the log level of the message (including the fatal and recursion flags)
 * @message: the message to process
 * @user_data: user data, set in g_test_log_set_fatal_handler()
 *
 * Specifies the prototype of fatal log handler functions.
 *
 * Returns: %TRUE if the program should abort, %FALSE otherwise
 * Since: 2.22
 */


/**
 * GThread:
 *
 * The #GThread struct represents a running thread. It has three public
 * read-only members, but the underlying struct is bigger, so you must
 * not copy this struct.
 * <note><para>Resources for a joinable thread are not fully released
 * until g_thread_join() is called for that thread.</para></note>
 */


/**
 * GThreadError:
 * @G_THREAD_ERROR_AGAIN: a thread couldn't be created due to resource shortage. Try again later.
 *
 * Possible errors of thread related functions.
 */


/**
 * GThreadFunc:
 * @data: data passed to the thread.
 * @Returns: the return value of the thread, which will be returned by g_thread_join().
 *
 * Specifies the type of the @func functions passed to
 * g_thread_create() or g_thread_create_full().
 */


/**
 * GThreadFunctions:
 * @mutex_new: virtual function pointer for g_mutex_new()
 * @mutex_lock: virtual function pointer for g_mutex_lock()
 * @mutex_trylock: virtual function pointer for g_mutex_trylock()
 * @mutex_unlock: virtual function pointer for g_mutex_unlock()
 * @mutex_free: virtual function pointer for g_mutex_free()
 * @cond_new: virtual function pointer for g_cond_new()
 * @cond_signal: virtual function pointer for g_cond_signal()
 * @cond_broadcast: virtual function pointer for g_cond_broadcast()
 * @cond_wait: virtual function pointer for g_cond_wait()
 * @cond_timed_wait: virtual function pointer for g_cond_timed_wait()
 * @cond_free: virtual function pointer for g_cond_free()
 * @private_new: virtual function pointer for g_private_new()
 * @private_get: virtual function pointer for g_private_get()
 * @private_set: virtual function pointer for g_private_set()
 * @thread_create: virtual function pointer for g_thread_create()
 * @thread_yield: virtual function pointer for g_thread_yield()
 * @thread_join: virtual function pointer for g_thread_join()
 * @thread_exit: virtual function pointer for g_thread_exit()
 * @thread_set_priority: virtual function pointer for g_thread_set_priority()
 * @thread_self: virtual function pointer for g_thread_self()
 * @thread_equal: used internally by recursive mutex locks and by some assertion checks
 *
 * This function table is used by g_thread_init() to initialize the
 * thread system. The functions in the table are directly used by their
 * g_* prepended counterparts (described in this document).  For
 * example, if you call g_mutex_new() then mutex_new() from the table
 * provided to g_thread_init() will be called.
 * <note><para>Do not use this struct unless you know what you are
 * doing.</para></note>
 */


/**
 * GThreadPool:
 * @func: the function to execute in the threads of this pool
 * @user_data: the user data for the threads of this pool
 * @exclusive: are all threads exclusive to this pool
 *
 * The #GThreadPool struct represents a thread pool. It has three
 * public read-only members, but the underlying struct is bigger, so
 * you must not copy this struct.
 */


/**
 * GThreadPriority:
 * @G_THREAD_PRIORITY_LOW: a priority lower than normal
 * @G_THREAD_PRIORITY_NORMAL: the default priority
 * @G_THREAD_PRIORITY_HIGH: a priority higher than normal
 * @G_THREAD_PRIORITY_URGENT: the highest priority
 *
 * Specifies the priority of a thread.
 * <note><para>It is not guaranteed that threads with different priorities
 * really behave accordingly. On some systems (e.g. Linux) there are no
 * thread priorities. On other systems (e.g. Solaris) there doesn't
 * seem to be different scheduling for different priorities. All in all
 * try to avoid being dependent on priorities.</para></note>
 */


/**
 * GTimeSpan:
 *
 * A value representing an interval of time, in microseconds.
 *
 * Since: 2.26
 */


/**
 * GTimeType:
 * @G_TIME_TYPE_STANDARD: the time is in local standard time
 * @G_TIME_TYPE_DAYLIGHT: the time is in local daylight time
 * @G_TIME_TYPE_UNIVERSAL: the time is in UTC
 *
 * Disambiguates a given time in two ways.
 * First, specifies if the given time is in universal or local time.
 * Second, if the time is in local time, specifies if it is local
 * standard time or local daylight time.  This is important for the case
 * where the same local time occurs twice (during daylight savings time
 * transitions, for example).
 */


/**
 * GTimeZone:
 *
 * #GDateTime is an opaque structure whose members cannot be accessed
 * directly.
 *
 * Since: 2.26
 */


/**
 * GTimer:
 *
 * Opaque datatype that records a start time.
 */


/**
 * GToggleNotify:
 * @data: Callback data passed to g_object_add_toggle_ref()
 * @object: The object on which g_object_add_toggle_ref() was called.
 * @is_last_ref: %TRUE if the toggle reference is now the last reference to the object. %FALSE if the toggle reference was the last reference and there are now other references.
 *
 * A callback function used for notification when the state
 * of a toggle reference changes. See g_object_add_toggle_ref().
 */


/**
 * GTranslateFunc:
 * @str: the untranslated string
 * @data: user data specified when installing the function, e.g. in g_option_group_set_translate_func()
 *
 * The type of functions which are used to translate user-visible
 * strings, for <option>--help</option> output.
 * The returned string is owned by GLib and must not be freed.
 *
 * Returns: a translation of the string for the current locale.
 */


/**
 * GTraverseFlags:
 * @G_TRAVERSE_LEAVES: only leaf nodes should be visited. This name has been introduced in 2.6, for older version use %G_TRAVERSE_LEAFS.
 * @G_TRAVERSE_NON_LEAVES: only non-leaf nodes should be visited. This name has been introduced in 2.6, for older version use %G_TRAVERSE_NON_LEAFS.
 * @G_TRAVERSE_ALL: all nodes should be visited.
 * @G_TRAVERSE_MASK: a mask of all traverse flags.
 * @G_TRAVERSE_LEAFS: identical to %G_TRAVERSE_LEAVES.
 * @G_TRAVERSE_NON_LEAFS: identical to %G_TRAVERSE_NON_LEAVES.
 *
 * Specifies which nodes are visited during several of the tree
 * functions, including g_node_traverse() and g_node_find().
 */


/**
 * GTraverseFunc:
 * @key: a key of a #GTree node.
 * @value: the value corresponding to the key.
 * @data: user data passed to g_tree_traverse().
 * @Returns: %TRUE to stop the traversal.
 *
 * Specifies the type of function passed to g_tree_traverse(). It is
 * passed the key and value of each node, together with the @user_data
 * parameter passed to g_tree_traverse(). If the function returns
 * %TRUE, the traversal is stopped.
 */


/**
 * GTraverseType:
 * @G_IN_ORDER: vists a node's left child first, then the node itself, then its right child. This is the one to use if you want the output sorted according to the compare function.
 * @G_PRE_ORDER: visits a node, then its children.
 * @G_POST_ORDER: visits the node's children, then the node itself.
 * @G_LEVEL_ORDER: is not implemented for <link linkend="glib-Balanced-Binary-Trees">Balanced Binary Trees</link>.  For <link linkend="glib-N-ary-Trees">N-ary Trees</link>, it vists the root node first, then its children, then its grandchildren, and so on. Note that this is less efficient than the other orders.
 *
 * Specifies the type of traveral performed by g_tree_traverse(),
 * g_node_traverse() and g_node_find().
 */


/**
 * GTree:
 *
 * The <structname>GTree</structname> struct is an opaque data
 * structure representing a <link
 * linkend="glib-Balanced-Binary-Trees">Balanced Binary Tree</link>. It
 * should be accessed only by using the following functions.
 */


/**
 * GTuples:
 * @len: the number of records that matched.
 *
 * The #GTuples struct is used to return records (or tuples) from the
 * #GRelation by g_relation_select(). It only contains one public
 * member - the number of records that matched. To access the matched
 * records, you must use g_tuples_index().
 */


/**
 * GType:
 *
 * A numerical value which represents the unique identifier of a registered
 * type.
 */


/**
 * GTypeClass:
 *
 * An opaque structure used as the base of all classes.
 */


/**
 * GTypeClassCacheFunc:
 * @cache_data: data that was given to the g_type_add_class_cache_func() call
 * @g_class: The #GTypeClass structure which is unreferenced
 *
 * A callback function which is called when the reference count of a class
 * drops to zero. It may use g_type_class_ref() to prevent the class from
 * being freed. You should not call g_type_class_unref() from a
 * #GTypeClassCacheFunc function to prevent infinite recursion, use
 * g_type_class_unref_uncached() instead.
 * The functions have to check the class id passed in to figure
 * whether they actually want to cache the class of this type, since all
 * classes are routed through the same #GTypeClassCacheFunc chain.
 * called, %FALSE to continue.
 *
 * Returns: %TRUE to stop further #GTypeClassCacheFunc<!-- -->s from being
 */


/**
 * GTypeDebugFlags:
 * @G_TYPE_DEBUG_NONE: Print no messages.
 * @G_TYPE_DEBUG_OBJECTS: Print messages about object bookkeeping.
 * @G_TYPE_DEBUG_SIGNALS: Print messages about signal emissions.
 * @G_TYPE_DEBUG_MASK: Mask covering all debug flags.
 *
 * The <type>GTypeDebugFlags</type> enumeration values can be passed to
 * g_type_init_with_debug_flags() to trigger debugging messages during runtime.
 * Note that the messages can also be triggered by setting the
 * <envar>GOBJECT_DEBUG</envar> environment variable to a ':'-separated list of
 * "objects" and "signals".
 */


/**
 * GTypeFlags:
 * @G_TYPE_FLAG_ABSTRACT: Indicates an abstract type. No instances can be created for an abstract type.
 * @G_TYPE_FLAG_VALUE_ABSTRACT: Indicates an abstract value type, i.e. a type that introduces a value table, but can't be used for g_value_init().
 *
 * Bit masks used to check or determine characteristics of a type.
 */


/**
 * GTypeFundamentalFlags:
 * @G_TYPE_FLAG_CLASSED: Indicates a classed type.
 * @G_TYPE_FLAG_INSTANTIATABLE: Indicates an instantiable type (implies classed).
 * @G_TYPE_FLAG_DERIVABLE: Indicates a flat derivable type.
 * @G_TYPE_FLAG_DEEP_DERIVABLE: Indicates a deep derivable type (implies derivable).
 *
 * Bit masks used to check or determine specific characteristics of a
 * fundamental type.
 */


/**
 * GTypeFundamentalInfo:
 * @type_flags: #GTypeFundamentalFlags describing the characteristics of the fundamental type
 *
 * A structure that provides information to the type system which is
 * used specifically for managing fundamental types.
 */


/**
 * GTypeInfo:
 * @class_size: Size of the class structure (required for interface, classed and instantiatable types).
 * @base_init: Location of the base initialization function (optional).
 * @base_finalize: Location of the base finalization function (optional).
 * @class_init: Location of the class initialization function for classed and instantiatable types. Location of the default vtable inititalization function for interface types. (optional) This function is used both to fill in virtual functions in the class or default vtable, and to do type-specific setup such as registering signals and object properties.
 * @class_finalize: Location of the class finalization function for classed and instantiatable types. Location fo the default vtable finalization function for interface types. (optional)
 * @class_data: User-supplied data passed to the class init/finalize functions.
 * @instance_size: Size of the instance (object) structure (required for instantiatable types only).
 * @n_preallocs: Prior to GLib 2.10, it specified the number of pre-allocated (cached) instances to reserve memory for (0 indicates no caching). Since GLib 2.10, it is ignored, since instances are allocated with the <link linkend="glib-Memory-Slices">slice allocator</link> now.
 * @instance_init: Location of the instance initialization function (optional, for instantiatable types only).
 * @value_table: A #GTypeValueTable function table for generic handling of GValues of this type (usually only useful for fundamental types).
 *
 * This structure is used to provide the type system with the information
 * required to initialize and destruct (finalize) a type's class and
 * its instances.
 * The initialized structure is passed to the g_type_register_static() function
 * (or is copied into the provided #GTypeInfo structure in the
 * g_type_plugin_complete_type_info()). The type system will perform a deep
 * copy of this structure, so its memory does not need to be persistent
 * across invocation of g_type_register_static().
 */


/**
 * GTypeInstance:
 *
 * An opaque structure used as the base of all type instances.
 */


/**
 * GTypeInterface:
 *
 * An opaque structure used as the base of all interface types.
 */


/**
 * GTypeInterfaceCheckFunc:
 * @check_data: data passed to g_type_add_interface_check().
 * @g_iface: the interface that has been initialized
 *
 * A callback called after an interface vtable is initialized.
 * See g_type_add_interface_check().
 *
 * Since: 2.4
 */


/**
 * GTypeModule:
 * @name: the name of the module
 *
 * The members of the <structname>GTypeModule</structname> structure should not
 * be accessed directly, except for the @name field.
 */


/**
 * GTypeModuleClass:
 * @parent_class: the parent class
 * @load: loads the module and registers one or more types using g_type_module_register_type().
 * @unload: unloads the module
 *
 * In order to implement dynamic loading of types based on #GTypeModule,
 * the @load and @unload functions in #GTypeModuleClass must be implemented.
 */


/**
 * GTypePlugin:
 *
 * The <structname>GTypePlugin</structname> typedef is used as a placeholder
 * for objects that implement the <structname>GTypePlugin</structname>
 * interface.
 */


/**
 * GTypePluginClass:
 * @use_plugin: Increases the use count of the plugin.
 * @unuse_plugin: Decreases the use count of the plugin.
 * @complete_type_info: Fills in the #GTypeInfo and #GTypeValueTable structs for the type. The structs are initialized with <literal>memset(s, 0, sizeof (s))</literal> before calling this function.
 * @complete_interface_info: Fills in missing parts of the #GInterfaceInfo for the interface. The structs is initialized with <literal>memset(s, 0, sizeof (s))</literal> before calling this function.
 *
 * The #GTypePlugin interface is used by the type system in order to handle
 * the lifecycle of dynamically loaded types.
 */


/**
 * GTypePluginCompleteInterfaceInfo:
 * @plugin: the #GTypePlugin
 * @instance_type: the #GType of an instantiable type to which the interface is added
 * @interface_type: the #GType of the interface whose info is completed
 * @info: the #GInterfaceInfo to fill in
 *
 * The type of the @complete_interface_info function of #GTypePluginClass.
 */


/**
 * GTypePluginCompleteTypeInfo:
 * @plugin: the #GTypePlugin
 * @g_type: the #GType whose info is completed
 * @info: the #GTypeInfo struct to fill in
 * @value_table: the #GTypeValueTable to fill in
 *
 * The type of the @complete_type_info function of #GTypePluginClass.
 */


/**
 * GTypePluginUnuse:
 * @plugin: the #GTypePlugin whose use count should be decreased
 *
 * The type of the @unuse_plugin function of #GTypePluginClass.
 */


/**
 * GTypePluginUse:
 * @plugin: the #GTypePlugin whose use count should be increased
 *
 * The type of the @use_plugin function of #GTypePluginClass, which gets called
 * to increase the use count of @plugin.
 */


/**
 * GTypeQuery:
 * @type: the #GType value of the type.
 * @type_name: the name of the type.
 * @class_size: the size of the class structure.
 * @instance_size: the size of the instance structure.
 *
 * A structure holding information for a specific type. It is
 * filled in by the g_type_query() function.
 */


/**
 * GTypeValueTable:
 * @value_init: Default initialize @values contents by poking values directly into the value->data array. The data array of the #GValue passed into this function was zero-filled with <function>memset()</function>, so no care has to be taken to free any old contents. E.g. for the implementation of a string value that may never be %NULL, the implementation might look like: |[ value->data[0].v_pointer = g_strdup (""); ]|
 * @value_free: Free any old contents that might be left in the data array of the passed in @value. No resources may remain allocated through the #GValue contents after this function returns. E.g. for our above string type: |[ // only free strings without a specific flag for static storage if (!(value->data[1].v_uint & G_VALUE_NOCOPY_CONTENTS)) g_free (value->data[0].v_pointer); ]|
 * @value_copy: @dest_value is a #GValue with zero-filled data section and @src_value is a properly setup #GValue of same or derived type. The purpose of this function is to copy the contents of remain valid. String type example: |[ dest_value->data[0].v_pointer = g_strdup (src_value->data[0].v_pointer); ]|
 * @value_peek_pointer: If the value contents fit into a pointer, such as objects or strings, return this pointer, so the caller can peek at the current contents. To extend on our above string example: |[ return value->data[0].v_pointer; ]|
 * @collect_format: A string format describing how to collect the contents of this value bit-by-bit. Each character in the format represents an argument to be collected, and the characters themselves indicate the type of the argument. Currently supported arguments are: <variablelist> <varlistentry><term /><listitem><para> 'i' - Integers. passed as collect_values[].v_int. </para></listitem></varlistentry> <varlistentry><term /><listitem><para> 'l' - Longs. passed as collect_values[].v_long. </para></listitem></varlistentry> <varlistentry><term /><listitem><para> 'd' - Doubles. passed as collect_values[].v_double. </para></listitem></varlistentry> <varlistentry><term /><listitem><para> 'p' - Pointers. passed as collect_values[].v_pointer. </para></listitem></varlistentry> </variablelist> It should be noted that for variable argument list construction, ANSI C promotes every type smaller than an integer to an int, and floats to doubles. So for collection of short int or char, 'i' needs to be used, and for collection of floats 'd'.
 * @collect_value: The collect_value() function is responsible for converting the values collected from a variable argument list into contents suitable for storage in a GValue. This function should setup does not allow %NULL pointers, it needs to either spew an error, or do an implicit conversion by storing an empty string. The @value passed in to this function has a zero-filled data array, so just like for value_init() it is guaranteed to not contain any old contents that might need freeing. and @collect_values is an array of unions #GTypeCValue with length @n_collect_values, containing the collected values according to @collect_format. It may contain the flag %G_VALUE_NOCOPY_CONTENTS indicating, that the collected value contents may be considered "static" for the duration of the @value lifetime. Thus an extra copy of the contents stored in @collect_values is not required for assignment to @value. For our above string example, we continue with: |[ if (!collect_values[0].v_pointer) value->data[0].v_pointer = g_strdup (""); else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) { value->data[0].v_pointer = collect_values[0].v_pointer; // keep a flag for the value_free() implementation to not free this string value->data[1].v_uint = G_VALUE_NOCOPY_CONTENTS; } else value->data[0].v_pointer = g_strdup (collect_values[0].v_pointer); return NULL; ]| It should be noted, that it is generally a bad idea to follow the #G_VALUE_NOCOPY_CONTENTS hint for reference counted types. Due to reentrancy requirements and reference count assertions performed by the #GSignal code, reference counts should always be incremented for reference counted contents stored in the value->data array. To deviate from our string example for a moment, and taking a look at an exemplary implementation for collect_value() of #GObject: |[ if (collect_values[0].v_pointer) { GObject *object = G_OBJECT (collect_values[0].v_pointer); // never honour G_VALUE_NOCOPY_CONTENTS for ref-counted types value->data[0].v_pointer = g_object_ref (object); return NULL; } else return g_strdup_printf ("Object passed as invalid NULL pointer"); } ]| The reference count for valid objects is always incremented, regardless of @collect_flags. For invalid objects, the example returns a newly allocated string without altering @value. Upon success, collect_value() needs to return %NULL. If, however, an error condition occurred, collect_value() may spew an error by returning a newly allocated non-%NULL string, giving a suitable description of the error condition. The calling code makes no assumptions about the @value contents being valid upon error returns, @value is simply thrown away without further freeing. As such, it is a good idea to not allocate #GValue contents, prior to returning an error, however, collect_values() is not obliged to return a correctly setup @value for error returns, simply because any non-%NULL return is considered a fatal condition so further program behaviour is undefined.
 * @lcopy_format: Format description of the arguments to collect for @lcopy_value, analogous to @collect_format. Usually, @lcopy_format string consists only of 'p's to provide lcopy_value() with pointers to storage locations.
 * @lcopy_value: This function is responsible for storing the @value contents into arguments passed through a variable argument list which got collected into @collect_values according to @lcopy_format. and @collect_flags may contain %G_VALUE_NOCOPY_CONTENTS. In contrast to collect_value(), lcopy_value() is obliged to always properly support %G_VALUE_NOCOPY_CONTENTS. Similar to collect_value() the function may prematurely abort by returning a newly allocated string describing an error condition. To complete the string example: |[ gchar **string_p = collect_values[0].v_pointer; if (!string_p) return g_strdup_printf ("string location passed as NULL"); if (collect_flags & G_VALUE_NOCOPY_CONTENTS) *string_p = value->data[0].v_pointer; else *string_p = g_strdup (value->data[0].v_pointer); ]| And an illustrative version of lcopy_value() for reference-counted types: |[ GObject **object_p = collect_values[0].v_pointer; if (!object_p) return g_strdup_printf ("object location passed as NULL"); if (!value->data[0].v_pointer) *object_p = NULL; else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) /&ast; always honour &ast;/ *object_p = value->data[0].v_pointer; else *object_p = g_object_ref (value->data[0].v_pointer); return NULL; ]|
 *
 * The #GTypeValueTable provides the functions required by the #GValue implementation,
 * to serve as a container for values of a type.
 */


/**
 * GUserDirectory:
 * @G_USER_DIRECTORY_DESKTOP: the user's Desktop directory
 * @G_USER_DIRECTORY_DOCUMENTS: the user's Documents directory
 * @G_USER_DIRECTORY_DOWNLOAD: the user's Downloads directory
 * @G_USER_DIRECTORY_MUSIC: the user's Music directory
 * @G_USER_DIRECTORY_PICTURES: the user's Pictures directory
 * @G_USER_DIRECTORY_PUBLIC_SHARE: the user's shared directory
 * @G_USER_DIRECTORY_TEMPLATES: the user's Templates directory
 * @G_USER_DIRECTORY_VIDEOS: the user's Movies directory
 * @G_USER_N_DIRECTORIES: the number of enum values
 *
 * These are logical ids for special directories which are defined
 * depending on the platform used. You should use g_get_user_special_dir()
 * to retrieve the full path associated to the logical id.
 * The #GUserDirectory enumeration can be extended at later date. Not
 * every platform has a directory for every logical id in this
 * enumeration.
 *
 * Since: 2.14
 */


/**
 * GValue:
 *
 * An opaque structure used to hold different types of values.
 * to functions within a #GTypeValueTable structure, or implementations of
 * the g_value_*() API. That is, code portions which implement new fundamental
 * types.
 * #GValue users cannot make any assumptions about how data is stored
 * within the 2 element @data union, and the @g_type member should
 * only be accessed through the G_VALUE_TYPE() macro.
 *
 * The data within the structure has protected scope: it is accessible only
 */


/**
 * GValueArray:
 * @n_values: number of values contained in the array
 * @values: array of values
 *
 * A #GValueArray contains an array of #GValue elements.
 */


/**
 * GValueTransform:
 * @src_value: Source value.
 * @dest_value: Target value.
 *
 * The type of value transformation functions which can be registered with
 * g_value_register_transform_func().
 */


/**
 * GVariant:
 *
 * #GVariant is an opaque data structure and can only be accessed
 * using the following functions.
 *
 * Since: 2.24
 */


/**
 * GVariantBuilder:
 *
 * A utility type for constructing container-type #GVariant instances.
 * This is an opaque structure and may only be accessed using the
 * following functions.
 * #GVariantBuilder is not threadsafe in any way.  Do not attempt to
 * access it from more than one thread.
 */


/**
 * GVariantClass:
 * @G_VARIANT_CLASS_BOOLEAN: The #GVariant is a boolean.
 * @G_VARIANT_CLASS_BYTE: The #GVariant is a byte.
 * @G_VARIANT_CLASS_INT16: The #GVariant is a signed 16 bit integer.
 * @G_VARIANT_CLASS_UINT16: The #GVariant is an unsigned 16 bit integer.
 * @G_VARIANT_CLASS_INT32: The #GVariant is a signed 32 bit integer.
 * @G_VARIANT_CLASS_UINT32: The #GVariant is an unsigned 32 bit integer.
 * @G_VARIANT_CLASS_INT64: The #GVariant is a signed 64 bit integer.
 * @G_VARIANT_CLASS_UINT64: The #GVariant is an unsigned 64 bit integer.
 * @G_VARIANT_CLASS_HANDLE: The #GVariant is a file handle index.
 * @G_VARIANT_CLASS_DOUBLE: The #GVariant is a double precision floating point value.
 * @G_VARIANT_CLASS_STRING: The #GVariant is a normal string.
 * @G_VARIANT_CLASS_OBJECT_PATH: The #GVariant is a D-Bus object path string.
 * @G_VARIANT_CLASS_SIGNATURE: The #GVariant is a D-Bus signature string.
 * @G_VARIANT_CLASS_VARIANT: The #GVariant is a variant.
 * @G_VARIANT_CLASS_MAYBE: The #GVariant is a maybe-typed value.
 * @G_VARIANT_CLASS_ARRAY: The #GVariant is an array.
 * @G_VARIANT_CLASS_TUPLE: The #GVariant is a tuple.
 * @G_VARIANT_CLASS_DICT_ENTRY: The #GVariant is a dictionary entry.
 *
 * The range of possible top-level types of #GVariant instances.
 *
 * Since: 2.24
 */


/**
 * GVariantIter: (skip)
 *
 * #GVariantIter is an opaque data structure and can only be accessed
 * using the following functions.
 */


/**
 * GVariantParseError:
 * @G_VARIANT_PARSE_ERROR_FAILED: generic error (unused)
 * @G_VARIANT_PARSE_ERROR_BASIC_TYPE_EXPECTED: a non-basic #GVariantType was given where a basic type was expected
 * @G_VARIANT_PARSE_ERROR_CANNOT_INFER_TYPE: cannot infer the #GVariantType
 * @G_VARIANT_PARSE_ERROR_DEFINITE_TYPE_EXPECTED: an indefinite #GVariantType was given where a definite type was expected
 * @G_VARIANT_PARSE_ERROR_INPUT_NOT_AT_END: extra data after parsing finished
 * @G_VARIANT_PARSE_ERROR_INVALID_CHARACTER: invalid character in number or unicode escape
 * @G_VARIANT_PARSE_ERROR_INVALID_FORMAT_STRING: not a valid #GVariant format string
 * @G_VARIANT_PARSE_ERROR_INVALID_OBJECT_PATH: not a valid object path
 * @G_VARIANT_PARSE_ERROR_INVALID_SIGNATURE: not a valid type signature
 * @G_VARIANT_PARSE_ERROR_INVALID_TYPE_STRING: not a valid #GVariant type string
 * @G_VARIANT_PARSE_ERROR_NO_COMMON_TYPE: could not find a common type for array entries
 * @G_VARIANT_PARSE_ERROR_NUMBER_OUT_OF_RANGE: the numerical value is out of range of the given type
 * @G_VARIANT_PARSE_ERROR_NUMBER_TOO_BIG: the numerical value is out of range for any type
 * @G_VARIANT_PARSE_ERROR_TYPE_ERROR: cannot parse as variant of the specified type
 * @G_VARIANT_PARSE_ERROR_UNEXPECTED_TOKEN: an unexpected token was encountered
 * @G_VARIANT_PARSE_ERROR_UNKNOWN_KEYWORD: an unknown keyword was encountered
 * @G_VARIANT_PARSE_ERROR_UNTERMINATED_STRING_CONSTANT: unterminated string constant
 * @G_VARIANT_PARSE_ERROR_VALUE_EXPECTED: no value given
 *
 * Error codes returned by parsing text-format GVariants.
 */


/**
 * GVariantType:
 *
 * A type in the GVariant type system.
 * Two types may not be compared by value; use g_variant_type_equal() or
 * g_variant_type_is_subtype_of().  May be copied using
 * g_variant_type_copy() and freed using g_variant_type_free().
 */


/**
 * GVoidFunc:
 *
 * Declares a type of function which takes no arguments
 * and has no return value. It is used to specify the type
 * function passed to g_atexit().
 */


/**
 * GWeakNotify:
 * @data: data that was provided when the weak reference was established
 * @where_the_object_was: the object being finalized
 *
 * A #GWeakNotify function can be added to an object as a callback that gets
 * triggered when the object is finalized. Since the object is already being
 * finalized when the #GWeakNotify is called, there's not much you could do
 * with the object, apart from e.g. using its adress as hash-index or the like.
 */


/**
 * G_ALLOC_AND_FREE:
 *
 * Specifies the type of a #GMemChunk. Used in g_mem_chunk_new() and
 * g_mem_chunk_create() to specify that atoms will be freed
 * individually.
 */


/**
 * G_ALLOC_ONLY:
 *
 * Specifies the type of a #GMemChunk. Used in g_mem_chunk_new() and
 * g_mem_chunk_create() to specify that atoms will never be freed
 * individually.
 */


/**
 * G_BOOKMARK_FILE_ERROR:
 *
 * Error domain for bookmark file parsing.
 * Errors in this domain will be from the #GBookmarkFileError
 * enumeration. See #GError for information on error domains.
 */


/**
 * G_CALLBACK:
 * @f: a function pointer.
 *
 * Cast a function pointer to a #GCallback.
 */


/**
 * G_CCLOSURE_SWAP_DATA:
 * @cclosure: a #GCClosure
 *
 * Checks whether the user data of the #GCClosure should be passed as the
 * first parameter to the callback. See g_cclosure_new_swap().
 *
 * Returns: %TRUE if data has to be swapped.
 */


/**
 * G_CLOSURE_NEEDS_MARSHAL:
 * @closure: a #GClosure
 *
 * Check if the closure still needs a marshaller. See g_closure_set_marshal().
 *
 * Returns: %TRUE if a #GClosureMarshal marshaller has not yet been set on
 */


/**
 * G_CLOSURE_N_NOTIFIERS:
 * @cl: a #GClosure
 *
 * Get the total number of notifiers connected with the closure @cl.
 * The count includes the meta marshaller, the finalize and invalidate notifiers
 * and the marshal guards. Note that each guard counts as two notifiers.
 * See g_closure_set_meta_marshal(), g_closure_add_finalize_notifier(),
 * g_closure_add_invalidate_notifier() and g_closure_add_marshal_guards().
 *
 * Returns: number of notifiers
 */


/**
 * G_CONVERT_ERROR:
 *
 * Error domain for character set conversions. Errors in this domain will
 * be from the #GConvertError enumeration. See #GError for information on
 * error domains.
 */


/**
 * G_DATALIST_FLAGS_MASK:
 *
 * A bitmask that restricts the possible flags passed to
 * g_datalist_set_flags(). Passing a flags value where
 * flags & ~G_DATALIST_FLAGS_MASK != 0 is an error.
 */


/**
 * G_DEFINE_ABSTRACT_TYPE:
 * @TN: The name of the new type, in Camel case.
 * @t_n: The name of the new type, in lowercase, with words separated by '_'.
 * @T_P: The #GType of the parent type.
 *
 * A convenience macro for type implementations.
 * Similar to G_DEFINE_TYPE(), but defines an abstract type.
 * See G_DEFINE_TYPE_EXTENDED() for an example.
 *
 * Since: 2.4
 */


/**
 * G_DEFINE_ABSTRACT_TYPE_WITH_CODE:
 * @TN: The name of the new type, in Camel case.
 * @t_n: The name of the new type, in lowercase, with words separated by '_'.
 * @T_P: The #GType of the parent type.
 * @_C_: Custom code that gets inserted in the @type_name_get_type() function.
 *
 * A convenience macro for type implementations.
 * Similar to G_DEFINE_TYPE_WITH_CODE(), but defines an abstract type and allows you to
 * insert custom code into the *_get_type() function, e.g. interface implementations
 * via G_IMPLEMENT_INTERFACE(). See G_DEFINE_TYPE_EXTENDED() for an example.
 *
 * Since: 2.4
 */


/**
 * G_DEFINE_BOXED_TYPE:
 * @TypeName: The name of the new type, in Camel case.
 * @type_name: The name of the new type, in lowercase, with words separated by '_'.
 * @copy_func: the #GBoxedCopyFunc for the new type
 * @free_func: the #GBoxedFreeFunc for the new type
 *
 * A convenience macro for boxed type implementations, which defines a
 * type_name_get_type() function registering the boxed type.
 *
 * Since: 2.26
 */


/**
 * G_DEFINE_BOXED_TYPE_WITH_CODE:
 * @TypeName: The name of the new type, in Camel case.
 * @type_name: The name of the new type, in lowercase, with words separated by '_'.
 * @copy_func: the #GBoxedCopyFunc for the new type
 * @free_func: the #GBoxedFreeFunc for the new type
 * @_C_: Custom code that gets inserted in the *_get_type() function.
 *
 * A convenience macro for boxed type implementations.
 * Similar to G_DEFINE_BOXED_TYPE(), but allows to insert custom code into the
 * type_name_get_type() function, e.g. to register value transformations with
 * g_value_register_transform_func().
 *
 * Since: 2.26
 */


/**
 * G_DEFINE_DYNAMIC_TYPE:
 * @TN: The name of the new type, in Camel case.
 * @t_n: The name of the new type, in lowercase, with words separated by '_'.
 * @T_P: The #GType of the parent type.
 *
 * A convenience macro for dynamic type implementations, which declares a
 * class initialization function, an instance initialization function (see
 * #GTypeInfo for information about these) and a static variable named
 * it defines a <function>*_get_type()</function> and a static
 * <function>*_register_type()</function> function for use in your
 * <function>module_init()</function>.
 * See G_DEFINE_DYNAMIC_TYPE_EXTENDED() for an example.
 *
 * Since: 2.14
 */


/**
 * G_DEFINE_DYNAMIC_TYPE_EXTENDED:
 * @TypeName: The name of the new type, in Camel case.
 * @type_name: The name of the new type, in lowercase, with words separated by '_'.
 * @TYPE_PARENT: The #GType of the parent type.
 * @flags: #GTypeFlags to pass to g_type_module_register_type()
 * @CODE: Custom code that gets inserted in the *_get_type() function.
 *
 * A more general version of G_DEFINE_DYNAMIC_TYPE() which
 * allows to specify #GTypeFlags and custom code.
 * |[
 * G_DEFINE_DYNAMIC_TYPE_EXTENDED (GtkGadget,
 * gtk_gadget,
 * GTK_TYPE_THING,
 * 0,
 * G_IMPLEMENT_INTERFACE_DYNAMIC (TYPE_GIZMO,
 * gtk_gadget_gizmo_init));
 * ]|
 * expands to
 * |[
 * static void     gtk_gadget_init              (GtkGadget      *self);
 * static void     gtk_gadget_class_init        (GtkGadgetClass *klass);
 * static void     gtk_gadget_class_finalize    (GtkGadgetClass *klass);
 * static gpointer gtk_gadget_parent_class = NULL;
 * static GType    gtk_gadget_type_id = 0;
 * static void     gtk_gadget_class_intern_init (gpointer klass)
 * {
 * gtk_gadget_parent_class = g_type_class_peek_parent (klass);
 * gtk_gadget_class_init ((GtkGadgetClass*) klass);
 * }
 * GType
 * gtk_gadget_get_type (void)
 * {
 * return gtk_gadget_type_id;
 * }
 * static void
 * gtk_gadget_register_type (GTypeModule *type_module)
 * {
 * const GTypeInfo g_define_type_info = {
 * sizeof (GtkGadgetClass),
 * (GBaseInitFunc) NULL,
 * (GBaseFinalizeFunc) NULL,
 * (GClassInitFunc) gtk_gadget_class_intern_init,
 * (GClassFinalizeFunc) gtk_gadget_class_finalize,
 * NULL,   // class_data
 * sizeof (GtkGadget),
 * 0,      // n_preallocs
 * (GInstanceInitFunc) gtk_gadget_init,
 * NULL    // value_table
 * };
 * gtk_gadget_type_id = g_type_module_register_type (type_module,
 * GTK_TYPE_THING,
 * GtkGadget,
 * &g_define_type_info,
 * (GTypeFlags) flags);
 * {
 * const GInterfaceInfo g_implement_interface_info = {
 * (GInterfaceInitFunc) gtk_gadget_gizmo_init
 * };
 * g_type_module_add_interface (type_module, g_define_type_id, TYPE_GIZMO, &g_implement_interface_info);
 * }
 * }
 * ]|
 *
 * Since: 2.14
 */


/**
 * G_DEFINE_INTERFACE:
 * @TN: The name of the new type, in Camel case.
 * @t_n: The name of the new type, in lowercase, with words separated by '_'.
 * @T_P: The #GType of the prerequisite type for the interface, or 0 (%G_TYPE_INVALID) for no prerequisite type.
 *
 * A convenience macro for #GTypeInterface definitions, which declares
 * a default vtable initialization function and defines a *_get_type()
 * function.
 * The macro expects the interface initialization function to have the
 * name <literal>t_n ## _default_init</literal>, and the interface
 * structure to have the name <literal>TN ## Interface</literal>.
 *
 * Since: 2.24
 */


/**
 * G_DEFINE_INTERFACE_WITH_CODE:
 * @TN: The name of the new type, in Camel case.
 * @t_n: The name of the new type, in lowercase, with words separated by '_'.
 * @T_P: The #GType of the prerequisite type for the interface, or 0 (%G_TYPE_INVALID) for no prerequisite type.
 * @_C_: Custom code that gets inserted in the *_get_type() function.
 *
 * A convenience macro for #GTypeInterface definitions. Similar to
 * G_DEFINE_INTERFACE(), but allows you to insert custom code into the
 * *_get_type() function, e.g. additional interface implementations
 * via G_IMPLEMENT_INTERFACE(), or additional prerequisite types. See
 * G_DEFINE_TYPE_EXTENDED() for a similar example using
 * G_DEFINE_TYPE_WITH_CODE().
 *
 * Since: 2.24
 */


/**
 * G_DEFINE_POINTER_TYPE:
 * @TypeName: The name of the new type, in Camel case.
 * @type_name: The name of the new type, in lowercase, with words separated by '_'.
 *
 * A convenience macro for pointer type implementations, which defines a
 * type_name_get_type() function registering the pointer type.
 *
 * Since: 2.26
 */


/**
 * G_DEFINE_POINTER_TYPE_WITH_CODE:
 * @TypeName: The name of the new type, in Camel case.
 * @type_name: The name of the new type, in lowercase, with words separated by '_'.
 * @_C_: Custom code that gets inserted in the *_get_type() function.
 *
 * A convenience macro for pointer type implementations.
 * Similar to G_DEFINE_POINTER_TYPE(), but allows to insert custom code into the
 * type_name_get_type() function.
 *
 * Since: 2.26
 */


/**
 * G_DEFINE_TYPE:
 * @TN: The name of the new type, in Camel case.
 * @t_n: The name of the new type, in lowercase, with words separated by '_'.
 * @T_P: The #GType of the parent type.
 *
 * A convenience macro for type implementations, which declares a
 * class initialization function, an instance initialization function (see #GTypeInfo for information about
 * these) and a static variable named @t_n<!-- -->_parent_class pointing to the parent class. Furthermore, it defines
 * a *_get_type() function. See G_DEFINE_TYPE_EXTENDED() for an example.
 *
 * Since: 2.4
 */


/**
 * G_DEFINE_TYPE_EXTENDED:
 * @TN: The name of the new type, in Camel case.
 * @t_n: The name of the new type, in lowercase, with words separated by '_'.
 * @T_P: The #GType of the parent type.
 * @_f_: #GTypeFlags to pass to g_type_register_static()
 * @_C_: Custom code that gets inserted in the *_get_type() function.
 *
 * The most general convenience macro for type implementations, on which
 * G_DEFINE_TYPE(), etc are based.
 * |[
 * G_DEFINE_TYPE_EXTENDED (GtkGadget,
 * gtk_gadget,
 * GTK_TYPE_WIDGET,
 * 0,
 * G_IMPLEMENT_INTERFACE (TYPE_GIZMO,
 * gtk_gadget_gizmo_init));
 * ]|
 * expands to
 * |[
 * static void     gtk_gadget_init       (GtkGadget      *self);
 * static void     gtk_gadget_class_init (GtkGadgetClass *klass);
 * static gpointer gtk_gadget_parent_class = NULL;
 * static void     gtk_gadget_class_intern_init (gpointer klass)
 * {
 * gtk_gadget_parent_class = g_type_class_peek_parent (klass);
 * gtk_gadget_class_init ((GtkGadgetClass*) klass);
 * }
 * GType
 * gtk_gadget_get_type (void)
 * {
 * static volatile gsize g_define_type_id__volatile = 0;
 * if (g_once_init_enter (&g_define_type_id__volatile))
 * {
 * GType g_define_type_id =
 * g_type_register_static_simple (GTK_TYPE_WIDGET,
 * g_intern_static_string ("GtkGadget"),
 * sizeof (GtkGadgetClass),
 * (GClassInitFunc) gtk_gadget_class_intern_init,
 * sizeof (GtkGadget),
 * (GInstanceInitFunc) gtk_gadget_init,
 * (GTypeFlags) flags);
 * {
 * static const GInterfaceInfo g_implement_interface_info = {
 * (GInterfaceInitFunc) gtk_gadget_gizmo_init
 * };
 * g_type_add_interface_static (g_define_type_id, TYPE_GIZMO, &g_implement_interface_info);
 * }
 * g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
 * }
 * return g_define_type_id__volatile;
 * }
 * ]|
 * The only pieces which have to be manually provided are the definitions of
 * the instance and class structure and the definitions of the instance and
 * class init functions.
 *
 * Since: 2.4
 */


/**
 * G_DEFINE_TYPE_WITH_CODE:
 * @TN: The name of the new type, in Camel case.
 * @t_n: The name of the new type in lowercase, with words separated by '_'.
 * @T_P: The #GType of the parent type.
 * @_C_: Custom code that gets inserted in the *_get_type() function.
 *
 * A convenience macro for type implementations.
 * Similar to G_DEFINE_TYPE(), but allows you to insert custom code into the
 * *_get_type() function, e.g. interface implementations via G_IMPLEMENT_INTERFACE().
 * See G_DEFINE_TYPE_EXTENDED() for an example.
 *
 * Since: 2.4
 */


/**
 * G_ENUM_CLASS:
 * @class: a valid #GEnumClass
 *
 * Casts a derived #GEnumClass structure into a #GEnumClass structure.
 */


/**
 * G_ENUM_CLASS_TYPE:
 * @class: a #GEnumClass
 *
 * Get the type identifier from a given #GEnumClass structure.
 *
 * Returns: the #GType
 */


/**
 * G_ENUM_CLASS_TYPE_NAME:
 * @class: a #GEnumClass
 *
 * Get the static type name from a given #GEnumClass structure.
 *
 * Returns: the type name.
 */


/**
 * G_FLAGS_CLASS:
 * @class: a valid #GFlagsClass
 *
 * Casts a derived #GFlagsClass structure into a #GFlagsClass structure.
 */


/**
 * G_FLAGS_CLASS_TYPE:
 * @class: a #GFlagsClass
 *
 * Get the type identifier from a given #GFlagsClass structure.
 *
 * Returns: the #GType
 */


/**
 * G_FLAGS_CLASS_TYPE_NAME:
 * @class: a #GFlagsClass
 *
 * Get the static type name from a given #GFlagsClass structure.
 *
 * Returns: the type name.
 */


/**
 * G_IMPLEMENT_INTERFACE:
 * @TYPE_IFACE: The #GType of the interface to add
 * @iface_init: The interface init function
 *
 * A convenience macro to ease interface addition in the @_C_ section
 * of G_DEFINE_TYPE_WITH_CODE() or G_DEFINE_ABSTRACT_TYPE_WITH_CODE().
 * See G_DEFINE_TYPE_EXTENDED() for an example.
 * Note that this macro can only be used together with the G_DEFINE_TYPE_*
 * macros, since it depends on variable names from those macros.
 *
 * Since: 2.4
 */


/**
 * G_IMPLEMENT_INTERFACE_DYNAMIC:
 * @TYPE_IFACE: The #GType of the interface to add
 * @iface_init: The interface init function
 *
 * A convenience macro to ease interface addition in the @_C_ section
 * of G_DEFINE_DYNAMIC_TYPE_EXTENDED(). See G_DEFINE_DYNAMIC_TYPE_EXTENDED()
 * for an example.
 * Note that this macro can only be used together with the
 * G_DEFINE_DYNAMIC_TYPE_EXTENDED macros, since it depends on variable
 * names from that macro.
 *
 * Since: 2.24
 */


/**
 * G_INITIALLY_UNOWNED:
 * @object: Object which is subject to casting.
 *
 * Casts a #GInitiallyUnowned or derived pointer into a (GInitiallyUnowned*)
 * pointer. Depending on the current debugging level, this function may invoke
 * certain runtime checks to identify invalid casts.
 */


/**
 * G_INITIALLY_UNOWNED_CLASS:
 * @class: a valid #GInitiallyUnownedClass
 *
 * Casts a derived #GInitiallyUnownedClass structure into a
 * #GInitiallyUnownedClass structure.
 */


/**
 * G_INITIALLY_UNOWNED_GET_CLASS:
 * @object: a #GInitiallyUnowned instance.
 *
 * Get the class structure associated to a #GInitiallyUnowned instance.
 *
 * Returns: pointer to object class structure.
 */


/**
 * G_IO_CHANNEL_ERROR:
 *
 * Error domain for #GIOChannel operations. Errors in this domain will
 * be from the #GIOChannelError enumeration. See #GError for
 * information on error domains.
 */


/**
 * G_IS_ENUM_CLASS:
 * @class: a #GEnumClass
 *
 * Checks whether @class "is a" valid #GEnumClass structure of type %G_TYPE_ENUM
 * or derived.
 */


/**
 * G_IS_FLAGS_CLASS:
 * @class: a #GFlagsClass
 *
 * Checks whether @class "is a" valid #GFlagsClass structure of type %G_TYPE_FLAGS
 * or derived.
 */


/**
 * G_IS_INITIALLY_UNOWNED:
 * @object: Instance to check for being a %G_TYPE_INITIALLY_UNOWNED.
 *
 * Checks whether a valid #GTypeInstance pointer is of type %G_TYPE_INITIALLY_UNOWNED.
 */


/**
 * G_IS_INITIALLY_UNOWNED_CLASS:
 * @class: a #GInitiallyUnownedClass
 *
 * Checks whether @class "is a" valid #GInitiallyUnownedClass structure of type
 * %G_TYPE_INITIALLY_UNOWNED or derived.
 */


/**
 * G_IS_OBJECT:
 * @object: Instance to check for being a %G_TYPE_OBJECT.
 *
 * Checks whether a valid #GTypeInstance pointer is of type %G_TYPE_OBJECT.
 */


/**
 * G_IS_OBJECT_CLASS:
 * @class: a #GObjectClass
 *
 * Checks whether @class "is a" valid #GObjectClass structure of type
 * %G_TYPE_OBJECT or derived.
 */


/**
 * G_IS_PARAM_SPEC:
 * @pspec: a #GParamSpec
 *
 * Checks whether @pspec "is a" valid #GParamSpec structure of type %G_TYPE_PARAM
 * or derived.
 */


/**
 * G_IS_PARAM_SPEC_BOOLEAN:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_BOOLEAN.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_BOXED:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_BOXED.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_CHAR:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_CHAR.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_CLASS:
 * @pclass: a #GParamSpecClass
 *
 * Checks whether @pclass "is a" valid #GParamSpecClass structure of type
 * %G_TYPE_PARAM or derived.
 */


/**
 * G_IS_PARAM_SPEC_DOUBLE:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_DOUBLE.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_ENUM:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_ENUM.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_FLAGS:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_FLAGS.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_FLOAT:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_FLOAT.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_GTYPE:
 * @pspec: a #GParamSpec
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_GTYPE.
 *
 * Since: 2.10
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_INT:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_INT.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_INT64:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_INT64.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_LONG:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_LONG.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_OBJECT:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_OBJECT.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_OVERRIDE:
 * @pspec: a #GParamSpec
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_OVERRIDE.
 *
 * Since: 2.4
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_PARAM:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_PARAM.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_POINTER:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_POINTER.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_STRING:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_STRING.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_UCHAR:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_UCHAR.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_UINT:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_UINT.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_UINT64:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_UINT64.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_ULONG:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_ULONG.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_UNICHAR:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_UNICHAR.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_VALUE_ARRAY:
 * @pspec: a valid #GParamSpec instance
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_VALUE_ARRAY.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_IS_PARAM_SPEC_VARIANT:
 * @pspec: a #GParamSpec
 *
 * Checks whether the given #GParamSpec is of type %G_TYPE_PARAM_VARIANT.
 *
 * Returns: %TRUE on success
 * Since: 2.26
 */


/**
 * G_IS_VALUE:
 * @value: A #GValue structure.
 *
 * Checks if @value is a valid and initialized #GValue structure.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_LOCK:
 * @name: the name of the lock.
 *
 * Works like g_mutex_lock(), but for a lock defined with
 * #G_LOCK_DEFINE.
 */


/**
 * G_LOCK_DEFINE:
 * @name: the name of the lock.
 *
 * The %G_LOCK_* macros provide a convenient interface to #GStaticMutex
 * with the advantage that they will expand to nothing in programs
 * compiled against a thread-disabled GLib, saving code and memory
 * there. #G_LOCK_DEFINE defines a lock. It can appear anywhere
 * variable definitions may appear in programs, i.e. in the first block
 * of a function or outside of functions. The @name parameter will be
 * mangled to get the name of the #GStaticMutex. This means that you
 * can use names of existing variables as the parameter - e.g. the name
 * of the variable you intent to protect with the lock. Look at our
 * <function>give_me_next_number()</function> example using the
 * %G_LOCK_* macros:
 * <example>
 * <title>Using the %G_LOCK_* convenience macros</title>
 * <programlisting>
 * G_LOCK_DEFINE (current_number);
 * int
 * give_me_next_number (void)
 * {
 * static int current_number = 0;
 * int ret_val;
 * G_LOCK (current_number);
 * ret_val = current_number = calc_next_number (current_number);
 * G_UNLOCK (current_number);
 * return ret_val;
 * }
 * </programlisting>
 * </example>
 */


/**
 * G_LOCK_DEFINE_STATIC:
 * @name: the name of the lock.
 *
 * This works like #G_LOCK_DEFINE, but it creates a static object.
 */


/**
 * G_LOCK_EXTERN:
 * @name: the name of the lock.
 *
 * This declares a lock, that is defined with #G_LOCK_DEFINE in another
 * module.
 */


/**
 * G_MARKUP_ERROR:
 *
 * Error domain for markup parsing.
 * Errors in this domain will be from the #GMarkupError enumeration.
 * See #GError for information on error domains.
 */


/**
 * G_NODE_IS_LEAF:
 * @node: a #GNode
 *
 * Returns %TRUE if a #GNode is a leaf node.
 * (i.e. it has no children)
 *
 * Returns: %TRUE if the #GNode is a leaf node
 */


/**
 * G_NODE_IS_ROOT:
 * @node: a #GNode
 *
 * Returns %TRUE if a #GNode is the root of a tree.
 * (i.e. it has no parent or siblings)
 *
 * Returns: %TRUE if the #GNode is the root of a tree
 */


/**
 * G_OBJECT:
 * @object: Object which is subject to casting.
 *
 * Casts a #GObject or derived pointer into a (GObject*) pointer.
 * Depending on the current debugging level, this function may invoke
 * certain runtime checks to identify invalid casts.
 */


/**
 * G_OBJECT_CLASS:
 * @class: a valid #GObjectClass
 *
 * Casts a derived #GObjectClass structure into a #GObjectClass structure.
 */


/**
 * G_OBJECT_CLASS_NAME:
 * @class: a valid #GObjectClass
 *
 * Return the name of a class structure's type.
 * should not be freed.
 *
 * Returns: Type name of @class. The string is owned by the type system and
 */


/**
 * G_OBJECT_CLASS_TYPE:
 * @class: a valid #GObjectClass
 *
 * Get the type id of a class structure.
 *
 * Returns: Type id of @class.
 */


/**
 * G_OBJECT_GET_CLASS:
 * @object: a #GObject instance.
 *
 * Get the class structure associated to a #GObject instance.
 *
 * Returns: pointer to object class structure.
 */


/**
 * G_OBJECT_TYPE:
 * @object: Object to return the type id for.
 *
 * Get the type id of an object.
 *
 * Returns: Type id of @object.
 */


/**
 * G_OBJECT_TYPE_NAME:
 * @object: Object to return the type name for.
 *
 * Get the name of an object's type.
 * should not be freed.
 *
 * Returns: Type name of @object. The string is owned by the type system and
 */


/**
 * G_OBJECT_WARN_INVALID_PROPERTY_ID:
 * @object: the #GObject on which set_property() or get_property() was called
 * @property_id: the numeric id of the property
 * @pspec: the #GParamSpec of the property
 *
 * This macro should be used to emit a standard warning about unexpected
 * properties in set_property() and get_property() implementations.
 */


/**
 * G_ONCE_INIT:
 *
 * A #GOnce must be initialized with this macro before it can be used.
 * <informalexample>
 * <programlisting>
 * GOnce my_once = G_ONCE_INIT;
 * </programlisting>
 * </informalexample>
 *
 * Since: 2.4
 */


/**
 * G_OPTION_ERROR:
 *
 * Error domain for option parsing. Errors in this domain will
 * be from the #GOptionError enumeration. See #GError for information on
 * error domains.
 */


/**
 * G_OPTION_REMAINING:
 *
 * If a long option in the main group has this name, it is not treated as a
 * regular option. Instead it collects all non-option arguments which would
 * otherwise be left in <literal>argv</literal>. The option must be of type
 * %G_OPTION_ARG_CALLBACK, %G_OPTION_ARG_STRING_ARRAY
 * or %G_OPTION_ARG_FILENAME_ARRAY.
 * Using #G_OPTION_REMAINING instead of simply scanning <literal>argv</literal>
 * for leftover arguments has the advantage that GOption takes care of
 * necessary encoding conversions for strings or filenames.
 *
 * Since: 2.6
 */


/**
 * G_PARAM_MASK:
 *
 * Mask containing the bits of #GParamSpec.flags which are reserved for GLib.
 */


/**
 * G_PARAM_READWRITE:
 *
 * #GParamFlags value alias for %G_PARAM_READABLE | %G_PARAM_WRITABLE.
 */


/**
 * G_PARAM_SPEC:
 * @pspec: a valid #GParamSpec
 *
 * Casts a derived #GParamSpec object (e.g. of type #GParamSpecInt) into
 * a #GParamSpec object.
 */


/**
 * G_PARAM_SPEC_BOOLEAN:
 * @pspec: a valid #GParamSpec instance
 *
 * Cast a #GParamSpec instance into a #GParamSpecBoolean.
 */


/**
 * G_PARAM_SPEC_BOXED:
 * @pspec: a valid #GParamSpec instance
 *
 * Cast a #GParamSpec instance into a #GParamSpecBoxed.
 */


/**
 * G_PARAM_SPEC_CHAR:
 * @pspec: a valid #GParamSpec instance
 *
 * Cast a #GParamSpec instance into a #GParamSpecChar.
 */


/**
 * G_PARAM_SPEC_CLASS:
 * @pclass: a valid #GParamSpecClass
 *
 * Casts a derived #GParamSpecClass structure into a #GParamSpecClass structure.
 */


/**
 * G_PARAM_SPEC_DOUBLE:
 * @pspec: a valid #GParamSpec instance
 *
 * Cast a #GParamSpec instance into a #GParamSpecDouble.
 */


/**
 * G_PARAM_SPEC_ENUM:
 * @pspec: a valid #GParamSpec instance
 *
 * Cast a #GParamSpec instance into a #GParamSpecEnum.
 */


/**
 * G_PARAM_SPEC_FLAGS:
 * @pspec: a valid #GParamSpec instance
 *
 * Cast a #GParamSpec instance into a #GParamSpecFlags.
 */


/**
 * G_PARAM_SPEC_FLOAT:
 * @pspec: a valid #GParamSpec instance
 *
 * Cast a #GParamSpec instance into a #GParamSpecFloat.
 */


/**
 * G_PARAM_SPEC_GET_CLASS:
 * @pspec: a valid #GParamSpec
 *
 * Retrieves the #GParamSpecClass of a #GParamSpec.
 */


/**
 * G_PARAM_SPEC_GTYPE:
 * @pspec: a #GParamSpec
 *
 * Casts a #GParamSpec into a #GParamSpecGType.
 *
 * Since: 2.10
 */


/**
 * G_PARAM_SPEC_INT:
 * @pspec: a valid #GParamSpec instance
 *
 * Cast a #GParamSpec instance into a #GParamSpecInt.
 */


/**
 * G_PARAM_SPEC_INT64:
 * @pspec: a valid #GParamSpec instance
 *
 * Cast a #GParamSpec instance into a #GParamSpecInt64.
 */


/**
 * G_PARAM_SPEC_LONG:
 * @pspec: a valid #GParamSpec instance
 *
 * Cast a #GParamSpec instance into a #GParamSpecLong.
 */


/**
 * G_PARAM_SPEC_OBJECT:
 * @pspec: a valid #GParamSpec instance
 *
 * Casts a #GParamSpec instance into a #GParamSpecObject.
 */


/**
 * G_PARAM_SPEC_OVERRIDE:
 * @pspec: a #GParamSpec
 *
 * Casts a #GParamSpec into a #GParamSpecOverride.
 *
 * Since: 2.4
 */


/**
 * G_PARAM_SPEC_PARAM:
 * @pspec: a valid #GParamSpec instance
 *
 * Casts a #GParamSpec instance into a #GParamSpecParam.
 */


/**
 * G_PARAM_SPEC_POINTER:
 * @pspec: a valid #GParamSpec instance
 *
 * Casts a #GParamSpec instance into a #GParamSpecPointer.
 */


/**
 * G_PARAM_SPEC_STRING:
 * @pspec: a valid #GParamSpec instance
 *
 * Casts a #GParamSpec instance into a #GParamSpecString.
 */


/**
 * G_PARAM_SPEC_TYPE:
 * @pspec: a valid #GParamSpec
 *
 * Retrieves the #GType of this @pspec.
 */


/**
 * G_PARAM_SPEC_TYPE_NAME:
 * @pspec: a valid #GParamSpec
 *
 * Retrieves the #GType name of this @pspec.
 */


/**
 * G_PARAM_SPEC_UCHAR:
 * @pspec: a valid #GParamSpec instance
 *
 * Cast a #GParamSpec instance into a #GParamSpecUChar.
 */


/**
 * G_PARAM_SPEC_UINT:
 * @pspec: a valid #GParamSpec instance
 *
 * Cast a #GParamSpec instance into a #GParamSpecUInt.
 */


/**
 * G_PARAM_SPEC_UINT64:
 * @pspec: a valid #GParamSpec instance
 *
 * Cast a #GParamSpec instance into a #GParamSpecUInt64.
 */


/**
 * G_PARAM_SPEC_ULONG:
 * @pspec: a valid #GParamSpec instance
 *
 * Cast a #GParamSpec instance into a #GParamSpecULong.
 */


/**
 * G_PARAM_SPEC_UNICHAR:
 * @pspec: a valid #GParamSpec instance
 *
 * Cast a #GParamSpec instance into a #GParamSpecUnichar.
 */


/**
 * G_PARAM_SPEC_VALUE_ARRAY:
 * @pspec: a valid #GParamSpec instance
 *
 * Cast a #GParamSpec instance into a #GParamSpecValueArray.
 */


/**
 * G_PARAM_SPEC_VALUE_TYPE:
 * @pspec: a valid #GParamSpec
 *
 * Retrieves the #GType to initialize a #GValue for this parameter.
 */


/**
 * G_PARAM_SPEC_VARIANT:
 * @pspec: a #GParamSpec
 *
 * Casts a #GParamSpec into a #GParamSpecVariant.
 *
 * Since: 2.26
 */


/**
 * G_PARAM_STATIC_STRINGS:
 *
 * #GParamFlags value alias for %G_PARAM_STATIC_NAME | %G_PARAM_STATIC_NICK | %G_PARAM_STATIC_BLURB.
 * Since 2.13.0
 */


/**
 * G_PARAM_USER_SHIFT:
 *
 * Minimum shift count to be used for user defined flags, to be stored in
 * #GParamSpec.flags. The maximum allowed is 30 + G_PARAM_USER_SHIFT.
 */


/**
 * G_PRIORITY_DEFAULT:
 *
 * Use this for default priority event sources.
 * In GLib this priority is used when adding timeout functions
 * with g_timeout_add(). In GDK this priority is used for events
 * from the X server.
 */


/**
 * G_PRIORITY_DEFAULT_IDLE:
 *
 * Use this for default priority idle functions.
 * In GLib this priority is used when adding idle functions with
 * g_idle_add().
 */


/**
 * G_PRIORITY_HIGH:
 *
 * Use this for high priority event sources.
 * It is not used within GLib or GTK+.
 */


/**
 * G_PRIORITY_HIGH_IDLE:
 *
 * Use this for high priority idle functions.
 * GTK+ uses #G_PRIORITY_HIGH_IDLE + 10 for resizing operations,
 * and #G_PRIORITY_HIGH_IDLE + 20 for redrawing operations. (This is
 * done to ensure that any pending resizes are processed before any
 * pending redraws, so that widgets are not redrawn twice unnecessarily.)
 */


/**
 * G_PRIORITY_LOW:
 *
 * Use this for very low priority background tasks.
 * It is not used within GLib or GTK+.
 */


/**
 * G_REGEX_ERROR:
 *
 * Error domain for regular expressions. Errors in this domain will be
 * from the #GRegexError enumeration. See #GError for information on
 * error domains.
 *
 * Since: 2.14
 */


/**
 * G_SHELL_ERROR:
 *
 * Error domain for shell functions. Errors in this domain will be from
 * the #GShellError enumeration. See #GError for information on error
 * domains.
 */


/**
 * G_SIGNAL_FLAGS_MASK:
 *
 * A mask for all #GSignalFlags bits.
 */


/**
 * G_SIGNAL_MATCH_MASK:
 *
 * A mask for all #GSignalMatchType bits.
 */


/**
 * G_SIGNAL_TYPE_STATIC_SCOPE:
 *
 * This macro flags signal argument types for which the signal system may
 * assume that instances thereof remain persistent across all signal emissions
 * they are used in. This is only useful for non ref-counted, value-copy types.
 * To flag a signal argument in this way, add
 * <literal>| G_SIGNAL_TYPE_STATIC_SCOPE</literal> to the corresponding argument
 * of g_signal_new().
 * |[
 * g_signal_new ("size_request",
 * G_TYPE_FROM_CLASS (gobject_class),
 * G_SIGNAL_RUN_FIRST,
 * G_STRUCT_OFFSET (GtkWidgetClass, size_request),
 * NULL, NULL,
 * _gtk_marshal_VOID__BOXED,
 * G_TYPE_NONE, 1,
 * GTK_TYPE_REQUISITION | G_SIGNAL_TYPE_STATIC_SCOPE);
 * ]|
 */


/**
 * G_STATIC_MUTEX_INIT:
 *
 * A #GStaticMutex must be initialized with this macro, before it can
 * be used. This macro can used be to initialize a variable, but it
 * cannot be assigned to a variable. In that case you have to use
 * g_static_mutex_init().
 * <informalexample>
 * <programlisting>
 * GStaticMutex my_mutex = G_STATIC_MUTEX_INIT;
 * </programlisting>
 * </informalexample>
 */


/**
 * G_STATIC_PRIVATE_INIT:
 *
 * Every #GStaticPrivate must be initialized with this macro, before it
 * can be used.
 * <informalexample>
 * <programlisting>
 * GStaticPrivate my_private = G_STATIC_PRIVATE_INIT;
 * </programlisting>
 * </informalexample>
 */


/**
 * G_STATIC_REC_MUTEX_INIT:
 *
 * A #GStaticRecMutex must be initialized with this macro before it can
 * be used. This macro can used be to initialize a variable, but it
 * cannot be assigned to a variable. In that case you have to use
 * g_static_rec_mutex_init().
 * <informalexample>
 * <programlisting>
 * GStaticRecMutex my_mutex = G_STATIC_REC_MUTEX_INIT;
 * </programlisting>
 */


/**
 * G_STATIC_RW_LOCK_INIT:
 *
 * A #GStaticRWLock must be initialized with this macro before it can
 * be used. This macro can used be to initialize a variable, but it
 * cannot be assigned to a variable. In that case you have to use
 * g_static_rw_lock_init().
 * <informalexample>
 * <programlisting>
 * GStaticRWLock my_lock = G_STATIC_RW_LOCK_INIT;
 * </programlisting>
 * </informalexample>
 */


/**
 * G_THREADS_ENABLED:
 *
 * This macro is defined if GLib was compiled with thread support. This
 * does not necessarily mean that there is a thread implementation
 * available, but it does mean that the infrastructure is in place and
 * that once you provide a thread implementation to g_thread_init(),
 * GLib will be multi-thread safe. If #G_THREADS_ENABLED is not
 * defined, then Glib is not, and cannot be, multi-thread safe.
 */


/**
 * G_THREADS_IMPL_NONE:
 *
 * This macro is defined if no thread implementation is used. You can,
 * however, provide one to g_thread_init() to make GLib multi-thread
 * safe.
 */


/**
 * G_THREADS_IMPL_POSIX:
 *
 * This macro is defined if POSIX style threads are used.
 */


/**
 * G_THREAD_ERROR:
 *
 * The error domain of the GLib thread subsystem.
 */


/**
 * G_TIME_SPAN_DAY:
 *
 * Evaluates to a time span of one day.
 *
 * Since: 2.26
 */


/**
 * G_TIME_SPAN_HOUR:
 *
 * Evaluates to a time span of one hour.
 *
 * Since: 2.26
 */


/**
 * G_TIME_SPAN_MILLISECOND:
 *
 * Evaluates to a time span of one millisecond.
 *
 * Since: 2.26
 */


/**
 * G_TIME_SPAN_MINUTE:
 *
 * Evaluates to a time span of one minute.
 *
 * Since: 2.26
 */


/**
 * G_TIME_SPAN_SECOND:
 *
 * Evaluates to a time span of one second.
 *
 * Since: 2.26
 */


/**
 * G_TRYLOCK:
 * @name: the name of the lock.
 * @Returns: %TRUE, if the lock could be locked.
 *
 * Works like g_mutex_trylock(), but for a lock defined with
 * #G_LOCK_DEFINE.
 */


/**
 * G_TYPE_ARRAY:
 *
 * The #GType for a boxed type holding a #GArray reference.
 *
 * Since: 2.22
 */


/**
 * G_TYPE_BOOLEAN:
 *
 * The fundamental type corresponding to #gboolean.
 */


/**
 * G_TYPE_BOXED:
 *
 * The fundamental type from which all boxed types are derived.
 */


/**
 * G_TYPE_BYTE_ARRAY:
 *
 * The #GType for a boxed type holding a #GByteArray reference.
 *
 * Since: 2.22
 */


/**
 * G_TYPE_CHAR:
 *
 * The fundamental type corresponding to #gchar.
 * The type designated by G_TYPE_CHAR is unconditionally an 8-bit signed integer.
 * This may or may not be the same type a the C type "gchar".
 */


/**
 * G_TYPE_CHECK_CLASS_CAST:
 * @g_class: Location of a #GTypeClass structure.
 * @g_type: The type to be returned.
 * @c_type: The corresponding C type of class structure of @g_type.
 *
 * Checks that @g_class is a class structure of the type identified by @g_type
 * and issues a warning if this is not the case. Returns @g_class casted
 * to a pointer to @c_type.
 * This macro should only be used in type implementations.
 */


/**
 * G_TYPE_CHECK_CLASS_TYPE:
 * @g_class: Location of a #GTypeClass structure.
 * @g_type: The type to be checked.
 *
 * Checks if @g_class is a class structure of the type identified by
 * This macro should only be used in type implementations.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_TYPE_CHECK_INSTANCE:
 * @instance: Location of a #GTypeInstance structure.
 *
 * Checks if @instance is a valid #GTypeInstance structure,
 * otherwise issues a warning and returns %FALSE.
 * This macro should only be used in type implementations.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_TYPE_CHECK_INSTANCE_CAST:
 * @instance: Location of a #GTypeInstance structure.
 * @g_type: The type to be returned.
 * @c_type: The corresponding C type of @g_type.
 *
 * Checks that @instance is an instance of the type identified by @g_type
 * and issues a warning if this is not the case. Returns @instance casted
 * to a pointer to @c_type.
 * This macro should only be used in type implementations.
 */


/**
 * G_TYPE_CHECK_INSTANCE_TYPE:
 * @instance: Location of a #GTypeInstance structure.
 * @g_type: The type to be checked
 *
 * Checks if @instance is an instance of the type identified by @g_type.
 * This macro should only be used in type implementations.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_TYPE_CHECK_VALUE:
 * @value: a #GValue
 *
 * Checks if @value has been initialized to hold values
 * of a value type.
 * This macro should only be used in type implementations.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_TYPE_CHECK_VALUE_TYPE:
 * @value: a #GValue
 * @g_type: The type to be checked.
 *
 * Checks if @value has been initialized to hold values
 * of type @g_type.
 * This macro should only be used in type implementations.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_TYPE_CLASS_GET_PRIVATE:
 * @klass: the class of a type deriving from @private_type.
 * @g_type: the type identifying which private data to retrieve.
 * @c_type: The C type for the private structure.
 *
 * Gets the private class structure for a particular type.
 * The private structure must have been registered in the
 * get_type() function with g_type_add_class_private().
 * This macro should only be used in type implementations.
 *
 * Since: 2.24
 * Returns: a pointer to the private data structure.
 */


/**
 * G_TYPE_CLOSURE:
 *
 * The #GType for #GClosure.
 */


/**
 * G_TYPE_DATE:
 *
 * The #GType for #GDate.
 */


/**
 * G_TYPE_DATE_TIME:
 *
 * The #GType for a boxed type holding a #GDateTime.
 *
 * Since: 2.26
 */


/**
 * G_TYPE_DOUBLE:
 *
 * The fundamental type corresponding to #gdouble.
 */


/**
 * G_TYPE_ENUM:
 *
 * The fundamental type from which all enumeration types are derived.
 */


/**
 * G_TYPE_ERROR:
 *
 * The #GType for a boxed type holding a #GError.
 *
 * Since: 2.26
 */


/**
 * G_TYPE_FLAGS:
 *
 * The fundamental type from which all flags types are derived.
 */


/**
 * G_TYPE_FLAG_RESERVED_ID_BIT:
 *
 * A bit in the type number that's supposed to be left untouched.
 */


/**
 * G_TYPE_FLOAT:
 *
 * The fundamental type corresponding to #gfloat.
 */


/**
 * G_TYPE_FROM_CLASS:
 * @g_class: Location of a valid #GTypeClass structure.
 *
 * Get the type identifier from a given @class structure.
 * This macro should only be used in type implementations.
 *
 * Returns: the #GType
 */


/**
 * G_TYPE_FROM_INSTANCE:
 * @instance: Location of a valid #GTypeInstance structure.
 *
 * Get the type identifier from a given @instance structure.
 * This macro should only be used in type implementations.
 *
 * Returns: the #GType
 */


/**
 * G_TYPE_FROM_INTERFACE:
 * @g_iface: Location of a valid #GTypeInterface structure.
 *
 * Get the type identifier from a given @interface structure.
 * This macro should only be used in type implementations.
 *
 * Returns: the #GType
 */


/**
 * G_TYPE_FUNDAMENTAL:
 * @type: A #GType value.
 *
 * The fundamental type which is the ancestor of @type.
 * Fundamental types are types that serve as ultimate bases for the derived types,
 * thus they are the roots of distinct inheritance hierarchies.
 */


/**
 * G_TYPE_FUNDAMENTAL_MAX:
 *
 * An integer constant that represents the number of identifiers reserved
 * for types that are assigned at compile-time.
 */


/**
 * G_TYPE_FUNDAMENTAL_SHIFT:
 *
 * Shift value used in converting numbers to type IDs.
 */


/**
 * G_TYPE_GSTRING:
 *
 * The #GType for #GString.
 */


/**
 * G_TYPE_GTYPE:
 *
 * The type for #GType.
 */


/**
 * G_TYPE_HASH_TABLE:
 *
 * The #GType for a boxed type holding a #GHashTable reference.
 *
 * Since: 2.10
 */


/**
 * G_TYPE_HAS_VALUE_TABLE:
 * @type: A #GType value.
 *
 * Checks if @type has a #GTypeValueTable.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_TYPE_INITIALLY_UNOWNED:
 *
 * The type for #GInitiallyUnowned.
 */


/**
 * G_TYPE_INSTANCE_GET_CLASS:
 * @instance: Location of the #GTypeInstance structure.
 * @g_type: The #GType of the class to be returned.
 * @c_type: The C type of the class structure.
 *
 * Get the class structure of a given @instance, casted
 * to a specified ancestor type @g_type of the instance.
 * Note that while calling a GInstanceInitFunc(), the class pointer gets
 * modified, so it might not always return the expected pointer.
 * This macro should only be used in type implementations.
 *
 * Returns: a pointer to the class structure
 */


/**
 * G_TYPE_INSTANCE_GET_INTERFACE:
 * @instance: Location of the #GTypeInstance structure.
 * @g_type: The #GType of the interface to be returned.
 * @c_type: The C type of the interface structure.
 *
 * Get the interface structure for interface @g_type of a given @instance.
 * This macro should only be used in type implementations.
 *
 * Returns: a pointer to the interface structure
 */


/**
 * G_TYPE_INSTANCE_GET_PRIVATE:
 * @instance: the instance of a type deriving from @private_type.
 * @g_type: the type identifying which private data to retrieve.
 * @c_type: The C type for the private structure.
 *
 * Gets the private structure for a particular type.
 * The private structure must have been registered in the
 * class_init function with g_type_class_add_private().
 * This macro should only be used in type implementations.
 *
 * Since: 2.4
 * Returns: a pointer to the private data structure.
 */


/**
 * G_TYPE_INT:
 *
 * The fundamental type corresponding to #gint.
 */


/**
 * G_TYPE_INT64:
 *
 * The fundamental type corresponding to #gint64.
 */


/**
 * G_TYPE_INTERFACE:
 *
 * The fundamental type from which all interfaces are derived.
 */


/**
 * G_TYPE_INVALID:
 *
 * An invalid #GType used as error return value in some functions which return
 * a #GType.
 */


/**
 * G_TYPE_IO_CHANNEL:
 *
 * The #GType for #GIOChannel.
 */


/**
 * G_TYPE_IO_CONDITION:
 *
 * The #GType for #GIOCondition.
 */


/**
 * G_TYPE_IS_ABSTRACT:
 * @type: A #GType value.
 *
 * Checks if @type is an abstract type.  An abstract type cannot be
 * instantiated and is normally used as an abstract base class for
 * derived classes.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_TYPE_IS_CLASSED:
 * @type: A #GType value.
 *
 * Checks if @type is a classed type.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_TYPE_IS_DEEP_DERIVABLE:
 * @type: A #GType value.
 *
 * Checks if @type is a deep derivable type.  A deep derivable type
 * can be used as the base class of a deep (multi-level) class hierarchy.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_TYPE_IS_DERIVABLE:
 * @type: A #GType value.
 *
 * Checks if @type is a derivable type.  A derivable type can
 * be used as the base class of a flat (single-level) class hierarchy.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_TYPE_IS_DERIVED:
 * @type: A #GType value.
 *
 * Checks if @type is derived (or in object-oriented terminology:
 * inherited) from another type (this holds true for all non-fundamental
 * types).
 *
 * Returns: %TRUE on success.
 */


/**
 * G_TYPE_IS_ENUM:
 * @type: a #GType ID.
 *
 * Checks whether @type "is a" %G_TYPE_ENUM.
 *
 * Returns: %TRUE if @type "is a" %G_TYPE_ENUM.
 */


/**
 * G_TYPE_IS_FLAGS:
 * @type: a #GType ID.
 *
 * Checks whether @type "is a" %G_TYPE_FLAGS.
 *
 * Returns: %TRUE if @type "is a" %G_TYPE_FLAGS.
 */


/**
 * G_TYPE_IS_FUNDAMENTAL:
 * @type: A #GType value.
 *
 * Checks if @type is a fundamental type.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_TYPE_IS_INSTANTIATABLE:
 * @type: A #GType value.
 *
 * Checks if @type can be instantiated.  Instantiation is the
 * process of creating an instance (object) of this type.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_TYPE_IS_INTERFACE:
 * @type: A #GType value.
 *
 * Checks if @type is an interface type.
 * An interface type provides a pure API, the implementation
 * of which is provided by another type (which is then said to conform
 * to the interface).  GLib interfaces are somewhat analogous to Java
 * interfaces and C++ classes containing only pure virtual functions,
 * with the difference that GType interfaces are not derivable (but see
 * g_type_interface_add_prerequisite() for an alternative).
 *
 * Returns: %TRUE on success.
 */


/**
 * G_TYPE_IS_OBJECT:
 * @type: Type id to check
 *
 * Check if the passed in type id is a %G_TYPE_OBJECT or derived from it.
 *
 * Returns: %FALSE or %TRUE, indicating whether @type is a %G_TYPE_OBJECT.
 */


/**
 * G_TYPE_IS_PARAM:
 * @type: a #GType ID
 *
 * Checks whether @type "is a" %G_TYPE_PARAM.
 */


/**
 * G_TYPE_IS_VALUE:
 * @type: A #GType value.
 *
 * Checks whether the passed in type ID can be used for g_value_init().
 * That is, this macro checks whether this type provides an implementation
 * of the #GTypeValueTable functions required for a type to create a #GValue of.
 *
 * Returns: Whether @type is suitable as a #GValue type.
 */


/**
 * G_TYPE_IS_VALUE_ABSTRACT:
 * @type: A #GType value.
 *
 * Checks if @type is an abstract value type.  An abstract value type introduces
 * a value table, but can't be used for g_value_init() and is normally used as
 * an abstract base type for derived value types.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_TYPE_IS_VALUE_TYPE:
 * @type: A #GType value.
 *
 * Checks if @type is a value type and can be used with g_value_init().
 *
 * Returns: %TRUE on success.
 */


/**
 * G_TYPE_LONG:
 *
 * The fundamental type corresponding to #glong.
 */


/**
 * G_TYPE_MAKE_FUNDAMENTAL:
 * @x: the fundamental type number.
 *
 * Get the type ID for the fundamental type number @x.
 * Use g_type_fundamental_next() instead of this macro to create new fundamental
 * types.
 *
 * Returns: the GType
 */


/**
 * G_TYPE_NONE:
 *
 * A fundamental type which is used as a replacement for the C
 * <literal>void</literal> return type.
 */


/**
 * G_TYPE_OBJECT:
 *
 * The fundamental type for #GObject.
 */


/**
 * G_TYPE_PARAM:
 *
 * The fundamental type from which all #GParamSpec types are derived.
 */


/**
 * G_TYPE_PARAM_BOOLEAN:
 *
 * The #GType of #GParamSpecBoolean.
 */


/**
 * G_TYPE_PARAM_BOXED:
 *
 * The #GType of #GParamSpecBoxed.
 */


/**
 * G_TYPE_PARAM_CHAR:
 *
 * The #GType of #GParamSpecChar.
 */


/**
 * G_TYPE_PARAM_DOUBLE:
 *
 * The #GType of #GParamSpecDouble.
 */


/**
 * G_TYPE_PARAM_ENUM:
 *
 * The #GType of #GParamSpecEnum.
 */


/**
 * G_TYPE_PARAM_FLAGS:
 *
 * The #GType of #GParamSpecFlags.
 */


/**
 * G_TYPE_PARAM_FLOAT:
 *
 * The #GType of #GParamSpecFloat.
 */


/**
 * G_TYPE_PARAM_GTYPE:
 *
 * The #GType of #GParamSpecGType.
 *
 * Since: 2.10
 */


/**
 * G_TYPE_PARAM_INT:
 *
 * The #GType of #GParamSpecInt.
 */


/**
 * G_TYPE_PARAM_INT64:
 *
 * The #GType of #GParamSpecInt64.
 */


/**
 * G_TYPE_PARAM_LONG:
 *
 * The #GType of #GParamSpecLong.
 */


/**
 * G_TYPE_PARAM_OBJECT:
 *
 * The #GType of #GParamSpecObject.
 */


/**
 * G_TYPE_PARAM_OVERRIDE:
 *
 * The #GType of #GParamSpecOverride.
 *
 * Since: 2.4
 */


/**
 * G_TYPE_PARAM_PARAM:
 *
 * The #GType of #GParamSpecParam.
 */


/**
 * G_TYPE_PARAM_POINTER:
 *
 * The #GType of #GParamSpecPointer.
 */


/**
 * G_TYPE_PARAM_STRING:
 *
 * The #GType of #GParamSpecString.
 */


/**
 * G_TYPE_PARAM_UCHAR:
 *
 * The #GType of #GParamSpecUChar.
 */


/**
 * G_TYPE_PARAM_UINT:
 *
 * The #GType of #GParamSpecUInt.
 */


/**
 * G_TYPE_PARAM_UINT64:
 *
 * The #GType of #GParamSpecUInt64.
 */


/**
 * G_TYPE_PARAM_ULONG:
 *
 * The #GType of #GParamSpecULong.
 */


/**
 * G_TYPE_PARAM_UNICHAR:
 *
 * The #GType of #GParamSpecUnichar.
 */


/**
 * G_TYPE_PARAM_VALUE_ARRAY:
 *
 * The #GType of #GParamSpecValueArray.
 */


/**
 * G_TYPE_PARAM_VARIANT:
 *
 * The #GType of #GParamSpecVariant.
 *
 * Since: 2.26
 */


/**
 * G_TYPE_POINTER:
 *
 * The fundamental type corresponding to #gpointer.
 */


/**
 * G_TYPE_PTR_ARRAY:
 *
 * The #GType for a boxed type holding a #GPtrArray reference.
 *
 * Since: 2.22
 */


/**
 * G_TYPE_REGEX:
 *
 * The #GType for a boxed type holding a #GRegex reference.
 *
 * Since: 2.14
 */


/**
 * G_TYPE_RESERVED_BSE_FIRST:
 *
 * First fundamental type number to create a new fundamental type id with
 * G_TYPE_MAKE_FUNDAMENTAL() reserved for BSE.
 */


/**
 * G_TYPE_RESERVED_BSE_LAST:
 *
 * Last fundamental type number reserved for BSE.
 */


/**
 * G_TYPE_RESERVED_GLIB_FIRST:
 *
 * First fundamental type number to create a new fundamental type id with
 * G_TYPE_MAKE_FUNDAMENTAL() reserved for GLib.
 */


/**
 * G_TYPE_RESERVED_GLIB_LAST:
 *
 * Last fundamental type number reserved for GLib.
 */


/**
 * G_TYPE_RESERVED_USER_FIRST:
 *
 * First available fundamental type number to create new fundamental
 * type id with G_TYPE_MAKE_FUNDAMENTAL().
 */


/**
 * G_TYPE_STRING:
 *
 * The fundamental type corresponding to nul-terminated C strings.
 */


/**
 * G_TYPE_STRV:
 *
 * The #GType for a boxed type holding a %NULL-terminated array of strings.
 * The code fragments in the following example show the use of a property of
 * type #G_TYPE_STRV with g_object_class_install_property(), g_object_set()
 * and g_object_get().
 * |[
 * g_object_class_install_property (object_class,
 * PROP_AUTHORS,
 * g_param_spec_boxed ("authors",
 * _("Authors"),
 * _("List of authors"),
 * G_TYPE_STRV,
 * G_PARAM_READWRITE));
 * gchar *authors[] = { "Owen", "Tim", NULL };
 * g_object_set (obj, "authors", authors, NULL);
 * gchar *writers[];
 * g_object_get (obj, "authors", &writers, NULL);
 * /&ast; do something with writers &ast;/
 * g_strfreev (writers);
 * ]|
 *
 * Since: 2.4
 */


/**
 * G_TYPE_UCHAR:
 *
 * The fundamental type corresponding to #guchar.
 */


/**
 * G_TYPE_UINT:
 *
 * The fundamental type corresponding to #guint.
 */


/**
 * G_TYPE_UINT64:
 *
 * The fundamental type corresponding to #guint64.
 */


/**
 * G_TYPE_ULONG:
 *
 * The fundamental type corresponding to #gulong.
 */


/**
 * G_TYPE_VALUE:
 *
 * The type ID of the "GValue" type which is a boxed type,
 * used to pass around pointers to GValues.
 */


/**
 * G_TYPE_VALUE_ARRAY:
 *
 * The type ID of the "GValueArray" type which is a boxed type,
 * used to pass around pointers to GValueArrays.
 */


/**
 * G_TYPE_VARIANT:
 *
 * The fundamental type corresponding to #GVariant.
 * All floating #GVariant instances passed through the #GType system are
 * consumed.
 * Note that callbacks in closures, and signal handlers
 * for signals of return type %G_TYPE_VARIANT, must never return floating
 * variants.
 * with this fundamental type in 2.26.
 *
 * Note: GLib 2.24 did include a boxed type with this name. It was replaced
 * Since: 2.26
 */


/**
 * G_TYPE_VARIANT_BUILDER:
 *
 * The #GType for a boxed type holding a #GVariantBuilder.
 *
 * Since: 2.30
 */


/**
 * G_TYPE_VARIANT_TYPE:
 *
 * The #GType for a boxed type holding a #GVariantType.
 *
 * Since: 2.24
 */


/**
 * G_UNIX_ERROR:
 *
 * Error domain for API in the "g_unix_" namespace.  Note that there
 * is no exported enumeration mapping %errno.  Instead, all functions
 * ensure that %errno is relevant.  The code for all #G_UNIX_ERROR is
 * always %0, and the error message is always generated via
 * g_strerror().
 * It is expected that most code will not look at %errno from these
 * APIs. Important cases where one would want to differentiate between
 * errors are already covered by existing cross-platform GLib API,
 * such as e.g. #GFile wrapping %ENOENT.  However, it is provided for
 * completeness, at least.
 */


/**
 * G_UNLOCK:
 * @name: the name of the lock.
 *
 * Works like g_mutex_unlock(), but for a lock defined with
 * #G_LOCK_DEFINE.
 */


/**
 * G_URI_RESERVED_CHARS_ALLOWED_IN_PATH:
 *
 * Allowed characters in a path. Includes "!$&'()*+,;=:@/".
 */


/**
 * G_URI_RESERVED_CHARS_ALLOWED_IN_PATH_ELEMENT:
 *
 * Allowed characters in path elements. Includes "!$&'()*+,;=:@".
 */


/**
 * G_URI_RESERVED_CHARS_ALLOWED_IN_USERINFO:
 *
 * Allowed characters in userinfo as defined in RFC 3986. Includes "!$&'()*+,;=:".
 */


/**
 * G_URI_RESERVED_CHARS_GENERIC_DELIMITERS:
 *
 * Generic delimiters characters as defined in RFC 3986. Includes ":/?#[]@".
 */


/**
 * G_URI_RESERVED_CHARS_SUBCOMPONENT_DELIMITERS:
 *
 * Subcomponent delimiter characters as defined in RFC 3986. Includes "!$&'()*+,;=".
 */


/**
 * G_VALUE_HOLDS:
 * @value: A #GValue structure.
 * @type: A #GType value.
 *
 * Checks if @value holds (or contains) a value of @type.
 * This macro will also check for @value != %NULL and issue a
 * warning if the check fails.
 *
 * Returns: %TRUE if @value holds the @type.
 */


/**
 * G_VALUE_HOLDS_BOOLEAN:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values of type %G_TYPE_BOOLEAN.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_BOXED:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values derived
 * from type %G_TYPE_BOXED.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_CHAR:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values of type %G_TYPE_CHAR.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_DOUBLE:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values of type %G_TYPE_DOUBLE.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_ENUM:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values derived from type %G_TYPE_ENUM.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_FLAGS:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values derived from type %G_TYPE_FLAGS.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_FLOAT:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values of type %G_TYPE_FLOAT.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_GTYPE:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values of type %G_TYPE_GTYPE.
 *
 * Since: 2.12
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_INT:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values of type %G_TYPE_INT.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_INT64:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values of type %G_TYPE_INT64.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_LONG:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values of type %G_TYPE_LONG.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_OBJECT:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values derived from type %G_TYPE_OBJECT.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_PARAM:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values derived from type %G_TYPE_PARAM.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_POINTER:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values of type %G_TYPE_POINTER.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_STRING:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values of type %G_TYPE_STRING.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_UCHAR:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values of type %G_TYPE_UCHAR.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_UINT:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values of type %G_TYPE_UINT.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_UINT64:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values of type %G_TYPE_UINT64.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_ULONG:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values of type %G_TYPE_ULONG.
 *
 * Returns: %TRUE on success.
 */


/**
 * G_VALUE_HOLDS_VARIANT:
 * @value: a valid #GValue structure
 *
 * Checks whether the given #GValue can hold values of type %G_TYPE_VARIANT.
 *
 * Returns: %TRUE on success.
 * Since: 2.26
 */


/**
 * G_VALUE_NOCOPY_CONTENTS:
 *
 * If passed to G_VALUE_COLLECT(), allocated data won't be copied
 * but used verbatim. This does not affect ref-counted types like
 * objects. For more details, see the #GValueTable documentation.
 */


/**
 * G_VALUE_TYPE:
 * @value: A #GValue structure.
 *
 * Get the type identifier of @value.
 *
 * Returns: the #GType.
 */


/**
 * G_VALUE_TYPE_NAME:
 * @value: A #GValue structure.
 *
 * Gets the the type name of @value.
 *
 * Returns: the type name.
 */


/**
 * G_VARIANT_PARSE_ERROR:
 *
 * Error domain for GVariant text format parsing.  Specific error codes
 * are not currently defined for this domain.  See #GError for
 * information on error domains.
 */


/**
 * G_VARIANT_TYPE:
 * @type_string: a well-formed #GVariantType type string
 *
 * Converts a string to a const #GVariantType.  Depending on the
 * current debugging level, this function may perform a runtime check
 * to ensure that @string is a valid GVariant type string.
 * It is always a programmer error to use this macro with an invalid
 * type string.
 * Since 2.24
 */


/**
 * G_VARIANT_TYPE_ANY:
 *
 * An indefinite type that is a supertype of every type (including
 * itself).
 */


/**
 * G_VARIANT_TYPE_ARRAY:
 *
 * An indefinite type that is a supertype of every array type.
 */


/**
 * G_VARIANT_TYPE_BASIC:
 *
 * An indefinite type that is a supertype of every basic (ie:
 * non-container) type.
 */


/**
 * G_VARIANT_TYPE_BOOLEAN:
 *
 * The type of a value that can be either %TRUE or %FALSE.
 */


/**
 * G_VARIANT_TYPE_BYTE:
 *
 * The type of an integer value that can range from 0 to 255.
 */


/**
 * G_VARIANT_TYPE_BYTESTRING:
 *
 * The type of an array of bytes.  This type is commonly used to pass
 * around strings that may not be valid utf8.  In that case, the
 * convention is that the nul terminator character should be included as
 * the last character in the array.
 */


/**
 * G_VARIANT_TYPE_BYTESTRING_ARRAY:
 *
 * The type of an array of byte strings (an array of arrays of bytes).
 */


/**
 * G_VARIANT_TYPE_DICTIONARY:
 *
 * An indefinite type that is a supertype of every dictionary type --
 * that is, any array type that has an element type equal to any
 * dictionary entry type.
 */


/**
 * G_VARIANT_TYPE_DICT_ENTRY:
 *
 * An indefinite type that is a supertype of every dictionary entry
 * type.
 */


/**
 * G_VARIANT_TYPE_DOUBLE:
 *
 * The type of a double precision IEEE754 floating point number.
 * These guys go up to about 1.80e308 (plus and minus) but miss out on
 * some numbers in between.  In any case, that's far greater than the
 * estimated number of fundamental particles in the observable
 * universe.
 */


/**
 * G_VARIANT_TYPE_HANDLE:
 *
 * The type of a 32bit signed integer value, that by convention, is used
 * as an index into an array of file descriptors that are sent alongside
 * a D-Bus message.
 * If you are not interacting with D-Bus, then there is no reason to make
 * use of this type.
 */


/**
 * G_VARIANT_TYPE_INT16:
 *
 * The type of an integer value that can range from -32768 to 32767.
 */


/**
 * G_VARIANT_TYPE_INT32:
 *
 * The type of an integer value that can range from -2147483648 to
 * 2147483647.
 */


/**
 * G_VARIANT_TYPE_INT64:
 *
 * The type of an integer value that can range from
 * -9223372036854775808 to 9223372036854775807.
 */


/**
 * G_VARIANT_TYPE_MAYBE:
 *
 * An indefinite type that is a supertype of every maybe type.
 */


/**
 * G_VARIANT_TYPE_OBJECT_PATH:
 *
 * The type of a D-Bus object reference.  These are strings of a
 * specific format used to identify objects at a given destination on
 * the bus.
 * If you are not interacting with D-Bus, then there is no reason to make
 * use of this type.  If you are, then the D-Bus specification contains a
 * precise description of valid object paths.
 */


/**
 * G_VARIANT_TYPE_SIGNATURE:
 *
 * The type of a D-Bus type signature.  These are strings of a specific
 * format used as type signatures for D-Bus methods and messages.
 * If you are not interacting with D-Bus, then there is no reason to make
 * use of this type.  If you are, then the D-Bus specification contains a
 * precise description of valid signature strings.
 */


/**
 * G_VARIANT_TYPE_STRING:
 *
 * The type of a string.  "" is a string.  %NULL is not a string.
 */


/**
 * G_VARIANT_TYPE_STRING_ARRAY:
 *
 * The type of an array of strings.
 */


/**
 * G_VARIANT_TYPE_TUPLE:
 *
 * An indefinite type that is a supertype of every tuple type,
 * regardless of the number of items in the tuple.
 */


/**
 * G_VARIANT_TYPE_UINT16:
 *
 * The type of an integer value that can range from 0 to 65535.
 * There were about this many people living in Toronto in the 1870s.
 */


/**
 * G_VARIANT_TYPE_UINT32:
 *
 * The type of an integer value that can range from 0 to 4294967295.
 * That's one number for everyone who was around in the late 1970s.
 */


/**
 * G_VARIANT_TYPE_UINT64:
 *
 * The type of an integer value that can range from 0 to
 * 18446744073709551616.  That's a really big number, but a Rubik's
 * cube can have a bit more than twice as many possible positions.
 */


/**
 * G_VARIANT_TYPE_UNIT:
 *
 * The empty tuple type.  Has only one instance.  Known also as "triv"
 * or "void".
 */


/**
 * G_VARIANT_TYPE_VARDICT:
 *
 * The type of a dictionary mapping strings to variants (the ubiquitous
 * "a{sv}" type).
 *
 * Since: 2.30
 */


/**
 * G_VARIANT_TYPE_VARIANT:
 *
 * The type of a box that contains any other value (including another
 * variant).
 */


/**
 * SECTION:allocators
 * @title: Memory Allocators
 * @short_description: deprecated way to allocate chunks of memory for GList, GSList and GNode
 *
 * Prior to 2.10, #GAllocator was used as an efficient way to allocate
 * small pieces of memory for use with the #GList, #GSList and #GNode
 * data structures. Since 2.10, it has been completely replaced by the
 * <link linkend="glib-Memory-Slices">slice allocator</link> and
 * deprecated.
 */


/**
 * SECTION:arrays
 * @title: Arrays
 * @short_description: arrays of arbitrary elements which grow automatically as elements are added
 *
 * Arrays are similar to standard C arrays, except that they grow
 * automatically as elements are added.
 * Array elements can be of any size (though all elements of one array
 * are the same size), and the array can be automatically cleared to
 * '0's and zero-terminated.
 * To create a new array use g_array_new().
 * To add elements to an array, use g_array_append_val(),
 * g_array_append_vals(), g_array_prepend_val(), and
 * g_array_prepend_vals().
 * To access an element of an array, use g_array_index().
 * To set the size of an array, use g_array_set_size().
 * To free an array, use g_array_free().
 * <example>
 * <title>Using a #GArray to store #gint values</title>
 * <programlisting>
 * GArray *garray;
 * gint i;
 * /<!-- -->* We create a new array to store gint values.
 * We don't want it zero-terminated or cleared to 0's. *<!-- -->/
 * garray = g_array_new (FALSE, FALSE, sizeof (gint));
 * for (i = 0; i &lt; 10000; i++)
 * g_array_append_val (garray, i);
 * for (i = 0; i &lt; 10000; i++)
 * if (g_array_index (garray, gint, i) != i)
 * g_array_index (garray, gint, i), i);
 * g_array_free (garray, TRUE);
 * </programlisting>
 * </example>
 *
 * G_print ("error: got &percnt;d instead of &percnt;d\n",
 */


/**
 * SECTION:arrays_byte
 * @title: Byte Arrays
 * @short_description: arrays of bytes, which grow automatically as elements are added
 *
 * #GByteArray is based on #GArray, to provide arrays of bytes which
 * grow automatically as elements are added.
 * To create a new #GByteArray use g_byte_array_new().
 * To add elements to a #GByteArray, use g_byte_array_append(), and
 * g_byte_array_prepend().
 * To set the size of a #GByteArray, use g_byte_array_set_size().
 * To free a #GByteArray, use g_byte_array_free().
 * <example>
 * <title>Using a #GByteArray</title>
 * <programlisting>
 * GByteArray *gbarray;
 * gint i;
 * gbarray = g_byte_array_new (<!-- -->);
 * for (i = 0; i &lt; 10000; i++)
 * g_byte_array_append (gbarray, (guint8*) "abcd", 4);
 * for (i = 0; i &lt; 10000; i++)
 * {
 * g_assert (gbarray->data[4*i] == 'a');
 * g_assert (gbarray->data[4*i+1] == 'b');
 * g_assert (gbarray->data[4*i+2] == 'c');
 * g_assert (gbarray->data[4*i+3] == 'd');
 * }
 * g_byte_array_free (gbarray, TRUE);
 * </programlisting>
 * </example>
 */


/**
 * SECTION:arrays_pointer
 * @title: Pointer Arrays
 * @short_description: arrays of pointers to any type of data, which grow automatically as new elements are added
 *
 * Pointer Arrays are similar to Arrays but are used only for storing
 * pointers.
 * <note><para>If you remove elements from the array, elements at the
 * end of the array are moved into the space previously occupied by the
 * removed element. This means that you should not rely on the index of
 * particular elements remaining the same. You should also be careful
 * when deleting elements while iterating over the array.</para></note>
 * To create a pointer array, use g_ptr_array_new().
 * To add elements to a pointer array, use g_ptr_array_add().
 * To remove elements from a pointer array, use g_ptr_array_remove(),
 * g_ptr_array_remove_index() or g_ptr_array_remove_index_fast().
 * To access an element of a pointer array, use g_ptr_array_index().
 * To set the size of a pointer array, use g_ptr_array_set_size().
 * To free a pointer array, use g_ptr_array_free().
 * <example>
 * <title>Using a #GPtrArray</title>
 * <programlisting>
 * GPtrArray *gparray;
 * gchar *string1 = "one", *string2 = "two", *string3 = "three";
 * gparray = g_ptr_array_new (<!-- -->);
 * g_ptr_array_add (gparray, (gpointer) string1);
 * g_ptr_array_add (gparray, (gpointer) string2);
 * g_ptr_array_add (gparray, (gpointer) string3);
 * if (g_ptr_array_index (gparray, 0) != (gpointer) string1)
 * g_ptr_array_index (gparray, 0), string1);
 * g_ptr_array_free (gparray, TRUE);
 * </programlisting>
 * </example>
 *
 * G_print ("error: got &percnt;p instead of &percnt;p\n",
 */


/**
 * SECTION:async_queues
 * @title: Asynchronous Queues
 * @short_description: asynchronous communication between threads
 *
 * Often you need to communicate between different threads. In general
 * it's safer not to do this by shared memory, but by explicit message
 * passing. These messages only make sense asynchronously for
 * multi-threaded applications though, as a synchronous operation could
 * as well be done in the same thread.
 * Asynchronous queues are an exception from most other GLib data
 * structures, as they can be used simultaneously from multiple threads
 * without explicit locking and they bring their own builtin reference
 * counting. This is because the nature of an asynchronous queue is that
 * it will always be used by at least 2 concurrent threads.
 * For using an asynchronous queue you first have to create one with
 * g_async_queue_new(). A newly-created queue will get the reference
 * count 1. Whenever another thread is creating a new reference of (that
 * is, pointer to) the queue, it has to increase the reference count
 * (using g_async_queue_ref()). Also, before removing this reference,
 * the reference count has to be decreased (using g_async_queue_unref()).
 * After that the queue might no longer exist so you must not access
 * it after that point.
 * A thread, which wants to send a message to that queue simply calls
 * g_async_queue_push() to push the message to the queue.
 * A thread, which is expecting messages from an asynchronous queue
 * simply calls g_async_queue_pop() for that queue. If no message is
 * available in the queue at that point, the thread is now put to sleep
 * until a message arrives. The message will be removed from the queue
 * and returned. The functions g_async_queue_try_pop() and
 * g_async_queue_timed_pop() can be used to only check for the presence
 * of messages or to only wait a certain time for messages respectively.
 * For almost every function there exist two variants, one that locks
 * the queue and one that doesn't. That way you can hold the queue lock
 * (acquire it with g_async_queue_lock() and release it with
 * g_async_queue_unlock()) over multiple queue accessing instructions.
 * This can be necessary to ensure the integrity of the queue, but should
 * only be used when really necessary, as it can make your life harder
 * if used unwisely. Normally you should only use the locking function
 * variants (those without the suffix _unlocked)
 */


/**
 * SECTION:atomic_operations
 * @title: Atomic Operations
 * @short_description: basic atomic integer and pointer operations
 * @see_also: #GMutex
 *
 * The following is a collection of compiler macros to provide atomic
 * access to integer and pointer-sized values.
 * The macros that have 'int' in the name will operate on pointers to
 * #gint and #guint.  The macros with 'pointer' in the name will operate
 * on pointers to any pointer-sized value, including #gsize.  There is
 * no support for 64bit operations on platforms with 32bit pointers
 * because it is not generally possible to perform these operations
 * atomically.
 * The get, set and exchange operations for integers and pointers
 * nominally operate on #gint and #gpointer, respectively.  Of the
 * arithmetic operations, the 'add' operation operates on (and returns)
 * signed integer values (#gint and #gssize) and the 'and', 'or', and
 * 'xor' operations operate on (and return) unsigned integer values
 * (#guint and #gsize).
 * All of the operations act as a full compiler and (where appropriate)
 * hardware memory barrier.  Acquire and release or producer and
 * consumer barrier semantics are not available through this API.
 * On GCC, these macros are implemented using GCC intrinsic operations.
 * On non-GCC compilers they will evaluate to function calls to
 * functions implemented by GLib.
 * If GLib itself was compiled with GCC then these functions will again
 * be implemented by the GCC intrinsics.  On Windows without GCC, the
 * interlocked API is used to implement the functions.
 * With non-GCC compilers on non-Windows systems, the functions are
 * currently incapable of implementing true atomic operations --
 * instead, they fallback to holding a global lock while performing the
 * operation.  This provides atomicity between the threads of one
 * process, but not between separate processes.  For this reason, one
 * should exercise caution when attempting to use these options on
 * shared memory regions.
 * It is very important that all accesses to a particular integer or
 * pointer be performed using only this API and that different sizes of
 * operation are not mixed or used on overlapping memory regions.  Never
 * read or assign directly from or to a value -- always use this API.
 * For simple reference counting purposes you should use
 * g_atomic_int_inc() and g_atomic_int_dec_and_test().  Other uses that
 * fall outside of simple reference counting patterns are prone to
 * subtle bugs and occasionally undefined behaviour.  It is also worth
 * noting that since all of these operations require global
 * synchronisation of the entire machine, they can be quite slow.  In
 * the case of performing multiple atomic operations it can often be
 * faster to simply acquire a mutex lock around the critical area,
 * perform the operations normally and then release the lock.
 */


/**
 * SECTION:base64
 * @title: Base64 Encoding
 * @short_description: encodes and decodes data in Base64 format
 *
 * Base64 is an encoding that allows a sequence of arbitrary bytes to be
 * encoded as a sequence of printable ASCII characters. For the definition
 * of Base64, see <ulink url="http://www.ietf.org/rfc/rfc1421.txt">RFC
 * 1421</ulink> or <ulink url="http://www.ietf.org/rfc/rfc2045.txt">RFC
 * 2045</ulink>. Base64 is most commonly used as a MIME transfer encoding
 * for email.
 * GLib supports incremental encoding using g_base64_encode_step() and
 * g_base64_encode_close(). Incremental decoding can be done with
 * g_base64_decode_step(). To encode or decode data in one go, use
 * g_base64_encode() or g_base64_decode(). To avoid memory allocation when
 * decoding, you can use g_base64_decode_inplace().
 * Support for Base64 encoding has been added in GLib 2.12.
 */


/**
 * SECTION:bookmarkfile
 * @title: Bookmark file parser
 * @short_description: parses files containing bookmarks
 *
 * GBookmarkFile lets you parse, edit or create files containing bookmarks
 * to URI, along with some meta-data about the resource pointed by the URI
 * like its MIME type, the application that is registering the bookmark and
 * the icon that should be used to represent the bookmark. The data is stored
 * using the
 * <ulink url="http://www.gnome.org/~ebassi/bookmark-spec">Desktop Bookmark
 * Specification</ulink>.
 * The syntax of the bookmark files is described in detail inside the Desktop
 * sub-class of the <ulink url="">XML Bookmark Exchange Language</ulink>
 * specification, consisting of valid UTF-8 encoded XML, under the
 * <literal>xbel</literal> root element; each bookmark is stored inside a
 * <literal>bookmark</literal> element, using its URI: no relative paths can
 * be used inside a bookmark file. The bookmark may have a user defined title
 * and description, to be used instead of the URI. Under the
 * <literal>metadata</literal> element, with its <literal>owner</literal>
 * attribute set to <literal>http://freedesktop.org</literal>, is stored the
 * meta-data about a resource pointed by its URI. The meta-data consists of
 * the resource's MIME type; the applications that have registered a bookmark;
 * the groups to which a bookmark belongs to; a visibility flag, used to set
 * the bookmark as "private" to the applications and groups that has it
 * registered; the URI and MIME type of an icon, to be used when displaying
 * the bookmark inside a GUI.
 * |[<xi:include xmlns:xi="http://www.w3.org/2001/XInclude" parse="text" href="../../../../glib/tests/bookmarks.xbel"><xi:fallback>FIXME: MISSING XINCLUDE CONTENT</xi:fallback></xi:include>]|
 * A bookmark file might contain more than one bookmark; each bookmark
 * is accessed through its URI.
 * The important caveat of bookmark files is that when you add a new
 * bookmark you must also add the application that is registering it, using
 * g_bookmark_file_add_application() or g_bookmark_file_set_app_info().
 * If a bookmark has no applications then it won't be dumped when creating
 * the on disk representation, using g_bookmark_file_to_data() or
 * g_bookmark_file_to_file().
 * The #GBookmarkFile parser was added in GLib 2.12.
 *
 * Bookmark specification, here is a quick summary: bookmark files use a
 */


/**
 * SECTION:caches
 * @title: Caches
 * @short_description: caches allow sharing of complex data structures to save resources
 *
 * A #GCache allows sharing of complex data structures, in order to
 * save system resources.
 * GTK+ uses caches for #GtkStyles and #GdkGCs. These consume a lot of
 * resources, so a #GCache is used to see if a #GtkStyle or #GdkGC with
 * the required properties already exists. If it does, then the
 * existing object is used instead of creating a new one.
 * #GCache uses keys and values. A #GCache key describes the properties
 * of a particular resource. A #GCache value is the actual resource.
 */


/**
 * SECTION:checksum
 * @title: Data Checksums
 * @short_description: Computes the checksum for data
 *
 * GLib provides a generic API for computing checksums (or "digests")
 * for a sequence of arbitrary bytes, using various hashing algorithms
 * like MD5, SHA-1 and SHA-256. Checksums are commonly used in various
 * environments and specifications.
 * GLib supports incremental checksums using the GChecksum data
 * structure, by calling g_checksum_update() as long as there's data
 * available and then using g_checksum_get_string() or
 * g_checksum_get_digest() to compute the checksum and return it either
 * as a string in hexadecimal form, or as a raw sequence of bytes. To
 * compute the checksum for binary blobs and NUL-terminated strings in
 * one go, use the convenience functions g_compute_checksum_for_data()
 * and g_compute_checksum_for_string(), respectively.
 * Support for checksums has been added in GLib 2.16
 */


/**
 * SECTION:completion
 * @title: Automatic String Completion
 * @short_description: support for automatic completion using a group of target strings
 *
 * #GCompletion provides support for automatic completion of a string
 * using any group of target strings. It is typically used for file
 * name completion as is common in many UNIX shells.
 * A #GCompletion is created using g_completion_new(). Target items are
 * added and removed with g_completion_add_items(),
 * g_completion_remove_items() and g_completion_clear_items(). A
 * completion attempt is requested with g_completion_complete() or
 * g_completion_complete_utf8(). When no longer needed, the
 * #GCompletion is freed with g_completion_free().
 * Items in the completion can be simple strings (e.g. filenames), or
 * pointers to arbitrary data structures. If data structures are used
 * you must provide a #GCompletionFunc in g_completion_new(), which
 * retrieves the item's string from the data structure. You can change
 * the way in which strings are compared by setting a different
 * #GCompletionStrncmpFunc in g_completion_set_compare().
 * GCompletion has been marked as deprecated, since this API is rarely
 * used and not very actively maintained.
 */


/**
 * SECTION:conversions
 * @title: Character Set Conversion
 * @short_description: Convert strings between different character sets
 *
 * The g_convert() family of function wraps the functionality of iconv(). In
 * addition to pure character set conversions, GLib has functions to deal
 * with the extra complications of encodings for file names.
 * <refsect2 id="file-name-encodings">
 * <title>File Name Encodings</title>
 * <para>
 * Historically, Unix has not had a defined encoding for file
 * separators in it ("/").  However, displaying file names may
 * created, to the character set in which the application
 * operates.  Consider the Spanish file name
 * "<filename>Presentaci&oacute;n.sxi</filename>".  If the
 * application which created it uses ISO-8859-1 for its encoding,
 * </para>
 * <programlisting id="filename-iso8859-1">
 * </programlisting>
 * <para>
 * However, if the application use UTF-8, the actual file name on
 * disk would look like this:
 * </para>
 * <programlisting id="filename-utf-8">
 * </programlisting>
 * <para>
 * Glib uses UTF-8 for its strings, and GUI toolkits like GTK+
 * that use Glib do the same thing.  If you get a file name from
 * the file system, for example, from readdir(3) or from g_dir_read_name(),
 * and you wish to display the file name to the user, you
 * <emphasis>will</emphasis> need to convert it into UTF-8.  The
 * opposite case is when the user types the name of a file he
 * UTF-8 encoding, and you will need to convert it to the
 * character set used for file names before you can create the
 * file with open(2) or fopen(3).
 * </para>
 * <para>
 * By default, Glib assumes that file names on disk are in UTF-8
 * encoding.  This is a valid assumption for file systems which
 * encoding for their strings, and that is also what they use for
 * the file names they create.  However, older file systems may
 * still contain file names created in "older" encodings, such as
 * ISO-8859-1. In this case, for compatibility reasons, you may
 * want to instruct Glib to use that particular encoding for file
 * names rather than UTF-8.  You can do this by specifying the
 * encoding for file names in the <link
 * linkend="G_FILENAME_ENCODING"><envar>G_FILENAME_ENCODING</envar></link>
 * environment variable.  For example, if your installation uses
 * ISO-8859-1 for file names, you can put this in your
 * <filename>~/.profile</filename>:
 * </para>
 * <programlisting>
 * export G_FILENAME_ENCODING=ISO-8859-1
 * </programlisting>
 * <para>
 * Glib provides the functions g_filename_to_utf8() and
 * g_filename_from_utf8() to perform the necessary conversions. These
 * functions convert file names from the encoding specified in
 * <envar>G_FILENAME_ENCODING</envar> to UTF-8 and vice-versa.
 * <xref linkend="file-name-encodings-diagram"/> illustrates how
 * these functions are used to convert between UTF-8 and the
 * encoding for file names in the file system.
 * </para>
 * <figure id="file-name-encodings-diagram">
 * <title>Conversion between File Name Encodings</title>
 * <graphic fileref="file-name-encodings.png" format="PNG"/>
 * </figure>
 * <refsect3 id="file-name-encodings-checklist">
 * <title>Checklist for Application Writers</title>
 * <para>
 * This section is a practical summary of the detailed
 * description above.  You can use this as a checklist of
 * things to do to make sure your applications process file
 * name encodings correctly.
 * </para>
 * <orderedlist>
 * <listitem><para>
 * If you get a file name from the file system from a function
 * such as readdir(3) or gtk_file_chooser_get_filename(),
 * you do not need to do any conversion to pass that
 * file name to functions like open(2), rename(2), or
 * fopen(3) &mdash; those are "raw" file names which the file
 * system understands.
 * </para></listitem>
 * <listitem><para>
 * If you need to display a file name, convert it to UTF-8 first by
 * using g_filename_to_utf8(). If conversion fails, display a string like
 * "<literal>Unknown file name</literal>". <emphasis>Do not</emphasis>
 * convert this string back into the encoding used for file names if you
 * wish to pass it to the file system; use the original file name instead.
 * For example, the document window of a word processor could display
 * "Unknown file name" in its title bar but still let the user save the
 * file, as it would keep the raw file name internally. This can happen
 * if the user has not set the <envar>G_FILENAME_ENCODING</envar>
 * environment variable even though he has files whose names are not
 * encoded in UTF-8.
 * </para></listitem>
 * <listitem><para>
 * If your user interface lets the user type a file name for saving or
 * renaming, convert it to the encoding used for file names in the file
 * system by using g_filename_from_utf8(). Pass the converted file name
 * to functions like fopen(3). If conversion fails, ask the user to enter
 * a different file name. This can happen if the user types Japanese
 * characters when <envar>G_FILENAME_ENCODING</envar> is set to
 * <literal>ISO-8859-1</literal>, for example.
 * </para></listitem>
 * </orderedlist>
 * </refsect3>
 * </refsect2>
 *
 * Names:  a file name is valid as long as it does not have path
 * Require conversion:  from the character set in which they were
 * Character:  P  r  e  s  e  n  t  a  c  i  &oacute;     n  .  s  x  i
 * Hex code:   50 72 65 73 65 6e 74 61 63 69 c3 b3 6e 2e 73 78 69
 * Wishes to save:  the toolkit will give you that string in
 * Were created relatively recently:  most applications use UTF-8
 */


/**
 * SECTION:datalist
 * @title: Keyed Data Lists
 * @short_description: lists of data elements which are accessible by a string or GQuark identifier
 *
 * Keyed data lists provide lists of arbitrary data elements which can
 * be accessed either with a string or with a #GQuark corresponding to
 * the string.
 * The #GQuark methods are quicker, since the strings have to be
 * converted to #GQuarks anyway.
 * Data lists are used for associating arbitrary data with #GObjects,
 * using g_object_set_data() and related functions.
 * To create a datalist, use g_datalist_init().
 * To add data elements to a datalist use g_datalist_id_set_data(),
 * g_datalist_id_set_data_full(), g_datalist_set_data() and
 * g_datalist_set_data_full().
 * To get data elements from a datalist use g_datalist_id_get_data()
 * and g_datalist_get_data().
 * To iterate over all data elements in a datalist use
 * g_datalist_foreach() (not thread-safe).
 * To remove data elements from a datalist use
 * g_datalist_id_remove_data() and g_datalist_remove_data().
 * To remove all data elements from a datalist, use g_datalist_clear().
 */


/**
 * SECTION:datasets
 * @title: Datasets
 * @short_description: associate groups of data elements with particular memory locations
 *
 * Datasets associate groups of data elements with particular memory
 * locations. These are useful if you need to associate data with a
 * structure returned from an external library. Since you cannot modify
 * the structure, you use its location in memory as the key into a
 * dataset, where you can associate any number of data elements with it.
 * There are two forms of most of the dataset functions. The first form
 * uses strings to identify the data elements associated with a
 * location. The second form uses #GQuark identifiers, which are
 * created with a call to g_quark_from_string() or
 * g_quark_from_static_string(). The second form is quicker, since it
 * does not require looking up the string in the hash table of #GQuark
 * identifiers.
 * There is no function to create a dataset. It is automatically
 * created as soon as you add elements to it.
 * To add data elements to a dataset use g_dataset_id_set_data(),
 * g_dataset_id_set_data_full(), g_dataset_set_data() and
 * g_dataset_set_data_full().
 * To get data elements from a dataset use g_dataset_id_get_data() and
 * g_dataset_get_data().
 * To iterate over all data elements in a dataset use
 * g_dataset_foreach() (not thread-safe).
 * To remove data elements from a dataset use
 * g_dataset_id_remove_data() and g_dataset_remove_data().
 * To destroy a dataset, use g_dataset_destroy().
 */


/**
 * SECTION:date-time
 * @title: GDateTime
 * @short_description: A structure representing Date and Time
 * @see_also: #GTimeZone
 *
 * #GDateTime is a structure that combines a Gregorian date and time
 * into a single structure.  It provides many conversion and methods to
 * manipulate dates and times.  Time precision is provided down to
 * microseconds and the time can range (proleptically) from 0001-01-01
 * 00:00:00 to 9999-12-31 23:59:59.999999.  #GDateTime follows POSIX
 * time in the sense that it is oblivious to leap seconds.
 * #GDateTime is an immutable object; once it has been created it cannot
 * be modified further.  All modifiers will create a new #GDateTime.
 * Nearly all such functions can fail due to the date or time going out
 * of range, in which case %NULL will be returned.
 * #GDateTime is reference counted: the reference count is increased by calling
 * g_date_time_ref() and decreased by calling g_date_time_unref(). When the
 * reference count drops to 0, the resources allocated by the #GDateTime
 * structure are released.
 * Many parts of the API may produce non-obvious results.  As an
 * example, adding two months to January 31st will yield March 31st
 * whereas adding one month and then one month again will yield either
 * March 28th or March 29th.  Also note that adding 24 hours is not
 * always the same as adding one day (since days containing daylight
 * savings time transitions are either 23 or 25 hours in length).
 * #GDateTime is available since GLib 2.26.
 */


/**
 * SECTION:ghostutils
 * @short_description: Internet hostname utilities
 *
 * Functions for manipulating internet hostnames; in particular, for
 * converting between Unicode and ASCII-encoded forms of
 * Internationalized Domain Names (IDNs).
 * The <ulink
 * url="http://www.ietf.org/rfc/rfc3490.txt">Internationalized Domain
 * Names for Applications (IDNA)</ulink> standards allow for the use
 * of Unicode domain names in applications, while providing
 * backward-compatibility with the old ASCII-only DNS, by defining an
 * ASCII-Compatible Encoding of any given Unicode name, which can be
 * used with non-IDN-aware applications and protocols. (For example,
 * "Παν語.org" maps to "xn--4wa8awb4637h.org".)
 */


/**
 * SECTION:gregex
 * @title: Perl-compatible regular expressions
 * @short_description: matches strings against regular expressions
 * @see_also: <xref linkend="glib-regex-syntax"/>
 *
 * The <function>g_regex_*()</function> functions implement regular
 * expression pattern matching using syntax and semantics similar to
 * Perl regular expression.
 * Some functions accept a @start_position argument, setting it differs
 * from just passing over a shortened string and setting #G_REGEX_MATCH_NOTBOL
 * in the case of a pattern that begins with any kind of lookbehind assertion.
 * For example, consider the pattern "\Biss\B" which finds occurrences of "iss"
 * in the middle of words. ("\B" matches only if the current position in the
 * subject is not a word boundary.) When applied to the string "Mississipi"
 * from the fourth byte, namely "issipi", it does not match, because "\B" is
 * always false at the start of the subject, which is deemed to be a word
 * boundary. However, if the entire string is passed , but with
 * it is able to look behind the starting point to discover that it is
 * preceded by a letter.
 * Note that, unless you set the #G_REGEX_RAW flag, all the strings passed
 * to these functions must be encoded in UTF-8. The lengths and the positions
 * inside the strings are in bytes and not in characters, so, for instance,
 * "\xc3\xa0" (i.e. "&agrave;") is two bytes long but it is treated as a
 * single character. If you set #G_REGEX_RAW the strings can be non-valid
 * UTF-8 strings and a byte is treated as a character, so "\xc3\xa0" is two
 * bytes and two characters long.
 * When matching a pattern, "\n" matches only against a "\n" character in
 * the string, and "\r" matches only a "\r" character. To match any newline
 * sequence use "\R". This particular group matches either the two-character
 * sequence CR + LF ("\r\n"), or one of the single characters LF (linefeed,
 * U+000A, "\n"), VT vertical tab, U+000B, "\v"), FF (formfeed, U+000C, "\f"),
 * CR (carriage return, U+000D, "\r"), NEL (next line, U+0085), LS (line
 * separator, U+2028), or PS (paragraph separator, U+2029).
 * The behaviour of the dot, circumflex, and dollar metacharacters are
 * affected by newline characters, the default is to recognize any newline
 * character (the same characters recognized by "\R"). This can be changed
 * with #G_REGEX_NEWLINE_CR, #G_REGEX_NEWLINE_LF and #G_REGEX_NEWLINE_CRLF
 * compile options, and with #G_REGEX_MATCH_NEWLINE_ANY,
 * #G_REGEX_MATCH_NEWLINE_CR, #G_REGEX_MATCH_NEWLINE_LF and
 * #G_REGEX_MATCH_NEWLINE_CRLF match options. These settings are also
 * relevant when compiling a pattern if #G_REGEX_EXTENDED is set, and an
 * unescaped "#" outside a character class is encountered. This indicates
 * a comment that lasts until after the next newline.
 * Creating and manipulating the same #GRegex structure from different
 * threads is not a problem as #GRegex does not modify its internal
 * state between creation and destruction, on the other hand #GMatchInfo
 * is not threadsafe.
 * The regular expressions low-level functionalities are obtained through
 * the excellent <ulink url="http://www.pcre.org/">PCRE</ulink> library
 * written by Philip Hazel.
 */


/**
 * SECTION:gunix
 * @title: UNIX-specific utilities and integration
 * @short_description: pipes, signal handling
 * @include: glib-unix.h
 *
 * Most of GLib is intended to be portable; in contrast, this set of
 * functions is designed for programs which explicitly target UNIX,
 * or are using it to build higher level abstractions which would be
 * conditionally compiled if the platform matches G_OS_UNIX.
 * To use these functions, you must explicitly include the
 * "glib-unix.h" header.
 */


/**
 * SECTION:gurifuncs
 * @short_description: URI Functions
 *
 * Functions for manipulating Universal Resource Identifiers (URIs) as
 * defined by <ulink url="http://www.ietf.org/rfc/rfc3986.txt">
 * RFC 3986</ulink>. It is highly recommended that you have read and
 * understand RFC 3986 for understanding this API.
 */


/**
 * SECTION:gvariant
 * @title: GVariant
 * @short_description: strongly typed value datatype
 * @see_also: GVariantType
 *
 * #GVariant is a variant datatype; it stores a value along with
 * information about the type of that value.  The range of possible
 * values is determined by the type.  The type system used by #GVariant
 * is #GVariantType.
 * #GVariant instances always have a type and a value (which are given
 * at construction time).  The type and value of a #GVariant instance
 * can never change other than by the #GVariant itself being
 * destroyed.  A #GVariant cannot contain a pointer.
 * #GVariant is reference counted using g_variant_ref() and
 * g_variant_unref().  #GVariant also has floating reference counts --
 * see g_variant_ref_sink().
 * #GVariant is completely threadsafe.  A #GVariant instance can be
 * concurrently accessed in any way from any number of threads without
 * problems.
 * #GVariant is heavily optimised for dealing with data in serialised
 * form.  It works particularly well with data located in memory-mapped
 * files.  It can perform nearly all deserialisation operations in a
 * small constant time, usually touching only a single memory page.
 * Serialised #GVariant data can also be sent over the network.
 * #GVariant is largely compatible with D-Bus.  Almost all types of
 * #GVariant instances can be sent over D-Bus.  See #GVariantType for
 * exceptions.
 * For convenience to C programmers, #GVariant features powerful
 * varargs-based value construction and destruction.  This feature is
 * designed to be embedded in other libraries.
 * There is a Python-inspired text language for describing #GVariant
 * values.  #GVariant includes a printer for this language and a parser
 * with type inferencing.
 * <refsect2>
 * <title>Memory Use</title>
 * <para>
 * #GVariant tries to be quite efficient with respect to memory use.
 * This section gives a rough idea of how much memory is used by the
 * current implementation.  The information here is subject to change
 * in the future.
 * </para>
 * <para>
 * The memory allocated by #GVariant can be grouped into 4 broad
 * information cache, buffer management memory and memory for the
 * #GVariant structure itself.
 * </para>
 * <refsect3>
 * <title>Serialised Data Memory</title>
 * <para>
 * This is the memory that is used for storing GVariant data in
 * serialised form.  This is what would be sent over the network or
 * what would end up on disk.
 * </para>
 * <para>
 * The amount of memory required to store a boolean is 1 byte.  16,
 * 32 and 64 bit integers and double precision floating point numbers
 * use their "natural" size.  Strings (including object path and
 * signature strings) are stored with a nul terminator, and as such
 * use the length of the string plus 1 byte.
 * </para>
 * <para>
 * Maybe types use no space at all to represent the null value and
 * use the same amount of space (sometimes plus one byte) as the
 * equivalent non-maybe-typed value to represent the non-null case.
 * </para>
 * <para>
 * Arrays use the amount of space required to store each of their
 * members, concatenated.  Additionally, if the items stored in an
 * then an additional framing offset is stored for each item.  The
 * size of this offset is either 1, 2 or 4 bytes depending on the
 * overall size of the container.  Additionally, extra padding bytes
 * are added as required for alignment of child values.
 * </para>
 * <para>
 * Tuples (including dictionary entries) use the amount of space
 * required to store each of their members, concatenated, plus one
 * framing offset (as per arrays) for each non-fixed-sized item in
 * the tuple, except for the last one.  Additionally, extra padding
 * bytes are added as required for alignment of child values.
 * </para>
 * <para>
 * Variants use the same amount of space as the item inside of the
 * variant, plus 1 byte, plus the length of the type string for the
 * item inside the variant.
 * </para>
 * <para>
 * As an example, consider a dictionary mapping strings to variants.
 * In the case that the dictionary is empty, 0 bytes are required for
 * the serialisation.
 * </para>
 * <para>
 * If we add an item "width" that maps to the int32 value of 500 then
 * we will use 4 byte to store the int32 (so 6 for the variant
 * containing it) and 6 bytes for the string.  The variant must be
 * aligned to 8 after the 6 bytes of the string, so that's 2 extra
 * bytes.  6 (string) + 2 (padding) + 6 (variant) is 14 bytes used
 * for the dictionary entry.  An additional 1 byte is added to the
 * array as a framing offset making a total of 15 bytes.
 * </para>
 * <para>
 * If we add another entry, "title" that maps to a nullable string
 * that happens to have a value of null, then we use 0 bytes for the
 * null value (and 3 bytes for the variant to contain it along with
 * its type string) plus 6 bytes for the string.  Again, we need 2
 * padding bytes.  That makes a total of 6 + 2 + 3 = 11 bytes.
 * </para>
 * <para>
 * We now require extra padding between the two items in the array.
 * After the 14 bytes of the first item, that's 2 bytes required.  We
 * now require 2 framing offsets for an extra two bytes.  14 + 2 + 11
 * + 2 = 29 bytes to encode the entire two-item dictionary.
 * </para>
 * </refsect3>
 * <refsect3>
 * <title>Type Information Cache</title>
 * <para>
 * For each GVariant type that currently exists in the program a type
 * information structure is kept in the type information cache.  The
 * type information structure is required for rapid deserialisation.
 * </para>
 * <para>
 * Continuing with the above example, if a #GVariant exists with the
 * type "a{sv}" then a type information struct will exist for
 * "a{sv}", "{sv}", "s", and "v".  Multiple uses of the same type
 * will share the same type information.  Additionally, all
 * single-digit types are stored in read-only static memory and do
 * not contribute to the writable memory footprint of a program using
 * #GVariant.
 * </para>
 * <para>
 * Aside from the type information structures stored in read-only
 * memory, there are two forms of type information.  One is used for
 * maybe types.  The other is used for container types where there
 * </para>
 * <para>
 * Array type info structures are 6 * sizeof (void *), plus the
 * memory required to store the type string itself.  This means that
 * on 32bit systems, the cache entry for "a{sv}" would require 30
 * bytes of memory (plus malloc overhead).
 * </para>
 * <para>
 * Tuple type info structures are 6 * sizeof (void *), plus 4 *
 * sizeof (void *) for each item in the tuple, plus the memory
 * required to store the type string itself.  A 2-item tuple, for
 * example, would have a type information structure that consumed
 * writable memory in the size of 14 * sizeof (void *) (plus type
 * string)  This means that on 32bit systems, the cache entry for
 * "{sv}" would require 61 bytes of memory (plus malloc overhead).
 * </para>
 * <para>
 * This means that in total, for our "a{sv}" example, 91 bytes of
 * type information would be allocated.
 * </para>
 * <para>
 * The type information cache, additionally, uses a #GHashTable to
 * store and lookup the cached items and stores a pointer to this
 * hash table in static storage.  The hash table is freed when there
 * are zero items in the type cache.
 * </para>
 * <para>
 * Although these sizes may seem large it is important to remember
 * that a program will probably only have a very small number of
 * different types of values in it and that only one type information
 * structure is required for many different values of the same type.
 * </para>
 * </refsect3>
 * <refsect3>
 * <title>Buffer Management Memory</title>
 * <para>
 * #GVariant uses an internal buffer management structure to deal
 * with the various different possible sources of serialised data
 * that it uses.  The buffer is responsible for ensuring that the
 * correct call is made when the data is no longer in use by
 * #GVariant.  This may involve a g_free() or a g_slice_free() or
 * even g_mapped_file_unref().
 * </para>
 * <para>
 * One buffer management structure is used for each chunk of
 * serialised data.  The size of the buffer management structure is 4
 * * (void *).  On 32bit systems, that's 16 bytes.
 * </para>
 * </refsect3>
 * <refsect3>
 * <title>GVariant structure</title>
 * <para>
 * The size of a #GVariant structure is 6 * (void *).  On 32 bit
 * systems, that's 24 bytes.
 * </para>
 * <para>
 * #GVariant structures only exist if they are explicitly created
 * with API calls.  For example, if a #GVariant is constructed out of
 * serialised data for the example given above (with the dictionary)
 * then although there are 9 individual values that comprise the
 * entire dictionary (two keys, two values, two variants containing
 * the values, two dictionary entries, plus the dictionary itself),
 * only 1 #GVariant instance exists -- the one refering to the
 * dictionary.
 * </para>
 * <para>
 * If calls are made to start accessing the other values then
 * #GVariant instances will exist for those values only for as long
 * type information is shared.  The serialised data and the buffer
 * management structure for that serialised data is shared by the
 * child.
 * </para>
 * </refsect3>
 * <refsect3>
 * <title>Summary</title>
 * <para>
 * To put the entire example together, for our dictionary mapping
 * strings to variants (with two entries, as given above), we are
 * using 91 bytes of memory for type information, 29 byes of memory
 * for the serialised data, 16 bytes for buffer management and 24
 * bytes for the #GVariant instance, or a total of 160 bytes, plus
 * malloc overhead.  If we were to use g_variant_get_child_value() to
 * access the two dictionary entries, we would use an additional 48
 * bytes.  If we were to have other dictionaries of the same type, we
 * would use more memory for the serialised data and buffer
 * management for those dictionaries, but the type information would
 * be shared.
 * </para>
 * </refsect3>
 * </refsect2>
 *
 * Purposes: memory for serialised data, memory for the type
 * Array are not of a fixed-size (ie: strings, other arrays, etc)
 * Container types where there is a single element type: arrays and
 * Are multiple element types: tuples and dictionary entries.
 * As they are in use (ie: until you call g_variant_unref()).  The
 */


/**
 * SECTION:gvarianttype
 * @title: GVariantType
 * @short_description: introduction to the GVariant type system
 * @see_also: #GVariantType, #GVariant
 *
 * This section introduces the GVariant type system.  It is based, in
 * large part, on the D-Bus type system, with two major changes and some minor
 * lifting of restrictions.  The <ulink
 * url='http://dbus.freedesktop.org/doc/dbus-specification.html'>DBus
 * specification</ulink>, therefore, provides a significant amount of
 * information that is useful when working with GVariant.
 * The first major change with respect to the D-Bus type system is the
 * introduction of maybe (or "nullable") types.  Any type in GVariant can be
 * converted to a maybe type, in which case, "nothing" (or "null") becomes a
 * valid value.  Maybe types have been added by introducing the
 * character "<literal>m</literal>" to type strings.
 * The second major change is that the GVariant type system supports the
 * concept of "indefinite types" -- types that are less specific than
 * the normal types found in D-Bus.  For example, it is possible to speak
 * of "an array of any type" in GVariant, where the D-Bus type system
 * would require you to speak of "an array of integers" or "an array of
 * strings".  Indefinite types have been added by introducing the
 * characters "<literal>*</literal>", "<literal>?</literal>" and
 * "<literal>r</literal>" to type strings.
 * Finally, all arbitrary restrictions relating to the complexity of
 * types are lifted along with the restriction that dictionary entries
 * may only appear nested inside of arrays.
 * Just as in D-Bus, GVariant types are described with strings ("type
 * strings").  Subject to the differences mentioned above, these strings
 * always works in terms of messages and therefore individual type
 * strings appear nowhere in its interface.  Instead, "signatures"
 * are a concatenation of the strings of the type of each argument in a
 * message.  GVariant deals with single values directly so GVariant type
 * strings always describe the type of exactly one value.  This means
 * that a D-Bus signature string is generally not a valid GVariant type
 * string -- except in the case that it is the signature of a message
 * containing exactly one argument.
 * An indefinite type is similar in spirit to what may be called an
 * abstract type in other type systems.  No value can exist that has an
 * indefinite type as its type, but values can exist that have types
 * that are subtypes of indefinite types.  That is to say,
 * g_variant_get_type() will never return an indefinite type, but
 * calling g_variant_is_of_type() with an indefinite type may return
 * %TRUE.  For example, you cannot have a value that represents "an
 * array of no particular type", but you can have an "array of integers"
 * which certainly matches the type of "an array of no particular type",
 * since "array of integers" is a subtype of "array of no particular
 * type".
 * This is similar to how instances of abstract classes may not
 * directly exist in other type systems, but instances of their
 * non-abstract subtypes may.  For example, in GTK, no object that has
 * the type of #GtkBin can exist (since #GtkBin is an abstract class),
 * but a #GtkWindow can certainly be instantiated, and you would say
 * that the #GtkWindow is a #GtkBin (since #GtkWindow is a subclass of
 * #GtkBin).
 * A detailed description of GVariant type strings is given here:
 * <refsect2 id='gvariant-typestrings'>
 * <title>GVariant Type Strings</title>
 * <para>
 * A GVariant type string can be any of the following:
 * </para>
 * <itemizedlist>
 * <listitem>
 * <para>
 * any basic type string (listed below)
 * </para>
 * </listitem>
 * <listitem>
 * <para>
 * "<literal>v</literal>", "<literal>r</literal>" or
 * "<literal>*</literal>"
 * </para>
 * </listitem>
 * <listitem>
 * <para>
 * one of the characters '<literal>a</literal>' or
 * '<literal>m</literal>', followed by another type string
 * </para>
 * </listitem>
 * <listitem>
 * <para>
 * the character '<literal>(</literal>', followed by a concatenation
 * of zero or more other type strings, followed by the character
 * '<literal>)</literal>'
 * </para>
 * </listitem>
 * <listitem>
 * <para>
 * the character '<literal>{</literal>', followed by a basic type
 * string (see below), followed by another type string, followed by
 * the character '<literal>}</literal>'
 * </para>
 * </listitem>
 * </itemizedlist>
 * <para>
 * A basic type string describes a basic type (as per
 * g_variant_type_is_basic()) and is always a single
 * character in length.  The valid basic type strings are
 * "<literal>b</literal>", "<literal>y</literal>",
 * "<literal>n</literal>", "<literal>q</literal>",
 * "<literal>i</literal>", "<literal>u</literal>",
 * "<literal>x</literal>", "<literal>t</literal>",
 * "<literal>h</literal>", "<literal>d</literal>",
 * "<literal>s</literal>", "<literal>o</literal>",
 * "<literal>g</literal>" and "<literal>?</literal>".
 * </para>
 * <para>
 * The above definition is recursive to arbitrary depth.
 * "<literal>aaaaai</literal>" and "<literal>(ui(nq((y)))s)</literal>"
 * are both valid type strings, as is
 * "<literal>a(aa(ui)(qna{ya(yd)}))</literal>".
 * </para>
 * <para>
 * The meaning of each of the characters is as follows:
 * </para>
 * <informaltable>
 * <tgroup cols='2'>
 * <tbody>
 * <row>
 * <entry>
 * <para>
 * <emphasis role='strong'>Character</emphasis>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * <emphasis role='strong'>Meaning</emphasis>
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>b</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * the type string of %G_VARIANT_TYPE_BOOLEAN; a boolean value.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>y</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * the type string of %G_VARIANT_TYPE_BYTE; a byte.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>n</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * the type string of %G_VARIANT_TYPE_INT16; a signed 16 bit
 * integer.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>q</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * the type string of %G_VARIANT_TYPE_UINT16; an unsigned 16 bit
 * integer.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>i</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * the type string of %G_VARIANT_TYPE_INT32; a signed 32 bit
 * integer.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>u</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * the type string of %G_VARIANT_TYPE_UINT32; an unsigned 32 bit
 * integer.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>x</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * the type string of %G_VARIANT_TYPE_INT64; a signed 64 bit
 * integer.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>t</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * the type string of %G_VARIANT_TYPE_UINT64; an unsigned 64 bit
 * integer.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>h</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * the type string of %G_VARIANT_TYPE_HANDLE; a signed 32 bit
 * value that, by convention, is used as an index into an array
 * of file descriptors that are sent alongside a D-Bus message.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>d</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * the type string of %G_VARIANT_TYPE_DOUBLE; a double precision
 * floating point value.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>s</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * the type string of %G_VARIANT_TYPE_STRING; a string.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>o</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * the type string of %G_VARIANT_TYPE_OBJECT_PATH; a string in
 * the form of a D-Bus object path.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>g</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * the type string of %G_VARIANT_TYPE_STRING; a string in the
 * form of a D-Bus type signature.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>?</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * the type string of %G_VARIANT_TYPE_BASIC; an indefinite type
 * that is a supertype of any of the basic types.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>v</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * the type string of %G_VARIANT_TYPE_VARIANT; a container type
 * that contain any other type of value.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>a</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * used as a prefix on another type string to mean an array of
 * that type; the type string "<literal>ai</literal>", for
 * example, is the type of an array of 32 bit signed integers.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>m</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * used as a prefix on another type string to mean a "maybe", or
 * "nullable", version of that type; the type string
 * "<literal>ms</literal>", for example, is the type of a value
 * that maybe contains a string, or maybe contains nothing.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>()</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * used to enclose zero or more other concatenated type strings
 * to create a tuple type; the type string
 * "<literal>(is)</literal>", for example, is the type of a pair
 * of an integer and a string.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>r</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * the type string of %G_VARIANT_TYPE_TUPLE; an indefinite type
 * that is a supertype of any tuple type, regardless of the
 * number of items.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>{}</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * used to enclose a basic type string concatenated with another
 * type string to create a dictionary entry type, which usually
 * appears inside of an array to form a dictionary; the type
 * string "<literal>a{sd}</literal>", for example, is the type of
 * a dictionary that maps strings to double precision floating
 * point values.
 * </para>
 * <para>
 * The first type (the basic type) is the key type and the second
 * type is the value type.  The reason that the first type is
 * restricted to being a basic type is so that it can easily be
 * hashed.
 * </para>
 * </entry>
 * </row>
 * <row>
 * <entry>
 * <para>
 * <literal>*</literal>
 * </para>
 * </entry>
 * <entry>
 * <para>
 * the type string of %G_VARIANT_TYPE_ANY; the indefinite type
 * that is a supertype of all types.  Note that, as with all type
 * strings, this character represents exactly one type.  It
 * cannot be used inside of tuples to mean "any number of items".
 * </para>
 * </entry>
 * </row>
 * </tbody>
 * </tgroup>
 * </informaltable>
 * <para>
 * Any type string of a container that contains an indefinite type is,
 * itself, an indefinite type.  For example, the type string
 * "<literal>a*</literal>" (corresponding to %G_VARIANT_TYPE_ARRAY) is
 * an indefinite type that is a supertype of every array type.
 * "<literal>(*s)</literal>" is a supertype of all tuples that
 * contain exactly two items where the second item is a string.
 * </para>
 * <para>
 * "<literal>a{?*}</literal>" is an indefinite type that is a
 * supertype of all arrays containing dictionary entries where the key
 * is any basic type and the value is any type at all.  This is, by
 * definition, a dictionary, so this type string corresponds to
 * %G_VARIANT_TYPE_DICTIONARY.  Note that, due to the restriction that
 * the key of a dictionary entry must be a basic type,
 * "<literal>{**}</literal>" is not a valid type string.
 * </para>
 * </refsect2>
 *
 * Are of the same form as those found in dbus.  note, however: D-Bus
 */


/**
 * SECTION:hash_tables
 * @title: Hash Tables
 * @short_description: associations between keys and values so that given a key the value can be found quickly
 *
 * A #GHashTable provides associations between keys and values which is
 * optimized so that given a key, the associated value can be found
 * very quickly.
 * Note that neither keys nor values are copied when inserted into the
 * #GHashTable, so they must exist for the lifetime of the #GHashTable.
 * This means that the use of static strings is OK, but temporary
 * strings (i.e. those created in buffers and those returned by GTK+
 * widgets) should be copied with g_strdup() before being inserted.
 * If keys or values are dynamically allocated, you must be careful to
 * ensure that they are freed when they are removed from the
 * #GHashTable, and also when they are overwritten by new insertions
 * into the #GHashTable. It is also not advisable to mix static strings
 * and dynamically-allocated strings in a #GHashTable, because it then
 * becomes difficult to determine whether the string should be freed.
 * To create a #GHashTable, use g_hash_table_new().
 * To insert a key and value into a #GHashTable, use
 * g_hash_table_insert().
 * To lookup a value corresponding to a given key, use
 * g_hash_table_lookup() and g_hash_table_lookup_extended().
 * g_hash_table_lookup_extended() can also be used to simply
 * check if a key is present in the hash table.
 * To remove a key and value, use g_hash_table_remove().
 * To call a function for each key and value pair use
 * g_hash_table_foreach() or use a iterator to iterate over the
 * key/value pairs in the hash table, see #GHashTableIter.
 * To destroy a #GHashTable use g_hash_table_destroy().
 * <example>
 * <title>Using a GHashTable as a set</title>
 * <para>
 * A common use-case for hash tables is to store information about
 * a set of keys, without associating any particular value with each
 * key-value pairs where key == value, then GHashTable does not
 * allocate memory to store the values, which can be a considerable
 * space saving, if your set is large.
 * </para>
 * <programlisting>
 * GHashTable *
 * set_new (GHashFunc      hash_func,
 * GEqualFunc     equal_func,
 * GDestroyNotify destroy)
 * {
 * return g_hash_table_new_full (hash_func, equal_func, destroy);
 * }
 * void
 * set_insert (GHashTable *set,
 * gpointer    element)
 * {
 * g_hash_table_insert (set, element, element);
 * }
 * gboolean
 * set_contains (GHashTable *set,
 * gpointer    element)
 * {
 * return g_hash_table_lookup_extended (set, element, NULL, NULL);
 * }
 * gboolean
 * set_remove (GHashTable *set,
 * gpointer    element)
 * {
 * return g_hash_table_remove (set, element);
 * }
 * </programlisting>
 * </example>
 *
 * Key. ghashtable optimizes one way of doing so: If you store only
 */


/**
 * SECTION:iochannels
 * @title: IO Channels
 * @short_description: portable support for using files, pipes and sockets
 * @see_also: <para> <variablelist> <varlistentry> <term>g_io_add_watch(), g_io_add_watch_full(), g_source_remove()</term> <listitem><para> Convenience functions for creating #GIOChannel instances and adding them to the <link linkend="glib-The-Main-Event-Loop">main event loop</link>. </para></listitem> </varlistentry> </variablelist> </para>
 *
 * The #GIOChannel data type aims to provide a portable method for
 * using file descriptors, pipes, and sockets, and integrating them
 * into the <link linkend="glib-The-Main-Event-Loop">main event
 * loop</link>. Currently full support is available on UNIX platforms,
 * support for Windows is only partially complete.
 * To create a new #GIOChannel on UNIX systems use
 * g_io_channel_unix_new(). This works for plain file descriptors,
 * pipes and sockets. Alternatively, a channel can be created for a
 * file in a system independent manner using g_io_channel_new_file().
 * Once a #GIOChannel has been created, it can be used in a generic
 * manner with the functions g_io_channel_read_chars(),
 * g_io_channel_write_chars(), g_io_channel_seek_position(), and
 * g_io_channel_shutdown().
 * To add a #GIOChannel to the <link
 * linkend="glib-The-Main-Event-Loop">main event loop</link> use
 * g_io_add_watch() or g_io_add_watch_full(). Here you specify which
 * events you are interested in on the #GIOChannel, and provide a
 * function to be called whenever these events occur.
 * #GIOChannel instances are created with an initial reference count of
 * 1. g_io_channel_ref() and g_io_channel_unref() can be used to
 * increment or decrement the reference count respectively. When the
 * reference count falls to 0, the #GIOChannel is freed. (Though it
 * isn't closed automatically, unless it was created using
 * g_io_channel_new_file().) Using g_io_add_watch() or
 * g_io_add_watch_full() increments a channel's reference count.
 * The new functions g_io_channel_read_chars(),
 * g_io_channel_read_line(), g_io_channel_read_line_string(),
 * g_io_channel_read_to_end(), g_io_channel_write_chars(),
 * g_io_channel_seek_position(), and g_io_channel_flush() should not be
 * mixed with the deprecated functions g_io_channel_read(),
 * g_io_channel_write(), and g_io_channel_seek() on the same channel.
 */


/**
 * SECTION:linked_lists_double
 * @title: Doubly-Linked Lists
 * @short_description: linked lists containing integer values or pointers to data, with the ability to iterate over the list in both directions
 *
 * The #GList structure and its associated functions provide a standard
 * doubly-linked list data structure.
 * Each element in the list contains a piece of data, together with
 * pointers which link to the previous and next elements in the list.
 * Using these pointers it is possible to move through the list in both
 * directions (unlike the <link
 * linkend="glib-Singly-Linked-Lists">Singly-Linked Lists</link> which
 * only allows movement through the list in the forward direction).
 * The data contained in each element can be either integer values, by
 * using one of the <link linkend="glib-Type-Conversion-Macros">Type
 * Conversion Macros</link>, or simply pointers to any type of data.
 * List elements are allocated from the <link
 * linkend="glib-Memory-Slices">slice allocator</link>, which is more
 * efficient than allocating elements individually.
 * Note that most of the #GList functions expect to be passed a pointer
 * to the first element in the list. The functions which insert
 * elements return the new start of the list, which may have changed.
 * There is no function to create a #GList. %NULL is considered to be
 * the empty list so you simply set a #GList* to %NULL.
 * To add elements, use g_list_append(), g_list_prepend(),
 * g_list_insert() and g_list_insert_sorted().
 * To remove elements, use g_list_remove().
 * To find elements in the list use g_list_first(), g_list_last(),
 * g_list_next(), g_list_previous(), g_list_nth(), g_list_nth_data(),
 * g_list_find() and g_list_find_custom().
 * To find the index of an element use g_list_position() and
 * g_list_index().
 * To call a function for each element in the list use g_list_foreach().
 * To free the entire list, use g_list_free().
 */


/**
 * SECTION:linked_lists_single
 * @title: Singly-Linked Lists
 * @short_description: linked lists containing integer values or pointers to data, limited to iterating over the list in one direction
 *
 * The #GSList structure and its associated functions provide a
 * standard singly-linked list data structure.
 * Each element in the list contains a piece of data, together with a
 * pointer which links to the next element in the list. Using this
 * pointer it is possible to move through the list in one direction
 * only (unlike the <link
 * linkend="glib-Doubly-Linked-Lists">Doubly-Linked Lists</link> which
 * allow movement in both directions).
 * The data contained in each element can be either integer values, by
 * using one of the <link linkend="glib-Type-Conversion-Macros">Type
 * Conversion Macros</link>, or simply pointers to any type of data.
 * List elements are allocated from the <link
 * linkend="glib-Memory-Slices">slice allocator</link>, which is more
 * efficient than allocating elements individually.
 * Note that most of the #GSList functions expect to be passed a
 * pointer to the first element in the list. The functions which insert
 * elements return the new start of the list, which may have changed.
 * There is no function to create a #GSList. %NULL is considered to be
 * the empty list so you simply set a #GSList* to %NULL.
 * To add elements, use g_slist_append(), g_slist_prepend(),
 * g_slist_insert() and g_slist_insert_sorted().
 * To remove elements, use g_slist_remove().
 * To find elements in the list use g_slist_last(), g_slist_next(),
 * g_slist_nth(), g_slist_nth_data(), g_slist_find() and
 * g_slist_find_custom().
 * To find the index of an element use g_slist_position() and
 * g_slist_index().
 * To call a function for each element in the list use
 * g_slist_foreach().
 * To free the entire list, use g_slist_free().
 */


/**
 * SECTION:main
 * @title: The Main Event Loop
 * @short_description: manages all available sources of events
 *
 * The main event loop manages all the available sources of events for
 * GLib and GTK+ applications. These events can come from any number of
 * different types of sources such as file descriptors (plain files,
 * pipes or sockets) and timeouts. New types of event sources can also
 * be added using g_source_attach().
 * To allow multiple independent sets of sources to be handled in
 * different threads, each source is associated with a #GMainContext.
 * A GMainContext can only be running in a single thread, but
 * sources can be added to it and removed from it from other threads.
 * Each event source is assigned a priority. The default priority,
 * #G_PRIORITY_DEFAULT, is 0. Values less than 0 denote higher priorities.
 * Values greater than 0 denote lower priorities. Events from high priority
 * sources are always processed before events from lower priority sources.
 * Idle functions can also be added, and assigned a priority. These will
 * be run whenever no events with a higher priority are ready to be processed.
 * The #GMainLoop data type represents a main event loop. A GMainLoop is
 * created with g_main_loop_new(). After adding the initial event sources,
 * g_main_loop_run() is called. This continuously checks for new events from
 * each of the event sources and dispatches them. Finally, the processing of
 * an event from one of the sources leads to a call to g_main_loop_quit() to
 * exit the main loop, and g_main_loop_run() returns.
 * It is possible to create new instances of #GMainLoop recursively.
 * This is often used in GTK+ applications when showing modal dialog
 * boxes. Note that event sources are associated with a particular
 * #GMainContext, and will be checked and dispatched for all main
 * loops associated with that GMainContext.
 * GTK+ contains wrappers of some of these functions, e.g. gtk_main(),
 * gtk_main_quit() and gtk_events_pending().
 * <refsect2><title>Creating new source types</title>
 * <para>One of the unusual features of the #GMainLoop functionality
 * is that new types of event source can be created and used in
 * addition to the builtin type of event source. A new event source
 * type is used for handling GDK events. A new source type is created
 * by <firstterm>deriving</firstterm> from the #GSource structure.
 * The derived type of source is represented by a structure that has
 * the #GSource structure as a first element, and other elements specific
 * to the new source type. To create an instance of the new source type,
 * call g_source_new() passing in the size of the derived structure and
 * a table of functions. These #GSourceFuncs determine the behavior of
 * the new source type.</para>
 * <para>New source types basically interact with the main context
 * in two ways. Their prepare function in #GSourceFuncs can set a timeout
 * to determine the maximum amount of time that the main loop will sleep
 * before checking the source again. In addition, or as well, the source
 * can add file descriptors to the set that the main context checks using
 * g_source_add_poll().</para>
 * </refsect2>
 * <refsect2><title>Customizing the main loop iteration</title>
 * <para>Single iterations of a #GMainContext can be run with
 * g_main_context_iteration(). In some cases, more detailed control
 * of exactly how the details of the main loop work is desired, for
 * instance, when integrating the #GMainLoop with an external main loop.
 * In such cases, you can call the component functions of
 * g_main_context_iteration() directly. These functions are
 * g_main_context_prepare(), g_main_context_query(),
 * g_main_context_check() and g_main_context_dispatch().</para>
 * <para>The operation of these functions can best be seen in terms
 * of a state diagram, as shown in <xref linkend="mainloop-states"/>.</para>
 * <figure id="mainloop-states"><title>States of a Main Context</title>
 * <graphic fileref="mainloop-states.gif" format="GIF"></graphic>
 * </figure>
 * </refsect2>
 */


/**
 * SECTION:markup
 * @Title: Simple XML Subset Parser
 * @Short_description: parses a subset of XML
 * @See_also: <ulink url="http://www.w3.org/TR/REC-xml/">XML Specification</ulink>
 *
 * The "GMarkup" parser is intended to parse a simple markup format
 * that's a subset of XML. This is a small, efficient, easy-to-use
 * parser. It should not be used if you expect to interoperate with
 * other applications generating full-scale XML. However, it's very
 * useful for application data files, config files, etc. where you
 * know your application will be the only one writing the file.
 * Full-scale XML parsers should be able to parse the subset used by
 * GMarkup, so you can easily migrate to full-scale XML at a later
 * time if the need arises.
 * GMarkup is not guaranteed to signal an error on all invalid XML;
 * the parser may accept documents that an XML parser would not.
 * However, XML documents which are not well-formed<footnote
 * id="wellformed">Being wellformed is a weaker condition than being
 * valid. See the <ulink url="http://www.w3.org/TR/REC-xml/">XML
 * specification</ulink> for definitions of these terms.</footnote>
 * are not considered valid GMarkup documents.
 * Simplifications to XML include:
 * <itemizedlist>
 * <listitem>Only UTF-8 encoding is allowed</listitem>
 * <listitem>No user-defined entities</listitem>
 * <listitem>Processing instructions, comments and the doctype declaration
 * are "passed through" but are not interpreted in any way</listitem>
 * <listitem>No DTD or validation.</listitem>
 * </itemizedlist>
 * The markup format does support:
 * <itemizedlist>
 * <listitem>Elements</listitem>
 * <listitem>Attributes</listitem>
 * <listitem>5 standard entities:
 * <literal>&amp;amp; &amp;lt; &amp;gt; &amp;quot; &amp;apos;</literal>
 * </listitem>
 * <listitem>Character references</listitem>
 * <listitem>Sections marked as CDATA</listitem>
 * </itemizedlist>
 */


/**
 * SECTION:memory
 * @Short_Description: general memory-handling
 * @Title: Memory Allocation
 *
 * These functions provide support for allocating and freeing memory.
 * <note>
 * If any call to allocate memory fails, the application is terminated.
 * This also means that there is no need to check if the call succeeded.
 * </note>
 * <note>
 * It's important to match g_malloc() with g_free(), plain malloc() with free(),
 * and (if you're using C++) new with delete and new[] with delete[]. Otherwise
 * bad things can happen, since these allocators may use different memory
 * pools (and new/delete call constructors and destructors). See also
 * g_mem_set_vtable().
 * </note>
 */


/**
 * SECTION:memory_chunks
 * @title: Memory Chunks
 * @short_description: deprecated way to allocate groups of equal-sized chunks of memory
 *
 * Memory chunks provide an space-efficient way to allocate equal-sized
 * pieces of memory, called atoms. However, due to the administrative
 * overhead (in particular for #G_ALLOC_AND_FREE, and when used from
 * multiple threads), they are in practise often slower than direct use
 * of g_malloc(). Therefore, memory chunks have been deprecated in
 * favor of the <link linkend="glib-Memory-Slices">slice
 * allocator</link>, which has been added in 2.10. All internal uses of
 * memory chunks in GLib have been converted to the
 * <literal>g_slice</literal> API.
 * There are two types of memory chunks, #G_ALLOC_ONLY, and
 * #G_ALLOC_AND_FREE. <itemizedlist> <listitem><para> #G_ALLOC_ONLY
 * chunks only allow allocation of atoms. The atoms can never be freed
 * individually. The memory chunk can only be free in its entirety.
 * </para></listitem> <listitem><para> #G_ALLOC_AND_FREE chunks do
 * allow atoms to be freed individually. The disadvantage of this is
 * that the memory chunk has to keep track of which atoms have been
 * freed. This results in more memory being used and a slight
 * degradation in performance. </para></listitem> </itemizedlist>
 * To create a memory chunk use g_mem_chunk_new() or the convenience
 * macro g_mem_chunk_create().
 * To allocate a new atom use g_mem_chunk_alloc(),
 * g_mem_chunk_alloc0(), or the convenience macros g_chunk_new() or
 * g_chunk_new0().
 * To free an atom use g_mem_chunk_free(), or the convenience macro
 * g_chunk_free(). (Atoms can only be freed if the memory chunk is
 * created with the type set to #G_ALLOC_AND_FREE.)
 * To free any blocks of memory which are no longer being used, use
 * g_mem_chunk_clean(). To clean all memory chunks, use g_blow_chunks().
 * To reset the memory chunk, freeing all of the atoms, use
 * g_mem_chunk_reset().
 * To destroy a memory chunk, use g_mem_chunk_destroy().
 * To help debug memory chunks, use g_mem_chunk_info() and
 * g_mem_chunk_print().
 * <example>
 * <title>Using a #GMemChunk</title>
 * <programlisting>
 * GMemChunk *mem_chunk;
 * gchar *mem[10000];
 * gint i;
 * /<!-- -->* Create a GMemChunk with atoms 50 bytes long, and memory
 * blocks holding 100 bytes. Note that this means that only 2 atoms
 * fit into each memory block and so isn't very efficient. *<!-- -->/
 * mem_chunk = g_mem_chunk_new ("test mem chunk", 50, 100, G_ALLOC_AND_FREE);
 * /<!-- -->* Now allocate 10000 atoms. *<!-- -->/
 * for (i = 0; i &lt; 10000; i++)
 * {
 * mem[i] = g_chunk_new (gchar, mem_chunk);
 * /<!-- -->* Fill in the atom memory with some junk. *<!-- -->/
 * for (j = 0; j &lt; 50; j++)
 * mem[i][j] = i * j;
 * }
 * /<!-- -->* Now free all of the atoms. Note that since we are going to
 * destroy the GMemChunk, this wouldn't normally be used. *<!-- -->/
 * for (i = 0; i &lt; 10000; i++)
 * {
 * g_mem_chunk_free (mem_chunk, mem[i]);
 * }
 * /<!-- -->* We are finished with the GMemChunk, so we destroy it. *<!-- -->/
 * g_mem_chunk_destroy (mem_chunk);
 * </programlisting>
 * </example>
 * <example>
 * <title>Using a #GMemChunk with data structures</title>
 * <programlisting>
 * GMemChunk *array_mem_chunk;
 * GRealArray *array;
 * /<!-- -->* Create a GMemChunk to hold GRealArray structures, using
 * the g_mem_chunk_create(<!-- -->) convenience macro. We want 1024 atoms in each
 * memory block, and we want to be able to free individual atoms. *<!-- -->/
 * array_mem_chunk = g_mem_chunk_create (GRealArray, 1024, G_ALLOC_AND_FREE);
 * /<!-- -->* Allocate one atom, using the g_chunk_new(<!-- -->) convenience macro. *<!-- -->/
 * array = g_chunk_new (GRealArray, array_mem_chunk);
 * /<!-- -->* We can now use array just like a normal pointer to a structure. *<!-- -->/
 * array->data            = NULL;
 * array->len             = 0;
 * array->alloc           = 0;
 * array->elt_size        = elt_size;
 * /<!-- -->* We can free the element, so it can be reused. *<!-- -->/
 * g_chunk_free (array, array_mem_chunk);
 * /<!-- -->* We destroy the GMemChunk when we are finished with it. *<!-- -->/
 * g_mem_chunk_destroy (array_mem_chunk);
 * </programlisting>
 * </example>
 *
 * Array->zero_terminated = (zero_terminated ? 1 : 0);
 * Array->clear           = (clear ? 1 : 0);
 */


/**
 * SECTION:misc_utils
 * @title: Miscellaneous Utility Functions
 * @short_description: a selection of portable utility functions
 *
 * These are portable utility functions.
 */


/**
 * SECTION:option
 * @Short_description: parses commandline options
 * @Title: Commandline option parser
 *
 * The GOption commandline parser is intended to be a simpler replacement
 * for the popt library. It supports short and long commandline options,
 * as shown in the following example:
 * <literal>testtreemodel -r 1 --max-size 20 --rand --display=:1.0 -vb -- file1 file2</literal>
 * The example demonstrates a number of features of the GOption
 * commandline parser
 * <itemizedlist><listitem><para>
 * Options can be single letters, prefixed by a single dash. Multiple
 * short options can be grouped behind a single dash.
 * </para></listitem><listitem><para>
 * Long options are prefixed by two consecutive dashes.
 * </para></listitem><listitem><para>
 * Options can have an extra argument, which can be a number, a string or
 * a filename. For long options, the extra argument can be appended with
 * an equals sign after the option name, which is useful if the extra
 * argument starts with a dash, which would otherwise cause it to be
 * interpreted as another option.
 * </para></listitem><listitem><para>
 * Non-option arguments are returned to the application as rest arguments.
 * </para></listitem><listitem><para>
 * An argument consisting solely of two dashes turns off further parsing,
 * any remaining arguments (even those starting with a dash) are returned
 * to the application as rest arguments.
 * </para></listitem></itemizedlist>
 * Another important feature of GOption is that it can automatically
 * generate nicely formatted help output. Unless it is explicitly turned
 * off with g_option_context_set_help_enabled(), GOption will recognize
 * the <option>--help</option>, <option>-?</option>,
 * <option>--help-all</option> and
 * <option>--help-</option><replaceable>groupname</replaceable> options
 * (where <replaceable>groupname</replaceable> is the name of a
 * #GOptionGroup) and write a text similar to the one shown in the
 * following example to stdout.
 * <informalexample><screen>
 * Usage:
 * testtreemodel [OPTION...] - test tree model performance
 * Help Options:
 * -h, --help               Show help options
 * --help-all               Show all help options
 * --help-gtk               Show GTK+ Options
 * Application Options:
 * -r, --repeats=N          Average over N repetitions
 * -m, --max-size=M         Test up to 2^M items
 * --display=DISPLAY        X display to use
 * -v, --verbose            Be verbose
 * -b, --beep               Beep when done
 * --rand                   Randomize the data
 * </screen></informalexample>
 * GOption groups options in #GOptionGroup<!-- -->s, which makes it easy to
 * incorporate options from multiple sources. The intended use for this is
 * to let applications collect option groups from the libraries it uses,
 * add them to their #GOptionContext, and parse all options by a single call
 * to g_option_context_parse(). See gtk_get_option_group() for an example.
 * If an option is declared to be of type string or filename, GOption takes
 * care of converting it to the right encoding; strings are returned in
 * UTF-8, filenames are returned in the GLib filename encoding. Note that
 * this only works if setlocale() has been called before
 * g_option_context_parse().
 * Here is a complete example of setting up GOption to parse the example
 * commandline above and produce the example help output.
 * <informalexample><programlisting>
 * static gint repeats = 2;
 * static gint max_size = 8;
 * static gboolean verbose = FALSE;
 * static gboolean beep = FALSE;
 * static gboolean rand = FALSE;
 * static GOptionEntry entries[] =
 * {
 * { "repeats", 'r', 0, G_OPTION_ARG_INT, &repeats, "Average over N repetitions", "N" },
 * { "max-size", 'm', 0, G_OPTION_ARG_INT, &max_size, "Test up to 2^M items", "M" },
 * { "verbose", 'v', 0, G_OPTION_ARG_NONE, &verbose, "Be verbose", NULL },
 * { "beep", 'b', 0, G_OPTION_ARG_NONE, &beep, "Beep when done", NULL },
 * { "rand", 0, 0, G_OPTION_ARG_NONE, &rand, "Randomize the data", NULL },
 * { NULL }
 * };
 * int
 * main (int argc, char *argv[])
 * {
 * GError *error = NULL;
 * GOptionContext *context;
 * context = g_option_context_new ("- test tree model performance");
 * g_option_context_add_main_entries (context, entries, GETTEXT_PACKAGE);
 * g_option_context_add_group (context, gtk_get_option_group (TRUE));
 * if (!g_option_context_parse (context, &argc, &argv, &error))
 * {
 * exit (1);
 * }
 * /&ast; ... &ast;/
 * }
 * </programlisting></informalexample>
 *
 * G_print ("option parsing failed: %s\n", error->message);
 */


/**
 * SECTION:patterns
 * @title: Glob-style pattern matching
 * @short_description: matches strings against patterns containing '*' (wildcard) and '?' (joker)
 *
 * The <function>g_pattern_match*</function> functions match a string
 * against a pattern containing '*' and '?' wildcards with similar
 * possibly empty, string, '?' matches an arbitrary character.
 * Note that in contrast to glob(), the '/' character
 * <emphasis>can</emphasis> be matched by the wildcards, there are no
 * '[...]' character ranges and '*' and '?' can
 * <emphasis>not</emphasis> be escaped to include them literally in a
 * pattern.
 * When multiple strings must be matched against the same pattern, it
 * is better to compile the pattern to a #GPatternSpec using
 * g_pattern_spec_new() and use g_pattern_match_string() instead of
 * g_pattern_match_simple(). This avoids the overhead of repeated
 * pattern compilation.
 *
 * Semantics as the standard glob() function: '*' matches an arbitrary,
 */


/**
 * SECTION:quarks
 * @title: Quarks
 * @short_description: a 2-way association between a string and a unique integer identifier
 *
 * Quarks are associations between strings and integer identifiers.
 * Given either the string or the #GQuark identifier it is possible to
 * retrieve the other.
 * Quarks are used for both <link
 * linkend="glib-Datasets">Datasets</link> and <link
 * linkend="glib-Keyed-Data-Lists">Keyed Data Lists</link>.
 * To create a new quark from a string, use g_quark_from_string() or
 * g_quark_from_static_string().
 * To find the string corresponding to a given #GQuark, use
 * g_quark_to_string().
 * To find the #GQuark corresponding to a given string, use
 * g_quark_try_string().
 * Another use for the string pool maintained for the quark functions
 * is string interning, using g_intern_string() or
 * g_intern_static_string(). An interned string is a canonical
 * representation for a string. One important advantage of interned
 * strings is that they can be compared for equality by a simple
 * pointer comparision, rather than using strcmp().
 */


/**
 * SECTION:random_numbers
 * @title: Random Numbers
 * @short_description: pseudo-random number generator
 *
 * The following functions allow you to use a portable, fast and good
 * pseudo-random number generator (PRNG). It uses the Mersenne Twister
 * PRNG, which was originally developed by Makoto Matsumoto and Takuji
 * Nishimura. Further information can be found at
 * <ulink url="http://www.math.sci.hiroshima-u.ac.jp/~m-mat/MT/emt.html">
 * http://www.math.sci.hiroshima-u.ac.jp/~m-mat/MT/emt.html</ulink>.
 * If you just need a random number, you simply call the
 * <function>g_random_*</function> functions, which will create a
 * globally used #GRand and use the according
 * <function>g_rand_*</function> functions internally. Whenever you
 * need a stream of reproducible random numbers, you better create a
 * #GRand yourself and use the <function>g_rand_*</function> functions
 * directly, which will also be slightly faster. Initializing a #GRand
 * with a certain seed will produce exactly the same series of random
 * numbers on all platforms. This can thus be used as a seed for e.g.
 * games.
 * The <function>g_rand*_range</function> functions will return high
 * quality equally distributed random numbers, whereas for example the
 * <literal>(g_random_int()&percnt;max)</literal> approach often
 * doesn't yield equally distributed numbers.
 * GLib changed the seeding algorithm for the pseudo-random number
 * generator Mersenne Twister, as used by
 * <structname>GRand</structname> and <structname>GRandom</structname>.
 * This was necessary, because some seeds would yield very bad
 * pseudo-random streams.  Also the pseudo-random integers generated by
 * <function>g_rand*_int_range()</function> will have a slightly better
 * equal distribution with the new version of GLib.
 * The original seeding and generation algorithms, as found in GLib
 * 2.0.x, can be used instead of the new ones by setting the
 * environment variable <envar>G_RANDOM_VERSION</envar> to the value of
 * '2.0'. Use the GLib-2.0 algorithms only if you have sequences of
 * numbers generated with Glib-2.0 that you need to reproduce exactly.
 */


/**
 * SECTION:relations
 * @title: Relations and Tuples
 * @short_description: tables of data which can be indexed on any number of fields
 *
 * A #GRelation is a table of data which can be indexed on any number
 * of fields, rather like simple database tables. A #GRelation contains
 * a number of records, called tuples. Each record contains a number of
 * fields. Records are not ordered, so it is not possible to find the
 * record at a particular index.
 * Note that #GRelation tables are currently limited to 2 fields.
 * To create a GRelation, use g_relation_new().
 * To specify which fields should be indexed, use g_relation_index().
 * Note that this must be called before any tuples are added to the
 * #GRelation.
 * To add records to a #GRelation use g_relation_insert().
 * To determine if a given record appears in a #GRelation, use
 * g_relation_exists(). Note that fields are compared directly, so
 * pointers must point to the exact same position (i.e. different
 * copies of the same string will not match.)
 * To count the number of records which have a particular value in a
 * given field, use g_relation_count().
 * To get all the records which have a particular value in a given
 * field, use g_relation_select(). To access fields of the resulting
 * records, use g_tuples_index(). To free the resulting records use
 * g_tuples_destroy().
 * To delete all records which have a particular value in a given
 * field, use g_relation_delete().
 * To destroy the #GRelation, use g_relation_destroy().
 * To help debug #GRelation objects, use g_relation_print().
 * GRelation has been marked as deprecated, since this API has never
 * been fully implemented, is not very actively maintained and rarely
 * used.
 */


/**
 * SECTION:sequence
 * @title: Sequences
 * @short_description: scalable lists
 *
 * The #GSequence data structure has the API of a list, but is
 * implemented internally with a balanced binary tree. This means that
 * it is possible to maintain a sorted list of n elements in time O(n
 * log n). The data contained in each element can be either integer
 * values, by using of the <link
 * linkend="glib-Type-Conversion-Macros">Type Conversion Macros</link>,
 * or simply pointers to any type of data.
 * A #GSequence is accessed through <firstterm>iterators</firstterm>,
 * represented by a #GSequenceIter. An iterator represents a position
 * between two elements of the sequence. For example, the
 * <firstterm>begin</firstterm> iterator represents the gap immediately
 * before the first element of the sequence, and the
 * <firstterm>end</firstterm> iterator represents the gap immediately
 * after the last element. In an empty sequence, the begin and end
 * iterators are the same.
 * Some methods on #GSequence operate on ranges of items. For example
 * g_sequence_foreach_range() will call a user-specified function on
 * each element with the given range. The range is delimited by the
 * gaps represented by the passed-in iterators, so if you pass in the
 * begin and end iterators, the range in question is the entire
 * sequence.
 * The function g_sequence_get() is used with an iterator to access the
 * element immediately following the gap that the iterator represents.
 * The iterator is said to <firstterm>point</firstterm> to that element.
 * Iterators are stable across most operations on a #GSequence. For
 * example an iterator pointing to some element of a sequence will
 * continue to point to that element even after the sequence is sorted.
 * Even moving an element to another sequence using for example
 * g_sequence_move_range() will not invalidate the iterators pointing
 * to it. The only operation that will invalidate an iterator is when
 * the element it points to is removed from any sequence.
 */


/**
 * SECTION:shell
 * @title: Shell-related Utilities
 * @short_description: shell-like commandline handling
 *
 *
 */


/**
 * SECTION:string_chunks
 * @title: String Chunks
 * @short_description: efficient storage of groups of strings
 *
 * String chunks are used to store groups of strings. Memory is
 * allocated in blocks, and as strings are added to the #GStringChunk
 * they are copied into the next free position in a block. When a block
 * is full a new block is allocated.
 * When storing a large number of strings, string chunks are more
 * efficient than using g_strdup() since fewer calls to malloc() are
 * needed, and less memory is wasted in memory allocation overheads.
 * By adding strings with g_string_chunk_insert_const() it is also
 * possible to remove duplicates.
 * To create a new #GStringChunk use g_string_chunk_new().
 * To add strings to a #GStringChunk use g_string_chunk_insert().
 * To add strings to a #GStringChunk, but without duplicating strings
 * which are already in the #GStringChunk, use
 * g_string_chunk_insert_const().
 * To free the entire #GStringChunk use g_string_chunk_free(). It is
 * not possible to free individual strings.
 */


/**
 * SECTION:thread_pools
 * @title: Thread Pools
 * @short_description: pools of threads to execute work concurrently
 * @see_also: <para> <variablelist> <varlistentry> <term>#GThread</term> <listitem><para>GLib thread system.</para></listitem> </varlistentry> </variablelist> </para>
 *
 * Sometimes you wish to asynchronously fork out the execution of work
 * and continue working in your own thread. If that will happen often,
 * the overhead of starting and destroying a thread each time might be
 * too high. In such cases reusing already started threads seems like a
 * good idea. And it indeed is, but implementing this can be tedious
 * and error-prone.
 * Therefore GLib provides thread pools for your convenience. An added
 * advantage is, that the threads can be shared between the different
 * subsystems of your program, when they are using GLib.
 * To create a new thread pool, you use g_thread_pool_new(). It is
 * destroyed by g_thread_pool_free().
 * If you want to execute a certain task within a thread pool, you call
 * g_thread_pool_push().
 * To get the current number of running threads you call
 * g_thread_pool_get_num_threads(). To get the number of still
 * unprocessed tasks you call g_thread_pool_unprocessed(). To control
 * the maximal number of threads for a thread pool, you use
 * g_thread_pool_get_max_threads() and g_thread_pool_set_max_threads().
 * Finally you can control the number of unused threads, that are kept
 * alive by GLib for future use. The current number can be fetched with
 * g_thread_pool_get_num_unused_threads(). The maximal number can be
 * controlled by g_thread_pool_get_max_unused_threads() and
 * g_thread_pool_set_max_unused_threads(). All currently unused threads
 * can be stopped by calling g_thread_pool_stop_unused_threads().
 */


/**
 * SECTION:threads
 * @title: Threads
 * @short_description: thread abstraction; including threads, different mutexes, conditions and thread private data
 * @see_also: #GThreadPool, #GAsyncQueue
 *
 * Threads act almost like processes, but unlike processes all threads
 * of one process share the same memory. This is good, as it provides
 * easy communication between the involved threads via this shared
 * memory, and it is bad, because strange things (so called
 * "Heisenbugs") might happen if the program is not carefully designed.
 * In particular, due to the concurrent nature of threads, no
 * assumptions on the order of execution of code running in different
 * threads can be made, unless order is explicitly forced by the
 * programmer through synchronization primitives.
 * The aim of the thread related functions in GLib is to provide a
 * portable means for writing multi-threaded software. There are
 * primitives for mutexes to protect the access to portions of memory
 * (#GMutex, #GStaticMutex, #G_LOCK_DEFINE, #GStaticRecMutex and
 * #GStaticRWLock). There is a facility to use individual bits for
 * locks (g_bit_lock()). There are primitives for condition variables to
 * allow synchronization of threads (#GCond).  There are primitives for
 * thread-private data - data that every thread has a private instance
 * of (#GPrivate, #GStaticPrivate). There are facilities for one-time
 * initialization (#GOnce, g_once_init_enter()). Last but definitely
 * not least there are primitives to portably create and manage
 * threads (#GThread).
 * The threading system is initialized with g_thread_init(), which
 * takes an optional custom thread implementation or %NULL for the
 * default implementation. If you want to call g_thread_init() with a
 * non-%NULL argument this must be done before executing any other GLib
 * functions (except g_mem_set_vtable()). This is a requirement even if
 * no threads are in fact ever created by the process.
 * Calling g_thread_init() with a %NULL argument is somewhat more
 * relaxed. You may call any other glib functions in the main thread
 * before g_thread_init() as long as g_thread_init() is not called from
 * a glib callback, or with any locks held. However, many libraries
 * above glib does not support late initialization of threads, so doing
 * this should be avoided if possible.
 * Please note that since version 2.24 the GObject initialization
 * function g_type_init() initializes threads (with a %NULL argument),
 * so most applications, including those using Gtk+ will run with
 * threads enabled. If you want a special thread implementation, make
 * sure you call g_thread_init() before g_type_init() is called.
 * After calling g_thread_init(), GLib is completely thread safe (all
 * global data is automatically locked), but individual data structure
 * instances are not automatically locked for performance reasons. So,
 * for example you must coordinate accesses to the same #GHashTable
 * from multiple threads.  The two notable exceptions from this rule
 * are #GMainLoop and #GAsyncQueue, which <emphasis>are</emphasis>
 * threadsafe and need no further application-level locking to be
 * accessed from multiple threads.
 * To help debugging problems in multithreaded applications, GLib
 * supports error-checking mutexes that will give you helpful error
 * messages on common problems. To use error-checking mutexes, define
 * the symbol #G_ERRORCHECK_MUTEXES when compiling the application.
 */


/**
 * SECTION:timers
 * @title: Timers
 * @short_description: keep track of elapsed time
 *
 * #GTimer records a start time, and counts microseconds elapsed since
 * that time. This is done somewhat differently on different platforms,
 * and can be tricky to get exactly right, so #GTimer provides a
 * portable/convenient interface.
 */


/**
 * SECTION:timezone
 * @title: GTimeZone
 * @short_description: A structure representing a time zone
 * @see_also: #GDateTime
 *
 * #GTimeZone is a structure that represents a time zone, at no
 * particular point in time.  It is refcounted and immutable.
 * A time zone contains a number of intervals.  Each interval has
 * an abbreviation to describe it, an offet to UTC and a flag indicating
 * if the daylight savings time is in effect during that interval.  A
 * time zone always has at least one interval -- interval 0.
 * Every UTC time is contained within exactly one interval, but a given
 * local time may be contained within zero, one or two intervals (due to
 * incontinuities associated with daylight savings time).
 * of daylight savings time during 2010) or it may refer to many periods
 * savings time).  It is also possible (usually for political reasons)
 * that some properties (like the abbreviation) change between intervals
 * without other properties changing.
 * #GTimeZone is available since GLib 2.26.
 *
 * An interval may refer to a specific period of time (eg: the duration
 * Of time that share the same properties (eg: all periods of daylight
 */


/**
 * SECTION:trees-binary
 * @title: Balanced Binary Trees
 * @short_description: a sorted collection of key/value pairs optimized for searching and traversing in order
 *
 * The #GTree structure and its associated functions provide a sorted
 * collection of key/value pairs optimized for searching and traversing
 * in order.
 * To create a new #GTree use g_tree_new().
 * To insert a key/value pair into a #GTree use g_tree_insert().
 * To lookup the value corresponding to a given key, use
 * g_tree_lookup() and g_tree_lookup_extended().
 * To find out the number of nodes in a #GTree, use g_tree_nnodes(). To
 * get the height of a #GTree, use g_tree_height().
 * To traverse a #GTree, calling a function for each node visited in
 * the traversal, use g_tree_foreach().
 * To remove a key/value pair use g_tree_remove().
 * To destroy a #GTree, use g_tree_destroy().
 */


/**
 * SECTION:trees-nary
 * @title: N-ary Trees
 * @short_description: trees of data with any number of branches
 *
 * The #GNode struct and its associated functions provide a N-ary tree
 * data structure, where nodes in the tree can contain arbitrary data.
 * To create a new tree use g_node_new().
 * To insert a node into a tree use g_node_insert(),
 * g_node_insert_before(), g_node_append() and g_node_prepend().
 * To create a new node and insert it into a tree use
 * g_node_insert_data(), g_node_insert_data_before(),
 * g_node_append_data() and g_node_prepend_data().
 * To reverse the children of a node use g_node_reverse_children().
 * To find a node use g_node_get_root(), g_node_find(),
 * g_node_find_child(), g_node_child_index(), g_node_child_position(),
 * g_node_first_child(), g_node_last_child(), g_node_nth_child(),
 * g_node_first_sibling(), g_node_prev_sibling(), g_node_next_sibling()
 * or g_node_last_sibling().
 * To get information about a node or tree use G_NODE_IS_LEAF(),
 * G_NODE_IS_ROOT(), g_node_depth(), g_node_n_nodes(),
 * g_node_n_children(), g_node_is_ancestor() or g_node_max_height().
 * To traverse a tree, calling a function for each node visited in the
 * traversal, use g_node_traverse() or g_node_children_foreach().
 * To remove a node or subtree from a tree use g_node_unlink() or
 * g_node_destroy().
 */


/**
 * _glib_get_locale_dir:
 *
 * Return the path to the share\locale or lib\locale subfolder of the
 * GLib installation folder. The path is in the system codepage. We
 * have to use system codepage as bindtextdomain() doesn't have a
 * UTF-8 interface.
 */


/**
 * g_access:
 * @filename: a pathname in the GLib file name encoding (UTF-8 on Windows)
 * @mode: as in access()
 *
 * A wrapper for the POSIX access() function. This function is used to
 * test a pathname for one or several of read, write or execute
 * permissions, or just existence.
 * On Windows, the file protection mechanism is not at all POSIX-like,
 * and the underlying function in the C library only checks the
 * FAT-style READONLY attribute, and does not look at the ACL of a
 * file at all. This function is this in practise almost useless on
 * Windows. Software that needs to handle file permissions on Windows
 * more exactly should use the Win32 API.
 * See your C library manual for more details about access().
 * object that has all the tested permissions, or -1 otherwise or on
 * error.
 *
 * Returns: zero if the pathname refers to an existing file system
 * Since: 2.8
 */


/**
 * g_alloca:
 * @size: number of bytes to allocate.
 *
 * Allocates @size bytes on the stack; these bytes will be freed when the current
 * stack frame is cleaned up. This macro essentially just wraps the alloca()
 * function present on most UNIX variants.
 * Thus it provides the same advantages and pitfalls as alloca():
 * <variablelist>
 * <varlistentry><term></term><listitem><para>
 * + alloca() is very fast, as on most systems it's implemented by just adjusting
 * the stack pointer register.
 * </para></listitem></varlistentry>
 * <varlistentry><term></term><listitem><para>
 * + It doesn't cause any memory fragmentation, within its scope, separate alloca()
 * blocks just build up and are released together at function end.
 * </para></listitem></varlistentry>
 * <varlistentry><term></term><listitem><para>
 * - Allocation sizes have to fit into the current stack frame. For instance in a
 * threaded environment on Linux, the per-thread stack size is limited to 2 Megabytes,
 * so be sparse with alloca() uses.
 * </para></listitem></varlistentry>
 * <varlistentry><term></term><listitem><para>
 * - Allocation failure due to insufficient stack space is not indicated with a %NULL
 * return like e.g. with malloc(). Instead, most systems probably handle it the same
 * way as out of stack space situations from infinite function recursion, i.e.
 * with a segmentation fault.
 * </para></listitem></varlistentry>
 * <varlistentry><term></term><listitem><para>
 * - Special care has to be taken when mixing alloca() with GNU C variable sized arrays.
 * Stack space allocated with alloca() in the same scope as a variable sized array
 * will be freed together with the variable sized array upon exit of that scope, and
 * not upon exit of the enclosing function scope.
 * </para></listitem></varlistentry>
 * </variablelist>
 *
 * Returns: space for @size bytes, allocated on the stack
 */


/**
 * g_allocator_free:
 * @allocator: a #GAllocator.
 *
 * Frees all of the memory allocated by the #GAllocator.
 * allocator</link> instead
 *
 * Deprecated:2.10: Use the <link linkend="glib-Memory-Slices">slice
 */


/**
 * g_allocator_new:
 * @name: the name of the #GAllocator. This name is used to set the name of the #GMemChunk used by the #GAllocator, and is only used for debugging.
 * @n_preallocs: the number of elements in each block of memory allocated.  Larger blocks mean less calls to g_malloc(), but some memory may be wasted.  (GLib uses 128 elements per block by default.) The value must be between 1 and 65535.
 * @Returns: a new #GAllocator.
 *
 * Creates a new #GAllocator.
 * allocator</link> instead
 *
 * Deprecated:2.10: Use the <link linkend="glib-Memory-Slices">slice
 */


/**
 * g_array_append_val:
 * @a: a #GArray.
 * @v: the value to append to the #GArray.
 * @Returns: the #GArray.
 *
 * Adds the value on to the end of the array. The array will grow in
 * size automatically if necessary.
 * <note><para>g_array_append_val() is a macro which uses a reference
 * to the value parameter @v. This means that you cannot use it with
 * literal values such as "27". You must use variables.</para></note>
 */


/**
 * g_array_append_vals:
 * @array: a #GArray.
 * @data: a pointer to the elements to append to the end of the array.
 * @len: the number of elements to append.
 * @Returns: the #GArray.
 *
 * Adds @len elements onto the end of the array.
 */


/**
 * g_array_free:
 * @array: a #GArray.
 * @free_segment: if %TRUE the actual element data is freed as well.
 * @Returns: the element data if @free_segment is %FALSE, otherwise %NULL.  The element data should be freed using g_free().
 *
 * Frees the memory allocated for the #GArray. If @free_segment is
 * %TRUE it frees the memory block holding the elements as well and
 * also each element if @array has a @element_free_func set. Pass
 * %FALSE if you want to free the #GArray wrapper but preserve the
 * underlying array for use elsewhere. If the reference count of @array
 * is greater than one, the #GArray wrapper is preserved but the size
 * of @array will be set to zero.
 * <note><para>If array elements contain dynamically-allocated memory,
 * they should be freed separately.</para></note>
 */


/**
 * g_array_get_element_size:
 * @array: A #GArray.
 *
 * Gets the size of the elements in @array.
 *
 * Returns: Size of each element, in bytes.
 * Since: 2.22
 */


/**
 * g_array_index:
 * @a: a #GArray.
 * @t: the type of the elements.
 * @i: the index of the element to return.
 * @Returns: the element of the #GArray at the index given by @i.
 *
 * Returns the element of a #GArray at the given index. The return
 * value is cast to the given type.
 * <example>
 * <title>Getting a pointer to an element in a #GArray</title>
 * <programlisting>
 * EDayViewEvent *event;
 * /<!-- -->* This gets a pointer to the 4th element
 * in the array of EDayViewEvent structs. *<!-- -->/
 * event = &amp;g_array_index (events, EDayViewEvent, 3);
 * </programlisting>
 * </example>
 */


/**
 * g_array_insert_val:
 * @a: a #GArray.
 * @i: the index to place the element at.
 * @v: the value to insert into the array.
 * @Returns: the #GArray.
 *
 * Inserts an element into an array at the given index.
 * <note><para>g_array_insert_val() is a macro which uses a reference
 * to the value parameter @v. This means that you cannot use it with
 * literal values such as "27". You must use variables.</para></note>
 */


/**
 * g_array_insert_vals:
 * @array: a #GArray.
 * @index_: the index to place the elements at.
 * @data: a pointer to the elements to insert.
 * @len: the number of elements to insert.
 * @Returns: the #GArray.
 *
 * Inserts @len elements into a #GArray at the given index.
 */


/**
 * g_array_new:
 * @zero_terminated: %TRUE if the array should have an extra element at the end which is set to 0.
 * @clear_: %TRUE if #GArray elements should be automatically cleared to 0 when they are allocated.
 * @element_size: the size of each element in bytes.
 * @Returns: the new #GArray.
 *
 * Creates a new #GArray with a reference count of 1.
 */


/**
 * g_array_prepend_val:
 * @a: a #GArray.
 * @v: the value to prepend to the #GArray.
 * @Returns: the #GArray.
 *
 * Adds the value on to the start of the array. The array will grow in
 * size automatically if necessary.
 * This operation is slower than g_array_append_val() since the
 * existing elements in the array have to be moved to make space for
 * the new element.
 * <note><para>g_array_prepend_val() is a macro which uses a reference
 * to the value parameter @v. This means that you cannot use it with
 * literal values such as "27". You must use variables.</para></note>
 */


/**
 * g_array_prepend_vals:
 * @array: a #GArray.
 * @data: a pointer to the elements to prepend to the start of the array.
 * @len: the number of elements to prepend.
 * @Returns: the #GArray.
 *
 * Adds @len elements onto the start of the array.
 * This operation is slower than g_array_append_vals() since the
 * existing elements in the array have to be moved to make space for
 * the new elements.
 */


/**
 * g_array_ref:
 * @array: A #GArray.
 *
 * Atomically increments the reference count of @array by one. This
 * function is MT-safe and may be called from any thread.
 *
 * Returns: The passed in #GArray.
 * Since: 2.22
 */


/**
 * g_array_remove_index:
 * @array: a #GArray.
 * @index_: the index of the element to remove.
 * @Returns: the #GArray.
 *
 * Removes the element at the given index from a #GArray. The following
 * elements are moved down one place.
 */


/**
 * g_array_remove_index_fast:
 * @array: a @GArray.
 * @index_: the index of the element to remove.
 * @Returns: the #GArray.
 *
 * Removes the element at the given index from a #GArray. The last
 * element in the array is used to fill in the space, so this function
 * does not preserve the order of the #GArray. But it is faster than
 * g_array_remove_index().
 */


/**
 * g_array_remove_range:
 * @array: a @GArray.
 * @index_: the index of the first element to remove.
 * @length: the number of elements to remove.
 * @Returns: the #GArray.
 *
 * Removes the given number of elements starting at the given index
 * from a #GArray.  The following elements are moved to close the gap.
 *
 * Since: 2.4
 */


/**
 * g_array_set_size:
 * @array: a #GArray.
 * @length: the new size of the #GArray.
 * @Returns: the #GArray.
 *
 * Sets the size of the array, expanding it if necessary. If the array
 * was created with @clear_ set to %TRUE, the new elements are set to 0.
 */


/**
 * g_array_sized_new:
 * @zero_terminated: %TRUE if the array should have an extra element at the end with all bits cleared.
 * @clear_: %TRUE if all bits in the array should be cleared to 0 on allocation.
 * @element_size: size of each element in the array.
 * @reserved_size: number of elements preallocated.
 * @Returns: the new #GArray.
 *
 * Creates a new #GArray with @reserved_size elements preallocated and
 * a reference count of 1. This avoids frequent reallocation, if you
 * are going to add many elements to the array. Note however that the
 * size of the array is still 0.
 */


/**
 * g_array_sort:
 * @array: a #GArray.
 * @compare_func: comparison function.
 *
 * Sorts a #GArray using @compare_func which should be a qsort()-style
 * comparison function (returns less than zero for first arg is less
 * than second arg, zero for equal, greater zero if first arg is
 * greater than second arg).
 * If two array elements compare equal, their order in the sorted array
 * is undefined. If you want equal elements to keep their order &#8211; i.e.
 * you want a stable sort &#8211; you can write a comparison function that,
 * if two elements would otherwise compare equal, compares them by
 * their addresses.
 */


/**
 * g_array_sort_with_data:
 * @array: a #GArray.
 * @compare_func: comparison function.
 * @user_data: data to pass to @compare_func.
 *
 * Like g_array_sort(), but the comparison function receives an extra
 * user data argument.
 */


/**
 * g_array_unref:
 * @array: A #GArray.
 *
 * Atomically decrements the reference count of @array by one. If the
 * reference count drops to 0, all memory allocated by the array is
 * released. This function is MT-safe and may be called from any
 * thread.
 *
 * Since: 2.22
 */


/**
 * g_ascii_digit_value:
 * @c: an ASCII character.
 *
 * Determines the numeric value of a character as a decimal
 * digit. Differs from g_unichar_digit_value() because it takes
 * a char, so there's no worry about sign extension if characters
 * are signed.
 * g_ascii_isdigit()), its numeric value. Otherwise, -1.
 *
 * Returns: If @c is a decimal digit (according to
 */


/**
 * g_ascii_dtostr:
 * @buffer: A buffer to place the resulting string in
 * @buf_len: The length of the buffer.
 * @d: The #gdouble to convert
 *
 * Converts a #gdouble to a string, using the '.' as
 * decimal point.
 * This functions generates enough precision that converting
 * the string back using g_ascii_strtod() gives the same machine-number
 * (on machines with IEEE compatible 64bit doubles). It is
 * guaranteed that the size of the resulting string will never
 * be larger than @G_ASCII_DTOSTR_BUF_SIZE bytes.
 *
 * Returns: The pointer to the buffer with the converted string.
 */


/**
 * g_ascii_formatd:
 * @buffer: A buffer to place the resulting string in
 * @buf_len: The length of the buffer.
 * @format: The printf()-style format to use for the code to use for converting.
 * @d: The #gdouble to convert
 *
 * Converts a #gdouble to a string, using the '.' as
 * decimal point. To format the number you pass in
 * a printf()-style format string. Allowed conversion
 * specifiers are 'e', 'E', 'f', 'F', 'g' and 'G'.
 * If you just want to want to serialize the value into a
 * string, use g_ascii_dtostr().
 *
 * Returns: The pointer to the buffer with the converted string.
 */


/**
 * g_ascii_strcasecmp:
 * @s1: string to compare with @s2.
 * @s2: string to compare with @s1.
 *
 * Compare two strings, ignoring the case of ASCII characters.
 * Unlike the BSD strcasecmp() function, this only recognizes standard
 * ASCII letters and ignores the locale, treating all non-ASCII
 * bytes as if they are not letters.
 * This function should be used only on strings that are known to be
 * in encodings where the bytes corresponding to ASCII letters always
 * represent themselves. This includes UTF-8 and the ISO-8859-*
 * charsets, but not for instance double-byte encodings like the
 * Windows Codepage 932, where the trailing bytes of double-byte
 * characters include all ASCII letters. If you compare two CP932
 * strings using this function, you will get false matches.
 * or a positive value if @s1 &gt; @s2.
 *
 * Returns: 0 if the strings match, a negative value if @s1 &lt; @s2,
 */


/**
 * g_ascii_strdown:
 * @str: a string.
 * @len: length of @str in bytes, or -1 if @str is nul-terminated.
 *
 * Converts all upper case ASCII letters to lower case ASCII letters.
 * characters in @str converted to lower case, with
 * semantics that exactly match g_ascii_tolower(). (Note
 * that this is unlike the old g_strdown(), which modified
 * the string in place.)
 *
 * Returns: a newly-allocated string, with all the upper case
 */


/**
 * g_ascii_strncasecmp:
 * @s1: string to compare with @s2.
 * @s2: string to compare with @s1.
 * @n: number of characters to compare.
 *
 * Compare @s1 and @s2, ignoring the case of ASCII characters and any
 * characters after the first @n in each string.
 * Unlike the BSD strcasecmp() function, this only recognizes standard
 * ASCII letters and ignores the locale, treating all non-ASCII
 * characters as if they are not letters.
 * function only on strings known to be in encodings where bytes
 * corresponding to ASCII letters always represent themselves.
 * or a positive value if @s1 &gt; @s2.
 *
 * The same warning as in g_ascii_strcasecmp() applies: Use this
 * Returns: 0 if the strings match, a negative value if @s1 &lt; @s2,
 */


/**
 * g_ascii_strtod:
 * @nptr: the string to convert to a numeric value.
 * @endptr: if non-%NULL, it returns the character after the last character used in the conversion.
 *
 * Converts a string to a #gdouble value.
 * This function behaves like the standard strtod() function
 * does in the C locale. It does this without actually changing
 * the current locale, since that would not be thread-safe.
 * A limitation of the implementation is that this function
 * will still accept localized versions of infinities and NANs.
 * This function is typically used when reading configuration
 * files or other non-user input that should be locale independent.
 * To handle input from the user you should normally use the
 * locale-sensitive system strtod() function.
 * To convert from a #gdouble to a string in a locale-insensitive
 * way, use g_ascii_dtostr().
 * If the correct value would cause overflow, plus or minus %HUGE_VAL
 * is returned (according to the sign of the value), and %ERANGE is
 * stored in %errno. If the correct value would cause underflow,
 * zero is returned and %ERANGE is stored in %errno.
 * This function resets %errno before calling strtod() so that
 * you can reliably detect overflow and underflow.
 *
 * Returns: the #gdouble value.
 */


/**
 * g_ascii_strtoll:
 * @nptr: the string to convert to a numeric value.
 * @endptr: if non-%NULL, it returns the character after the last character used in the conversion.
 * @base: to be used for the conversion, 2..36 or 0
 *
 * Converts a string to a #gint64 value.
 * This function behaves like the standard strtoll() function
 * does in the C locale. It does this without actually
 * changing the current locale, since that would not be
 * thread-safe.
 * This function is typically used when reading configuration
 * files or other non-user input that should be locale independent.
 * To handle input from the user you should normally use the
 * locale-sensitive system strtoll() function.
 * If the correct value would cause overflow, %G_MAXINT64 or %G_MININT64
 * is returned, and %ERANGE is stored in %errno.  If the base is
 * outside the valid range, zero is returned, and %EINVAL is stored
 * in %errno.  If the string conversion fails, zero is returned, and
 *
 * Returns: the #gint64 value or zero on error.
 * Since: 2.12
 */


/**
 * g_ascii_strtoull:
 * @nptr: the string to convert to a numeric value.
 * @endptr: if non-%NULL, it returns the character after the last character used in the conversion.
 * @base: to be used for the conversion, 2..36 or 0
 *
 * Converts a string to a #guint64 value.
 * This function behaves like the standard strtoull() function
 * does in the C locale. It does this without actually
 * changing the current locale, since that would not be
 * thread-safe.
 * This function is typically used when reading configuration
 * files or other non-user input that should be locale independent.
 * To handle input from the user you should normally use the
 * locale-sensitive system strtoull() function.
 * If the correct value would cause overflow, %G_MAXUINT64
 * is returned, and %ERANGE is stored in %errno.  If the base is
 * outside the valid range, zero is returned, and %EINVAL is stored
 * in %errno.  If the string conversion fails, zero is returned, and
 *
 * Returns: the #guint64 value or zero on error.
 * Since: 2.2
 */


/**
 * g_ascii_strup:
 * @str: a string.
 * @len: length of @str in bytes, or -1 if @str is nul-terminated.
 *
 * Converts all lower case ASCII letters to upper case ASCII letters.
 * characters in @str converted to upper case, with
 * semantics that exactly match g_ascii_toupper(). (Note
 * that this is unlike the old g_strup(), which modified
 * the string in place.)
 *
 * Returns: a newly allocated string, with all the lower case
 */


/**
 * g_ascii_tolower:
 * @c: any character.
 *
 * Convert a character to ASCII lower case.
 * Unlike the standard C library tolower() function, this only
 * recognizes standard ASCII letters and ignores the locale, returning
 * all non-ASCII characters unchanged, even if they are lower case
 * letters in a particular character set. Also unlike the standard
 * library function, this takes and returns a char, not an int, so
 * don't call it on %EOF but no need to worry about casting to #guchar
 * before passing a possibly non-ASCII character in.
 * If @c is not an ASCII upper case letter,
 *
 * Returns: the result of converting @c to lower case.
 */


/**
 * g_ascii_toupper:
 * @c: any character.
 *
 * Convert a character to ASCII upper case.
 * Unlike the standard C library toupper() function, this only
 * recognizes standard ASCII letters and ignores the locale, returning
 * all non-ASCII characters unchanged, even if they are upper case
 * letters in a particular character set. Also unlike the standard
 * library function, this takes and returns a char, not an int, so
 * don't call it on %EOF but no need to worry about casting to #guchar
 * before passing a possibly non-ASCII character in.
 * If @c is not an ASCII lower case letter,
 *
 * Returns: the result of converting @c to upper case.
 */


/**
 * g_ascii_xdigit_value:
 * @c: an ASCII character.
 *
 * Determines the numeric value of a character as a hexidecimal
 * digit. Differs from g_unichar_xdigit_value() because it takes
 * a char, so there's no worry about sign extension if characters
 * are signed.
 * g_ascii_isxdigit()), its numeric value. Otherwise, -1.
 *
 * Returns: If @c is a hex digit (according to
 */


/**
 * g_async_queue_length:
 * @queue: a #GAsyncQueue.
 *
 * Returns the length of the queue, negative values mean waiting
 * threads, positive values mean available entries in the
 * the queue minus the number of waiting threads. Thus a return value
 * of 0 could mean 'n' entries in the queue and 'n' thread waiting.
 * That can happen due to locking of the queue or due to
 * scheduling.
 *
 * Returns: the length of the @queue.
 */


/**
 * g_async_queue_length_unlocked:
 * @queue: a #GAsyncQueue.
 *
 * Returns the length of the queue, negative values mean waiting
 * threads, positive values mean available entries in the
 * the queue minus the number of waiting threads. Thus a return value
 * of 0 could mean 'n' entries in the queue and 'n' thread waiting.
 * That can happen due to locking of the queue or due to
 * scheduling. This function must be called while holding the @queue's
 * lock.
 *
 * Returns: the length of the @queue.
 */


/**
 * g_async_queue_lock:
 * @queue: a #GAsyncQueue.
 *
 * Acquires the @queue's lock. After that you can only call the
 * <function>g_async_queue_*_unlocked()</function> function variants on that
 */


/**
 * g_async_queue_new:
 *
 * Creates a new asynchronous queue with the initial reference count of 1.
 *
 * Returns: the new #GAsyncQueue.
 */


/**
 * g_async_queue_new_full:
 * @item_free_func: function to free queue elements
 *
 * Creates a new asynchronous queue with an initial reference count of 1 and
 * sets up a destroy notify function that is used to free any remaining
 * queue items when the queue is destroyed after the final unref.
 *
 * Returns: the new #GAsyncQueue.
 * Since: 2.16
 */


/**
 * g_async_queue_pop:
 * @queue: a #GAsyncQueue.
 *
 * Pops data from the @queue. This function blocks until data become
 * available.
 *
 * Returns: data from the queue.
 */


/**
 * g_async_queue_pop_unlocked:
 * @queue: a #GAsyncQueue.
 *
 * Pops data from the @queue. This function blocks until data become
 * available. This function must be called while holding the @queue's
 * lock.
 *
 * Returns: data from the queue.
 */


/**
 * g_async_queue_push:
 * @queue: a #GAsyncQueue.
 * @data: @data to push into the @queue.
 *
 * Pushes the @data into the @queue. @data must not be %NULL.
 */


/**
 * g_async_queue_push_sorted:
 * @queue: a #GAsyncQueue
 * @data: the @data to push into the @queue
 * @func: the #GCompareDataFunc is used to sort @queue. This function is passed two elements of the @queue. The function should return 0 if they are equal, a negative value if the first element should be higher in the @queue or a positive value if the first element should be lower in the @queue than the second element.
 * @user_data: user data passed to @func.
 *
 * Inserts @data into @queue using @func to determine the new
 * position.
 * This function requires that the @queue is sorted before pushing on
 * new elements.
 * This function will lock @queue before it sorts the queue and unlock
 * it when it is finished.
 * For an example of @func see g_async_queue_sort().
 *
 * Since: 2.10
 */


/**
 * g_async_queue_push_sorted_unlocked:
 * @queue: a #GAsyncQueue
 * @data: the @data to push into the @queue
 * @func: the #GCompareDataFunc is used to sort @queue. This function is passed two elements of the @queue. The function should return 0 if they are equal, a negative value if the first element should be higher in the @queue or a positive value if the first element should be lower in the @queue than the second element.
 * @user_data: user data passed to @func.
 *
 * Inserts @data into @queue using @func to determine the new
 * position.
 * This function requires that the @queue is sorted before pushing on
 * new elements.
 * This function is called while holding the @queue's lock.
 * For an example of @func see g_async_queue_sort().
 *
 * Since: 2.10
 */


/**
 * g_async_queue_push_unlocked:
 * @queue: a #GAsyncQueue.
 * @data: @data to push into the @queue.
 *
 * Pushes the @data into the @queue. @data must not be %NULL. This
 * function must be called while holding the @queue's lock.
 */


/**
 * g_async_queue_ref:
 * @queue: a #GAsyncQueue.
 *
 * Increases the reference count of the asynchronous @queue by 1. You
 * do not need to hold the lock to call this function.
 *
 * Returns: the @queue that was passed in (since 2.6)
 */


/**
 * g_async_queue_ref_unlocked:
 * @queue: a #GAsyncQueue.
 * @Deprecated: Since 2.8, reference counting is done atomically
 *
 * Increases the reference count of the asynchronous @queue by 1.
 * so g_async_queue_ref() can be used regardless of the @queue's
 * lock.
 */


/**
 * g_async_queue_sort:
 * @queue: a #GAsyncQueue
 * @func: the #GCompareDataFunc is used to sort @queue. This function is passed two elements of the @queue. The function should return 0 if they are equal, a negative value if the first element should be higher in the @queue or a positive value if the first element should be lower in the @queue than the second element.
 * @user_data: user data passed to @func
 *
 * Sorts @queue using @func.
 * This function will lock @queue before it sorts the queue and unlock
 * it when it is finished.
 * If you were sorting a list of priority numbers to make sure the
 * lowest priority would be at the top of the queue, you could use:
 * |[
 * gint32 id1;
 * gint32 id2;
 * id1 = GPOINTER_TO_INT (element1);
 * id2 = GPOINTER_TO_INT (element2);
 * ]|
 *
 * Return (id1 > id2 ? +1 : id1 == id2 ? 0 : -1);
 * Since: 2.10
 */


/**
 * g_async_queue_sort_unlocked:
 * @queue: a #GAsyncQueue
 * @func: the #GCompareDataFunc is used to sort @queue. This function is passed two elements of the @queue. The function should return 0 if they are equal, a negative value if the first element should be higher in the @queue or a positive value if the first element should be lower in the @queue than the second element.
 * @user_data: user data passed to @func
 *
 * Sorts @queue using @func.
 * This function is called while holding the @queue's lock.
 *
 * Since: 2.10
 */


/**
 * g_async_queue_timed_pop:
 * @queue: a #GAsyncQueue.
 * @end_time: a #GTimeVal, determining the final time.
 *
 * Pops data from the @queue. If no data is received before @end_time,
 * %NULL is returned.
 * To easily calculate @end_time a combination of g_get_current_time()
 * and g_time_val_add() can be used.
 * received before @end_time.
 *
 * Returns: data from the queue or %NULL, when no data is
 */


/**
 * g_async_queue_timed_pop_unlocked:
 * @queue: a #GAsyncQueue.
 * @end_time: a #GTimeVal, determining the final time.
 *
 * Pops data from the @queue. If no data is received before @end_time,
 * %NULL is returned. This function must be called while holding the
 * To easily calculate @end_time a combination of g_get_current_time()
 * and g_time_val_add() can be used.
 * received before @end_time.
 *
 * Returns: data from the queue or %NULL, when no data is
 */


/**
 * g_async_queue_try_pop:
 * @queue: a #GAsyncQueue.
 *
 * Tries to pop data from the @queue. If no data is available, %NULL is
 * returned.
 * available immediately.
 *
 * Returns: data from the queue or %NULL, when no data is
 */


/**
 * g_async_queue_try_pop_unlocked:
 * @queue: a #GAsyncQueue.
 *
 * Tries to pop data from the @queue. If no data is available, %NULL is
 * returned. This function must be called while holding the @queue's
 * lock.
 * available immediately.
 *
 * Returns: data from the queue or %NULL, when no data is
 */


/**
 * g_async_queue_unlock:
 * @queue: a #GAsyncQueue.
 *
 * Releases the queue's lock.
 */


/**
 * g_async_queue_unref:
 * @queue: a #GAsyncQueue.
 *
 * Decreases the reference count of the asynchronous @queue by 1. If
 * the reference count went to 0, the @queue will be destroyed and the
 * memory allocated will be freed. So you are not allowed to use the
 * hold the lock to call this function.
 */


/**
 * g_async_queue_unref_and_unlock:
 * @queue: a #GAsyncQueue.
 * @Deprecated: Since 2.8, reference counting is done atomically
 *
 * Decreases the reference count of the asynchronous @queue by 1 and
 * releases the lock. This function must be called while holding the
 * destroyed and the memory allocated will be freed.
 * so g_async_queue_unref() can be used regardless of the @queue's
 * lock.
 */


/**
 * g_atexit:
 * @func: (scope async): the function to call on normal program termination.
 *
 * Specifies a function to be called at normal program termination.
 * Since GLib 2.8.2, on Windows g_atexit() actually is a preprocessor
 * macro that maps to a call to the atexit() function in the C
 * library. This means that in case the code that calls g_atexit(),
 * i.e. atexit(), is in a DLL, the function will be called when the
 * DLL is detached from the program. This typically makes more sense
 * than that the function is called when the GLib DLL is detached,
 * which happened earlier when g_atexit() was a function in the GLib
 * DLL.
 * The behaviour of atexit() in the context of dynamically loaded
 * modules is not formally specified and varies wildly.
 * On POSIX systems, calling g_atexit() (or atexit()) in a dynamically
 * loaded module which is unloaded before the program terminates might
 * well cause a crash at program exit.
 * Some POSIX systems implement atexit() like Windows, and have each
 * dynamically loaded module maintain an own atexit chain that is
 * called when the module is unloaded.
 * On other POSIX systems, before a dynamically loaded module is
 * unloaded, the registered atexit functions (if any) residing in that
 * module are called, regardless where the code that registered them
 * resided. This is presumably the most robust approach.
 * As can be seen from the above, for portability it's best to avoid
 * calling g_atexit() (or atexit()) except in the main executable of a
 * program.
 */


/**
 * g_atomic_int_add:
 * @atomic: a pointer to a #gint or #guint
 * @val: the value to add
 *
 * Atomically adds @val to the value of @atomic.
 * Think of this operation as an atomic version of
 * <literal>{ tmp = *atomic; *@atomic += @val; return tmp; }</literal>
 * This call acts as a full compiler and hardware memory barrier.
 *
 * Returns: the value of @atomic before the add, signed
 * Since: 2.4
 */


/**
 * g_atomic_int_and:
 * @atomic: a pointer to a #gint or #guint
 * @val: the value to 'and'
 *
 * Performs an atomic bitwise 'and' of the value of @atomic and @val,
 * storing the result back in @atomic.
 * This call acts as a full compiler and hardware memory barrier.
 * Think of this operation as an atomic version of
 * <literal>{ tmp = *atomic; *@atomic &= @val; return tmp; }</literal>
 *
 * Returns: the value of @atomic before the operation, unsigned
 * Since: 2.30
 */


/**
 * g_atomic_int_compare_and_exchange:
 * @atomic: a pointer to a #gint or #guint
 * @oldval: the value to compare with
 * @newval: the value to conditionally replace with
 *
 * Compares @atomic to @oldval and, if equal, sets it to @newval.
 * If @atomic was not equal to @oldval then no change occurs.
 * This compare and exchange is done atomically.
 * Think of this operation as an atomic version of
 * <literal>{ if (*@atomic == @oldval) { *@atomic = @newval; return TRUE; } else return FALSE; }</literal>
 * This call acts as a full compiler and hardware memory barrier.
 *
 * Returns: %TRUE if the exchange took place
 * Since: 2.4
 */


/**
 * g_atomic_int_dec_and_test:
 * @atomic: a pointer to a #gint or #guint
 *
 * Decrements the value of @atomic by 1.
 * Think of this operation as an atomic version of
 * <literal>{ *@atomic -= 1; return (*@atomic == 0); }</literal>
 * This call acts as a full compiler and hardware memory barrier.
 *
 * Returns: %TRUE if the resultant value is zero
 * Since: 2.4
 */


/**
 * g_atomic_int_exchange_and_add:
 * @atomic: a pointer to a #gint
 * @val: the value to add
 *
 * This function existed before g_atomic_int_add() returned the prior
 * value of the integer (which it now does).  It is retained only for
 * compatibility reasons.  Don't use this function in new code.
 *
 * Returns: the value of @atomic before the add, signed
 * Since: 2.4
 * Deprecated: 2.30: Use g_atomic_int_add() instead.
 */


/**
 * g_atomic_int_get:
 * @atomic: a pointer to a #gint or #guint
 *
 * Gets the current value of @atomic.
 * This call acts as a full compiler and hardware
 * memory barrier (before the get).
 *
 * Returns: the value of the integer
 * Since: 2.4
 */


/**
 * g_atomic_int_inc:
 * @atomic: a pointer to a #gint or #guint
 *
 * Increments the value of @atomic by 1.
 * Think of this operation as an atomic version of
 * <literal>{ *@atomic += 1; }</literal>
 * This call acts as a full compiler and hardware memory barrier.
 *
 * Since: 2.4
 */


/**
 * g_atomic_int_or:
 * @atomic: a pointer to a #gint or #guint
 * @val: the value to 'or'
 *
 * Performs an atomic bitwise 'or' of the value of @atomic and @val,
 * storing the result back in @atomic.
 * Think of this operation as an atomic version of
 * <literal>{ tmp = *atomic; *@atomic |= @val; return tmp; }</literal>
 * This call acts as a full compiler and hardware memory barrier.
 *
 * Returns: the value of @atomic before the operation, unsigned
 * Since: 2.30
 */


/**
 * g_atomic_int_set:
 * @atomic: a pointer to a #gint or #guint
 * @newval: a new value to store
 *
 * Sets the value of @atomic to @newval.
 * This call acts as a full compiler and hardware
 * memory barrier (after the set).
 *
 * Since: 2.4
 */


/**
 * g_atomic_int_xor:
 * @atomic: a pointer to a #gint or #guint
 * @val: the value to 'xor'
 *
 * Performs an atomic bitwise 'xor' of the value of @atomic and @val,
 * storing the result back in @atomic.
 * Think of this operation as an atomic version of
 * <literal>{ tmp = *atomic; *@atomic ^= @val; return tmp; }</literal>
 * This call acts as a full compiler and hardware memory barrier.
 *
 * Returns: the value of @atomic before the operation, unsigned
 * Since: 2.30
 */


/**
 * g_atomic_pointer_add:
 * @atomic: a pointer to a #gpointer-sized value
 * @val: the value to add
 *
 * Atomically adds @val to the value of @atomic.
 * Think of this operation as an atomic version of
 * <literal>{ tmp = *atomic; *@atomic += @val; return tmp; }</literal>
 * This call acts as a full compiler and hardware memory barrier.
 *
 * Returns: the value of @atomic before the add, signed
 * Since: 2.30
 */


/**
 * g_atomic_pointer_and:
 * @atomic: a pointer to a #gpointer-sized value
 * @val: the value to 'and'
 *
 * Performs an atomic bitwise 'and' of the value of @atomic and @val,
 * storing the result back in @atomic.
 * Think of this operation as an atomic version of
 * <literal>{ tmp = *atomic; *@atomic &= @val; return tmp; }</literal>
 * This call acts as a full compiler and hardware memory barrier.
 *
 * Returns: the value of @atomic before the operation, unsigned
 * Since: 2.30
 */


/**
 * g_atomic_pointer_compare_and_exchange:
 * @atomic: a pointer to a #gpointer-sized value
 * @oldval: the value to compare with
 * @newval: the value to conditionally replace with
 *
 * Compares @atomic to @oldval and, if equal, sets it to @newval.
 * If @atomic was not equal to @oldval then no change occurs.
 * This compare and exchange is done atomically.
 * Think of this operation as an atomic version of
 * <literal>{ if (*@atomic == @oldval) { *@atomic = @newval; return TRUE; } else return FALSE; }</literal>
 * This call acts as a full compiler and hardware memory barrier.
 *
 * Returns: %TRUE if the exchange took place
 * Since: 2.4
 */


/**
 * g_atomic_pointer_get:
 * @atomic: a pointer to a #gpointer-sized value
 *
 * Gets the current value of @atomic.
 * This call acts as a full compiler and hardware
 * memory barrier (before the get).
 *
 * Returns: the value of the pointer
 * Since: 2.4
 */


/**
 * g_atomic_pointer_or:
 * @atomic: a pointer to a #gpointer-sized value
 * @val: the value to 'or'
 *
 * Performs an atomic bitwise 'or' of the value of @atomic and @val,
 * storing the result back in @atomic.
 * Think of this operation as an atomic version of
 * <literal>{ tmp = *atomic; *@atomic |= @val; return tmp; }</literal>
 * This call acts as a full compiler and hardware memory barrier.
 *
 * Returns: the value of @atomic before the operation, unsigned
 * Since: 2.30
 */


/**
 * g_atomic_pointer_set:
 * @atomic: a pointer to a #gpointer-sized value
 * @newval: a new value to store
 *
 * Sets the value of @atomic to @newval.
 * This call acts as a full compiler and hardware
 * memory barrier (after the set).
 *
 * Since: 2.4
 */


/**
 * g_atomic_pointer_xor:
 * @atomic: a pointer to a #gpointer-sized value
 * @val: the value to 'xor'
 *
 * Performs an atomic bitwise 'xor' of the value of @atomic and @val,
 * storing the result back in @atomic.
 * Think of this operation as an atomic version of
 * <literal>{ tmp = *atomic; *@atomic ^= @val; return tmp; }</literal>
 * This call acts as a full compiler and hardware memory barrier.
 *
 * Returns: the value of @atomic before the operation, unsigned
 * Since: 2.30
 */


/**
 * g_base64_decode:
 * @text: zero-terminated string with base64 text to decode
 * @out_len: (out): The length of the decoded data is written here
 *
 * Decode a sequence of Base-64 encoded text into binary data
 * newly allocated buffer containing the binary data
 * that @text represents. The returned buffer must
 * be freed with g_free().
 *
 * Returns: (transfer full) (array length=out_len) (element-type guint8):
 * Since: 2.12
 */


/**
 * g_base64_decode_inplace:
 * @text: (inout) (array length=out_len) (element-type guint8): zero-terminated string with base64 text to decode
 * @out_len: (inout): The length of the decoded data is written here
 *
 * Decode a sequence of Base-64 encoded text into binary data
 * by overwriting the input data.
 * is the same as the input @text.
 *
 * Returns: (transfer none): The binary data that @text responds. This pointer
 * Since: 2.20
 */


/**
 * g_base64_decode_step:
 * @in: (array length=len) (element-type guint8): binary input data
 * @len: max length of @in data to decode
 * @out: (out) (array) (element-type guint8): output buffer
 * @state: (inout): Saved state between steps, initialize to 0
 * @save: (inout): Saved state between steps, initialize to 0
 *
 * Incrementally decode a sequence of binary data from its Base-64 stringified
 * representation. By calling this function multiple times you can convert
 * data in chunks to avoid having to have the full encoded data in memory.
 * The output buffer must be large enough to fit all the data that will
 * be written to it. Since base64 encodes 3 bytes in 4 chars you need
 * state).
 *
 * At least: (@len / 4) * 3 + 3 bytes (+ 3 may be needed in case of non-zero
 * Returns: The number of bytes of output that was written
 * Since: 2.12
 */


/**
 * g_base64_encode:
 * @data: (array length=len) (element-type guint8): the binary data to encode
 * @len: the length of @data
 *
 * Encode a sequence of binary data into its Base-64 stringified
 * representation.
 * encoded string representing @data. The returned string must
 * be freed with g_free().
 *
 * Returns: (transfer full): a newly allocated, zero-terminated Base-64
 * Since: 2.12
 */


/**
 * g_base64_encode_close:
 * @break_lines: whether to break long lines
 * @out: (out) (array) (element-type guint8): pointer to destination buffer
 * @state: (inout): Saved state from g_base64_encode_step()
 * @save: (inout): Saved state from g_base64_encode_step()
 *
 * Flush the status from a sequence of calls to g_base64_encode_step().
 * The output buffer must be large enough to fit all the data that will
 * be written to it. It will need up to 4 bytes, or up to 5 bytes if
 * line-breaking is enabled.
 *
 * Returns: The number of bytes of output that was written
 * Since: 2.12
 */


/**
 * g_base64_encode_step:
 * @in: (array length=len) (element-type guint8): the binary data to encode
 * @len: the length of @in
 * @break_lines: whether to break long lines
 * @out: (out) (array) (element-type guint8): pointer to destination buffer
 * @state: (inout): Saved state between steps, initialize to 0
 * @save: (inout): Saved state between steps, initialize to 0
 *
 * Incrementally encode a sequence of binary data into its Base-64 stringified
 * representation. By calling this function multiple times you can convert
 * data in chunks to avoid having to have the full encoded data in memory.
 * When all of the data has been converted you must call
 * g_base64_encode_close() to flush the saved state.
 * The output buffer must be large enough to fit all the data that will
 * be written to it. Due to the way base64 encodes you will need
 * non-zero state). If you enable line-breaking you will need at least:
 * ((@len / 3 + 1) * 4 + 4) / 72 + 1 bytes of extra space.
 * It breaks the lines at 72 columns instead of putting all of the text on
 * the same line. This avoids problems with long lines in the email system.
 *
 * At least: (@len / 3 + 1) * 4 + 4 bytes (+ 4 may be needed in case of
 * Returns: The number of bytes of output that was written
 * Since: 2.12
 */


/**
 * g_basename:
 * @file_name: the name of the file.
 *
 * Gets the name of the file without any leading directory components.
 * It returns a pointer into the given file name string.
 * g_path_get_basename() allocates new memory for the returned string, unlike
 * this function which returns a pointer into the argument.
 *
 * Returns: the name of the file without any leading directory components.
 * Deprecated:2.2: Use g_path_get_basename() instead, but notice that
 */


/**
 * g_bit_lock:
 * @address: a pointer to an integer
 * @lock_bit: a bit value between 0 and 31
 *
 * Sets the indicated @lock_bit in @address.  If the bit is already
 * set, this call will block until g_bit_unlock() unsets the
 * corresponding bit.
 * Attempting to lock on two different bits within the same integer is
 * not supported and will very probably cause deadlocks.
 * The value of the bit that is set is (1u << @bit).  If @bit is not
 * between 0 and 31 then the result is undefined.
 * This function accesses @address atomically.  All other accesses to
 * reliably.
 *
 * Since: 2.24
 */


/**
 * g_bit_nth_lsf:
 * @mask: a #gulong containing flags
 * @nth_bit: the index of the bit to start the search from
 *
 * Find the position of the first bit set in @mask, searching
 * from (but not including) @nth_bit upwards. Bits are numbered
 * from 0 (least significant) to sizeof(#gulong) * 8 - 1 (31 or 63,
 * usually). To start searching from the 0th bit, set @nth_bit to -1.
 *
 * Returns: the index of the first bit set which is higher than @nth_bit
 */


/**
 * g_bit_nth_msf:
 * @mask: a #gulong containing flags
 * @nth_bit: the index of the bit to start the search from
 *
 * Find the position of the first bit set in @mask, searching
 * from (but not including) @nth_bit downwards. Bits are numbered
 * from 0 (least significant) to sizeof(#gulong) * 8 - 1 (31 or 63,
 * usually). To start searching from the last bit, set @nth_bit to
 * -1 or GLIB_SIZEOF_LONG * 8.
 *
 * Returns: the index of the first bit set which is lower than @nth_bit
 */


/**
 * g_bit_storage:
 * @number: a #guint
 *
 * Gets the number of bits used to hold @number,
 * e.g. if @number is 4, 3 bits are needed.
 *
 * Returns: the number of bits used to hold @number
 */


/**
 * g_bit_trylock:
 * @address: a pointer to an integer
 * @lock_bit: a bit value between 0 and 31
 * @returns: %TRUE if the lock was acquired
 *
 * Sets the indicated @lock_bit in @address, returning %TRUE if
 * successful.  If the bit is already set, returns %FALSE immediately.
 * Attempting to lock on two different bits within the same integer is
 * not supported.
 * The value of the bit that is set is (1u << @bit).  If @bit is not
 * between 0 and 31 then the result is undefined.
 * This function accesses @address atomically.  All other accesses to
 * reliably.
 *
 * Since: 2.24
 */


/**
 * g_bit_unlock:
 * @address: a pointer to an integer
 * @lock_bit: a bit value between 0 and 31
 *
 * Clears the indicated @lock_bit in @address.  If another thread is
 * currently blocked in g_bit_lock() on this same bit then it will be
 * woken up.
 * This function accesses @address atomically.  All other accesses to
 * reliably.
 *
 * Since: 2.24
 */


/**
 * g_blow_chunks:
 *
 * Calls g_mem_chunk_clean() on all #GMemChunk objects.
 * allocator</link> instead
 *
 * Deprecated:2.10: Use the <link linkend="glib-Memory-Slices">slice
 */


/**
 * g_bookmark_file_add_application:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @name: the name of the application registering the bookmark or %NULL
 * @exec: command line to be used to launch the bookmark or %NULL
 *
 * Adds the application with @name and @exec to the list of
 * applications that have registered a bookmark for @uri into
 * Every bookmark inside a #GBookmarkFile must have at least an
 * application registered.  Each application must provide a name, a
 * command line useful for launching the bookmark, the number of times
 * the bookmark has been registered by the application and the last
 * time the application registered this bookmark.
 * If @name is %NULL, the name of the application will be the
 * same returned by g_get_application_name(); if @exec is %NULL, the
 * command line will be a composition of the program name as
 * returned by g_get_prgname() and the "%u" modifier, which will be
 * expanded to the bookmark's URI.
 * This function will automatically take care of updating the
 * registrations count and timestamping in case an application
 * with the same @name had already registered a bookmark for
 * If no bookmark for @uri is found, one is created.
 *
 * Since: 2.12
 */


/**
 * g_bookmark_file_add_group:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @group: the group name to be added
 *
 * Adds @group to the list of groups to which the bookmark for @uri
 * belongs to.
 * If no bookmark for @uri is found then it is created.
 *
 * Since: 2.12
 */


/**
 * g_bookmark_file_free:
 * @bookmark: a #GBookmarkFile
 *
 * Frees a #GBookmarkFile.
 *
 * Since: 2.12
 */


/**
 * g_bookmark_file_get_added:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @error: return location for a #GError, or %NULL
 *
 * Gets the time the bookmark for @uri was added to @bookmark
 * In the event the URI cannot be found, -1 is returned and
 *
 * Returns: a timestamp
 * Since: 2.12
 */


/**
 * g_bookmark_file_get_app_info:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @name: an application's name
 * @exec: location for the command line of the application, or %NULL
 * @count: return location for the registration count, or %NULL
 * @stamp: return location for the last registration time, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Gets the registration informations of @app_name for the bookmark for
 * the returned data.
 * The string returned in @app_exec must be freed.
 * In the event the URI cannot be found, %FALSE is returned and
 * event that no application with name @app_name has registered a bookmark
 * for @uri,  %FALSE is returned and error is set to
 * #G_BOOKMARK_FILE_ERROR_APP_NOT_REGISTERED. In the event that unquoting
 * the command line fails, an error of the #G_SHELL_ERROR domain is
 * set and %FALSE is returned.
 *
 * Returns: %TRUE on success.
 * Since: 2.12
 */


/**
 * g_bookmark_file_get_applications:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @length: return location of the length of the returned list, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Retrieves the names of the applications that have registered the
 * bookmark for @uri.
 * In the event the URI cannot be found, %NULL is returned and
 * Use g_strfreev() to free it.
 *
 * Returns: a newly allocated %NULL-terminated array of strings.
 * Since: 2.12
 */


/**
 * g_bookmark_file_get_description:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @error: return location for a #GError, or %NULL
 *
 * Retrieves the description of the bookmark for @uri.
 * In the event the URI cannot be found, %NULL is returned and
 * URI cannot be found.
 *
 * Returns: a newly allocated string or %NULL if the specified
 * Since: 2.12
 */


/**
 * g_bookmark_file_get_groups:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @length: return location for the length of the returned string, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Retrieves the list of group names of the bookmark for @uri.
 * In the event the URI cannot be found, %NULL is returned and
 * The returned array is %NULL terminated, so @length may optionally
 * be %NULL.
 * Use g_strfreev() to free it.
 *
 * Returns: a newly allocated %NULL-terminated array of group names.
 * Since: 2.12
 */


/**
 * g_bookmark_file_get_icon:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @href: return location for the icon's location or %NULL
 * @mime_type: return location for the icon's MIME type or %NULL
 * @error: return location for a #GError or %NULL
 *
 * Gets the icon of the bookmark for @uri.
 * In the event the URI cannot be found, %FALSE is returned and
 * You should free the returned strings.
 *
 * Returns: %TRUE if the icon for the bookmark for the URI was found.
 * Since: 2.12
 */


/**
 * g_bookmark_file_get_is_private:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @error: return location for a #GError, or %NULL
 *
 * Gets whether the private flag of the bookmark for @uri is set.
 * In the event the URI cannot be found, %FALSE is returned and
 * event that the private flag cannot be found, %FALSE is returned and
 *
 * Returns: %TRUE if the private flag is set, %FALSE otherwise.
 * Since: 2.12
 */


/**
 * g_bookmark_file_get_mime_type:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @error: return location for a #GError, or %NULL
 *
 * Retrieves the MIME type of the resource pointed by @uri.
 * In the event the URI cannot be found, %NULL is returned and
 * event that the MIME type cannot be found, %NULL is returned and
 * URI cannot be found.
 *
 * Returns: a newly allocated string or %NULL if the specified
 * Since: 2.12
 */


/**
 * g_bookmark_file_get_modified:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @error: return location for a #GError, or %NULL
 *
 * Gets the time when the bookmark for @uri was last modified.
 * In the event the URI cannot be found, -1 is returned and
 *
 * Returns: a timestamp
 * Since: 2.12
 */


/**
 * g_bookmark_file_get_size:
 * @bookmark: a #GBookmarkFile
 *
 * Gets the number of bookmarks inside @bookmark.
 *
 * Returns: the number of bookmarks
 * Since: 2.12
 */


/**
 * g_bookmark_file_get_title:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Returns the title of the bookmark for @uri.
 * If @uri is %NULL, the title of @bookmark is returned.
 * In the event the URI cannot be found, %NULL is returned and
 * URI cannot be found.
 *
 * Returns: a newly allocated string or %NULL if the specified
 * Since: 2.12
 */


/**
 * g_bookmark_file_get_uris:
 * @bookmark: a #GBookmarkFile
 * @length: return location for the number of returned URIs, or %NULL
 *
 * Returns all URIs of the bookmarks in the bookmark file @bookmark.
 * The array of returned URIs will be %NULL-terminated, so @length may
 * optionally be %NULL.
 * Use g_strfreev() to free it.
 *
 * Returns: a newly allocated %NULL-terminated array of strings.
 * Since: 2.12
 */


/**
 * g_bookmark_file_get_visited:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @error: return location for a #GError, or %NULL
 *
 * Gets the time the bookmark for @uri was last visited.
 * In the event the URI cannot be found, -1 is returned and
 *
 * Returns: a timestamp.
 * Since: 2.12
 */


/**
 * g_bookmark_file_has_application:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @name: the name of the application
 * @error: return location for a #GError or %NULL
 *
 * Checks whether the bookmark for @uri inside @bookmark has been
 * registered by application @name.
 * In the event the URI cannot be found, %FALSE is returned and
 *
 * Returns: %TRUE if the application @name was found
 * Since: 2.12
 */


/**
 * g_bookmark_file_has_group:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @group: the group name to be searched
 * @error: return location for a #GError, or %NULL
 *
 * Checks whether @group appears in the list of groups to which
 * the bookmark for @uri belongs to.
 * In the event the URI cannot be found, %FALSE is returned and
 *
 * Returns: %TRUE if @group was found.
 * Since: 2.12
 */


/**
 * g_bookmark_file_has_item:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 *
 * Looks whether the desktop bookmark has an item with its URI set to @uri.
 *
 * Returns: %TRUE if @uri is inside @bookmark, %FALSE otherwise
 * Since: 2.12
 */


/**
 * g_bookmark_file_load_from_data:
 * @bookmark: an empty #GBookmarkFile struct
 * @data: desktop bookmarks loaded in memory
 * @length: the length of @data in bytes
 * @error: return location for a #GError, or %NULL
 *
 * Loads a bookmark file from memory into an empty #GBookmarkFile
 * structure.  If the object cannot be created then @error is set to a
 * #GBookmarkFileError.
 *
 * Returns: %TRUE if a desktop bookmark could be loaded.
 * Since: 2.12
 */


/**
 * g_bookmark_file_load_from_data_dirs:
 * @bookmark: a #GBookmarkFile
 * @file: a relative path to a filename to open and parse
 * @full_path: return location for a string containing the full path of the file, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * This function looks for a desktop bookmark file named @file in the
 * paths returned from g_get_user_data_dir() and g_get_system_data_dirs(),
 * loads the file into @bookmark and returns the file's full path in
 * set to either a #GFileError or #GBookmarkFileError.
 *
 * Returns: %TRUE if a key file could be loaded, %FALSE othewise
 * Since: 2.12
 */


/**
 * g_bookmark_file_load_from_file:
 * @bookmark: an empty #GBookmarkFile struct
 * @filename: the path of a filename to load, in the GLib file name encoding
 * @error: return location for a #GError, or %NULL
 *
 * Loads a desktop bookmark file into an empty #GBookmarkFile structure.
 * If the file could not be loaded then @error is set to either a #GFileError
 * or #GBookmarkFileError.
 *
 * Returns: %TRUE if a desktop bookmark file could be loaded
 * Since: 2.12
 */


/**
 * g_bookmark_file_move_item:
 * @bookmark: a #GBookmarkFile
 * @old_uri: a valid URI
 * @new_uri: a valid URI, or %NULL
 * @error: return location for a #GError or %NULL
 *
 * Changes the URI of a bookmark item from @old_uri to @new_uri.  Any
 * existing bookmark for @new_uri will be overwritten.  If @new_uri is
 * %NULL, then the bookmark is removed.
 * In the event the URI cannot be found, %FALSE is returned and
 *
 * Returns: %TRUE if the URI was successfully changed
 * Since: 2.12
 */


/**
 * g_bookmark_file_new:
 *
 * Creates a new empty #GBookmarkFile object.
 * Use g_bookmark_file_load_from_file(), g_bookmark_file_load_from_data()
 * or g_bookmark_file_load_from_data_dirs() to read an existing bookmark
 * file.
 *
 * Returns: an empty #GBookmarkFile
 * Since: 2.12
 */


/**
 * g_bookmark_file_remove_application:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @name: the name of the application
 * @error: return location for a #GError or %NULL
 *
 * Removes application registered with @name from the list of applications
 * that have registered a bookmark for @uri inside @bookmark.
 * In the event the URI cannot be found, %FALSE is returned and
 * In the event that no application with name @app_name has registered
 * a bookmark for @uri,  %FALSE is returned and error is set to
 * #G_BOOKMARK_FILE_ERROR_APP_NOT_REGISTERED.
 *
 * Returns: %TRUE if the application was successfully removed.
 * Since: 2.12
 */


/**
 * g_bookmark_file_remove_group:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @group: the group name to be removed
 * @error: return location for a #GError, or %NULL
 *
 * Removes @group from the list of groups to which the bookmark
 * for @uri belongs to.
 * In the event the URI cannot be found, %FALSE is returned and
 * In the event no group was defined, %FALSE is returned and
 *
 * Returns: %TRUE if @group was successfully removed.
 * Since: 2.12
 */


/**
 * g_bookmark_file_remove_item:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @error: return location for a #GError, or %NULL
 *
 * Removes the bookmark for @uri from the bookmark file @bookmark.
 *
 * Returns: %TRUE if the bookmark was removed successfully.
 * Since: 2.12
 */


/**
 * g_bookmark_file_set_added:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @added: a timestamp or -1 to use the current time
 *
 * Sets the time the bookmark for @uri was added into @bookmark.
 * If no bookmark for @uri is found then it is created.
 *
 * Since: 2.12
 */


/**
 * g_bookmark_file_set_app_info:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @name: an application's name
 * @exec: an application's command line
 * @count: the number of registrations done for this application
 * @stamp: the time of the last registration for this application
 * @error: return location for a #GError or %NULL
 * @exec can have one of these two modifiers: "%f", which will
 *
 * Sets the meta-data of application @name inside the list of
 * applications that have registered a bookmark for @uri inside
 * You should rarely use this function; use g_bookmark_file_add_application()
 * and g_bookmark_file_remove_application() instead.
 * application.
 * be expanded as the local file name retrieved from the bookmark's
 * URI; "%u", which will be expanded as the bookmark's URI.
 * The expansion is done automatically when retrieving the stored
 * command line using the g_bookmark_file_get_app_info() function.
 * bookmark; if is < 0, the current registration count will be increased
 * by one, if is 0, the application with @name will be removed from
 * the list of registered applications.
 * current time will be used.
 * If you try to remove an application by setting its registration count to
 * zero, and no bookmark for @uri is found, %FALSE is returned and
 * in the event that no application @name has registered a bookmark
 * for @uri,  %FALSE is returned and error is set to
 * #G_BOOKMARK_FILE_ERROR_APP_NOT_REGISTERED.  Otherwise, if no bookmark
 * for @uri is found, one is created.
 * changed.
 *
 * Returns: %TRUE if the application's meta-data was successfully
 * Since: 2.12
 */


/**
 * g_bookmark_file_set_description:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI or %NULL
 * @description: a string
 *
 * Sets @description as the description of the bookmark for @uri.
 * If @uri is %NULL, the description of @bookmark is set.
 * If a bookmark for @uri cannot be found then it is created.
 *
 * Since: 2.12
 */


/**
 * g_bookmark_file_set_groups:
 * @bookmark: a #GBookmarkFile
 * @uri: an item's URI
 * @groups: an array of group names, or %NULL to remove all groups
 * @length: number of group name values in @groups
 *
 * Sets a list of group names for the item with URI @uri.  Each previously
 * set group name list is removed.
 * If @uri cannot be found then an item for it is created.
 *
 * Since: 2.12
 */


/**
 * g_bookmark_file_set_icon:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @href: the URI of the icon for the bookmark, or %NULL
 * @mime_type: the MIME type of the icon for the bookmark
 *
 * Sets the icon for the bookmark for @uri. If @href is %NULL, unsets
 * the currently set icon. @href can either be a full URL for the icon
 * file or the icon name following the Icon Naming specification.
 * If no bookmark for @uri is found one is created.
 *
 * Since: 2.12
 */


/**
 * g_bookmark_file_set_is_private:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @is_private: %TRUE if the bookmark should be marked as private
 *
 * Sets the private flag of the bookmark for @uri.
 * If a bookmark for @uri cannot be found then it is created.
 *
 * Since: 2.12
 */


/**
 * g_bookmark_file_set_mime_type:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @mime_type: a MIME type
 *
 * Sets @mime_type as the MIME type of the bookmark for @uri.
 * If a bookmark for @uri cannot be found then it is created.
 *
 * Since: 2.12
 */


/**
 * g_bookmark_file_set_modified:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @modified: a timestamp or -1 to use the current time
 *
 * Sets the last time the bookmark for @uri was last modified.
 * If no bookmark for @uri is found then it is created.
 * The "modified" time should only be set when the bookmark's meta-data
 * was actually changed.  Every function of #GBookmarkFile that
 * modifies a bookmark also changes the modification time, except for
 * g_bookmark_file_set_visited().
 *
 * Since: 2.12
 */


/**
 * g_bookmark_file_set_title:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI or %NULL
 * @title: a UTF-8 encoded string
 *
 * Sets @title as the title of the bookmark for @uri inside the
 * bookmark file @bookmark.
 * If @uri is %NULL, the title of @bookmark is set.
 * If a bookmark for @uri cannot be found then it is created.
 *
 * Since: 2.12
 */


/**
 * g_bookmark_file_set_visited:
 * @bookmark: a #GBookmarkFile
 * @uri: a valid URI
 * @visited: a timestamp or -1 to use the current time
 *
 * Sets the time the bookmark for @uri was last visited.
 * If no bookmark for @uri is found then it is created.
 * The "visited" time should only be set if the bookmark was launched,
 * either using the command line retrieved by g_bookmark_file_get_app_info()
 * or by the default application for the bookmark's MIME type, retrieved
 * using g_bookmark_file_get_mime_type().  Changing the "visited" time
 * does not affect the "modified" time.
 *
 * Since: 2.12
 */


/**
 * g_bookmark_file_to_data:
 * @bookmark: a #GBookmarkFile
 * @length: return location for the length of the returned string, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * This function outputs @bookmark as a string.
 * the contents of the #GBookmarkFile
 *
 * Returns: a newly allocated string holding
 * Since: 2.12
 */


/**
 * g_bookmark_file_to_file:
 * @bookmark: a #GBookmarkFile
 * @filename: path of the output file
 * @error: return location for a #GError, or %NULL
 *
 * This function outputs @bookmark into a file.  The write process is
 * guaranteed to be atomic by using g_file_set_contents() internally.
 *
 * Returns: %TRUE if the file was successfully written.
 * Since: 2.12
 */


/**
 * g_build_filename:
 * @first_element: the first element in the path
 * @Varargs: remaining elements in path, terminated by %NULL
 *
 * Creates a filename from a series of elements using the correct
 * separator for filenames.
 * On Unix, this function behaves identically to <literal>g_build_path
 * (G_DIR_SEPARATOR_S, first_element, ....)</literal>.
 * On Windows, it takes into account that either the backslash
 * (<literal>\</literal> or slash (<literal>/</literal>) can be used
 * as separator in filenames, but otherwise behaves as on Unix. When
 * file pathname separators need to be inserted, the one that last
 * previously occurred in the parameters (reading from left to right)
 * is used.
 * No attempt is made to force the resulting filename to be an absolute
 * path. If the first element is a relative path, the result will
 * be a relative path.
 *
 * Returns: a newly-allocated string that must be freed with g_free().
 */


/**
 * g_build_filenamev:
 * @args: (array zero-terminated=1): %NULL-terminated array of strings containing the path elements.
 *
 * Behaves exactly like g_build_filename(), but takes the path elements
 * as a string array, instead of varargs. This function is mainly
 * meant for language bindings.
 *
 * Returns: a newly-allocated string that must be freed with g_free().
 * Since: 2.8
 */


/**
 * g_build_path:
 * @separator: a string used to separator the elements of the path.
 * @first_element: the first element in the path
 * @Varargs: remaining elements in path, terminated by %NULL
 *
 * Creates a path from a series of elements using @separator as the
 * separator between elements. At the boundary between two elements,
 * any trailing occurrences of separator in the first element, or
 * leading occurrences of separator in the second element are removed
 * and exactly one copy of the separator is inserted.
 * Empty elements are ignored.
 * The number of leading copies of the separator on the result is
 * the same as the number of leading copies of the separator on
 * the first non-empty element.
 * The number of trailing copies of the separator on the result is
 * the same as the number of trailing copies of the separator on
 * the last non-empty element. (Determination of the number of
 * trailing copies is done without stripping leading copies, so
 * if the separator is <literal>ABA</literal>, <literal>ABABA</literal>
 * has 1 trailing copy.)
 * However, if there is only a single non-empty element, and there
 * are no characters in that element not part of the leading or
 * trailing separators, then the result is exactly the original value
 * of that element.
 * Other than for determination of the number of leading and trailing
 * copies of the separator, elements consisting only of copies
 * of the separator are ignored.
 *
 * Returns: a newly-allocated string that must be freed with g_free().
 */


/**
 * g_build_pathv:
 * @separator: a string used to separator the elements of the path.
 * @args: (array zero-terminated=1): %NULL-terminated array of strings containing the path elements.
 *
 * Behaves exactly like g_build_path(), but takes the path elements
 * as a string array, instead of varargs. This function is mainly
 * meant for language bindings.
 *
 * Returns: a newly-allocated string that must be freed with g_free().
 * Since: 2.8
 */


/**
 * g_byte_array_append:
 * @array: a #GByteArray.
 * @data: the byte data to be added.
 * @len: the number of bytes to add.
 * @Returns: the #GByteArray.
 *
 * Adds the given bytes to the end of the #GByteArray. The array will
 * grow in size automatically if necessary.
 */


/**
 * g_byte_array_free:
 * @array: a #GByteArray.
 * @free_segment: if %TRUE the actual byte data is freed as well.
 * @Returns: the element data if @free_segment is %FALSE, otherwise %NULL.  The element data should be freed using g_free().
 *
 * Frees the memory allocated by the #GByteArray. If @free_segment is
 * %TRUE it frees the actual byte data. If the reference count of
 * the size of @array will be set to zero.
 */


/**
 * g_byte_array_new:
 * @Returns: the new #GByteArray.
 *
 * Creates a new #GByteArray with a reference count of 1.
 */


/**
 * g_byte_array_prepend:
 * @array: a #GByteArray.
 * @data: the byte data to be added.
 * @len: the number of bytes to add.
 * @Returns: the #GByteArray.
 *
 * Adds the given data to the start of the #GByteArray. The array will
 * grow in size automatically if necessary.
 */


/**
 * g_byte_array_ref:
 * @array: A #GByteArray.
 *
 * Atomically increments the reference count of @array by one. This
 * function is MT-safe and may be called from any thread.
 *
 * Returns: The passed in #GByteArray.
 * Since: 2.22
 */


/**
 * g_byte_array_remove_index:
 * @array: a #GByteArray.
 * @index_: the index of the byte to remove.
 * @Returns: the #GByteArray.
 *
 * Removes the byte at the given index from a #GByteArray. The
 * following bytes are moved down one place.
 */


/**
 * g_byte_array_remove_index_fast:
 * @array: a #GByteArray.
 * @index_: the index of the byte to remove.
 * @Returns: the #GByteArray.
 *
 * Removes the byte at the given index from a #GByteArray. The last
 * element in the array is used to fill in the space, so this function
 * does not preserve the order of the #GByteArray. But it is faster
 * than g_byte_array_remove_index().
 */


/**
 * g_byte_array_remove_range:
 * @array: a @GByteArray.
 * @index_: the index of the first byte to remove.
 * @length: the number of bytes to remove.
 * @Returns: the #GByteArray.
 *
 * Removes the given number of bytes starting at the given index from a
 * #GByteArray.  The following elements are moved to close the gap.
 *
 * Since: 2.4
 */


/**
 * g_byte_array_set_size:
 * @array: a #GByteArray.
 * @length: the new size of the #GByteArray.
 * @Returns: the #GByteArray.
 *
 * Sets the size of the #GByteArray, expanding it if necessary.
 */


/**
 * g_byte_array_sized_new:
 * @reserved_size: number of bytes preallocated.
 * @Returns: the new #GByteArray.
 *
 * Creates a new #GByteArray with @reserved_size bytes preallocated.
 * This avoids frequent reallocation, if you are going to add many
 * bytes to the array. Note however that the size of the array is still
 * 0.
 */


/**
 * g_byte_array_sort:
 * @array: a #GByteArray.
 * @compare_func: comparison function.
 *
 * Sorts a byte array, using @compare_func which should be a
 * qsort()-style comparison function (returns less than zero for first
 * arg is less than second arg, zero for equal, greater than zero if
 * first arg is greater than second arg).
 * If two array elements compare equal, their order in the sorted array
 * is undefined. If you want equal elements to keep their order &#8211; i.e.
 * you want a stable sort &#8211; you can write a comparison function that,
 * if two elements would otherwise compare equal, compares them by
 * their addresses.
 */


/**
 * g_byte_array_sort_with_data:
 * @array: a #GByteArray.
 * @compare_func: comparison function.
 * @user_data: data to pass to @compare_func.
 *
 * Like g_byte_array_sort(), but the comparison function takes an extra
 * user data argument.
 */


/**
 * g_byte_array_unref:
 * @array: A #GByteArray.
 *
 * Atomically decrements the reference count of @array by one. If the
 * reference count drops to 0, all memory allocated by the array is
 * released. This function is MT-safe and may be called from any
 * thread.
 *
 * Since: 2.22
 */


/**
 * g_cache_destroy:
 * @cache: a #GCache.
 *
 * Frees the memory allocated for the #GCache.
 * Note that it does not destroy the keys and values which were
 * contained in the #GCache.
 */


/**
 * g_cache_insert:
 * @cache: a #GCache.
 * @key: a key describing a #GCache object.
 * @Returns: a pointer to a #GCache value.
 *
 * Gets the value corresponding to the given key, creating it if
 * necessary. It first checks if the value already exists in the
 * #GCache, by using the @key_equal_func function passed to
 * g_cache_new(). If it does already exist it is returned, and its
 * reference count is increased by one. If the value does not currently
 * exist, if is created by calling the @value_new_func. The key is
 * duplicated by calling @key_dup_func and the duplicated key and value
 * are inserted into the #GCache.
 */


/**
 * g_cache_key_foreach:
 * @cache: a #GCache.
 * @func: the function to call with each #GCache key.
 * @user_data: user data to pass to the function.
 *
 * Calls the given function for each of the keys in the #GCache.
 * NOTE @func is passed three parameters, the value and key of a cache
 * entry and the @user_data. The order of value and key is different
 * from the order in which g_hash_table_foreach() passes key-value
 * pairs to its callback function !
 */


/**
 * g_cache_new:
 * @value_new_func: a function to create a new object given a key. This is called by g_cache_insert() if an object with the given key does not already exist.
 * @value_destroy_func: a function to destroy an object. It is called by g_cache_remove() when the object is no longer needed (i.e. its reference count drops to 0).
 * @key_dup_func: a function to copy a key. It is called by g_cache_insert() if the key does not already exist in the #GCache.
 * @key_destroy_func: a function to destroy a key. It is called by g_cache_remove() when the object is no longer needed (i.e. its reference count drops to 0).
 * @hash_key_func: a function to create a hash value from a key.
 * @hash_value_func: a function to create a hash value from a value.
 * @key_equal_func: a function to compare two keys. It should return %TRUE if the two keys are equivalent.
 * @Returns: a new #GCache.
 *
 * Creates a new #GCache.
 */


/**
 * g_cache_remove:
 * @cache: a #GCache.
 * @value: the value to remove.
 *
 * Decreases the reference count of the given value. If it drops to 0
 * then the value and its corresponding key are destroyed, using the
 */


/**
 * g_cache_value_foreach:
 * @cache: a #GCache.
 * @func: the function to call with each #GCache value.
 * @user_data: user data to pass to the function.
 *
 * Calls the given function for each of the values in the #GCache.
 * data structures to @func; use g_cache_key_foreach()
 * instead
 *
 * Deprecated:2.10: The reason is that it passes pointers to internal
 */


/**
 * g_chdir:
 * @path: a pathname in the GLib file name encoding (UTF-8 on Windows)
 *
 * A wrapper for the POSIX chdir() function. The function changes the
 * current directory of the process to @path.
 * See your C library manual for more details about chdir().
 *
 * Returns: 0 on success, -1 if an error occurred.
 * Since: 2.8
 */


/**
 * g_checksum_copy:
 * @checksum: the #GChecksum to copy
 *
 * Copies a #GChecksum. If @checksum has been closed, by calling
 * g_checksum_get_string() or g_checksum_get_digest(), the copied
 * checksum will be closed as well.
 * when finished using it.
 *
 * Returns: the copy of the passed #GChecksum. Use g_checksum_free()
 * Since: 2.16
 */


/**
 * g_checksum_free:
 * @checksum: a #GChecksum
 *
 * Frees the memory allocated for @checksum.
 *
 * Since: 2.16
 */


/**
 * g_checksum_get_digest:
 * @checksum: a #GChecksum
 * @buffer: output buffer
 * @digest_len: an inout parameter. The caller initializes it to the size of @buffer. After the call it contains the length of the digest.
 *
 * Gets the digest from @checksum as a raw binary vector and places it
 * into @buffer. The size of the digest depends on the type of checksum.
 * Once this function has been called, the #GChecksum is closed and can
 * no longer be updated with g_checksum_update().
 *
 * Since: 2.16
 */


/**
 * g_checksum_get_string:
 * @checksum: a #GChecksum
 *
 * Gets the digest as an hexadecimal string.
 * Once this function has been called the #GChecksum can no longer be
 * updated with g_checksum_update().
 * The hexadecimal characters will be lower case.
 * returned string is owned by the checksum and should not be modified
 * or freed.
 *
 * Returns: the hexadecimal representation of the checksum. The
 * Since: 2.16
 */


/**
 * g_checksum_new:
 * @checksum_type: the desired type of checksum
 *
 * Creates a new #GChecksum, using the checksum algorithm @checksum_type.
 * If the @checksum_type is not known, %NULL is returned.
 * A #GChecksum can be used to compute the checksum, or digest, of an
 * arbitrary binary blob, using different hashing algorithms.
 * A #GChecksum works by feeding a binary blob through g_checksum_update()
 * until there is data to be checked; the digest can then be extracted
 * using g_checksum_get_string(), which will return the checksum as a
 * hexadecimal string; or g_checksum_get_digest(), which will return a
 * vector of raw bytes. Once either g_checksum_get_string() or
 * g_checksum_get_digest() have been called on a #GChecksum, the checksum
 * will be closed and it won't be possible to call g_checksum_update()
 * on it anymore.
 * Use g_checksum_free() to free the memory allocated by it.
 *
 * Returns: the newly created #GChecksum, or %NULL.
 * Since: 2.16
 */


/**
 * g_checksum_reset:
 * @checksum: the #GChecksum to reset
 *
 * Resets the state of the @checksum back to its initial state.
 *
 * Since: 2.18
 */


/**
 * g_checksum_type_get_length:
 * @checksum_type: a #GChecksumType
 *
 * Gets the length in bytes of digests of type @checksum_type
 * not supported.
 *
 * Returns: the checksum length, or -1 if @checksum_type is
 * Since: 2.16
 */


/**
 * g_checksum_update:
 * @checksum: a #GChecksum
 * @data: buffer used to compute the checksum
 * @length: size of the buffer, or -1 if it is a null-terminated string.
 *
 * Feeds @data into an existing #GChecksum. The checksum must still be
 * open, that is g_checksum_get_string() or g_checksum_get_digest() must
 * not have been called on @checksum.
 *
 * Since: 2.16
 */


/**
 * g_child_watch_add:
 * @pid: process id to watch. On POSIX the pid of a child process. On Windows a handle for a process (which doesn't have to be a child).
 * @function: function to call
 * @data: data to pass to @function
 *
 * Sets a function to be called when the child indicated by @pid
 * exits, at a default priority, #G_PRIORITY_DEFAULT.
 * If you obtain @pid from g_spawn_async() or g_spawn_async_with_pipes()
 * you will need to pass #G_SPAWN_DO_NOT_REAP_CHILD as flag to
 * the spawn function for the child watching to work.
 * Note that on platforms where #GPid must be explicitly closed
 * (see g_spawn_close_pid()) @pid must not be closed while the
 * source is still active. Typically, you will want to call
 * g_spawn_close_pid() in the callback function for the source.
 * GLib supports only a single callback per process id.
 * This internally creates a main loop source using
 * g_child_watch_source_new() and attaches it to the main loop context
 * using g_source_attach(). You can do these steps manually if you
 * need greater control.
 *
 * Returns: the ID (greater than 0) of the event source.
 * Since: 2.4
 */


/**
 * g_child_watch_add_full:
 * @priority: the priority of the idle source. Typically this will be in the range between #G_PRIORITY_DEFAULT_IDLE and #G_PRIORITY_HIGH_IDLE.
 * @pid: process to watch. On POSIX the pid of a child process. On Windows a handle for a process (which doesn't have to be a child).
 * @function: function to call
 * @data: data to pass to @function
 * @notify: function to call when the idle is removed, or %NULL
 *
 * Sets a function to be called when the child indicated by @pid
 * exits, at the priority @priority.
 * If you obtain @pid from g_spawn_async() or g_spawn_async_with_pipes()
 * you will need to pass #G_SPAWN_DO_NOT_REAP_CHILD as flag to
 * the spawn function for the child watching to work.
 * Note that on platforms where #GPid must be explicitly closed
 * (see g_spawn_close_pid()) @pid must not be closed while the
 * source is still active. Typically, you will want to call
 * g_spawn_close_pid() in the callback function for the source.
 * GLib supports only a single callback per process id.
 * This internally creates a main loop source using
 * g_child_watch_source_new() and attaches it to the main loop context
 * using g_source_attach(). You can do these steps manually if you
 * need greater control.
 *
 * Returns: the ID (greater than 0) of the event source.
 * Since: 2.4
 * Rename to: g_child_watch_add
 */


/**
 * g_child_watch_source_new:
 * @pid: process to watch. On POSIX the pid of a child process. On Windows a handle for a process (which doesn't have to be a child).
 *
 * Creates a new child_watch source.
 * The source will not initially be associated with any #GMainContext
 * and must be added to one with g_source_attach() before it will be
 * executed.
 * Note that child watch sources can only be used in conjunction with
 * <literal>g_spawn...</literal> when the %G_SPAWN_DO_NOT_REAP_CHILD
 * flag is used.
 * Note that on platforms where #GPid must be explicitly closed
 * (see g_spawn_close_pid()) @pid must not be closed while the
 * source is still active. Typically, you will want to call
 * g_spawn_close_pid() in the callback function for the source.
 * Note further that using g_child_watch_source_new() is not
 * compatible with calling <literal>waitpid(-1)</literal> in
 * the application. Calling waitpid() for individual pids will
 * still work fine.
 *
 * Returns: the newly-created child watch source
 * Since: 2.4
 */


/**
 * g_chmod:
 * @filename: a pathname in the GLib file name encoding (UTF-8 on Windows)
 * @mode: as in chmod()
 *
 * A wrapper for the POSIX chmod() function. The chmod() function is
 * used to set the permissions of a file system object.
 * On Windows the file protection mechanism is not at all POSIX-like,
 * and the underlying chmod() function in the C library just sets or
 * clears the FAT-style READONLY attribute. It does not touch any
 * ACL. Software that needs to manage file permissions on Windows
 * exactly should use the Win32 API.
 * See your C library manual for more details about chmod().
 *
 * Returns: zero if the operation succeeded, -1 on error.
 * Since: 2.8
 */


/**
 * g_chunk_free:
 * @mem: a pointer to the atom to be freed.
 * @mem_chunk: a #GMemChunk.
 *
 * A convenience macro to free an atom of memory from a #GMemChunk. It
 * simply switches the arguments and calls g_mem_chunk_free() It is
 * included simply to complement the other convenience macros,
 * g_chunk_new() and g_chunk_new0().
 *
 * Deprecated:2.10: Use g_slice_free() instead
 */


/**
 * g_chunk_new:
 * @type: the type of the #GMemChunk atoms, typically a structure name.
 * @chunk: a #GMemChunk.
 * @Returns: a pointer to the allocated atom, cast to a pointer to
 *
 * A convenience macro to allocate an atom of memory from a #GMemChunk.
 * It calls g_mem_chunk_alloc() and casts the returned atom to a
 * pointer to the given type, avoiding a type cast in the source code.
 *
 * Deprecated:2.10: Use g_slice_new() instead
 */


/**
 * g_chunk_new0:
 * @type: the type of the #GMemChunk atoms, typically a structure name.
 * @chunk: a #GMemChunk.
 * @Returns: a pointer to the allocated atom, cast to a pointer to
 *
 * A convenience macro to allocate an atom of memory from a #GMemChunk.
 * It calls g_mem_chunk_alloc0() and casts the returned atom to a
 * pointer to the given type, avoiding a type cast in the source code.
 *
 * Deprecated:2.10: Use g_slice_new0() instead
 */


/**
 * g_clear_error:
 * @err: a #GError return location
 *
 * If @err is %NULL, does nothing. If @err is non-%NULL,
 * calls g_error_free() on *@err and sets *@err to %NULL.
 */


/**
 * g_completion_add_items:
 * @cmp: the #GCompletion.
 * @items: the list of items to add.
 *
 * Adds items to the #GCompletion.
 *
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_completion_clear_items:
 * @cmp: the #GCompletion.
 *
 * Removes all items from the #GCompletion.
 *
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_completion_complete:
 * @cmp: the #GCompletion.
 * @prefix: the prefix string, typically typed by the user, which is compared with each of the items.
 * @new_prefix: if non-%NULL, returns the longest prefix which is common to all items that matched @prefix, or %NULL if no items matched @prefix.  This string should be freed when no longer needed.
 * @Returns: the list of items whose strings begin with @prefix. This should not be changed.
 *
 * Attempts to complete the string @prefix using the #GCompletion
 * target items.
 *
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_completion_complete_utf8:
 * @cmp: the #GCompletion
 * @prefix: the prefix string, typically used by the user, which is compared with each of the items
 * @new_prefix: if non-%NULL, returns the longest prefix which is common to all items that matched @prefix, or %NULL if no items matched @prefix. This string should be freed when no longer needed.
 *
 * Attempts to complete the string @prefix using the #GCompletion target items.
 * In contrast to g_completion_complete(), this function returns the largest common
 * prefix that is a valid UTF-8 string, omitting a possible common partial
 * character.
 * You should use this function instead of g_completion_complete() if your
 * items are UTF-8 strings.
 * not be changed.
 *
 * Returns: (element-type utf8) (transfer none): the list of items whose strings begin with @prefix. This should
 * Since: 2.4
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_completion_free:
 * @cmp: the #GCompletion.
 *
 * Frees all memory used by the #GCompletion.
 *
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_completion_new:
 * @func: the function to be called to return the string representing an item in the #GCompletion, or %NULL if strings are going to be used as the #GCompletion items.
 * @Returns: the new #GCompletion.
 *
 * Creates a new #GCompletion.
 */


/**
 * g_completion_remove_items:
 * @cmp: the #GCompletion.
 * @items: the items to remove.
 *
 * Removes items from a #GCompletion.
 *
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_completion_set_compare:
 * @cmp: a #GCompletion.
 * @strncmp_func: the string comparison function.
 *
 * Sets the function to use for string comparisons. The default string
 * comparison function is strncmp().
 *
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_compute_checksum_for_data:
 * @checksum_type: a #GChecksumType
 * @data: binary blob to compute the digest of
 * @length: length of @data
 *
 * Computes the checksum for a binary @data of @length. This is a
 * convenience wrapper for g_checksum_new(), g_checksum_get_string()
 * and g_checksum_free().
 * The hexadecimal string returned will be in lower case.
 * The returned string should be freed with g_free() when done using it.
 *
 * Returns: the digest of the binary data as a string in hexadecimal.
 * Since: 2.16
 */


/**
 * g_compute_checksum_for_string:
 * @checksum_type: a #GChecksumType
 * @str: the string to compute the checksum of
 * @length: the length of the string, or -1 if the string is null-terminated.
 *
 * Computes the checksum of a string.
 * The hexadecimal string returned will be in lower case.
 * should be freed with g_free() when done using it.
 *
 * Returns: the checksum as a hexadecimal string. The returned string
 * Since: 2.16
 */


/**
 * g_cond_broadcast:
 * @cond: a #GCond.
 *
 * If threads are waiting for @cond, all of them are woken up. It is
 * good practice to lock the same mutex as the waiting threads, while
 * calling this function, though not required.
 * This function can be used even if g_thread_init() has not yet been
 * called, and, in that case, will do nothing.
 */


/**
 * g_cond_free:
 * @cond: a #GCond.
 *
 * Destroys the #GCond.
 */


/**
 * g_cond_new:
 * @Returns: a new #GCond.
 *
 * Creates a new #GCond. This function will abort, if g_thread_init()
 * has not been called yet.
 */


/**
 * g_cond_signal:
 * @cond: a #GCond.
 *
 * If threads are waiting for @cond, exactly one of them is woken up.
 * It is good practice to hold the same lock as the waiting thread
 * while calling this function, though not required.
 * This function can be used even if g_thread_init() has not yet been
 * called, and, in that case, will do nothing.
 */


/**
 * g_cond_timed_wait:
 * @cond: a #GCond.
 * @mutex: a #GMutex that is currently locked.
 * @abs_time: a #GTimeVal, determining the final time.
 * @Returns: %TRUE if @cond was signalled, or %FALSE on timeout.
 *
 * Waits until this thread is woken up on @cond, but not longer than
 * until the time specified by @abs_time. The @mutex is unlocked before
 * falling asleep and locked again before resuming.
 * If @abs_time is %NULL, g_cond_timed_wait() acts like g_cond_wait().
 * This function can be used even if g_thread_init() has not yet been
 * called, and, in that case, will immediately return %TRUE.
 * To easily calculate @abs_time a combination of g_get_current_time()
 * and g_time_val_add() can be used.
 */


/**
 * g_cond_wait:
 * @cond: a #GCond.
 * @mutex: a #GMutex, that is currently locked.
 *
 * Waits until this thread is woken up on @cond. The @mutex is unlocked
 * before falling asleep and locked again before resuming.
 * This function can be used even if g_thread_init() has not yet been
 * called, and, in that case, will immediately return.
 */


/**
 * g_convert:
 * @str: the string to convert
 * @len: the length of the string, or -1 if the string is nul-terminated<footnote id="nul-unsafe">
 * @to_codeset: name of character set into which to convert @str
 * @from_codeset: character set of @str.
 * @bytes_read: (out): location to store the number of bytes in the
 * @bytes_written: (out): the number of bytes stored in the output buffer (not
 * @error: location to store the error occuring, or %NULL to ignore
 *
 * input string that were successfully converted, or %NULL.
 * Even if the conversion was successful, this may be
 * less than @len if there were partial characters
 * at the end of the input. If the error
 * #G_CONVERT_ERROR_ILLEGAL_SEQUENCE occurs, the value
 * stored will the byte offset after the last valid
 * input sequence.
 * including the terminating nul).
 * errors. Any of the errors in #GConvertError may occur.
 * Converts a string from one character set to another.
 * Note that you should use g_iconv() for streaming
 * conversions<footnoteref linkend="streaming-state"/>.
 * nul-terminated string, which must be freed with
 * g_free(). Otherwise %NULL and @error will be set.
 *
 * Returns: If the conversion was successful, a newly allocated
 */


/**
 * g_convert_with_fallback:
 * @str: the string to convert
 * @len: the length of the string, or -1 if the string is nul-terminated<footnoteref linkend="nul-unsafe"/>.
 * @to_codeset: name of character set into which to convert @str
 * @from_codeset: character set of @str.
 * @fallback: UTF-8 string to use in place of character not present in the target encoding. (The string must be representable in the target encoding).
 * @bytes_read: location to store the number of bytes in the
 * @bytes_written: the number of bytes stored in the output buffer (not
 * @error: location to store the error occuring, or %NULL to ignore
 *
 * input string that were successfully converted, or %NULL.
 * Even if the conversion was successful, this may be
 * less than @len if there were partial characters
 * at the end of the input.
 * including the terminating nul).
 * errors. Any of the errors in #GConvertError may occur.
 * Converts a string from one character set to another, possibly
 * including fallback sequences for characters not representable
 * in the output. Note that it is not guaranteed that the specification
 * for the fallback sequences in @fallback will be honored. Some
 * systems may do an approximate conversion from @from_codeset
 * to @to_codeset in their iconv() functions,
 * in which case GLib will simply return that approximate conversion.
 * Note that you should use g_iconv() for streaming
 * conversions<footnoteref linkend="streaming-state"/>.
 * nul-terminated string, which must be freed with
 * g_free(). Otherwise %NULL and @error will be set.
 *
 * Returns: If the conversion was successful, a newly allocated
 */


/**
 * g_convert_with_iconv:
 * @str: the string to convert
 * @len: the length of the string, or -1 if the string is nul-terminated<footnoteref linkend="nul-unsafe"/>.
 * @converter: conversion descriptor from g_iconv_open()
 * @bytes_read: location to store the number of bytes in the input string that were successfully converted, or %NULL. Even if the conversion was successful, this may be less than @len if there were partial characters at the end of the input. If the error #G_CONVERT_ERROR_ILLEGAL_SEQUENCE occurs, the value stored will the byte offset after the last valid input sequence.
 * @bytes_written: the number of bytes stored in the output buffer (not including the terminating nul).
 * @error: location to store the error occuring, or %NULL to ignore errors. Any of the errors in #GConvertError may occur.
 *
 * Converts a string from one character set to another.
 * Note that you should use g_iconv() for streaming
 * conversions<footnote id="streaming-state">
 * <para>
 * Despite the fact that @byes_read can return information about partial
 * characters, the <literal>g_convert_...</literal> functions
 * are not generally suitable for streaming. If the underlying converter
 * being used maintains internal state, then this won't be preserved
 * across successive calls to g_convert(), g_convert_with_iconv() or
 * g_convert_with_fallback(). (An example of this is the GNU C converter
 * for CP1255 which does not emit a base character until it knows that
 * the next character is not a mark that could combine with the base
 * character.)
 * </para>
 * </footnote>.
 * nul-terminated string, which must be freed with
 * g_free(). Otherwise %NULL and @error will be set.
 *
 * Returns: If the conversion was successful, a newly allocated
 */


/**
 * g_creat:
 * @filename: a pathname in the GLib file name encoding (UTF-8 on Windows)
 * @mode: as in creat()
 *
 * A wrapper for the POSIX creat() function. The creat() function is
 * used to convert a pathname into a file descriptor, creating a file
 * if necessary.
 * On POSIX systems file descriptors are implemented by the operating
 * system. On Windows, it's the C library that implements creat() and
 * file descriptors. The actual Windows API for opening files is
 * different, see MSDN documentation for CreateFile(). The Win32 API
 * uses file handles, which are more randomish integers, not small
 * integers like file descriptors.
 * Because file descriptors are specific to the C library on Windows,
 * the file descriptor returned by this function makes sense only to
 * functions in the same C library. Thus if the GLib-using code uses a
 * different C library than GLib does, the file descriptor returned by
 * this function cannot be passed to C library functions like write()
 * or read().
 * See your C library manual for more details about creat().
 * return value can be used exactly like the return value from creat().
 *
 * Returns: a new file descriptor, or -1 if an error occurred. The
 * Since: 2.8
 */


/**
 * g_datalist_clear:
 * @datalist: a datalist.
 *
 * Frees all the data elements of the datalist.
 * The data elements' destroy functions are called
 * if they have been set.
 */


/**
 * g_datalist_foreach:
 * @datalist: a datalist.
 * @func: the function to call for each data element.
 * @user_data: user data to pass to the function.
 *
 * Calls the given function for each data element of the datalist. The
 * function is called with each data element's #GQuark id and data,
 * together with the given @user_data parameter. Note that this
 * function is NOT thread-safe. So unless @datalist can be protected
 * from any modifications during invocation of this function, it should
 * not be called.
 */


/**
 * g_datalist_get_data:
 * @dl: a datalist.
 * @k: the string identifying a data element.
 * @Returns: the data element, or %NULL if it is not found.
 *
 * Gets a data element, using its string identifer. This is slower than
 * g_datalist_id_get_data() because it compares strings.
 */


/**
 * g_datalist_get_flags:
 * @datalist: pointer to the location that holds a list
 *
 * Gets flags values packed in together with the datalist.
 * See g_datalist_set_flags().
 *
 * Returns: the flags of the datalist
 * Since: 2.8
 */


/**
 * g_datalist_id_get_data:
 * @datalist: a datalist.
 * @key_id: the #GQuark identifying a data element.
 * @Returns: the data element, or %NULL if it is not found.
 *
 * Retrieves the data element corresponding to @key_id.
 */


/**
 * g_datalist_id_remove_data:
 * @dl: a datalist.
 * @q: the #GQuark identifying the data element.
 *
 * Removes an element, using its #GQuark identifier.
 */


/**
 * g_datalist_id_remove_no_notify:
 * @datalist: a datalist.
 * @key_id: the #GQuark identifying a data element.
 * @Returns: the data previously stored at @key_id, or %NULL if none.
 *
 * Removes an element, without calling its destroy notification
 * function.
 */


/**
 * g_datalist_id_set_data:
 * @dl: a datalist.
 * @q: the #GQuark to identify the data element.
 * @d: the data element, or %NULL to remove any previous element corresponding to @q.
 *
 * Sets the data corresponding to the given #GQuark id. Any previous
 * data with the same key is removed, and its destroy function is
 * called.
 */


/**
 * g_datalist_id_set_data_full:
 * @datalist: a datalist.
 * @key_id: the #GQuark to identify the data element.
 * @data: the data element or %NULL to remove any previous element corresponding to @key_id.
 * @destroy_func: the function to call when the data element is removed. This function will be called with the data element and can be used to free any memory allocated for it. If @data is %NULL, then @destroy_func must also be %NULL.
 *
 * Sets the data corresponding to the given #GQuark id, and the
 * function to be called when the element is removed from the datalist.
 * Any previous data with the same key is removed, and its destroy
 * function is called.
 */


/**
 * g_datalist_init:
 * @datalist: a pointer to a pointer to a datalist.
 *
 * Resets the datalist to %NULL. It does not free any memory or call
 * any destroy functions.
 */


/**
 * g_datalist_remove_data:
 * @dl: a datalist.
 * @k: the string identifying the data element.
 *
 * Removes an element using its string identifier. The data element's
 * destroy function is called if it has been set.
 */


/**
 * g_datalist_remove_no_notify:
 * @dl: a datalist.
 * @k: the string identifying the data element.
 *
 * Removes an element, without calling its destroy notifier.
 */


/**
 * g_datalist_set_data:
 * @dl: a datalist.
 * @k: the string to identify the data element.
 * @d: the data element, or %NULL to remove any previous element corresponding to @k.
 *
 * Sets the data element corresponding to the given string identifier.
 */


/**
 * g_datalist_set_data_full:
 * @dl: a datalist.
 * @k: the string to identify the data element.
 * @d: the data element, or %NULL to remove any previous element corresponding to @k.
 * @f: the function to call when the data element is removed. This function will be called with the data element and can be used to free any memory allocated for it. If @d is %NULL, then @f must also be %NULL.
 *
 * Sets the data element corresponding to the given string identifier,
 * and the function to be called when the data element is removed.
 */


/**
 * g_datalist_set_flags:
 * @datalist: pointer to the location that holds a list
 * @flags: the flags to turn on. The values of the flags are restricted by %G_DATALIST_FLAGS_MASK (currently 3; giving two possible boolean flags). A value for @flags that doesn't fit within the mask is an error.
 *
 * Turns on flag values for a data list. This function is used
 * to keep a small number of boolean flags in an object with
 * a data list without using any additional space. It is
 * not generally useful except in circumstances where space
 * is very tight. (It is used in the base #GObject type, for
 * example.)
 *
 * Since: 2.8
 */


/**
 * g_datalist_unset_flags:
 * @datalist: pointer to the location that holds a list
 * @flags: the flags to turn off. The values of the flags are restricted by %G_DATALIST_FLAGS_MASK (currently 3: giving two possible boolean flags). A value for @flags that doesn't fit within the mask is an error.
 *
 * Turns off flag values for a data list. See g_datalist_unset_flags()
 *
 * Since: 2.8
 */


/**
 * g_dataset_destroy:
 * @dataset_location: the location identifying the dataset.
 *
 * Destroys the dataset, freeing all memory allocated, and calling any
 * destroy functions set for data elements.
 */


/**
 * g_dataset_foreach:
 * @dataset_location: the location identifying the dataset.
 * @func: the function to call for each data element.
 * @user_data: user data to pass to the function.
 *
 * Calls the given function for each data element which is associated
 * with the given location. Note that this function is NOT thread-safe.
 * So unless @datalist can be protected from any modifications during
 * invocation of this function, it should not be called.
 */


/**
 * g_dataset_get_data:
 * @l: the location identifying the dataset.
 * @k: the string identifying the data element.
 * @Returns: the data element corresponding to the string, or %NULL if it is not found.
 *
 * Gets the data element corresponding to a string.
 */


/**
 * g_dataset_id_get_data:
 * @dataset_location: the location identifying the dataset.
 * @key_id: the #GQuark id to identify the data element.
 * @Returns: the data element corresponding to the #GQuark, or %NULL if it is not found.
 *
 * Gets the data element corresponding to a #GQuark.
 */


/**
 * g_dataset_id_remove_data:
 * @l: the location identifying the dataset.
 * @k: the #GQuark id identifying the data element.
 *
 * Removes a data element from a dataset. The data element's destroy
 * function is called if it has been set.
 */


/**
 * g_dataset_id_remove_no_notify:
 * @dataset_location: the location identifying the dataset.
 * @key_id: the #GQuark ID identifying the data element.
 * @Returns: the data previously stored at @key_id, or %NULL if none.
 *
 * Removes an element, without calling its destroy notification
 * function.
 */


/**
 * g_dataset_id_set_data:
 * @l: the location identifying the dataset.
 * @k: the #GQuark id to identify the data element.
 * @d: the data element.
 *
 * Sets the data element associated with the given #GQuark id. Any
 * previous data with the same key is removed, and its destroy function
 * is called.
 */


/**
 * g_dataset_id_set_data_full:
 * @dataset_location: the location identifying the dataset.
 * @key_id: the #GQuark id to identify the data element.
 * @data: the data element.
 * @destroy_func: the function to call when the data element is removed. This function will be called with the data element and can be used to free any memory allocated for it.
 *
 * Sets the data element associated with the given #GQuark id, and also
 * the function to call when the data element is destroyed. Any
 * previous data with the same key is removed, and its destroy function
 * is called.
 */


/**
 * g_dataset_remove_data:
 * @l: the location identifying the dataset.
 * @k: the string identifying the data element.
 *
 * Removes a data element corresponding to a string. Its destroy
 * function is called if it has been set.
 */


/**
 * g_dataset_remove_no_notify:
 * @l: the location identifying the dataset.
 * @k: the string identifying the data element.
 *
 * Removes an element, without calling its destroy notifier.
 */


/**
 * g_dataset_set_data:
 * @l: the location identifying the dataset.
 * @k: the string to identify the data element.
 * @d: the data element.
 *
 * Sets the data corresponding to the given string identifier.
 */


/**
 * g_dataset_set_data_full:
 * @l: the location identifying the dataset.
 * @k: the string to identify the data element.
 * @d: the data element.
 * @f: the function to call when the data element is removed. This function will be called with the data element and can be used to free any memory allocated for it.
 *
 * Sets the data corresponding to the given string identifier, and the
 * function to call when the data element is destroyed.
 */


/**
 * g_date_get_iso8601_week_of_year:
 * @date: a valid #GDate
 *
 * Returns the week of the year, where weeks are interpreted according
 * to ISO 8601.
 *
 * Returns: ISO 8601 week number of the year.
 * Since: 2.6
 */


/**
 * g_date_set_time:
 * @date: a #GDate.
 * @time_: #GTime value to set.
 *
 * Sets the value of a date from a #GTime value.
 * The time to date conversion is done using the user's current timezone.
 *
 * Deprecated: 2.10: Use g_date_set_time_t() instead.
 */


/**
 * g_date_set_time_t:
 * @date: a #GDate
 * @timet: <type>time_t</type> value to set
 *
 * Sets the value of a date to the date corresponding to a time
 * specified as a time_t. The time to date conversion is done using
 * the user's current timezone.
 * To set the value of a date to the current day, you could write:
 * |[
 * g_date_set_time_t (date, time (NULL));
 * ]|
 *
 * Since: 2.10
 */


/**
 * g_date_set_time_val:
 * @date: a #GDate
 * @timeval: #GTimeVal value to set
 *
 * Sets the value of a date from a #GTimeVal value.  Note that the
 * additional precision.
 * The time to date conversion is done using the user's current timezone.
 *
 * Since: 2.10
 */


/**
 * g_date_time_add:
 * @datetime: a #GDateTime
 * @timespan: a #GTimeSpan
 *
 * Creates a copy of @datetime and adds the specified timespan to the copy.
 * g_date_time_unref().
 *
 * Returns: the newly created #GDateTime which should be freed with
 * Since: 2.26
 */


/**
 * g_date_time_add_days:
 * @datetime: a #GDateTime
 * @days: the number of days
 *
 * Creates a copy of @datetime and adds the specified number of days to the
 * copy.
 * g_date_time_unref().
 *
 * Returns: the newly created #GDateTime which should be freed with
 * Since: 2.26
 */


/**
 * g_date_time_add_full:
 * @datetime: a #GDateTime
 * @years: the number of years to add
 * @months: the number of months to add
 * @days: the number of days to add
 * @hours: the number of hours to add
 * @minutes: the number of minutes to add
 * @seconds: the number of seconds to add
 *
 * Creates a new #GDateTime adding the specified values to the current date and
 * time in @datetime.
 * g_date_time_unref().
 *
 * Returns: the newly created #GDateTime that should be freed with
 * Since: 2.26
 */


/**
 * g_date_time_add_hours:
 * @datetime: a #GDateTime
 * @hours: the number of hours to add
 *
 * Creates a copy of @datetime and adds the specified number of hours
 * g_date_time_unref().
 *
 * Returns: the newly created #GDateTime which should be freed with
 * Since: 2.26
 */


/**
 * g_date_time_add_minutes:
 * @datetime: a #GDateTime
 * @minutes: the number of minutes to add
 *
 * Creates a copy of @datetime adding the specified number of minutes.
 * g_date_time_unref().
 *
 * Returns: the newly created #GDateTime which should be freed with
 * Since: 2.26
 */


/**
 * g_date_time_add_months:
 * @datetime: a #GDateTime
 * @months: the number of months
 *
 * Creates a copy of @datetime and adds the specified number of months to the
 * copy.
 * g_date_time_unref().
 *
 * Returns: the newly created #GDateTime which should be freed with
 * Since: 2.26
 */


/**
 * g_date_time_add_seconds:
 * @datetime: a #GDateTime
 * @seconds: the number of seconds to add
 *
 * Creates a copy of @datetime and adds the specified number of seconds.
 * g_date_time_unref().
 *
 * Returns: the newly created #GDateTime which should be freed with
 * Since: 2.26
 */


/**
 * g_date_time_add_weeks:
 * @datetime: a #GDateTime
 * @weeks: the number of weeks
 *
 * Creates a copy of @datetime and adds the specified number of weeks to the
 * copy.
 * g_date_time_unref().
 *
 * Returns: the newly created #GDateTime which should be freed with
 * Since: 2.26
 */


/**
 * g_date_time_add_years:
 * @datetime: a #GDateTime
 * @years: the number of years
 *
 * Creates a copy of @datetime and adds the specified number of years to the
 * copy.
 * g_date_time_unref().
 *
 * Returns: the newly created #GDateTime which should be freed with
 * Since: 2.26
 */


/**
 * g_date_time_compare:
 * @dt1: first #GDateTime to compare
 * @dt2: second #GDateTime to compare
 *
 * A comparison function for #GDateTimes that is suitable
 * as a #GCompareFunc. Both #GDateTimes must be non-%NULL.
 * than @dt2.
 *
 * Returns: -1, 0 or 1 if @dt1 is less than, equal to or greater
 * Since: 2.26
 */


/**
 * g_date_time_difference:
 * @end: a #GDateTime
 * @begin: a #GDateTime
 *
 * Calculates the difference in time between @end and @begin.  The
 * #GTimeSpan that is returned is effectively @end - @begin (ie:
 * positive if the first simparameter is larger).
 * span expressed in microseconds.
 *
 * Returns: the difference between the two #GDateTime, as a time
 * Since: 2.26
 */


/**
 * g_date_time_equal:
 * @dt1: a #GDateTime
 * @dt2: a #GDateTime
 *
 * Checks to see if @dt1 and @dt2 are equal.
 * Equal here means that they represent the same moment after converting
 * them to the same time zone.
 *
 * Returns: %TRUE if @dt1 and @dt2 are equal
 * Since: 2.26
 */


/**
 * g_date_time_format:
 * @datetime: A #GDateTime
 * @format: a valid UTF-8 string, containing the format for the #GDateTime
 *
 * Creates a newly allocated string representing the requested @format.
 * The format strings understood by this function are a subset of the
 * strftime() format language. In contrast to strftime(), this function
 * always produces a UTF-8 string, regardless of the current locale.
 * Note that the rendering of many formats is locale-dependent and may
 * not match the strftime() output exactly.
 * The following format specifiers are supported:
 * <variablelist>
 * <varlistentry><term>
 * <literal>%%a</literal>:
 * </term><listitem><simpara>
 * the abbreviated weekday name according to the current locale
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%A</literal>:
 * </term><listitem><simpara>
 * the full weekday name according to the current locale
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%b</literal>:
 * </term><listitem><simpara>
 * the abbreviated month name according to the current locale
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%B</literal>:
 * </term><listitem><simpara>
 * the full month name according to the current locale
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%d</literal>:
 * </term><listitem><simpara>
 * the day of the month as a decimal number (range 01 to 31)
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%e</literal>:
 * </term><listitem><simpara>
 * the day of the month as a decimal number (range  1 to 31)
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%F</literal>:
 * </term><listitem><simpara>
 * equivalent to <literal>%%Y-%%m-%%d</literal> (the ISO 8601 date
 * format)
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%h</literal>:
 * </term><listitem><simpara>
 * equivalent to <literal>%%b</literal>
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%H</literal>:
 * </term><listitem><simpara>
 * the hour as a decimal number using a 24-hour clock (range 00 to
 * 23)
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%I</literal>:
 * </term><listitem><simpara>
 * the hour as a decimal number using a 12-hour clock (range 01 to
 * 12)
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%j</literal>:
 * </term><listitem><simpara>
 * the day of the year as a decimal number (range 001 to 366)
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%k</literal>:
 * </term><listitem><simpara>
 * the hour (24-hour clock) as a decimal number (range 0 to 23);
 * single digits are preceded by a blank
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%l</literal>:
 * </term><listitem><simpara>
 * the hour (12-hour clock) as a decimal number (range 1 to 12);
 * single digits are preceded by a blank
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%m</literal>:
 * </term><listitem><simpara>
 * the month as a decimal number (range 01 to 12)
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%M</literal>:
 * </term><listitem><simpara>
 * the minute as a decimal number (range 00 to 59)
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%N</literal>:
 * </term><listitem><simpara>
 * the micro-seconds as a decimal number
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%p</literal>:
 * </term><listitem><simpara>
 * either "AM" or "PM" according to the given time value, or the
 * corresponding  strings for the current locale.  Noon is treated as
 * "PM" and midnight as "AM".
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%P</literal>:
 * </term><listitem><simpara>
 * the current locale
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%r</literal>:
 * </term><listitem><simpara>
 * the time in a.m. or p.m. notation
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%R</literal>:
 * </term><listitem><simpara>
 * the time in 24-hour notation (<literal>%%H:%%M</literal>)
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%s</literal>:
 * </term><listitem><simpara>
 * the number of seconds since the Epoch, that is, since 1970-01-01
 * 00:00:00 UTC
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%S</literal>:
 * </term><listitem><simpara>
 * the second as a decimal number (range 00 to 60)
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%t</literal>:
 * </term><listitem><simpara>
 * a tab character
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%u</literal>:
 * </term><listitem><simpara>
 * the day of the week as a decimal, range 1 to 7, Monday being 1
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%W</literal>:
 * </term><listitem><simpara>
 * the week number of the current year as a decimal number
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%x</literal>:
 * </term><listitem><simpara>
 * the preferred date representation for the current locale without
 * the time
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%X</literal>:
 * </term><listitem><simpara>
 * the preferred time representation for the current locale without
 * the date
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%y</literal>:
 * </term><listitem><simpara>
 * the year as a decimal number without the century
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%Y</literal>:
 * </term><listitem><simpara>
 * the year as a decimal number including the century
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%z</literal>:
 * </term><listitem><simpara>
 * the time-zone as hour offset from UTC
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%Z</literal>:
 * </term><listitem><simpara>
 * the time zone or name or abbreviation
 * </simpara></listitem></varlistentry>
 * <varlistentry><term>
 * <literal>%%%</literal>:
 * </term><listitem><simpara>
 * a literal <literal>%%</literal> character
 * </simpara></listitem></varlistentry>
 * </variablelist>
 * Some conversion specifications can be modified by preceding the
 * conversion specifier by one or more modifier characters. The
 * following modifiers are supported for many of the numeric
 * conversions:
 * <variablelist>
 * <varlistentry>
 * <term>O</term>
 * <listitem>
 * Use alternative numeric symbols, if the current locale
 * supports those.
 * </listitem>
 * </varlistentry>
 * <varlistentry>
 * <term>_</term>
 * <listitem>
 * Pad a numeric result with spaces.
 * This overrides the default padding for the specifier.
 * </listitem>
 * </varlistentry>
 * <varlistentry>
 * <term>-</term>
 * <listitem>
 * Do not pad a numeric result.
 * This overrides the default padding for the specifier.
 * </listitem>
 * </varlistentry>
 * <varlistentry>
 * <term>0</term>
 * <listitem>
 * Pad a numeric result with zeros.
 * This overrides the default padding for the specifier.
 * </listitem>
 * </varlistentry>
 * </variablelist>
 * or %NULL in the case that there was an error.  The string
 * should be freed with g_free().
 *
 * Like %%p but lowercase: "am" or "pm" or a corresponding string for
 * Returns: a newly allocated string formatted to the requested format
 * Since: 2.26
 */


/**
 * g_date_time_get_day_of_month:
 * @datetime: a #GDateTime
 *
 * Retrieves the day of the month represented by @datetime in the gregorian
 * calendar.
 *
 * Returns: the day of the month
 * Since: 2.26
 */


/**
 * g_date_time_get_day_of_week:
 * @datetime: a #GDateTime
 *
 * Retrieves the ISO 8601 day of the week on which @datetime falls (1 is
 * Monday, 2 is Tuesday... 7 is Sunday).
 *
 * Returns: the day of the week
 * Since: 2.26
 */


/**
 * g_date_time_get_day_of_year:
 * @datetime: a #GDateTime
 *
 * Retrieves the day of the year represented by @datetime in the Gregorian
 * calendar.
 *
 * Returns: the day of the year
 * Since: 2.26
 */


/**
 * g_date_time_get_hour:
 * @datetime: a #GDateTime
 *
 * Retrieves the hour of the day represented by @datetime
 *
 * Returns: the hour of the day
 * Since: 2.26
 */


/**
 * g_date_time_get_microsecond:
 * @datetime: a #GDateTime
 *
 * Retrieves the microsecond of the date represented by @datetime
 *
 * Returns: the microsecond of the second
 * Since: 2.26
 */


/**
 * g_date_time_get_minute:
 * @datetime: a #GDateTime
 *
 * Retrieves the minute of the hour represented by @datetime
 *
 * Returns: the minute of the hour
 * Since: 2.26
 */


/**
 * g_date_time_get_month:
 * @datetime: a #GDateTime
 *
 * Retrieves the month of the year represented by @datetime in the Gregorian
 * calendar.
 *
 * Returns: the month represented by @datetime
 * Since: 2.26
 */


/**
 * g_date_time_get_second:
 * @datetime: a #GDateTime
 *
 * Retrieves the second of the minute represented by @datetime
 *
 * Returns: the second represented by @datetime
 * Since: 2.26
 */


/**
 * g_date_time_get_seconds:
 * @datetime: a #GDateTime
 *
 * Retrieves the number of seconds since the start of the last minute,
 * including the fractional part.
 *
 * Returns: the number of seconds
 * Since: 2.26
 */


/**
 * g_date_time_get_timezone_abbreviation:
 * @datetime: a #GDateTime
 *
 * Determines the time zone abbreviation to be used at the time and in
 * the time zone of @datetime.
 * For example, in Toronto this is currently "EST" during the winter
 * months and "EDT" during the summer months when daylight savings
 * time is in effect.
 * string is owned by the #GDateTime and it should not be
 * modified or freed
 *
 * Returns: (transfer none): the time zone abbreviation. The returned
 * Since: 2.26
 */


/**
 * g_date_time_get_utc_offset:
 * @datetime: a #GDateTime
 *
 * Determines the offset to UTC in effect at the time and in the time
 * zone of @datetime.
 * The offset is the number of microseconds that you add to UTC time to
 * zones west of GMT, positive numbers for east).
 * If @datetime represents UTC time, then the offset is always zero.
 * get the local time
 *
 * Arrive at local time for the time zone (ie: negative numbers for time
 * Returns: the number of microseconds that should be added to UTC to
 * Since: 2.26
 */


/**
 * g_date_time_get_week_numbering_year:
 * @datetime: a #GDateTime
 *
 * Returns the ISO 8601 week-numbering year in which the week containing
 * This function, taken together with g_date_time_get_week_of_year() and
 * g_date_time_get_day_of_week() can be used to determine the full ISO
 * week date on which @datetime falls.
 * This is usually equal to the normal Gregorian year (as returned by
 * g_date_time_get_year()), except as detailed below:
 * For Thursday, the week-numbering year is always equal to the usual
 * calendar year.  For other days, the number is such that every day
 * within a complete week (Monday to Sunday) is contained within the
 * same week-numbering year.
 * For Monday, Tuesday and Wednesday occuring near the end of the year,
 * this may mean that the week-numbering year is one greater than the
 * calendar year (so that these days have the same week-numbering year
 * as the Thursday occuring early in the next year).
 * For Friday, Saturaday and Sunday occuring near the start of the year,
 * this may mean that the week-numbering year is one less than the
 * calendar year (so that these days have the same week-numbering year
 * as the Thursday occuring late in the previous year).
 * An equivalent description is that the week-numbering year is equal to
 * the calendar year containing the majority of the days in the current
 * week (Monday to Sunday).
 * Note that January 1 0001 in the proleptic Gregorian calendar is a
 * Monday, so this function never returns 0.
 *
 * Returns: the ISO 8601 week-numbering year for @datetime
 * Since: 2.26
 */


/**
 * g_date_time_get_week_of_year:
 * @datetime: a #GDateTime
 *
 * Returns the ISO 8601 week number for the week containing @datetime.
 * The ISO 8601 week number is the same for every day of the week (from
 * Moday through Sunday).  That can produce some unusual results
 * (described below).
 * The first week of the year is week 1.  This is the week that contains
 * the first Thursday of the year.  Equivalently, this is the first week
 * that has more than 4 of its days falling within the calendar year.
 * The value 0 is never returned by this function.  Days contained
 * within a year but occuring before the first ISO 8601 week of that
 * year are considered as being contained in the last week of the
 * previous year.  Similarly, the final days of a calendar year may be
 * considered as being part of the first ISO 8601 week of the next year
 * if 4 or more days of that week are contained within the new year.
 *
 * Returns: the ISO 8601 week number for @datetime.
 * Since: 2.26
 */


/**
 * g_date_time_get_year:
 * @datetime: A #GDateTime
 *
 * Retrieves the year represented by @datetime in the Gregorian calendar.
 *
 * Returns: the year represented by @datetime
 * Since: 2.26
 */


/**
 * g_date_time_get_ymd:
 * @datetime: a #GDateTime.
 * @year: (out): the return location for the gregorian year, or %NULL.
 * @month: (out): the return location for the month of the year, or %NULL.
 * @day: (out): the return location for the day of the month, or %NULL.
 *
 * Retrieves the Gregorian day, month, and year of a given #GDateTime.
 *
 * Since: 2.26
 */


/**
 * g_date_time_hash:
 * @datetime: a #GDateTime
 *
 * Hashes @datetime into a #guint, suitable for use within #GHashTable.
 *
 * Returns: a #guint containing the hash
 * Since: 2.26
 */


/**
 * g_date_time_is_daylight_savings:
 * @datetime: a #GDateTime
 *
 * Determines if daylight savings time is in effect at the time and in
 * the time zone of @datetime.
 *
 * Returns: %TRUE if daylight savings time is in effect
 * Since: 2.26
 */


/**
 * g_date_time_new:
 * @tz: a #GTimeZone
 * @year: the year component of the date
 * @month: the month component of the date
 * @day: the day component of the date
 * @hour: the hour component of the date
 * @minute: the minute component of the date
 * @seconds: the number of seconds past the minute
 *
 * Creates a new #GDateTime corresponding to the given date and time in
 * the time zone @tz.
 * The @year must be between 1 and 9999, @month between 1 and 12 and @day
 * between 1 and 28, 29, 30 or 31 depending on the month and the year.
 * It will be rounded down to the nearest microsecond.
 * If the given time is not representable in the given time zone (for
 * example, 02:30 on March 14th 2010 in Toronto, due to daylight savings
 * time) then the time will be rounded up to the nearest existing time
 * (in this case, 03:00).  If this matters to you then you should verify
 * the return value for containing the same as the numbers you gave.
 * In the case that the given time is ambiguous in the given time zone
 * (for example, 01:30 on November 7th 2010 in Toronto, due to daylight
 * savings time) then the time falling within standard (ie:
 * non-daylight) time is taken.
 * It not considered a programmer error for the values to this function
 * to be out of range, but in the case that they are, the function will
 * return %NULL.
 * You should release the return value by calling g_date_time_unref()
 * when you are done with it.
 *
 * Returns: a new #GDateTime, or %NULL
 * Since: 2.26
 */


/**
 * g_date_time_new_from_timeval_local:
 * @tv: a #GTimeVal
 *
 * Creates a #GDateTime corresponding to the given #GTimeVal @tv in the
 * local time zone.
 * The time contained in a #GTimeVal is always stored in the form of
 * seconds elapsed since 1970-01-01 00:00:00 UTC, regardless of the
 * local time offset.
 * This call can fail (returning %NULL) if @tv represents a time outside
 * of the supported range of #GDateTime.
 * You should release the return value by calling g_date_time_unref()
 * when you are done with it.
 *
 * Returns: a new #GDateTime, or %NULL
 * Since: 2.26
 */


/**
 * g_date_time_new_from_timeval_utc:
 * @tv: a #GTimeVal
 *
 * Creates a #GDateTime corresponding to the given #GTimeVal @tv in UTC.
 * The time contained in a #GTimeVal is always stored in the form of
 * seconds elapsed since 1970-01-01 00:00:00 UTC.
 * This call can fail (returning %NULL) if @tv represents a time outside
 * of the supported range of #GDateTime.
 * You should release the return value by calling g_date_time_unref()
 * when you are done with it.
 *
 * Returns: a new #GDateTime, or %NULL
 * Since: 2.26
 */


/**
 * g_date_time_new_from_unix_local:
 * @t: the Unix time
 *
 * Creates a #GDateTime corresponding to the given Unix time @t in the
 * local time zone.
 * Unix time is the number of seconds that have elapsed since 1970-01-01
 * 00:00:00 UTC, regardless of the local time offset.
 * This call can fail (returning %NULL) if @t represents a time outside
 * of the supported range of #GDateTime.
 * You should release the return value by calling g_date_time_unref()
 * when you are done with it.
 *
 * Returns: a new #GDateTime, or %NULL
 * Since: 2.26
 */


/**
 * g_date_time_new_from_unix_utc:
 * @t: the Unix time
 *
 * Creates a #GDateTime corresponding to the given Unix time @t in UTC.
 * Unix time is the number of seconds that have elapsed since 1970-01-01
 * 00:00:00 UTC.
 * This call can fail (returning %NULL) if @t represents a time outside
 * of the supported range of #GDateTime.
 * You should release the return value by calling g_date_time_unref()
 * when you are done with it.
 *
 * Returns: a new #GDateTime, or %NULL
 * Since: 2.26
 */


/**
 * g_date_time_new_local:
 * @year: the year component of the date
 * @month: the month component of the date
 * @day: the day component of the date
 * @hour: the hour component of the date
 * @minute: the minute component of the date
 * @seconds: the number of seconds past the minute
 *
 * Creates a new #GDateTime corresponding to the given date and time in
 * the local time zone.
 * This call is equivalent to calling g_date_time_new() with the time
 * zone returned by g_time_zone_new_local().
 *
 * Returns: a #GDateTime, or %NULL
 * Since: 2.26.
 */


/**
 * g_date_time_new_now:
 * @tz: a #GTimeZone
 *
 * Creates a #GDateTime corresponding to this exact instant in the given
 * time zone @tz.  The time is as accurate as the system allows, to a
 * maximum accuracy of 1 microsecond.
 * This function will always succeed unless the system clock is set to
 * truly insane values (or unless GLib is still being used after the
 * year 9999).
 * You should release the return value by calling g_date_time_unref()
 * when you are done with it.
 *
 * Returns: a new #GDateTime, or %NULL
 * Since: 2.26
 */


/**
 * g_date_time_new_now_local:
 *
 * Creates a #GDateTime corresponding to this exact instant in the local
 * time zone.
 * This is equivalent to calling g_date_time_new_now() with the time
 * zone returned by g_time_zone_new_local().
 *
 * Returns: a new #GDateTime, or %NULL
 * Since: 2.26
 */


/**
 * g_date_time_new_now_utc:
 *
 * Creates a #GDateTime corresponding to this exact instant in UTC.
 * This is equivalent to calling g_date_time_new_now() with the time
 * zone returned by g_time_zone_new_utc().
 *
 * Returns: a new #GDateTime, or %NULL
 * Since: 2.26
 */


/**
 * g_date_time_new_utc:
 * @year: the year component of the date
 * @month: the month component of the date
 * @day: the day component of the date
 * @hour: the hour component of the date
 * @minute: the minute component of the date
 * @seconds: the number of seconds past the minute
 *
 * Creates a new #GDateTime corresponding to the given date and time in
 * UTC.
 * This call is equivalent to calling g_date_time_new() with the time
 * zone returned by g_time_zone_new_utc().
 *
 * Returns: a #GDateTime, or %NULL
 * Since: 2.26.
 */


/**
 * g_date_time_ref:
 * @datetime: a #GDateTime
 *
 * Atomically increments the reference count of @datetime by one.
 *
 * Returns: the #GDateTime with the reference count increased
 * Since: 2.26
 */


/**
 * g_date_time_to_local:
 * @datetime: a #GDateTime
 *
 * Creates a new #GDateTime corresponding to the same instant in time as
 * This call is equivalent to calling g_date_time_to_timezone() with the
 * time zone returned by g_time_zone_new_local().
 *
 * Returns: the newly created #GDateTime
 * Since: 2.26
 */


/**
 * g_date_time_to_timeval:
 * @datetime: a #GDateTime
 * @tv: a #GTimeVal to modify
 *
 * Stores the instant in time that @datetime represents into @tv.
 * The time contained in a #GTimeVal is always stored in the form of
 * seconds elapsed since 1970-01-01 00:00:00 UTC, regardless of the time
 * zone associated with @datetime.
 * Windows systems), a #GTimeVal is incapable of storing the entire
 * range of values that #GDateTime is capable of expressing.  On those
 * systems, this function returns %FALSE to indicate that the time is
 * out of range.
 * On systems where 'long' is 64bit, this function never fails.
 *
 * On systems where 'long' is 32bit (ie: all 32bit systems and all
 * Returns: %TRUE if successful, else %FALSE
 * Since: 2.26
 */


/**
 * g_date_time_to_timezone:
 * @datetime: a #GDateTime
 * @tz: the new #GTimeZone
 *
 * Create a new #GDateTime corresponding to the same instant in time as
 * This call can fail in the case that the time goes out of bounds.  For
 * example, converting 0001-01-01 00:00:00 UTC to a time zone west of
 * Greenwich will fail (due to the year 0 being out of range).
 * You should release the return value by calling g_date_time_unref()
 * when you are done with it.
 *
 * Returns: a new #GDateTime, or %NULL
 * Since: 2.26
 */


/**
 * g_date_time_to_unix:
 * @datetime: a #GDateTime
 *
 * Gives the Unix time corresponding to @datetime, rounding down to the
 * nearest second.
 * Unix time is the number of seconds that have elapsed since 1970-01-01
 * 00:00:00 UTC, regardless of the time zone associated with @datetime.
 *
 * Returns: the Unix time corresponding to @datetime
 * Since: 2.26
 */


/**
 * g_date_time_to_utc:
 * @datetime: a #GDateTime
 *
 * Creates a new #GDateTime corresponding to the same instant in time as
 * This call is equivalent to calling g_date_time_to_timezone() with the
 * time zone returned by g_time_zone_new_utc().
 *
 * Returns: the newly created #GDateTime
 * Since: 2.26
 */


/**
 * g_date_time_unref:
 * @datetime: a #GDateTime
 *
 * Atomically decrements the reference count of @datetime by one.
 * When the reference count reaches zero, the resources allocated by
 *
 * Since: 2.26
 */


/**
 * g_dcgettext:
 * @domain: (allow-none): the translation domain to use, or %NULL to use the domain set with textdomain()
 * @msgid: message to translate
 * @category: a locale category
 *
 * This is a variant of g_dgettext() that allows specifying a locale
 * category instead of always using %LC_MESSAGES. See g_dgettext() for
 * more information about how this functions differs from calling
 * dcgettext() directly.
 *
 * Returns: the translated string for the given locale category
 * Since: 2.26
 */


/**
 * g_dgettext:
 * @domain: the translation domain to use, or %NULL to use the domain set with textdomain()
 * @msgid: message to translate
 *
 * This function is a wrapper of dgettext() which does not translate
 * the message if the default domain as set with textdomain() has no
 * translations for the current locale.
 * The advantage of using this function over dgettext() proper is that
 * libraries using this function (like GTK+) will not use translations
 * if the application using the library does not have translations for
 * the current locale.  This results in a consistent English-only
 * interface instead of one having partial translations.  For this
 * feature to work, the call to textdomain() and setlocale() should
 * precede any g_dgettext() invocations.  For GTK+, it means calling
 * textdomain() before gtk_init or its variants.
 * This function disables translations if and only if upon its first
 * call all the following conditions hold:
 * <itemizedlist>
 * <listitem>@domain is not %NULL</listitem>
 * <listitem>textdomain() has been called to set a default text domain</listitem>
 * <listitem>there is no translations available for the default text domain
 * and the current locale</listitem>
 * <listitem>current locale is not "C" or any English locales (those
 * starting with "en_")</listitem>
 * </itemizedlist>
 * Note that this behavior may not be desired for example if an application
 * has its untranslated messages in a language other than English.  In those
 * cases the application should call textdomain() after initializing GTK+.
 * Applications should normally not use this function directly,
 * but use the _() macro for translations.
 *
 * Returns: The translated string
 * Since: 2.18
 */


/**
 * g_dir_close:
 * @dir: a #GDir* created by g_dir_open()
 *
 * Closes the directory and deallocates all related resources.
 */


/**
 * g_dir_open:
 * @path: the path to the directory you are interested in. On Unix in the on-disk encoding. On Windows in UTF-8
 * @flags: Currently must be set to 0. Reserved for future use.
 * @error: return location for a #GError, or %NULL. If non-%NULL, an error will be set if and only if g_dir_open() fails.
 *
 * Opens a directory for reading. The names of the files in the
 * directory can then be retrieved using g_dir_read_name().  Note
 * that the ordering is not defined.
 * If non-%NULL, you must free the result with g_dir_close()
 * when you are finished with it.
 *
 * Returns: a newly allocated #GDir on success, %NULL on failure.
 */


/**
 * g_dir_read_name:
 * @dir: a #GDir* created by g_dir_open()
 *
 * Retrieves the name of another entry in the directory, or %NULL.
 * The order of entries returned from this function is not defined,
 * and may vary by file system or other operating-system dependent
 * factors.
 * On Unix, the '.' and '..' entries are omitted, and the returned
 * name is in the on-disk encoding.
 * On Windows, as is true of all GLib functions which operate on
 * filenames, the returned name is in UTF-8.
 * more entries. The return value is owned by GLib and
 * must not be modified or freed.
 *
 * Returns: The entry's name or %NULL if there are no
 */


/**
 * g_dir_rewind:
 * @dir: a #GDir* created by g_dir_open()
 *
 * Resets the given directory. The next call to g_dir_read_name()
 * will return the first entry again.
 */


/**
 * g_direct_equal:
 * @v1: a key.
 * @v2: a key to compare with @v1.
 *
 * Compares two #gpointer arguments and returns %TRUE if they are equal.
 * It can be passed to g_hash_table_new() as the @key_equal_func
 * parameter, when using pointers as keys in a #GHashTable.
 *
 * Returns: %TRUE if the two keys match.
 */


/**
 * g_direct_hash:
 * @v: a #gpointer key
 *
 * Converts a gpointer to a hash value.
 * It can be passed to g_hash_table_new() as the @hash_func parameter,
 * when using pointers as keys in a #GHashTable.
 *
 * Returns: a hash value corresponding to the key.
 */


/**
 * g_dirname:
 * @file_name: the name of the file
 *
 * Gets the directory components of a file name.
 * If the file name has no directory components "." is returned.
 * The returned string should be freed when no longer needed.
 *
 * Returns: the directory components of the file
 * Deprecated: use g_path_get_dirname() instead
 */


/**
 * g_dngettext:
 * @domain: the translation domain to use, or %NULL to use the domain set with textdomain()
 * @msgid: message to translate
 * @msgid_plural: plural form of the message
 * @n: the quantity for which translation is needed
 *
 * This function is a wrapper of dngettext() which does not translate
 * the message if the default domain as set with textdomain() has no
 * translations for the current locale.
 * See g_dgettext() for details of how this differs from dngettext()
 * proper.
 *
 * Returns: The translated string
 * Since: 2.18
 */


/**
 * g_double_equal:
 * @v1: a pointer to a #gdouble key.
 * @v2: a pointer to a #gdouble key to compare with @v1.
 *
 * Compares the two #gdouble values being pointed to and returns
 * %TRUE if they are equal.
 * It can be passed to g_hash_table_new() as the @key_equal_func
 * parameter, when using pointers to doubles as keys in a #GHashTable.
 *
 * Returns: %TRUE if the two keys match.
 * Since: 2.22
 */


/**
 * g_double_hash:
 * @v: a pointer to a #gdouble key
 *
 * Converts a pointer to a #gdouble to a hash value.
 * It can be passed to g_hash_table_new() as the @hash_func parameter,
 * when using pointers to doubles as keys in a #GHashTable.
 *
 * Returns: a hash value corresponding to the key.
 * Since: 2.22
 */


/**
 * g_dpgettext:
 * @domain: the translation domain to use, or %NULL to use the domain set with textdomain()
 * @msgctxtid: a combined message context and message id, separated by a \004 character
 * @msgidoffset: the offset of the message id in @msgctxid
 *
 * This function is a variant of g_dgettext() which supports
 * a disambiguating message context. GNU gettext uses the
 * '\004' character to separate the message context and
 * message id in @msgctxtid.
 * If 0 is passed as @msgidoffset, this function will fall back to
 * trying to use the deprecated convention of using "|" as a separation
 * character.
 * This uses g_dgettext() internally.  See that functions for differences
 * with dgettext() proper.
 * Applications should normally not use this function directly,
 * but use the C_() macro for translations with context.
 *
 * Returns: The translated string
 * Since: 2.16
 */


/**
 * g_dpgettext2:
 * @domain: the translation domain to use, or %NULL to use the domain set with textdomain()
 * @context: the message context
 * @msgid: the message
 *
 * This function is a variant of g_dgettext() which supports
 * a disambiguating message context. GNU gettext uses the
 * '\004' character to separate the message context and
 * message id in @msgctxtid.
 * This uses g_dgettext() internally.  See that functions for differences
 * with dgettext() proper.
 * This function differs from C_() in that it is not a macro and
 * thus you may use non-string-literals as context and msgid arguments.
 *
 * Returns: The translated string
 * Since: 2.18
 */


/**
 * g_error_copy:
 * @error: a #GError
 *
 * Makes a copy of @error.
 *
 * Returns: a new #GError
 */


/**
 * g_error_free:
 * @error: a #GError
 *
 * Frees a #GError and associated resources.
 */


/**
 * g_error_matches:
 * @error: a #GError or %NULL
 * @domain: an error domain
 * @code: an error code
 *
 * Returns %TRUE if @error matches @domain and @code, %FALSE
 * otherwise. In particular, when @error is %NULL, %FALSE will
 * be returned.
 *
 * Returns: whether @error has @domain and @code
 */


/**
 * g_error_new:
 * @domain: error domain
 * @code: error code
 * @format: printf()-style format for error message
 * @Varargs: parameters for message format
 *
 * Creates a new #GError with the given @domain and @code,
 * and a message formatted with @format.
 *
 * Returns: a new #GError
 */


/**
 * g_error_new_literal:
 * @domain: error domain
 * @code: error code
 * @message: error message
 *
 * Creates a new #GError; unlike g_error_new(), @message is
 * not a printf()-style format string. Use this function if
 * that could include printf() escape sequences.
 *
 * Returns: a new #GError
 */


/**
 * g_error_new_valist:
 * @domain: error domain
 * @code: error code
 * @format: printf()-style format for error message
 * @args: #va_list of parameters for the message format
 *
 * Creates a new #GError with the given @domain and @code,
 * and a message formatted with @format.
 *
 * Returns: a new #GError
 * Since: 2.22
 */


/**
 * g_file_error_from_errno:
 * @err_no: an "errno" value
 *
 * Gets a #GFileError constant based on the passed-in @errno.
 * For example, if you pass in %EEXIST this function returns
 * #G_FILE_ERROR_EXIST. Unlike @errno values, you can portably
 * assume that all #GFileError values will exist.
 * Normally a #GFileError value goes into a #GError returned
 * from a function that manipulates files. So you would use
 * g_file_error_from_errno() when constructing a #GError.
 *
 * Returns: #GFileError corresponding to the given @errno
 */


/**
 * g_file_get_contents:
 * @filename: (type filename): name of a file to read contents from, in the GLib file name encoding
 * @contents: (out) (array length=length) (element-type guint8): location to store an allocated string, use g_free() to free the returned string
 * @length: (allow-none): location to store length in bytes of the contents, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Reads an entire file into allocated memory, with good error
 * checking.
 * If the call was successful, it returns %TRUE and sets @contents to the file
 * contents and @length to the length of the file contents in bytes. The string
 * stored in @contents will be nul-terminated, so for text files you can pass
 * %NULL for the @length argument. If the call was not successful, it returns
 * %FALSE and sets @error. The error domain is #G_FILE_ERROR. Possible error
 * codes are those in the #GFileError enumeration. In the error case,
 *
 * Returns: %TRUE on success, %FALSE if an error occurred
 */


/**
 * g_file_open_tmp:
 * @tmpl: Template for file name, as in g_mkstemp(), basename only, or %NULL, to a default template
 * @name_used: location to store actual name used, or %NULL
 * @error: return location for a #GError
 *
 * Opens a file for writing in the preferred directory for temporary
 * files (as returned by g_get_tmp_dir()).
 * a sequence of six 'X' characters, as the parameter to g_mkstemp().
 * However, unlike these functions, the template should only be a
 * basename, no directory components are allowed. If template is
 * %NULL, a default template is used.
 * Note that in contrast to g_mkstemp() (and mkstemp())
 * The actual name used is returned in @name_used if non-%NULL. This
 * string should be freed with g_free() when not needed any longer.
 * The returned name is in the GLib file name encoding.
 * the file opened for reading and writing. The file is opened in binary
 * mode on platforms where there is a difference. The file handle should be
 * closed with close(). In case of errors, -1 is returned
 * and @error will be set.
 *
 * Returns: A file handle (as from open()) to
 */


/**
 * g_file_read_link:
 * @filename: the symbolic link
 * @error: return location for a #GError
 *
 * Reads the contents of the symbolic link @filename like the POSIX
 * readlink() function.  The returned string is in the encoding used
 * for filenames. Use g_filename_to_utf8() to convert it to UTF-8.
 * or %NULL if an error occurred.
 *
 * Returns: A newly-allocated string with the contents of the symbolic link,
 * Since: 2.4
 */


/**
 * g_file_set_contents:
 * @filename: (type filename): name of a file to write @contents to, in the GLib file name encoding
 * @contents: (array length=length) (element-type guint8): string to write to the file
 * @length: length of @contents, or -1 if @contents is a nul-terminated string
 * @error: return location for a #GError, or %NULL
 *
 * Writes all of @contents to a file named @filename, with good error checking.
 * If a file called @filename already exists it will be overwritten.
 * This write is atomic in the sense that it is first written to a temporary
 * file which is then renamed to the final name. Notes:
 * <itemizedlist>
 * <listitem>
 * On Unix, if @filename already exists hard links to @filename will break.
 * Also since the file is recreated, existing permissions, access control
 * lists, metadata etc. may be lost. If @filename is a symbolic link,
 * the link itself will be replaced, not the linked file.
 * </listitem>
 * <listitem>
 * On Windows renaming a file will not remove an existing file with the
 * new name, so on Windows there is a race condition between the existing
 * file being removed and the temporary file being renamed.
 * </listitem>
 * <listitem>
 * On Windows there is no way to remove a file that is open to some
 * process, or mapped into memory. Thus, this function will fail if
 * </listitem>
 * </itemizedlist>
 * If the call was sucessful, it returns %TRUE. If the call was not successful,
 * it returns %FALSE and sets @error. The error domain is #G_FILE_ERROR.
 * Possible error codes are those in the #GFileError enumeration.
 * Note that the name for the temporary file is constructed by appending up
 * to 7 characters to @filename.
 *
 * Returns: %TRUE on success, %FALSE if an error occurred
 * Since: 2.8
 */


/**
 * g_file_test:
 * @filename: a filename to test in the GLib file name encoding
 * @test: bitfield of #GFileTest flags
 *
 * Returns %TRUE if any of the tests in the bitfield @test are
 * %TRUE. For example, <literal>(G_FILE_TEST_EXISTS |
 * G_FILE_TEST_IS_DIR)</literal> will return %TRUE if the file exists;
 * the check whether it's a directory doesn't matter since the existence
 * test is %TRUE. With the current set of available tests, there's no point
 * passing in more than one test at a time.
 * Apart from %G_FILE_TEST_IS_SYMLINK all tests follow symbolic links,
 * so for a symbolic link to a regular file g_file_test() will return
 * %TRUE for both %G_FILE_TEST_IS_SYMLINK and %G_FILE_TEST_IS_REGULAR.
 * Note, that for a dangling symbolic link g_file_test() will return
 * %TRUE for %G_FILE_TEST_IS_SYMLINK and %FALSE for all other flags.
 * You should never use g_file_test() to test whether it is safe
 * to perform an operation, because there is always the possibility
 * of the condition changing before you actually perform the operation.
 * For example, you might think you could use %G_FILE_TEST_IS_SYMLINK
 * to know whether it is safe to write to a file without being
 * tricked into writing into a different location. It doesn't work!
 * |[
 * /&ast; DON'T DO THIS &ast;/
 * if (!g_file_test (filename, G_FILE_TEST_IS_SYMLINK))
 * {
 * fd = g_open (filename, O_WRONLY);
 * /&ast; write to fd &ast;/
 * }
 * ]|
 * Another thing to note is that %G_FILE_TEST_EXISTS and
 * %G_FILE_TEST_IS_EXECUTABLE are implemented using the access()
 * system call. This usually doesn't matter, but if your program
 * is setuid or setgid it means that these tests will give you
 * the answer for the real user ID and group ID, rather than the
 * effective user ID and group ID.
 * On Windows, there are no symlinks, so testing for
 * %G_FILE_TEST_IS_SYMLINK will always return %FALSE. Testing for
 * %G_FILE_TEST_IS_EXECUTABLE will just check that the file exists and
 * its name indicates that it is executable, checking for well-known
 * extensions and those listed in the %PATHEXT environment variable.
 *
 * Returns: whether a test was %TRUE
 */


/**
 * g_filename_display_basename:
 * @filename: an absolute pathname in the GLib file name encoding
 *
 * Returns the display basename for the particular filename, guaranteed
 * to be valid UTF-8. The display name might not be identical to the filename,
 * for instance there might be problems converting it to UTF-8, and some files
 * can be translated in the display.
 * If GLib cannot make sense of the encoding of @filename, as a last resort it
 * replaces unknown characters with U+FFFD, the Unicode replacement character.
 * You can search the result for the UTF-8 encoding of this character (which is
 * "\357\277\275" in octal notation) to find out if @filename was in an invalid
 * encoding.
 * You must pass the whole absolute pathname to this functions so that
 * translation of well known locations can be done.
 * This function is preferred over g_filename_display_name() if you know the
 * whole path, as it allows translation.
 * a rendition of the basename of the filename in valid UTF-8
 *
 * Returns: a newly allocated string containing
 * Since: 2.6
 */


/**
 * g_filename_display_name:
 * @filename: a pathname hopefully in the GLib file name encoding
 *
 * Converts a filename into a valid UTF-8 string. The conversion is
 * not necessarily reversible, so you should keep the original around
 * and use the return value of this function only for display purposes.
 * Unlike g_filename_to_utf8(), the result is guaranteed to be non-%NULL
 * even if the filename actually isn't in the GLib file name encoding.
 * If GLib cannot make sense of the encoding of @filename, as a last resort it
 * replaces unknown characters with U+FFFD, the Unicode replacement character.
 * You can search the result for the UTF-8 encoding of this character (which is
 * "\357\277\275" in octal notation) to find out if @filename was in an invalid
 * encoding.
 * If you know the whole pathname of the file you should use
 * g_filename_display_basename(), since that allows location-based
 * translation of filenames.
 * a rendition of the filename in valid UTF-8
 *
 * Returns: a newly allocated string containing
 * Since: 2.6
 */


/**
 * g_filename_from_uri:
 * @uri: a uri describing a filename (escaped, encoded in ASCII).
 * @hostname: Location to store hostname for the URI, or %NULL. If there is no hostname in the URI, %NULL will be stored in this location.
 * @error: location to store the error occuring, or %NULL to ignore errors. Any of the errors in #GConvertError may occur.
 *
 * Converts an escaped ASCII-encoded URI to a local filename in the
 * encoding used for filenames.
 * filename, or %NULL on an error.
 *
 * Returns: a newly-allocated string holding the resulting
 */


/**
 * g_filename_from_utf8:
 * @utf8string: a UTF-8 encoded string.
 * @len: the length of the string, or -1 if the string is nul-terminated.
 * @bytes_read: location to store the number of bytes in the input string that were successfully converted, or %NULL. Even if the conversion was successful, this may be less than @len if there were partial characters at the end of the input. If the error #G_CONVERT_ERROR_ILLEGAL_SEQUENCE occurs, the value stored will the byte offset after the last valid input sequence.
 * @bytes_written: the number of bytes stored in the output buffer (not including the terminating nul).
 * @error: location to store the error occuring, or %NULL to ignore errors. Any of the errors in #GConvertError may occur.
 *
 * Converts a string from UTF-8 to the encoding GLib uses for
 * filenames. Note that on Windows GLib uses UTF-8 for filenames;
 * on other platforms, this function indirectly depends on the
 * <link linkend="setlocale">current locale</link>.
 *
 * Returns: The converted string, or %NULL on an error.
 */


/**
 * g_filename_to_uri:
 * @filename: an absolute filename specified in the GLib file name encoding, which is the on-disk file name bytes on Unix, and UTF-8 on Windows
 * @hostname: (allow-none): A UTF-8 encoded hostname, or %NULL for none.
 * @error: location to store the error occuring, or %NULL to ignore errors. Any of the errors in #GConvertError may occur.
 *
 * Converts an absolute filename to an escaped ASCII-encoded URI, with the path
 * component following Section 3.3. of RFC 2396.
 * URI, or %NULL on an error.
 *
 * Returns: a newly-allocated string holding the resulting
 */


/**
 * g_filename_to_utf8:
 * @opsysstring: a string in the encoding for filenames
 * @len: the length of the string, or -1 if the string is nul-terminated<footnoteref linkend="nul-unsafe"/>.
 * @bytes_read: location to store the number of bytes in the input string that were successfully converted, or %NULL. Even if the conversion was successful, this may be less than @len if there were partial characters at the end of the input. If the error #G_CONVERT_ERROR_ILLEGAL_SEQUENCE occurs, the value stored will the byte offset after the last valid input sequence.
 * @bytes_written: the number of bytes stored in the output buffer (not including the terminating nul).
 * @error: location to store the error occuring, or %NULL to ignore errors. Any of the errors in #GConvertError may occur.
 *
 * Converts a string which is in the encoding used by GLib for
 * filenames into a UTF-8 string. Note that on Windows GLib uses UTF-8
 * for filenames; on other platforms, this function indirectly depends on
 * the <link linkend="setlocale">current locale</link>.
 *
 * Returns: The converted string, or %NULL on an error.
 */


/**
 * g_find_program_in_path:
 * @program: a program name in the GLib file name encoding
 *
 * Locates the first executable named @program in the user's path, in the
 * same way that execvp() would locate it. Returns an allocated string
 * with the absolute path name, or %NULL if the program is not found in
 * the path. If @program is already an absolute path, returns a copy of
 * On Windows, if @program does not have a file type suffix, tries
 * with the suffixes .exe, .cmd, .bat and .com, and the suffixes in
 * the <envar>PATHEXT</envar> environment variable.
 * On Windows, it looks for the file in the same way as CreateProcess()
 * would. This means first in the directory where the executing
 * program was loaded from, then in the current directory, then in the
 * Windows 32-bit system directory, then in the Windows directory, and
 * finally in the directories in the <envar>PATH</envar> environment
 * variable. If the program is found, the return value contains the
 * full name including the type suffix.
 *
 * Returns: absolute path, or %NULL
 */


/**
 * g_fopen:
 * @filename: a pathname in the GLib file name encoding (UTF-8 on Windows)
 * @mode: a string describing the mode in which the file should be opened
 *
 * A wrapper for the stdio fopen() function. The fopen() function
 * opens a file and associates a new stream with it.
 * Because file descriptors are specific to the C library on Windows,
 * and a file descriptor is partof the <type>FILE</type> struct, the
 * <type>FILE</type> pointer returned by this function makes sense
 * only to functions in the same C library. Thus if the GLib-using
 * code uses a different C library than GLib does, the
 * <type>FILE</type> pointer returned by this function cannot be
 * passed to C library functions like fprintf() or fread().
 * See your C library manual for more details about fopen().
 * opened, or %NULL if an error occurred
 *
 * Returns: A <type>FILE</type> pointer if the file was successfully
 * Since: 2.6
 */


/**
 * g_format_size_for_display:
 * @size: a size in bytes.
 *
 * Formats a size (for example the size of a file) into a human readable string.
 * Sizes are rounded to the nearest size prefix (KB, MB, GB) and are displayed
 * rounded to the nearest  tenth. E.g. the file size 3292528 bytes will be
 * converted into the string "3.1 MB".
 * The prefix units base is 1024 (i.e. 1 KB is 1024 bytes).
 * This string should be freed with g_free() when not needed any longer.
 * file size.
 *
 * Returns: a newly-allocated formatted string containing a human readable
 * Since: 2.16
 */


/**
 * g_fprintf:
 * @file: the stream to write to.
 * @format: a standard printf() format string, but notice <link linkend="string-precision">string precision pitfalls</link>.
 * @Varargs: the arguments to insert in the output.
 *
 * An implementation of the standard fprintf() function which supports
 * positional parameters, as specified in the Single Unix Specification.
 *
 * Returns: the number of bytes printed.
 * Since: 2.2
 */


/**
 * g_free:
 * @mem: the memory to free
 *
 * Frees the memory pointed to by @mem.
 * If @mem is %NULL it simply returns.
 */


/**
 * g_freopen:
 * @filename: a pathname in the GLib file name encoding (UTF-8 on Windows)
 * @mode: a string describing the mode in which the file should be opened
 * @stream: an existing stream which will be reused, or %NULL
 *
 * A wrapper for the POSIX freopen() function. The freopen() function
 * opens a file and associates it with an existing stream.
 * See your C library manual for more details about freopen().
 * opened, or %NULL if an error occurred.
 *
 * Returns: A <type>FILE</type> pointer if the file was successfully
 * Since: 2.6
 */


/**
 * g_get_application_name:
 *
 * Gets a human-readable name for the application, as set by
 * g_set_application_name(). This name should be localized if
 * possible, and is intended for display to the user.  Contrast with
 * g_get_prgname(), which gets a non-localized name. If
 * g_set_application_name() has not been called, returns the result of
 * g_get_prgname() (which may be %NULL if g_set_prgname() has also not
 * been called).
 *
 * Returns: human-readable application name. may return %NULL
 * Since: 2.2
 */


/**
 * g_get_charset:
 * @charset: return location for character set name
 *
 * Obtains the character set for the <link linkend="setlocale">current
 * locale</link>; you might use this character set as an argument to
 * g_convert(), to convert from the current locale's encoding to some
 * other encoding. (Frequently g_locale_to_utf8() and g_locale_from_utf8()
 * are nice shortcuts, though.)
 * On Windows the character set returned by this function is the
 * so-called system default ANSI code-page. That is the character set
 * used by the "narrow" versions of C library and Win32 functions that
 * handle file names. It might be different from the character set
 * used by the C library's current locale.
 * The return value is %TRUE if the locale's encoding is UTF-8, in that
 * case you can perhaps avoid calling g_convert().
 * The string returned in @charset is not allocated, and should not be
 * freed.
 *
 * Returns: %TRUE if the returned charset is UTF-8
 */


/**
 * g_get_codeset:
 *
 * Get the codeset for the current locale.
 * of the codeset. This string must be freed with g_free().
 *
 * Returns: a newly allocated string containing the name
 */


/**
 * g_get_current_dir:
 *
 * Gets the current directory.
 * The returned string should be freed when no longer needed. The encoding
 * of the returned string is system defined. On Windows, it is always UTF-8.
 *
 * Returns: the current directory.
 */


/**
 * g_get_current_time:
 * @result: #GTimeVal structure in which to store current time.
 *
 * Equivalent to the UNIX gettimeofday() function, but portable.
 * You may find g_get_real_time() to be more convenient.
 */


/**
 * g_get_environ:
 *
 * Gets the list of environment variables for the current process.  The
 * list is %NULL terminated and each item in the list is of the form
 * 'NAME=VALUE'.
 * This is equivalent to direct access to the 'environ' global variable,
 * except portable.
 * The return value is freshly allocated and it should be freed with
 * g_strfreev() when it is no longer needed.
 *
 * Returns: (array zero-terminated=1) (transfer full): the list of environment variables
 * Since: 2.28
 */


/**
 * g_get_filename_charsets:
 * @charsets: return location for the %NULL-terminated list of encoding names
 *
 * Determines the preferred character sets used for filenames.
 * The first character set from the @charsets is the filename encoding, the
 * subsequent character sets are used when trying to generate a displayable
 * representation of a filename, see g_filename_display_name().
 * On Unix, the character sets are determined by consulting the
 * environment variables <envar>G_FILENAME_ENCODING</envar> and
 * <envar>G_BROKEN_FILENAMES</envar>. On Windows, the character set
 * used in the GLib API is always UTF-8 and said environment variables
 * have no effect.
 * <envar>G_FILENAME_ENCODING</envar> may be set to a comma-separated list
 * of character set names. The special token "&commat;locale" is taken to
 * mean the character set for the <link linkend="setlocale">current
 * locale</link>. If <envar>G_FILENAME_ENCODING</envar> is not set, but
 * <envar>G_BROKEN_FILENAMES</envar> is, the character set of the current
 * locale is taken as the filename encoding. If neither environment variable
 * is set, UTF-8 is taken as the filename encoding, but the character
 * set of the current locale is also put in the list of encodings.
 * The returned @charsets belong to GLib and must not be freed.
 * Note that on Unix, regardless of the locale character set or
 * <envar>G_FILENAME_ENCODING</envar> value, the actual file names present
 * on a system might be in any random encoding or just gibberish.
 *
 * Returns: %TRUE if the filename encoding is UTF-8.
 * Since: 2.6
 */


/**
 * g_get_home_dir:
 *
 * Gets the current user's home directory as defined in the
 * password database.
 * Note that in contrast to traditional UNIX tools, this function
 * prefers <filename>passwd</filename> entries over the <envar>HOME</envar>
 * environment variable.
 * One of the reasons for this decision is that applications in many
 * cases need special handling to deal with the case where
 * <envar>HOME</envar> is
 * <simplelist>
 * <member>Not owned by the user</member>
 * <member>Not writeable</member>
 * <member>Not even readable</member>
 * </simplelist>
 * Since applications are in general <emphasis>not</emphasis> written
 * to deal with these situations it was considered better to make
 * g_get_home_dir() not pay attention to <envar>HOME</envar> and to
 * return the real home directory for the user. If applications
 * want to pay attention to <envar>HOME</envar>, they can do:
 * |[
 * const char *homedir = g_getenv ("HOME");
 * if (!homedir)
 * homedir = g_get_home_dir (<!-- -->);
 * ]|
 *
 * Returns: the current user's home directory
 */


/**
 * g_get_host_name:
 *
 * Return a name for the machine.
 * The returned name is not necessarily a fully-qualified domain name,
 * or even present in DNS or some other name service at all. It need
 * not even be unique on your local network or site, but usually it
 * is. Callers should not rely on the return value having any specific
 * properties like uniqueness for security purposes. Even if the name
 * of the machine is changed while an application is running, the
 * return value from this function does not change. The returned
 * string is owned by GLib and should not be modified or freed. If no
 * name can be determined, a default fixed string "localhost" is
 * returned.
 *
 * Returns: the host name of the machine.
 * Since: 2.8
 */


/**
 * g_get_language_names:
 *
 * Computes a list of applicable locale names, which can be used to
 * e.g. construct locale-dependent filenames or search paths. The returned
 * list is sorted from most desirable to least desirable and always contains
 * the default locale "C".
 * For example, if LANGUAGE=de:en_US, then the returned list is
 * "de", "en_US", "en", "C".
 * This function consults the environment variables <envar>LANGUAGE</envar>,
 * <envar>LC_ALL</envar>, <envar>LC_MESSAGES</envar> and <envar>LANG</envar>
 * to find the list of locales specified by the user.
 * that must not be modified or freed.
 *
 * Returns: (array zero-terminated=1) (transfer none): a %NULL-terminated array of strings owned by GLib
 * Since: 2.6
 */


/**
 * g_get_locale_variants:
 * @locale: a locale identifier
 *
 * Returns a list of derived variants of @locale, which can be used to
 * e.g. construct locale-dependent filenames or search paths. The returned
 * list is sorted from most desirable to least desirable.
 * This function handles territory, charset and extra locale modifiers.
 * For example, if @locale is "fr_BE", then the returned list
 * is "fr_BE", "fr".
 * If you need the list of variants for the <emphasis>current locale</emphasis>,
 * use g_get_language_names().
 * allocated array of newly allocated strings with the locale variants. Free with
 * g_strfreev().
 *
 * Returns: (transfer full) (array zero-terminated=1) (element-type utf8): a newly
 * Since: 2.28
 */


/**
 * g_get_monotonic_time:
 *
 * Queries the system monotonic time, if available.
 * On POSIX systems with clock_gettime() and %CLOCK_MONOTONIC this call
 * is a very shallow wrapper for that.  Otherwise, we make a best effort
 * that probably involves returning the wall clock time (with at least
 * microsecond accuracy, subject to the limitations of the OS kernel).
 * Note that, on Windows, "limitations of the OS kernel" is a rather
 * substantial statement.  Depending on the configuration of the system,
 * the wall clock time is updated as infrequently as 64 times a second
 * (which is approximately every 16ms).
 *
 * Returns: the monotonic time, in microseconds
 * Since: 2.28
 */


/**
 * g_get_prgname:
 *
 * Gets the name of the program. This name should <emphasis>not</emphasis>
 * be localized, contrast with g_get_application_name().
 * (If you are using GDK or GTK+ the program name is set in gdk_init(),
 * which is called by gtk_init(). The program name is found by taking
 * the last component of <literal>argv[0]</literal>.)
 * to GLib and must not be modified or freed.
 *
 * Returns: the name of the program. The returned string belongs
 */


/**
 * g_get_real_name:
 *
 * Gets the real name of the user. This usually comes from the user's entry
 * in the <filename>passwd</filename> file. The encoding of the returned
 * string is system-defined. (On Windows, it is, however, always UTF-8.)
 * If the real user name cannot be determined, the string "Unknown" is
 * returned.
 *
 * Returns: the user's real name.
 */


/**
 * g_get_real_time:
 *
 * Queries the system wall-clock time.
 * This call is functionally equivalent to g_get_current_time() except
 * that the return value is often more convenient than dealing with a
 * #GTimeVal.
 * You should only use this call if you are actually interested in the real
 * wall-clock time.  g_get_monotonic_time() is probably more useful for
 * measuring intervals.
 *
 * Returns: the number of microseconds since January 1, 1970 UTC.
 * Since: 2.28
 */


/**
 * g_get_system_config_dirs:
 *
 * Returns an ordered list of base directories in which to access
 * system-wide configuration information.
 * On UNIX platforms this is determined using the mechanisms described in
 * the <ulink url="http://www.freedesktop.org/Standards/basedir-spec">
 * XDG Base Directory Specification</ulink>.
 * In this case the list of directories retrieved will be XDG_CONFIG_DIRS.
 * On Windows is the directory that contains application data for all users.
 * A typical path is C:\Documents and Settings\All Users\Application Data.
 * This folder is used for application data that is not user specific.
 * For example, an application can store a spell-check dictionary, a database
 * of clip art, or a log file in the CSIDL_COMMON_APPDATA folder.
 * This information will not roam and is available to anyone using the computer.
 * not be modified or freed.
 *
 * Returns: (array zero-terminated=1) (transfer none): a %NULL-terminated array of strings owned by GLib that must
 * Since: 2.6
 */


/**
 * g_get_system_data_dirs:
 *
 * Returns an ordered list of base directories in which to access
 * system-wide application data.
 * On UNIX platforms this is determined using the mechanisms described in
 * the <ulink url="http://www.freedesktop.org/Standards/basedir-spec">
 * XDG Base Directory Specification</ulink>
 * In this case the list of directories retrieved will be XDG_DATA_DIRS.
 * On Windows the first elements in the list are the Application Data
 * and Documents folders for All Users. (These can be determined only
 * on Windows 2000 or later and are not present in the list on other
 * Windows versions.) See documentation for CSIDL_COMMON_APPDATA and
 * CSIDL_COMMON_DOCUMENTS.
 * Then follows the "share" subfolder in the installation folder for
 * the package containing the DLL that calls this function, if it can
 * be determined.
 * Finally the list contains the "share" subfolder in the installation
 * folder for GLib, and in the installation folder for the package the
 * application's .exe file belongs to.
 * The installation folders above are determined by looking up the
 * folder where the module (DLL or EXE) in question is located. If the
 * folder's name is "bin", its parent is used, otherwise the folder
 * itself.
 * Note that on Windows the returned list can vary depending on where
 * this function is called.
 * not be modified or freed.
 *
 * Returns: (array zero-terminated=1) (transfer none): a %NULL-terminated array of strings owned by GLib that must
 * Since: 2.6
 */


/**
 * g_get_tmp_dir:
 *
 * Gets the directory to use for temporary files. This is found from
 * inspecting the environment variables <envar>TMPDIR</envar>,
 * <envar>TMP</envar>, and <envar>TEMP</envar> in that order. If none
 * of those are defined "/tmp" is returned on UNIX and "C:\" on Windows.
 * The encoding of the returned string is system-defined. On Windows,
 * it is always UTF-8. The return value is never %NULL or the empty string.
 *
 * Returns: the directory to use for temporary files.
 */


/**
 * g_get_user_cache_dir:
 *
 * Returns a base directory in which to store non-essential, cached
 * data specific to particular user.
 * On UNIX platforms this is determined using the mechanisms described in
 * the <ulink url="http://www.freedesktop.org/Standards/basedir-spec">
 * XDG Base Directory Specification</ulink>.
 * In this case the directory retrieved will be XDG_CACHE_HOME.
 * On Windows is the directory that serves as a common repository for
 * temporary Internet files. A typical path is
 * C:\Documents and Settings\username\Local Settings\Temporary Internet Files.
 * See documentation for CSIDL_INTERNET_CACHE.
 * or freed.
 *
 * Returns: a string owned by GLib that must not be modified
 * Since: 2.6
 */


/**
 * g_get_user_config_dir:
 *
 * Returns a base directory in which to store user-specific application
 * configuration information such as user preferences and settings.
 * On UNIX platforms this is determined using the mechanisms described in
 * the <ulink url="http://www.freedesktop.org/Standards/basedir-spec">
 * XDG Base Directory Specification</ulink>.
 * In this case the directory retrieved will be XDG_CONFIG_HOME.
 * On Windows this is the folder to use for local (as opposed to
 * roaming) application data. See documentation for
 * CSIDL_LOCAL_APPDATA. Note that on Windows it thus is the same as
 * what g_get_user_data_dir() returns.
 * or freed.
 *
 * Returns: a string owned by GLib that must not be modified
 * Since: 2.6
 */


/**
 * g_get_user_data_dir:
 *
 * Returns a base directory in which to access application data such
 * as icons that is customized for a particular user.
 * On UNIX platforms this is determined using the mechanisms described in
 * the <ulink url="http://www.freedesktop.org/Standards/basedir-spec">
 * XDG Base Directory Specification</ulink>.
 * In this case the directory retrieved will be XDG_DATA_HOME.
 * On Windows this is the folder to use for local (as opposed to
 * roaming) application data. See documentation for
 * CSIDL_LOCAL_APPDATA. Note that on Windows it thus is the same as
 * what g_get_user_config_dir() returns.
 * or freed.
 *
 * Returns: a string owned by GLib that must not be modified
 * Since: 2.6
 */


/**
 * g_get_user_name:
 *
 * Gets the user name of the current user. The encoding of the returned
 * string is system-defined. On UNIX, it might be the preferred file name
 * encoding, or something else, and there is no guarantee that it is even
 * consistent on a machine. On Windows, it is always UTF-8.
 *
 * Returns: the user name of the current user.
 */


/**
 * g_get_user_runtime_dir:
 *
 * Returns a directory that is unique to the current user on the local
 * system.
 * On UNIX platforms this is determined using the mechanisms described in
 * the <ulink url="http://www.freedesktop.org/Standards/basedir-spec">
 * XDG Base Directory Specification</ulink>.  This is the directory
 * specified in the <envar>XDG_RUNTIME_DIR</envar> environment variable.
 * In the case that this variable is not set, GLib will issue a warning
 * message to stderr and return the value of g_get_user_cache_dir().
 * On Windows this is the folder to use for local (as opposed to
 * roaming) application data. See documentation for
 * CSIDL_LOCAL_APPDATA.  Note that on Windows it thus is the same as
 * what g_get_user_config_dir() returns.
 *
 * Returns: a string owned by GLib that must not be modified or freed.
 * Since: 2.28
 */


/**
 * g_get_user_special_dir:
 * @directory: the logical id of special directory
 *
 * Returns the full path of a special directory using its logical id.
 * On Unix this is done using the XDG special user directories.
 * For compatibility with existing practise, %G_USER_DIRECTORY_DESKTOP
 * falls back to <filename>$HOME/Desktop</filename> when XDG special
 * user directories have not been set up.
 * Depending on the platform, the user might be able to change the path
 * of the special directory without requiring the session to restart; GLib
 * will not reflect any change once the special directories are loaded.
 * if the logical id was not found. The returned string is owned by
 * GLib and should not be modified or freed.
 *
 * Returns: the path to the specified special directory, or %NULL
 * Since: 2.14
 */


/**
 * g_getenv:
 * @variable: the environment variable to get, in the GLib file name encoding.
 *
 * Returns the value of an environment variable. The name and value
 * are in the GLib file name encoding. On UNIX, this means the actual
 * bytes which might or might not be in some consistent character set
 * and encoding. On Windows, it is in UTF-8. On Windows, in case the
 * environment variable's value contains references to other
 * environment variables, they are expanded.
 * the environment variable is not found. The returned string may be
 * overwritten by the next call to g_getenv(), g_setenv() or
 * g_unsetenv().
 *
 * Returns: the value of the environment variable, or %NULL if
 */


/**
 * g_hash_table_destroy:
 * @hash_table: a #GHashTable.
 *
 * Destroys all keys and values in the #GHashTable and decrements its
 * reference count by 1. If keys and/or values are dynamically allocated,
 * you should either free them first or create the #GHashTable with destroy
 * notifiers using g_hash_table_new_full(). In the latter case the destroy
 * functions you supplied will be called on all keys and values during the
 * destruction phase.
 */


/**
 * g_hash_table_find:
 * @hash_table: a #GHashTable.
 * @predicate: function to test the key/value pairs for a certain property.
 * @user_data: user data to pass to the function.
 *
 * Calls the given function for key/value pairs in the #GHashTable until
 * each pair, and the given @user_data parameter. The hash table may not
 * be modified while iterating over it (you can't add/remove items).
 * Note, that hash tables are really only optimized for forward lookups,
 * i.e. g_hash_table_lookup().
 * So code that frequently issues g_hash_table_find() or
 * g_hash_table_foreach() (e.g. in the order of once per every entry in a
 * hash table) should probably be reworked to use additional or different
 * data structures for reverse lookups (keep in mind that an O(n) find/foreach
 * operation issued for all n values in a hash table ends up needing O(n*n)
 * operations).
 * for which @predicate evaluates to %TRUE. If no pair with the
 * requested property is found, %NULL is returned.
 *
 * Returns: The value of the first key/value pair is returned,
 * Since: 2.4
 */


/**
 * g_hash_table_foreach:
 * @hash_table: a #GHashTable.
 * @func: the function to call for each key/value pair.
 * @user_data: user data to pass to the function.
 *
 * Calls the given function for each of the key/value pairs in the
 * #GHashTable.  The function is passed the key and value of each
 * pair, and the given @user_data parameter.  The hash table may not
 * be modified while iterating over it (you can't add/remove
 * items). To remove all items matching a predicate, use
 * g_hash_table_foreach_remove().
 * See g_hash_table_find() for performance caveats for linear
 * order searches in contrast to g_hash_table_lookup().
 */


/**
 * g_hash_table_foreach_remove:
 * @hash_table: a #GHashTable.
 * @func: the function to call for each key/value pair.
 * @user_data: user data to pass to the function.
 *
 * Calls the given function for each key/value pair in the #GHashTable.
 * If the function returns %TRUE, then the key/value pair is removed from the
 * #GHashTable. If you supplied key or value destroy functions when creating
 * the #GHashTable, they are used to free the memory allocated for the removed
 * keys and values.
 * See #GHashTableIter for an alternative way to loop over the
 * key/value pairs in the hash table.
 *
 * Returns: the number of key/value pairs removed.
 */


/**
 * g_hash_table_foreach_steal:
 * @hash_table: a #GHashTable.
 * @func: the function to call for each key/value pair.
 * @user_data: user data to pass to the function.
 *
 * Calls the given function for each key/value pair in the #GHashTable.
 * If the function returns %TRUE, then the key/value pair is removed from the
 * #GHashTable, but no key or value destroy functions are called.
 * See #GHashTableIter for an alternative way to loop over the
 * key/value pairs in the hash table.
 *
 * Returns: the number of key/value pairs removed.
 */


/**
 * g_hash_table_freeze:
 * @hash_table: a #GHashTable
 *
 * This function is deprecated and will be removed in the next major
 * release of GLib. It does nothing.
 */


/**
 * g_hash_table_get_keys:
 * @hash_table: a #GHashTable
 *
 * Retrieves every key inside @hash_table. The returned data is valid
 * until @hash_table is modified.
 * table. The content of the list is owned by the hash table and
 * should not be modified or freed. Use g_list_free() when done
 * using the list.
 *
 * Returns: a #GList containing all the keys inside the hash
 * Since: 2.14
 */


/**
 * g_hash_table_get_values:
 * @hash_table: a #GHashTable
 *
 * Retrieves every value inside @hash_table. The returned data is
 * valid until @hash_table is modified.
 * table. The content of the list is owned by the hash table and
 * should not be modified or freed. Use g_list_free() when done
 * using the list.
 *
 * Returns: a #GList containing all the values inside the hash
 * Since: 2.14
 */


/**
 * g_hash_table_insert:
 * @hash_table: a #GHashTable.
 * @key: a key to insert.
 * @value: the value to associate with the key.
 *
 * Inserts a new key and value into a #GHashTable.
 * If the key already exists in the #GHashTable its current value is replaced
 * with the new value. If you supplied a @value_destroy_func when creating the
 * #GHashTable, the old value is freed using that function. If you supplied
 * a @key_destroy_func when creating the #GHashTable, the passed key is freed
 * using that function.
 */


/**
 * g_hash_table_iter_get_hash_table:
 * @iter: an initialized #GHashTableIter.
 *
 * Returns the #GHashTable associated with @iter.
 *
 * Returns: the #GHashTable associated with @iter.
 * Since: 2.16
 */


/**
 * g_hash_table_iter_init:
 * @iter: an uninitialized #GHashTableIter.
 * @hash_table: a #GHashTable.
 *
 * Initializes a key/value pair iterator and associates it with
 * invalidates the returned iterator.
 * |[
 * GHashTableIter iter;
 * gpointer key, value;
 * g_hash_table_iter_init (&iter, hash_table);
 * while (g_hash_table_iter_next (&iter, &key, &value))
 * {
 * /&ast; do something with key and value &ast;/
 * }
 * ]|
 *
 * Since: 2.16
 */


/**
 * g_hash_table_iter_next:
 * @iter: an initialized #GHashTableIter.
 * @key: a location to store the key, or %NULL.
 * @value: a location to store the value, or %NULL.
 *
 * Advances @iter and retrieves the key and/or value that are now
 * pointed to as a result of this advancement. If %FALSE is returned,
 *
 * Returns: %FALSE if the end of the #GHashTable has been reached.
 * Since: 2.16
 */


/**
 * g_hash_table_iter_remove:
 * @iter: an initialized #GHashTableIter.
 *
 * Removes the key/value pair currently pointed to by the iterator
 * from its associated #GHashTable. Can only be called after
 * g_hash_table_iter_next() returned %TRUE, and cannot be called more
 * than once for the same key/value pair.
 * If the #GHashTable was created using g_hash_table_new_full(), the
 * key and value are freed using the supplied destroy functions, otherwise
 * you have to make sure that any dynamically allocated values are freed
 * yourself.
 *
 * Since: 2.16
 */


/**
 * g_hash_table_iter_steal:
 * @iter: an initialized #GHashTableIter.
 *
 * Removes the key/value pair currently pointed to by the iterator
 * from its associated #GHashTable, without calling the key and value
 * destroy functions. Can only be called after
 * g_hash_table_iter_next() returned %TRUE, and cannot be called more
 * than once for the same key/value pair.
 *
 * Since: 2.16
 */


/**
 * g_hash_table_lookup:
 * @hash_table: a #GHashTable.
 * @key: the key to look up.
 *
 * Looks up a key in a #GHashTable. Note that this function cannot
 * distinguish between a key that is not present and one which is present
 * and has the value %NULL. If you need this distinction, use
 * g_hash_table_lookup_extended().
 *
 * Returns: the associated value, or %NULL if the key is not found.
 */


/**
 * g_hash_table_lookup_extended:
 * @hash_table: a #GHashTable
 * @lookup_key: the key to look up
 * @orig_key: return location for the original key, or %NULL
 * @value: return location for the value associated with the key, or %NULL
 *
 * Looks up a key in the #GHashTable, returning the original key and the
 * associated value and a #gboolean which is %TRUE if the key was found. This
 * is useful if you need to free the memory allocated for the original key,
 * for example before calling g_hash_table_remove().
 * You can actually pass %NULL for @lookup_key to test
 * whether the %NULL key exists, provided the hash and equal functions
 * of @hash_table are %NULL-safe.
 *
 * Returns: %TRUE if the key was found in the #GHashTable.
 */


/**
 * g_hash_table_new:
 * @hash_func: a function to create a hash value from a key. Hash values are used to determine where keys are stored within the #GHashTable data structure. The g_direct_hash(), g_int_hash(), g_int64_hash(), g_double_hash() and g_str_hash() functions are provided for some common types of keys. If hash_func is %NULL, g_direct_hash() is used.
 * @key_equal_func: a function to check two keys for equality.  This is used when looking up keys in the #GHashTable.  The g_direct_equal(), g_int_equal(), g_int64_equal(), g_double_equal() and g_str_equal() functions are provided for the most common types of keys. If @key_equal_func is %NULL, keys are compared directly in a similar fashion to g_direct_equal(), but without the overhead of a function call.
 *
 * Creates a new #GHashTable with a reference count of 1.
 *
 * Returns: a new #GHashTable.
 */


/**
 * g_hash_table_new_full:
 * @hash_func: a function to create a hash value from a key.
 * @key_equal_func: a function to check two keys for equality.
 * @key_destroy_func: a function to free the memory allocated for the key used when removing the entry from the #GHashTable or %NULL if you don't want to supply such a function.
 * @value_destroy_func: a function to free the memory allocated for the value used when removing the entry from the #GHashTable or %NULL if you don't want to supply such a function.
 *
 * Creates a new #GHashTable like g_hash_table_new() with a reference count
 * of 1 and allows to specify functions to free the memory allocated for the
 * key and value that get called when removing the entry from the #GHashTable.
 *
 * Returns: a new #GHashTable.
 */


/**
 * g_hash_table_ref:
 * @hash_table: a valid #GHashTable.
 *
 * Atomically increments the reference count of @hash_table by one.
 * This function is MT-safe and may be called from any thread.
 *
 * Returns: the passed in #GHashTable.
 * Since: 2.10
 */


/**
 * g_hash_table_remove:
 * @hash_table: a #GHashTable.
 * @key: the key to remove.
 *
 * Removes a key and its associated value from a #GHashTable.
 * If the #GHashTable was created using g_hash_table_new_full(), the
 * key and value are freed using the supplied destroy functions, otherwise
 * you have to make sure that any dynamically allocated values are freed
 * yourself.
 *
 * Returns: %TRUE if the key was found and removed from the #GHashTable.
 */


/**
 * g_hash_table_remove_all:
 * @hash_table: a #GHashTable
 *
 * Removes all keys and their associated values from a #GHashTable.
 * If the #GHashTable was created using g_hash_table_new_full(), the keys
 * and values are freed using the supplied destroy functions, otherwise you
 * have to make sure that any dynamically allocated values are freed
 * yourself.
 *
 * Since: 2.12
 */


/**
 * g_hash_table_replace:
 * @hash_table: a #GHashTable.
 * @key: a key to insert.
 * @value: the value to associate with the key.
 *
 * Inserts a new key and value into a #GHashTable similar to
 * g_hash_table_insert(). The difference is that if the key already exists
 * in the #GHashTable, it gets replaced by the new key. If you supplied a
 * using that function. If you supplied a @key_destroy_func when creating the
 * #GHashTable, the old key is freed using that function.
 */


/**
 * g_hash_table_size:
 * @hash_table: a #GHashTable.
 *
 * Returns the number of elements contained in the #GHashTable.
 *
 * Returns: the number of key/value pairs in the #GHashTable.
 */


/**
 * g_hash_table_steal:
 * @hash_table: a #GHashTable.
 * @key: the key to remove.
 *
 * Removes a key and its associated value from a #GHashTable without
 * calling the key and value destroy functions.
 *
 * Returns: %TRUE if the key was found and removed from the #GHashTable.
 */


/**
 * g_hash_table_steal_all:
 * @hash_table: a #GHashTable.
 *
 * Removes all keys and their associated values from a #GHashTable
 * without calling the key and value destroy functions.
 *
 * Since: 2.12
 */


/**
 * g_hash_table_thaw:
 * @hash_table: a #GHashTable
 *
 * This function is deprecated and will be removed in the next major
 * release of GLib. It does nothing.
 */


/**
 * g_hash_table_unref:
 * @hash_table: a valid #GHashTable.
 *
 * Atomically decrements the reference count of @hash_table by one.
 * If the reference count drops to 0, all keys and values will be
 * destroyed, and all memory allocated by the hash table is released.
 * This function is MT-safe and may be called from any thread.
 *
 * Since: 2.10
 */


/**
 * g_hostname_is_ascii_encoded:
 * @hostname: a hostname
 *
 * Tests if @hostname contains segments with an ASCII-compatible
 * encoding of an Internationalized Domain Name. If this returns
 * %TRUE, you should decode the hostname with g_hostname_to_unicode()
 * before displaying it to the user.
 * Note that a hostname might contain a mix of encoded and unencoded
 * segments, and so it is possible for g_hostname_is_non_ascii() and
 * g_hostname_is_ascii_encoded() to both return %TRUE for a name.
 * segments.
 *
 * Returns: %TRUE if @hostname contains any ASCII-encoded
 * Since: 2.22
 */


/**
 * g_hostname_is_ip_address:
 * @hostname: a hostname (or IP address in string form)
 *
 * Tests if @hostname is the string form of an IPv4 or IPv6 address.
 * (Eg, "192.168.0.1".)
 *
 * Returns: %TRUE if @hostname is an IP address
 * Since: 2.22
 */


/**
 * g_hostname_is_non_ascii:
 * @hostname: a hostname
 *
 * Tests if @hostname contains Unicode characters. If this returns
 * %TRUE, you need to encode the hostname with g_hostname_to_ascii()
 * before using it in non-IDN-aware contexts.
 * Note that a hostname might contain a mix of encoded and unencoded
 * segments, and so it is possible for g_hostname_is_non_ascii() and
 * g_hostname_is_ascii_encoded() to both return %TRUE for a name.
 *
 * Returns: %TRUE if @hostname contains any non-ASCII characters
 * Since: 2.22
 */


/**
 * g_hostname_to_ascii:
 * @hostname: a valid UTF-8 or ASCII hostname
 *
 * Converts @hostname to its canonical ASCII form; an ASCII-only
 * string containing no uppercase letters and not ending with a
 * trailing dot.
 *
 * Returns: an ASCII hostname, which must be freed, or %NULL if
 * Since: 2.22
 */


/**
 * g_hostname_to_unicode:
 * @hostname: a valid UTF-8 or ASCII hostname
 *
 * Converts @hostname to its canonical presentation form; a UTF-8
 * string in Unicode normalization form C, containing no uppercase
 * letters, no forbidden characters, and no ASCII-encoded segments,
 * and not ending with a trailing dot.
 * Of course if @hostname is not an internationalized hostname, then
 * the canonical presentation form will be entirely ASCII.
 *
 * Returns: a UTF-8 hostname, which must be freed, or %NULL if
 * Since: 2.22
 */


/**
 * g_iconv:
 * @converter: conversion descriptor from g_iconv_open()
 * @inbuf: bytes to convert
 * @inbytes_left: inout parameter, bytes remaining to convert in @inbuf
 * @outbuf: converted output bytes
 * @outbytes_left: inout parameter, bytes available to fill in @outbuf
 *
 * Same as the standard UNIX routine iconv(), but
 * may be implemented via libiconv on UNIX flavors that lack
 * a native implementation.
 * GLib provides g_convert() and g_locale_to_utf8() which are likely
 * more convenient than the raw iconv wrappers.
 *
 * Returns: count of non-reversible conversions, or -1 on error
 */


/**
 * g_iconv_close:
 * @converter: a conversion descriptor from g_iconv_open()
 *
 * Same as the standard UNIX routine iconv_close(), but
 * may be implemented via libiconv on UNIX flavors that lack
 * a native implementation. Should be called to clean up
 * the conversion descriptor from g_iconv_open() when
 * you are done converting things.
 * GLib provides g_convert() and g_locale_to_utf8() which are likely
 * more convenient than the raw iconv wrappers.
 *
 * Returns: -1 on error, 0 on success
 */


/**
 * g_iconv_open:
 * @to_codeset: destination codeset
 * @from_codeset: source codeset
 *
 * Same as the standard UNIX routine iconv_open(), but
 * may be implemented via libiconv on UNIX flavors that lack
 * a native implementation.
 * GLib provides g_convert() and g_locale_to_utf8() which are likely
 * more convenient than the raw iconv wrappers.
 * opening the converter failed.
 *
 * Returns: a "conversion descriptor", or (GIConv)-1 if
 */


/**
 * g_idle_add:
 * @function: function to call
 * @data: data to pass to @function.
 *
 * Adds a function to be called whenever there are no higher priority
 * events pending to the default main loop. The function is given the
 * default idle priority, #G_PRIORITY_DEFAULT_IDLE.  If the function
 * returns %FALSE it is automatically removed from the list of event
 * sources and will not be called again.
 * This internally creates a main loop source using g_idle_source_new()
 * and attaches it to the main loop context using g_source_attach().
 * You can do these steps manually if you need greater control.
 *
 * Returns: the ID (greater than 0) of the event source.
 */


/**
 * g_idle_add_full:
 * @priority: the priority of the idle source. Typically this will be in the range between #G_PRIORITY_DEFAULT_IDLE and #G_PRIORITY_HIGH_IDLE.
 * @function: function to call
 * @data: data to pass to @function
 * @notify: function to call when the idle is removed, or %NULL
 *
 * Adds a function to be called whenever there are no higher priority
 * events pending.  If the function returns %FALSE it is automatically
 * removed from the list of event sources and will not be called again.
 * This internally creates a main loop source using g_idle_source_new()
 * and attaches it to the main loop context using g_source_attach().
 * You can do these steps manually if you need greater control.
 *
 * Returns: the ID (greater than 0) of the event source.
 * Rename to: g_idle_add
 */


/**
 * g_idle_remove_by_data:
 * @data: the data for the idle source's callback.
 *
 * Removes the idle function with the given data.
 *
 * Returns: %TRUE if an idle source was found and removed.
 */


/**
 * g_idle_source_new:
 *
 * Creates a new idle source.
 * The source will not initially be associated with any #GMainContext
 * and must be added to one with g_source_attach() before it will be
 * executed. Note that the default priority for idle sources is
 * %G_PRIORITY_DEFAULT_IDLE, as compared to other sources which
 * have a default priority of %G_PRIORITY_DEFAULT.
 *
 * Returns: the newly-created idle source
 */


/**
 * g_int64_equal:
 * @v1: a pointer to a #gint64 key.
 * @v2: a pointer to a #gint64 key to compare with @v1.
 *
 * Compares the two #gint64 values being pointed to and returns
 * %TRUE if they are equal.
 * It can be passed to g_hash_table_new() as the @key_equal_func
 * parameter, when using pointers to 64-bit integers as keys in a #GHashTable.
 *
 * Returns: %TRUE if the two keys match.
 * Since: 2.22
 */


/**
 * g_int64_hash:
 * @v: a pointer to a #gint64 key
 *
 * Converts a pointer to a #gint64 to a hash value.
 * It can be passed to g_hash_table_new() as the @hash_func parameter,
 * when using pointers to 64-bit integers values as keys in a #GHashTable.
 *
 * Returns: a hash value corresponding to the key.
 * Since: 2.22
 */


/**
 * g_int_equal:
 * @v1: a pointer to a #gint key.
 * @v2: a pointer to a #gint key to compare with @v1.
 *
 * Compares the two #gint values being pointed to and returns
 * %TRUE if they are equal.
 * It can be passed to g_hash_table_new() as the @key_equal_func
 * parameter, when using pointers to integers as keys in a #GHashTable.
 *
 * Returns: %TRUE if the two keys match.
 */


/**
 * g_int_hash:
 * @v: a pointer to a #gint key
 *
 * Converts a pointer to a #gint to a hash value.
 * It can be passed to g_hash_table_new() as the @hash_func parameter,
 * when using pointers to integers values as keys in a #GHashTable.
 *
 * Returns: a hash value corresponding to the key.
 */


/**
 * g_intern_static_string:
 * @string: a static string
 *
 * Returns a canonical representation for @string. Interned strings can
 * be compared for equality by comparing the pointers, instead of using strcmp().
 * g_intern_static_string() does not copy the string, therefore @string must
 * not be freed or modified.
 *
 * Returns: a canonical representation for the string
 * Since: 2.10
 */


/**
 * g_intern_string:
 * @string: a string
 *
 * Returns a canonical representation for @string. Interned strings can
 * be compared for equality by comparing the pointers, instead of using strcmp().
 *
 * Returns: a canonical representation for the string
 * Since: 2.10
 */


/**
 * g_io_add_watch:
 * @channel: a #GIOChannel
 * @condition: the condition to watch for
 * @func: the function to call when the condition is satisfied
 * @user_data: user data to pass to @func
 *
 * Adds the #GIOChannel into the default main loop context
 * with the default priority.
 *
 * Returns: the event source id
 */


/**
 * g_io_add_watch_full:
 * @channel: a #GIOChannel
 * @priority: the priority of the #GIOChannel source
 * @condition: the condition to watch for
 * @func: the function to call when the condition is satisfied
 * @user_data: user data to pass to @func
 * @notify: the function to call when the source is removed
 *
 * Adds the #GIOChannel into the default main loop context
 * with the given priority.
 * This internally creates a main loop source using g_io_create_watch()
 * and attaches it to the main loop context with g_source_attach().
 * You can do these steps manually if you need greater control.
 *
 * Returns: the event source id
 * Rename to: g_io_add_watch
 */


/**
 * g_io_channel_close:
 * @channel: A #GIOChannel
 *
 * Close an IO channel. Any pending data to be written will be
 * flushed, ignoring errors. The channel will not be freed until the
 * last reference is dropped using g_io_channel_unref().
 *
 * Deprecated:2.2: Use g_io_channel_shutdown() instead.
 */


/**
 * g_io_channel_error_from_errno:
 * @en: an <literal>errno</literal> error number, e.g. %EINVAL
 *
 * Converts an <literal>errno</literal> error number to a #GIOChannelError.
 * %G_IO_CHANNEL_ERROR_INVAL.
 *
 * Returns: a #GIOChannelError error number, e.g.
 */


/**
 * g_io_channel_error_quark:
 *
 *
 *
 * Returns: the quark used as %G_IO_CHANNEL_ERROR
 */


/**
 * g_io_channel_flush:
 * @channel: a #GIOChannel
 * @error: location to store an error of type #GIOChannelError
 *
 * Flushes the write buffer for the GIOChannel.
 * #G_IO_STATUS_NORMAL, #G_IO_STATUS_AGAIN, or
 * #G_IO_STATUS_ERROR.
 *
 * Returns: the status of the operation: One of
 */


/**
 * g_io_channel_get_buffer_condition:
 * @channel: A #GIOChannel
 *
 * This function returns a #GIOCondition depending on whether there
 * is data to be read/space to write data in the internal buffers in
 * the #GIOChannel. Only the flags %G_IO_IN and %G_IO_OUT may be set.
 *
 * Returns: A #GIOCondition
 */


/**
 * g_io_channel_get_buffer_size:
 * @channel: a #GIOChannel
 *
 * Gets the buffer size.
 *
 * Returns: the size of the buffer.
 */


/**
 * g_io_channel_get_buffered:
 * @channel: a #GIOChannel
 *
 * Returns whether @channel is buffered.
 *
 * Returns: %TRUE if the @channel is buffered.
 */


/**
 * g_io_channel_get_close_on_unref:
 * @channel: a #GIOChannel.
 *
 * Returns whether the file/socket/whatever associated with @channel
 * will be closed when @channel receives its final unref and is
 * destroyed. The default value of this is %TRUE for channels created
 * by g_io_channel_new_file (), and %FALSE for all other channels.
 * the GIOChannel data structure.
 *
 * Returns: Whether the channel will be closed on the final unref of
 */


/**
 * g_io_channel_get_encoding:
 * @channel: a #GIOChannel
 *
 * Gets the encoding for the input/output of the channel.
 * The internal encoding is always UTF-8. The encoding %NULL
 * makes the channel safe for binary data.
 * owned by GLib and must not be freed.
 *
 * Returns: A string containing the encoding, this string is
 */


/**
 * g_io_channel_get_flags:
 * @channel: a #GIOChannel
 *
 * Gets the current flags for a #GIOChannel, including read-only
 * flags such as %G_IO_FLAG_IS_READABLE.
 * The values of the flags %G_IO_FLAG_IS_READABLE and %G_IO_FLAG_IS_WRITEABLE
 * are cached for internal use by the channel when it is created.
 * If they should change at some later point (e.g. partial shutdown
 * of a socket with the UNIX shutdown() function), the user
 * should immediately call g_io_channel_get_flags() to update
 * the internal values of these flags.
 *
 * Returns: the flags which are set on the channel
 */


/**
 * g_io_channel_get_line_term:
 * @channel: a #GIOChannel
 * @length: a location to return the length of the line terminator
 *
 * This returns the string that #GIOChannel uses to determine
 * where in the file a line break occurs. A value of %NULL
 * indicates autodetection.
 * is owned by GLib and must not be freed.
 *
 * Returns: The line termination string. This value
 */


/**
 * g_io_channel_init:
 * @channel: a #GIOChannel
 *
 * Initializes a #GIOChannel struct.
 * This is called by each of the above functions when creating a
 * #GIOChannel, and so is not often needed by the application
 * programmer (unless you are creating a new type of #GIOChannel).
 */


/**
 * g_io_channel_new_file:
 * @filename: A string containing the name of a file
 * @mode: One of "r", "w", "a", "r+", "w+", "a+". These have the same meaning as in fopen()
 * @error: A location to return an error of type %G_FILE_ERROR
 *
 * Open a file @filename as a #GIOChannel using mode @mode. This
 * channel will be closed when the last reference to it is dropped,
 * so there is no need to call g_io_channel_close() (though doing
 * so will not cause problems, as long as no attempt is made to
 * access the channel after it is closed).
 *
 * Returns: A #GIOChannel on success, %NULL on failure.
 */


/**
 * g_io_channel_read:
 * @channel: a #GIOChannel
 * @buf: a buffer to read the data into (which should be at least count bytes long)
 * @count: the number of bytes to read from the #GIOChannel
 * @bytes_read: returns the number of bytes actually read
 *
 * Reads data from a #GIOChannel.
 *
 * Returns: %G_IO_ERROR_NONE if the operation was successful.
 * Deprecated:2.2: Use g_io_channel_read_chars() instead.
 */


/**
 * g_io_channel_read_chars:
 * @channel: a #GIOChannel
 * @buf: a buffer to read data into
 * @count: the size of the buffer. Note that the buffer may not be complelely filled even if there is data in the buffer if the remaining data is not a complete character.
 * @bytes_read: (allow-none): The number of bytes read. This may be zero even on success if count < 6 and the channel's encoding is non-%NULL. This indicates that the next UTF-8 character is too wide for the buffer.
 * @error: a location to return an error of type #GConvertError or #GIOChannelError.
 *
 * Replacement for g_io_channel_read() with the new API.
 *
 * Returns: the status of the operation.
 */


/**
 * g_io_channel_read_line:
 * @channel: a #GIOChannel
 * @str_return: The line read from the #GIOChannel, including the line terminator. This data should be freed with g_free() when no longer needed. This is a nul-terminated string. If a @length of zero is returned, this will be %NULL instead.
 * @length: location to store length of the read data, or %NULL
 * @terminator_pos: location to store position of line terminator, or %NULL
 * @error: A location to return an error of type #GConvertError or #GIOChannelError
 *
 * Reads a line, including the terminating character(s),
 * from a #GIOChannel into a newly-allocated string.
 * is %G_IO_STATUS_NORMAL.
 *
 * Returns: the status of the operation.
 */


/**
 * g_io_channel_read_line_string:
 * @channel: a #GIOChannel
 * @buffer: a #GString into which the line will be written. If @buffer already contains data, the old data will be overwritten.
 * @terminator_pos: location to store position of line terminator, or %NULL
 * @error: a location to store an error of type #GConvertError or #GIOChannelError
 *
 * Reads a line from a #GIOChannel, using a #GString as a buffer.
 *
 * Returns: the status of the operation.
 */


/**
 * g_io_channel_read_to_end:
 * @channel: a #GIOChannel
 * @str_return: Location to store a pointer to a string holding the remaining data in the #GIOChannel. This data should be freed with g_free() when no longer needed. This data is terminated by an extra nul character, but there may be other nuls in the intervening data.
 * @length: location to store length of the data
 * @error: location to return an error of type #GConvertError or #GIOChannelError
 *
 * Reads all the remaining data from the file.
 * This function never returns %G_IO_STATUS_EOF.
 *
 * Returns: %G_IO_STATUS_NORMAL on success.
 */


/**
 * g_io_channel_read_unichar:
 * @channel: a #GIOChannel
 * @thechar: a location to return a character
 * @error: a location to return an error of type #GConvertError or #GIOChannelError
 *
 * Reads a Unicode character from @channel.
 * This function cannot be called on a channel with %NULL encoding.
 *
 * Returns: a #GIOStatus
 */


/**
 * g_io_channel_ref:
 * @channel: a #GIOChannel
 *
 * Increments the reference count of a #GIOChannel.
 *
 * Returns: the @channel that was passed in (since 2.6)
 */


/**
 * g_io_channel_seek:
 * @channel: a #GIOChannel
 * @offset: an offset, in bytes, which is added to the position specified by @type
 * @type: the position in the file, which can be %G_SEEK_CUR (the current position), %G_SEEK_SET (the start of the file), or %G_SEEK_END (the end of the file)
 *
 * Sets the current position in the #GIOChannel, similar to the standard
 * library function fseek().
 *
 * Returns: %G_IO_ERROR_NONE if the operation was successful.
 * Deprecated:2.2: Use g_io_channel_seek_position() instead.
 */


/**
 * g_io_channel_seek_position:
 * @channel: a #GIOChannel
 * @offset: The offset in bytes from the position specified by @type
 * @type: a #GSeekType. The type %G_SEEK_CUR is only allowed in those cases where a call to g_io_channel_set_encoding () is allowed. See the documentation for g_io_channel_set_encoding () for details.
 * @error: A location to return an error of type #GIOChannelError
 *
 * Replacement for g_io_channel_seek() with the new API.
 *
 * Returns: the status of the operation.
 */


/**
 * g_io_channel_set_buffer_size:
 * @channel: a #GIOChannel
 * @size: the size of the buffer, or 0 to let GLib pick a good size
 *
 * Sets the buffer size.
 */


/**
 * g_io_channel_set_buffered:
 * @channel: a #GIOChannel
 * @buffered: whether to set the channel buffered or unbuffered
 *
 * The buffering state can only be set if the channel's encoding
 * is %NULL. For any other encoding, the channel must be buffered.
 * A buffered channel can only be set unbuffered if the channel's
 * internal buffers have been flushed. Newly created channels or
 * channels which have returned %G_IO_STATUS_EOF
 * not require such a flush. For write-only channels, a call to
 * g_io_channel_flush () is sufficient. For all other channels,
 * the buffers may be flushed by a call to g_io_channel_seek_position ().
 * This includes the possibility of seeking with seek type %G_SEEK_CUR
 * and an offset of zero. Note that this means that socket-based
 * channels cannot be set unbuffered once they have had data
 * read from them.
 * On unbuffered channels, it is safe to mix read and write
 * calls from the new and old APIs, if this is necessary for
 * maintaining old code.
 * The default state of the channel is buffered.
 */


/**
 * g_io_channel_set_close_on_unref:
 * @channel: a #GIOChannel
 * @do_close: Whether to close the channel on the final unref of the GIOChannel data structure. The default value of this is %TRUE for channels created by g_io_channel_new_file (), and %FALSE for all other channels.
 *
 * Setting this flag to %TRUE for a channel you have already closed
 * can cause problems.
 */


/**
 * g_io_channel_set_encoding:
 * @channel: a #GIOChannel
 * @encoding: the encoding type
 * @error: location to store an error of type #GConvertError
 *
 * Sets the encoding for the input/output of the channel.
 * The internal encoding is always UTF-8. The default encoding
 * for the external file is UTF-8.
 * The encoding %NULL is safe to use with binary data.
 * The encoding can only be set if one of the following conditions
 * is true:
 * <itemizedlist>
 * <listitem><para>
 * The channel was just created, and has not been written to or read
 * from yet.
 * </para></listitem>
 * <listitem><para>
 * The channel is write-only.
 * </para></listitem>
 * <listitem><para>
 * The channel is a file, and the file pointer was just
 * repositioned by a call to g_io_channel_seek_position().
 * (This flushes all the internal buffers.)
 * </para></listitem>
 * <listitem><para>
 * The current encoding is %NULL or UTF-8.
 * </para></listitem>
 * <listitem><para>
 * One of the (new API) read functions has just returned %G_IO_STATUS_EOF
 * (or, in the case of g_io_channel_read_to_end(), %G_IO_STATUS_NORMAL).
 * </para></listitem>
 * <listitem><para>
 * One of the functions g_io_channel_read_chars() or
 * g_io_channel_read_unichar() has returned %G_IO_STATUS_AGAIN or
 * %G_IO_STATUS_ERROR. This may be useful in the case of
 * %G_CONVERT_ERROR_ILLEGAL_SEQUENCE.
 * Returning one of these statuses from g_io_channel_read_line(),
 * g_io_channel_read_line_string(), or g_io_channel_read_to_end()
 * does <emphasis>not</emphasis> guarantee that the encoding can
 * be changed.
 * </para></listitem>
 * </itemizedlist>
 * Channels which do not meet one of the above conditions cannot call
 * g_io_channel_seek_position() with an offset of %G_SEEK_CUR, and, if
 * they are "seekable", cannot call g_io_channel_write_chars() after
 * calling one of the API "read" functions.
 *
 * Returns: %G_IO_STATUS_NORMAL if the encoding was successfully set.
 */


/**
 * g_io_channel_set_flags:
 * @channel: a #GIOChannel
 * @flags: the flags to set on the IO channel
 * @error: A location to return an error of type #GIOChannelError
 *
 * Sets the (writeable) flags in @channel to (@flags & %G_IO_CHANNEL_SET_MASK).
 *
 * Returns: the status of the operation.
 */


/**
 * g_io_channel_set_line_term:
 * @channel: a #GIOChannel
 * @line_term: The line termination string. Use %NULL for autodetect. Autodetection breaks on "\n", "\r\n", "\r", "\0", and the Unicode paragraph separator. Autodetection should not be used for anything other than file-based channels.
 * @length: The length of the termination string. If -1 is passed, the string is assumed to be nul-terminated. This option allows termination strings with embedded nuls.
 *
 * This sets the string that #GIOChannel uses to determine
 * where in the file a line break occurs.
 */


/**
 * g_io_channel_shutdown:
 * @channel: a #GIOChannel
 * @flush: if %TRUE, flush pending
 * @err: location to store a #GIOChannelError
 *
 * Close an IO channel. Any pending data to be written will be
 * flushed if @flush is %TRUE. The channel will not be freed until the
 * last reference is dropped using g_io_channel_unref().
 *
 * Returns: the status of the operation.
 */


/**
 * g_io_channel_unix_get_fd:
 * @channel: a #GIOChannel, created with g_io_channel_unix_new().
 * @Returns: the file descriptor of the #GIOChannel.
 *
 * Returns the file descriptor of the #GIOChannel.
 * On Windows this function returns the file descriptor or socket of
 * the #GIOChannel.
 */


/**
 * g_io_channel_unix_new:
 * @fd: a file descriptor.
 * @Returns: a new #GIOChannel.
 *
 * Creates a new #GIOChannel given a file descriptor. On UNIX systems
 * this works for plain files, pipes, and sockets.
 * The returned #GIOChannel has a reference count of 1.
 * The default encoding for #GIOChannel is UTF-8. If your application
 * is reading output from a command using via pipe, you may need to set
 * the encoding to the encoding of the current locale (see
 * g_get_charset()) with the g_io_channel_set_encoding() function.
 * If you want to read raw binary data without interpretation, then
 * call the g_io_channel_set_encoding() function with %NULL for the
 * encoding argument.
 * This function is available in GLib on Windows, too, but you should
 * avoid using it on Windows. The domain of file descriptors and
 * sockets overlap. There is no way for GLib to know which one you mean
 * in case the argument you pass to this function happens to be both a
 * valid file descriptor and socket. If that happens a warning is
 * issued, and GLib assumes that it is the file descriptor you mean.
 */


/**
 * g_io_channel_unref:
 * @channel: a #GIOChannel
 *
 * Decrements the reference count of a #GIOChannel.
 */


/**
 * g_io_channel_win32_new_fd:
 * @fd: a C library file descriptor.
 * @Returns: a new #GIOChannel.
 *
 * Creates a new #GIOChannel given a file descriptor on Windows. This
 * works for file descriptors from the C runtime.
 * This function works for file descriptors as returned by the open(),
 * creat(), pipe() and fileno() calls in the Microsoft C runtime. In
 * order to meaningfully use this function your code should use the
 * same C runtime as GLib uses, which is msvcrt.dll. Note that in
 * current Microsoft compilers it is near impossible to convince it to
 * build code that would use msvcrt.dll. The last Microsoft compiler
 * version that supported using msvcrt.dll as the C runtime was version
 * 6. The GNU compiler and toolchain for Windows, also known as Mingw,
 * fully supports msvcrt.dll.
 * If you have created a #GIOChannel for a file descriptor and started
 * watching (polling) it, you shouldn't call read() on the file
 * descriptor. This is because adding polling for a file descriptor is
 * implemented in GLib on Windows by starting a thread that sits
 * blocked in a read() from the file descriptor most of the time. All
 * reads from the file descriptor should be done by this internal GLib
 * thread. Your code should call only g_io_channel_read().
 * This function is available only in GLib on Windows.
 */


/**
 * g_io_channel_win32_new_messages:
 * @hwnd: a window handle.
 * @Returns: a new #GIOChannel.
 *
 * Creates a new #GIOChannel given a window handle on Windows.
 * This function creates a #GIOChannel that can be used to poll for
 * Windows messages for the window in question.
 */


/**
 * g_io_channel_win32_new_socket:
 * @socket: a Winsock socket
 * @Returns: a new #GIOChannel
 *
 * Creates a new #GIOChannel given a socket on Windows.
 * This function works for sockets created by Winsock. It's available
 * only in GLib on Windows.
 * Polling a #GSource created to watch a channel for a socket puts the
 * socket in non-blocking mode. This is a side-effect of the
 * implementation and unavoidable.
 */


/**
 * g_io_channel_write:
 * @channel: a #GIOChannel
 * @buf: the buffer containing the data to write
 * @count: the number of bytes to write
 * @bytes_written: the number of bytes actually written
 *
 * Writes data to a #GIOChannel.
 *
 * Returns: %G_IO_ERROR_NONE if the operation was successful.
 * Deprecated:2.2: Use g_io_channel_write_chars() instead.
 */


/**
 * g_io_channel_write_chars:
 * @channel: a #GIOChannel
 * @buf: a buffer to write data from
 * @count: the size of the buffer. If -1, the buffer is taken to be a nul-terminated string.
 * @bytes_written: The number of bytes written. This can be nonzero even if the return value is not %G_IO_STATUS_NORMAL. If the return value is %G_IO_STATUS_NORMAL and the channel is blocking, this will always be equal to @count if @count >= 0.
 * @error: a location to return an error of type #GConvertError or #GIOChannelError
 *
 * Replacement for g_io_channel_write() with the new API.
 * On seekable channels with encodings other than %NULL or UTF-8, generic
 * mixing of reading and writing is not allowed. A call to g_io_channel_write_chars ()
 * may only be made on a channel from which data has been read in the
 * cases described in the documentation for g_io_channel_set_encoding ().
 *
 * Returns: the status of the operation.
 */


/**
 * g_io_channel_write_unichar:
 * @channel: a #GIOChannel
 * @thechar: a character
 * @error: location to return an error of type #GConvertError or #GIOChannelError
 *
 * Writes a Unicode character to @channel.
 * This function cannot be called on a channel with %NULL encoding.
 *
 * Returns: a #GIOStatus
 */


/**
 * g_io_create_watch:
 * @channel: a #GIOChannel to watch
 * @condition: conditions to watch for
 *
 * Creates a #GSource that's dispatched when @condition is met for the
 * given @channel. For example, if condition is #G_IO_IN, the source will
 * be dispatched when there's data available for reading.
 * g_io_add_watch() is a simpler interface to this same functionality, for
 * the case where you want to add the source to the default main loop context
 * at the default priority.
 * On Windows, polling a #GSource created to watch a channel for a socket
 * puts the socket in non-blocking mode. This is a side-effect of the
 * implementation and unavoidable.
 *
 * Returns: a new #GSource
 */


/**
 * g_key_file_free:
 * @key_file: a #GKeyFile
 *
 * Frees a #GKeyFile.
 *
 * Since: 2.6
 */


/**
 * g_key_file_get_boolean:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @error: return location for a #GError
 *
 * Returns the value associated with @key under @group_name as a
 * boolean.
 * If @key cannot be found then %FALSE is returned and @error is set
 * to #G_KEY_FILE_ERROR_KEY_NOT_FOUND. Likewise, if the value
 * associated with @key cannot be interpreted as a boolean then %FALSE
 * is returned and @error is set to #G_KEY_FILE_ERROR_INVALID_VALUE.
 * or %FALSE if the key was not found or could not be parsed.
 *
 * Returns: the value associated with the key as a boolean,
 * Since: 2.6
 */


/**
 * g_key_file_get_boolean_list:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @length: the number of booleans returned
 * @error: return location for a #GError
 *
 * Returns the values associated with @key under @group_name as
 * booleans.
 * If @key cannot be found then %NULL is returned and @error is set to
 * #G_KEY_FILE_ERROR_KEY_NOT_FOUND. Likewise, if the values associated
 * with @key cannot be interpreted as booleans then %NULL is returned
 * and @error is set to #G_KEY_FILE_ERROR_INVALID_VALUE.
 * booleans, or %NULL if the key was not found or could not be parsed.
 *
 * Returns: the values associated with the key as a list of
 * Since: 2.6
 */


/**
 * g_key_file_get_comment:
 * @key_file: a #GKeyFile
 * @group_name: a group name, or %NULL
 * @key: a key
 * @error: return location for a #GError
 *
 * Retrieves a comment above @key from @group_name.
 * If @key is %NULL then @comment will be read from above
 *
 * Returns: a comment that should be freed with g_free()
 * Since: 2.6
 */


/**
 * g_key_file_get_double:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @error: return location for a #GError
 *
 * Returns the value associated with @key under @group_name as a
 * double. If @group_name is %NULL, the start_group is used.
 * If @key cannot be found then 0.0 is returned and @error is set to
 * #G_KEY_FILE_ERROR_KEY_NOT_FOUND. Likewise, if the value associated
 * with @key cannot be interpreted as a double then 0.0 is returned
 * and @error is set to #G_KEY_FILE_ERROR_INVALID_VALUE.
 * 0.0 if the key was not found or could not be parsed.
 *
 * Returns: the value associated with the key as a double, or
 * Since: 2.12
 */


/**
 * g_key_file_get_double_list:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @length: the number of doubles returned
 * @error: return location for a #GError
 *
 * Returns the values associated with @key under @group_name as
 * doubles.
 * If @key cannot be found then %NULL is returned and @error is set to
 * #G_KEY_FILE_ERROR_KEY_NOT_FOUND. Likewise, if the values associated
 * with @key cannot be interpreted as doubles then %NULL is returned
 * and @error is set to #G_KEY_FILE_ERROR_INVALID_VALUE.
 * doubles, or %NULL if the key was not found or could not be parsed.
 *
 * Returns: the values associated with the key as a list of
 * Since: 2.12
 */


/**
 * g_key_file_get_groups:
 * @key_file: a #GKeyFile
 * @length: return location for the number of returned groups, or %NULL
 *
 * Returns all groups in the key file loaded with @key_file.
 * The array of returned groups will be %NULL-terminated, so
 * Use g_strfreev() to free it.
 *
 * Returns: a newly-allocated %NULL-terminated array of strings.
 * Since: 2.6
 */


/**
 * g_key_file_get_int64:
 * @key_file: a non-%NULL #GKeyFile
 * @group_name: a non-%NULL group name
 * @key: a non-%NULL key
 * @error: return location for a #GError
 *
 * Returns the value associated with @key under @group_name as a signed
 * 64-bit integer. This is similar to g_key_file_get_integer() but can return
 * 64-bit results without truncation.
 * 0 if the key was not found or could not be parsed.
 *
 * Returns: the value associated with the key as a signed 64-bit integer, or
 * Since: 2.26
 */


/**
 * g_key_file_get_integer:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @error: return location for a #GError
 *
 * Returns the value associated with @key under @group_name as an
 * integer.
 * If @key cannot be found then 0 is returned and @error is set to
 * #G_KEY_FILE_ERROR_KEY_NOT_FOUND. Likewise, if the value associated
 * with @key cannot be interpreted as an integer then 0 is returned
 * and @error is set to #G_KEY_FILE_ERROR_INVALID_VALUE.
 * 0 if the key was not found or could not be parsed.
 *
 * Returns: the value associated with the key as an integer, or
 * Since: 2.6
 */


/**
 * g_key_file_get_integer_list:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @length: the number of integers returned
 * @error: return location for a #GError
 *
 * Returns the values associated with @key under @group_name as
 * integers.
 * If @key cannot be found then %NULL is returned and @error is set to
 * #G_KEY_FILE_ERROR_KEY_NOT_FOUND. Likewise, if the values associated
 * with @key cannot be interpreted as integers then %NULL is returned
 * and @error is set to #G_KEY_FILE_ERROR_INVALID_VALUE.
 * integers, or %NULL if the key was not found or could not be parsed.
 *
 * Returns: the values associated with the key as a list of
 * Since: 2.6
 */


/**
 * g_key_file_get_keys:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @length: return location for the number of keys returned, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Returns all keys for the group name @group_name.  The array of
 * returned keys will be %NULL-terminated, so @length may
 * optionally be %NULL. In the event that the @group_name cannot
 * be found, %NULL is returned and @error is set to
 * #G_KEY_FILE_ERROR_GROUP_NOT_FOUND.
 * Use g_strfreev() to free it.
 *
 * Returns: a newly-allocated %NULL-terminated array of strings.
 * Since: 2.6
 */


/**
 * g_key_file_get_locale_string:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @locale: (allow-none): a locale identifier or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Returns the value associated with @key under @group_name
 * translated in the given @locale if available.  If @locale is
 * %NULL then the current locale is assumed.
 * If @key cannot be found then %NULL is returned and @error is set
 * to #G_KEY_FILE_ERROR_KEY_NOT_FOUND. If the value associated
 * with @key cannot be interpreted or no suitable translation can
 * be found then the untranslated value is returned.
 * key cannot be found.
 *
 * Returns: a newly allocated string or %NULL if the specified
 * Since: 2.6
 */


/**
 * g_key_file_get_locale_string_list:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @locale: (allow-none): a locale identifier or %NULL
 * @length: (out): return location for the number of returned strings or %NULL
 * @error: return location for a #GError or %NULL
 *
 * Returns the values associated with @key under @group_name
 * translated in the given @locale if available.  If @locale is
 * %NULL then the current locale is assumed.
 * If @key cannot be found then %NULL is returned and @error is set
 * to #G_KEY_FILE_ERROR_KEY_NOT_FOUND. If the values associated
 * with @key cannot be interpreted or no suitable translations
 * can be found then the untranslated values are returned. The
 * returned array is %NULL-terminated, so @length may optionally
 * be %NULL.
 * or %NULL if the key isn't found. The string array should be freed
 * with g_strfreev().
 *
 * Returns: (array length=length zero-terminated=1) (element-type utf8) (transfer full): a newly allocated %NULL-terminated string array
 * Since: 2.6
 */


/**
 * g_key_file_get_start_group:
 * @key_file: a #GKeyFile
 *
 * Returns the name of the start group of the file.
 *
 * Returns: The start group of the key file.
 * Since: 2.6
 */


/**
 * g_key_file_get_string:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @error: return location for a #GError, or %NULL
 *
 * Returns the string value associated with @key under @group_name.
 * Unlike g_key_file_get_value(), this function handles escape sequences
 * like \s.
 * In the event the key cannot be found, %NULL is returned and
 * event that the @group_name cannot be found, %NULL is returned
 * and @error is set to #G_KEY_FILE_ERROR_GROUP_NOT_FOUND.
 * key cannot be found.
 *
 * Returns: a newly allocated string or %NULL if the specified
 * Since: 2.6
 */


/**
 * g_key_file_get_string_list:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @length: return location for the number of returned strings, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * Returns the values associated with @key under @group_name.
 * In the event the key cannot be found, %NULL is returned and
 * event that the @group_name cannot be found, %NULL is returned
 * and @error is set to #G_KEY_FILE_ERROR_GROUP_NOT_FOUND.
 * a %NULL-terminated string array or %NULL if the specified
 * key cannot be found. The array should be freed with g_strfreev().
 *
 * Returns: (array length=length zero-terminated=1) (element-type utf8) (transfer full):
 * Since: 2.6
 */


/**
 * g_key_file_get_uint64:
 * @key_file: a non-%NULL #GKeyFile
 * @group_name: a non-%NULL group name
 * @key: a non-%NULL key
 * @error: return location for a #GError
 *
 * Returns the value associated with @key under @group_name as an unsigned
 * 64-bit integer. This is similar to g_key_file_get_integer() but can return
 * large positive results without truncation.
 * or 0 if the key was not found or could not be parsed.
 *
 * Returns: the value associated with the key as an unsigned 64-bit integer,
 * Since: 2.26
 */


/**
 * g_key_file_get_value:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @error: return location for a #GError, or %NULL
 *
 * Returns the raw value associated with @key under @group_name.
 * Use g_key_file_get_string() to retrieve an unescaped UTF-8 string.
 * In the event the key cannot be found, %NULL is returned and
 * event that the @group_name cannot be found, %NULL is returned
 * and @error is set to #G_KEY_FILE_ERROR_GROUP_NOT_FOUND.
 * key cannot be found.
 *
 * Returns: a newly allocated string or %NULL if the specified
 * Since: 2.6
 */


/**
 * g_key_file_has_group:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 *
 * Looks whether the key file has the group @group_name.
 * otherwise.
 *
 * Returns: %TRUE if @group_name is a part of @key_file, %FALSE
 * Since: 2.6
 */


/**
 * g_key_file_has_key: (skip)
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key name
 * @error: return location for a #GError
 *
 * Looks whether the key file has the key @key in the group
 * <note>This function does not follow the rules for #GError strictly;
 * the return value both carries meaning and signals an error.  To use
 * this function, you must pass a #GError pointer in @error, and check
 * whether it is not %NULL to see if an error occurred.</note>
 * See g_key_file_has_key_full() for a replacement function which does
 * follow the #GError rules.
 * otherwise.
 *
 * Returns: %TRUE if @key is a part of @group_name, %FALSE
 * Since: 2.6
 */


/**
 * g_key_file_has_key_full:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key name
 * @has_key: (out) (allow-none): Return location for whether or not key exists
 * @error: return location for a #GError
 *
 * Looks whether the key file has the key @key in the group
 * exists. Otherwise, @error is set and %FALSE is returned.
 *
 * Returns: %TRUE if a group with the name @group_name
 * Since: 2.30
 * Rename to: g_key_file_has_key
 */


/**
 * g_key_file_load_from_data:
 * @key_file: an empty #GKeyFile struct
 * @data: key file loaded in memory
 * @length: the length of @data in bytes
 * @flags: flags from #GKeyFileFlags
 * @error: return location for a #GError, or %NULL
 *
 * Loads a key file from memory into an empty #GKeyFile structure.
 * If the object cannot be created then %error is set to a #GKeyFileError.
 *
 * Returns: %TRUE if a key file could be loaded, %FALSE otherwise
 * Since: 2.6
 */


/**
 * g_key_file_load_from_data_dirs:
 * @key_file: an empty #GKeyFile struct
 * @file: a relative path to a filename to open and parse
 * @full_path: return location for a string containing the full path of the file, or %NULL
 * @flags: flags from #GKeyFileFlags
 * @error: return location for a #GError, or %NULL
 *
 * This function looks for a key file named @file in the paths
 * returned from g_get_user_data_dir() and g_get_system_data_dirs(),
 * loads the file into @key_file and returns the file's full path in
 * set to either a #GFileError or #GKeyFileError.
 *
 * Returns: %TRUE if a key file could be loaded, %FALSE othewise
 * Since: 2.6
 */


/**
 * g_key_file_load_from_dirs:
 * @key_file: an empty #GKeyFile struct
 * @file: a relative path to a filename to open and parse
 * @search_dirs: %NULL-terminated array of directories to search
 * @full_path: return location for a string containing the full path of the file, or %NULL
 * @flags: flags from #GKeyFileFlags
 * @error: return location for a #GError, or %NULL
 *
 * This function looks for a key file named @file in the paths
 * specified in @search_dirs, loads the file into @key_file and
 * returns the file's full path in @full_path.  If the file could not
 * be loaded then an %error is set to either a #GFileError or
 * #GKeyFileError.
 *
 * Returns: %TRUE if a key file could be loaded, %FALSE otherwise
 * Since: 2.14
 */


/**
 * g_key_file_load_from_file:
 * @key_file: an empty #GKeyFile struct
 * @file: the path of a filename to load, in the GLib filename encoding
 * @flags: flags from #GKeyFileFlags
 * @error: return location for a #GError, or %NULL
 *
 * Loads a key file into an empty #GKeyFile structure.
 * If the file could not be loaded then %error is set to
 * either a #GFileError or #GKeyFileError.
 *
 * Returns: %TRUE if a key file could be loaded, %FALSE otherwise
 * Since: 2.6
 */


/**
 * g_key_file_new:
 *
 * Creates a new empty #GKeyFile object. Use
 * g_key_file_load_from_file(), g_key_file_load_from_data(),
 * g_key_file_load_from_dirs() or g_key_file_load_from_data_dirs() to
 * read an existing key file.
 *
 * Returns: an empty #GKeyFile.
 * Since: 2.6
 */


/**
 * g_key_file_remove_comment:
 * @key_file: a #GKeyFile
 * @group_name: a group name, or %NULL
 * @key: a key
 * @error: return location for a #GError
 *
 * Removes a comment above @key from @group_name.
 * If @key is %NULL then @comment will be removed above @group_name.
 * If both @key and @group_name are %NULL, then @comment will
 * be removed above the first group in the file.
 *
 * Returns: %TRUE if the comment was removed, %FALSE otherwise
 * Since: 2.6
 */


/**
 * g_key_file_remove_group:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @error: return location for a #GError or %NULL
 *
 * Removes the specified group, @group_name,
 * from the key file.
 *
 * Returns: %TRUE if the group was removed, %FALSE otherwise
 * Since: 2.6
 */


/**
 * g_key_file_remove_key:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key name to remove
 * @error: return location for a #GError or %NULL
 *
 * Removes @key in @group_name from the key file.
 *
 * Returns: %TRUE if the key was removed, %FALSE otherwise
 * Since: 2.6
 */


/**
 * g_key_file_set_boolean:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @value: %TRUE or %FALSE
 *
 * Associates a new boolean value with @key under @group_name.
 * If @key cannot be found then it is created.
 *
 * Since: 2.6
 */


/**
 * g_key_file_set_boolean_list:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @list: an array of boolean values
 * @length: length of @list
 *
 * Associates a list of boolean values with @key under @group_name.
 * If @key cannot be found then it is created.
 * If @group_name is %NULL, the start_group is used.
 *
 * Since: 2.6
 */


/**
 * g_key_file_set_comment:
 * @key_file: a #GKeyFile
 * @group_name: a group name, or %NULL
 * @key: a key
 * @comment: a comment
 * @error: return location for a #GError
 *
 * Places a comment above @key from @group_name.
 * If @key is %NULL then @comment will be written above @group_name.
 * If both @key and @group_name  are %NULL, then @comment will be
 * written above the first group in the file.
 *
 * Returns: %TRUE if the comment was written, %FALSE otherwise
 * Since: 2.6
 */


/**
 * g_key_file_set_double:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @value: an double value
 *
 * Associates a new double value with @key under @group_name.
 * If @key cannot be found then it is created.
 *
 * Since: 2.12
 */


/**
 * g_key_file_set_double_list:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @list: an array of double values
 * @length: number of double values in @list
 *
 * Associates a list of double values with @key under
 *
 * Since: 2.12
 */


/**
 * g_key_file_set_int64:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @value: an integer value
 *
 * Associates a new integer value with @key under @group_name.
 * If @key cannot be found then it is created.
 *
 * Since: 2.26
 */


/**
 * g_key_file_set_integer:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @value: an integer value
 *
 * Associates a new integer value with @key under @group_name.
 * If @key cannot be found then it is created.
 *
 * Since: 2.6
 */


/**
 * g_key_file_set_integer_list:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @list: an array of integer values
 * @length: number of integer values in @list
 *
 * Associates a list of integer values with @key under @group_name.
 * If @key cannot be found then it is created.
 *
 * Since: 2.6
 */


/**
 * g_key_file_set_list_separator:
 * @key_file: a #GKeyFile
 * @separator: the separator
 *
 * Sets the character which is used to separate
 * values in lists. Typically ';' or ',' are used
 * as separators. The default list separator is ';'.
 *
 * Since: 2.6
 */


/**
 * g_key_file_set_locale_string:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @locale: a locale identifier
 * @string: a string
 *
 * Associates a string value for @key and @locale under @group_name.
 * If the translation for @key cannot be found then it is created.
 *
 * Since: 2.6
 */


/**
 * g_key_file_set_locale_string_list:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @locale: a locale identifier
 * @list: a %NULL-terminated array of locale string values
 * @length: the length of @list
 *
 * Associates a list of string values for @key and @locale under
 * it is created.
 *
 * Since: 2.6
 */


/**
 * g_key_file_set_string:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @string: a string
 *
 * Associates a new string value with @key under @group_name.
 * If @key cannot be found then it is created.
 * If @group_name cannot be found then it is created.
 * Unlike g_key_file_set_value(), this function handles characters
 * that need escaping, such as newlines.
 *
 * Since: 2.6
 */


/**
 * g_key_file_set_string_list:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @list: (array length=length zero-terminated=1) (element-type utf8): an array of string values
 * @length: number of string values in @list
 *
 * Associates a list of string values for @key under @group_name.
 * If @key cannot be found then it is created.
 * If @group_name cannot be found then it is created.
 *
 * Since: 2.6
 */


/**
 * g_key_file_set_uint64:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @value: an integer value
 *
 * Associates a new integer value with @key under @group_name.
 * If @key cannot be found then it is created.
 *
 * Since: 2.26
 */


/**
 * g_key_file_set_value:
 * @key_file: a #GKeyFile
 * @group_name: a group name
 * @key: a key
 * @value: a string
 *
 * Associates a new value with @key under @group_name.
 * If @key cannot be found then it is created. If @group_name cannot
 * be found then it is created. To set an UTF-8 string which may contain
 * characters that need escaping (such as newlines or spaces), use
 * g_key_file_set_string().
 *
 * Since: 2.6
 */


/**
 * g_key_file_to_data:
 * @key_file: a #GKeyFile
 * @length: return location for the length of the returned string, or %NULL
 * @error: return location for a #GError, or %NULL
 *
 * This function outputs @key_file as a string.
 * Note that this function never reports an error,
 * so it is safe to pass %NULL as @error.
 * the contents of the #GKeyFile
 *
 * Returns: a newly allocated string holding
 * Since: 2.6
 */


/**
 * g_list_alloc:
 * @Returns: a pointer to the newly-allocated #GList element.
 *
 * Allocates space for one #GList element. It is called by
 * g_list_append(), g_list_prepend(), g_list_insert() and
 * g_list_insert_sorted() and so is rarely used on its own.
 */


/**
 * g_list_append:
 * @list: a pointer to a #GList
 * @data: the data for the new element
 *
 * Adds a new element on to the end of the list.
 * <note><para>
 * The return value is the new start of the list, which
 * may have changed, so make sure you store the new value.
 * </para></note>
 * <note><para>
 * Note that g_list_append() has to traverse the entire list
 * to find the end, which is inefficient when adding multiple
 * elements. A common idiom to avoid the inefficiency is to prepend
 * the elements and reverse the list when all elements have been added.
 * </para></note>
 * |[
 * /&ast; Notice that these are initialized to the empty list. &ast;/
 * GList *list = NULL, *number_list = NULL;
 * /&ast; This is a list of strings. &ast;/
 * list = g_list_append (list, "first");
 * list = g_list_append (list, "second");
 * /&ast; This is a list of integers. &ast;/
 * number_list = g_list_append (number_list, GINT_TO_POINTER (27));
 * number_list = g_list_append (number_list, GINT_TO_POINTER (14));
 * ]|
 *
 * Returns: the new start of the #GList
 */


/**
 * g_list_concat:
 * @list1: a #GList
 * @list2: the #GList to add to the end of the first #GList
 *
 * Adds the second #GList onto the end of the first #GList.
 * Note that the elements of the second #GList are not copied.
 * They are used directly.
 *
 * Returns: the start of the new #GList
 */


/**
 * g_list_copy:
 * @list: a #GList
 *
 * Copies a #GList.
 * <note><para>
 * Note that this is a "shallow" copy. If the list elements
 * consist of pointers to data, the pointers are copied but
 * the actual data is not.
 * </para></note>
 *
 * Returns: a copy of @list
 */


/**
 * g_list_delete_link:
 * @list: a #GList
 * @link_: node to delete from @list
 *
 * Removes the node link_ from the list and frees it.
 * Compare this to g_list_remove_link() which removes the node
 * without freeing it.
 *
 * Returns: the new head of @list
 */


/**
 * g_list_find:
 * @list: a #GList
 * @data: the element data to find
 *
 * Finds the element in a #GList which
 * contains the given data.
 * or %NULL if it is not found
 *
 * Returns: the found #GList element,
 */


/**
 * g_list_find_custom:
 * @list: a #GList
 * @data: user data passed to the function
 * @func: the function to call for each element. It should return 0 when the desired element is found
 *
 * Finds an element in a #GList, using a supplied function to
 * find the desired element. It iterates over the list, calling
 * the given function which should return 0 when the desired
 * element is found. The function takes two #gconstpointer arguments,
 * the #GList element's data as the first argument and the
 * given user data.
 *
 * Returns: the found #GList element, or %NULL if it is not found
 */


/**
 * g_list_first:
 * @list: a #GList
 *
 * Gets the first element in a #GList.
 * or %NULL if the #GList has no elements
 *
 * Returns: the first element in the #GList,
 */


/**
 * g_list_foreach:
 * @list: a #GList
 * @func: the function to call with each element's data
 * @user_data: user data to pass to the function
 *
 * Calls a function for each element of a #GList.
 */


/**
 * g_list_free:
 * @list: a #GList
 *
 * Frees all of the memory used by a #GList.
 * The freed elements are returned to the slice allocator.
 * <note><para>
 * If list elements contain dynamically-allocated memory,
 * you should either use g_list_free_full() or free them manually
 * first.
 * </para></note>
 */


/**
 * g_list_free1:
 *
 * Another name for g_list_free_1().
 */


/**
 * g_list_free_1:
 * @list: a #GList element
 *
 * Frees one #GList element.
 * It is usually used after g_list_remove_link().
 */


/**
 * g_list_free_full:
 * @list: a pointer to a #GList
 * @free_func: the function to be called to free each element's data
 *
 * Convenience method, which frees all the memory used by a #GList, and
 * calls the specified destroy function on every element's data.
 *
 * Since: 2.28
 */


/**
 * g_list_index:
 * @list: a #GList
 * @data: the data to find
 *
 * Gets the position of the element containing
 * the given data (starting from 0).
 * or -1 if the data is not found
 *
 * Returns: the index of the element containing the data,
 */


/**
 * g_list_insert:
 * @list: a pointer to a #GList
 * @data: the data for the new element
 * @position: the position to insert the element. If this is negative, or is larger than the number of elements in the list, the new element is added on to the end of the list.
 *
 * Inserts a new element into the list at the given position.
 *
 * Returns: the new start of the #GList
 */


/**
 * g_list_insert_before:
 * @list: a pointer to a #GList
 * @sibling: the list element before which the new element is inserted or %NULL to insert at the end of the list
 * @data: the data for the new element
 *
 * Inserts a new element into the list before the given position.
 *
 * Returns: the new start of the #GList
 */


/**
 * g_list_insert_sorted:
 * @list: a pointer to a #GList
 * @data: the data for the new element
 * @func: the function to compare elements in the list. It should return a number > 0 if the first parameter comes after the second parameter in the sort order.
 *
 * Inserts a new element into the list, using the given comparison
 * function to determine its position.
 *
 * Returns: the new start of the #GList
 */


/**
 * g_list_insert_sorted_with_data:
 * @list: a pointer to a #GList
 * @data: the data for the new element
 * @func: the function to compare elements in the list. It should return a number > 0 if the first parameter comes after the second parameter in the sort order.
 * @user_data: user data to pass to comparison function.
 *
 * Inserts a new element into the list, using the given comparison
 * function to determine its position.
 *
 * Returns: the new start of the #GList
 * Since: 2.10
 */


/**
 * g_list_last:
 * @list: a #GList
 *
 * Gets the last element in a #GList.
 * or %NULL if the #GList has no elements
 *
 * Returns: the last element in the #GList,
 */


/**
 * g_list_length:
 * @list: a #GList
 *
 * Gets the number of elements in a #GList.
 * <note><para>
 * This function iterates over the whole list to
 * count its elements.
 * </para></note>
 *
 * Returns: the number of elements in the #GList
 */


/**
 * g_list_next:
 * @list: an element in a #GList.
 * @Returns: the next element, or %NULL if there are no more elements.
 *
 * A convenience macro to get the next element in a #GList.
 */


/**
 * g_list_nth:
 * @list: a #GList
 * @n: the position of the element, counting from 0
 *
 * Gets the element at the given position in a #GList.
 * the end of the #GList
 *
 * Returns: the element, or %NULL if the position is off
 */


/**
 * g_list_nth_data:
 * @list: a #GList
 * @n: the position of the element
 *
 * Gets the data of the element at the given position.
 * is off the end of the #GList
 *
 * Returns: the element's data, or %NULL if the position
 */


/**
 * g_list_nth_prev:
 * @list: a #GList
 * @n: the position of the element, counting from 0
 *
 * Gets the element @n places before @list.
 * off the end of the #GList
 *
 * Returns: the element, or %NULL if the position is
 */


/**
 * g_list_pop_allocator:
 *
 * Restores the previous #GAllocator, used when allocating #GList
 * elements.
 * Note that this function is not available if GLib has been compiled
 * with <option>--disable-mem-pools</option>
 * to the <link linkend="glib-Memory-Slices">slice
 * allocator</link>
 *
 * Deprecated:2.10: It does nothing, since #GList has been converted
 */


/**
 * g_list_position:
 * @list: a #GList
 * @llink: an element in the #GList
 *
 * Gets the position of the given element
 * in the #GList (starting from 0).
 * or -1 if the element is not found
 *
 * Returns: the position of the element in the #GList,
 */


/**
 * g_list_prepend:
 * @list: a pointer to a #GList
 * @data: the data for the new element
 *
 * Adds a new element on to the start of the list.
 * <note><para>
 * The return value is the new start of the list, which
 * may have changed, so make sure you store the new value.
 * </para></note>
 * |[
 * /&ast; Notice that it is initialized to the empty list. &ast;/
 * GList *list = NULL;
 * list = g_list_prepend (list, "last");
 * list = g_list_prepend (list, "first");
 * ]|
 *
 * Returns: the new start of the #GList
 */


/**
 * g_list_previous:
 * @list: an element in a #GList.
 * @Returns: the previous element, or %NULL if there are no previous elements.
 *
 * A convenience macro to get the previous element in a #GList.
 */


/**
 * g_list_push_allocator:
 * @allocator: the #GAllocator to use when allocating #GList elements.
 *
 * Sets the allocator to use to allocate #GList elements. Use
 * g_list_pop_allocator() to restore the previous allocator.
 * Note that this function is not available if GLib has been compiled
 * with <option>--disable-mem-pools</option>
 * to the <link linkend="glib-Memory-Slices">slice
 * allocator</link>
 *
 * Deprecated:2.10: It does nothing, since #GList has been converted
 */


/**
 * g_list_remove:
 * @list: a #GList
 * @data: the data of the element to remove
 *
 * Removes an element from a #GList.
 * If two elements contain the same data, only the first is removed.
 * If none of the elements contain the data, the #GList is unchanged.
 *
 * Returns: the new start of the #GList
 */


/**
 * g_list_remove_all:
 * @list: a #GList
 * @data: data to remove
 *
 * Removes all list nodes with data equal to @data.
 * Returns the new head of the list. Contrast with
 * g_list_remove() which removes only the first node
 * matching the given data.
 *
 * Returns: new head of @list
 */


/**
 * g_list_remove_link:
 * @list: a #GList
 * @llink: an element in the #GList
 *
 * Removes an element from a #GList, without freeing the element.
 * The removed element's prev and next links are set to %NULL, so
 * that it becomes a self-contained list with one element.
 *
 * Returns: the new start of the #GList, without the element
 */


/**
 * g_list_reverse:
 * @list: a #GList
 *
 * Reverses a #GList.
 * It simply switches the next and prev pointers of each element.
 *
 * Returns: the start of the reversed #GList
 */


/**
 * g_list_sort:
 * @list: a #GList
 * @compare_func: the comparison function used to sort the #GList. This function is passed the data from 2 elements of the #GList and should return 0 if they are equal, a negative value if the first element comes before the second, or a positive value if the first element comes after the second.
 *
 * Sorts a #GList using the given comparison function.
 *
 * Returns: the start of the sorted #GList
 */


/**
 * g_list_sort_with_data:
 * @list: a #GList
 * @compare_func: comparison function
 * @user_data: user data to pass to comparison function
 *
 * Like g_list_sort(), but the comparison function accepts
 * a user data argument.
 *
 * Returns: the new head of @list
 */


/**
 * g_listenv:
 *
 * Gets the names of all variables set in the environment.
 * with g_strfreev().
 * Programs that want to be portable to Windows should typically use
 * this function and g_getenv() instead of using the environ array
 * from the C library directly. On Windows, the strings in the environ
 * array are in system codepage encoding, while in most of the typical
 * use cases for environment variables in GLib-using programs you want
 * the UTF-8 encoding that this function and g_getenv() provide.
 *
 * Returns: (array zero-terminated=1) (transfer full): a %NULL-terminated list of strings which must be freed
 * Since: 2.8
 */


/**
 * g_locale_from_utf8:
 * @utf8string: a UTF-8 encoded string
 * @len: the length of the string, or -1 if the string is nul-terminated<footnoteref linkend="nul-unsafe"/>.
 * @bytes_read: location to store the number of bytes in the input string that were successfully converted, or %NULL. Even if the conversion was successful, this may be less than @len if there were partial characters at the end of the input. If the error #G_CONVERT_ERROR_ILLEGAL_SEQUENCE occurs, the value stored will the byte offset after the last valid input sequence.
 * @bytes_written: the number of bytes stored in the output buffer (not including the terminating nul).
 * @error: location to store the error occuring, or %NULL to ignore errors. Any of the errors in #GConvertError may occur.
 *
 * Converts a string from UTF-8 to the encoding used for strings by
 * the C runtime (usually the same as that used by the operating
 * system) in the <link linkend="setlocale">current locale</link>. On
 * Windows this means the system codepage.
 *
 * Returns: The converted string, or %NULL on an error.
 */


/**
 * g_locale_to_utf8:
 * @opsysstring: a string in the encoding of the current locale. On Windows this means the system codepage.
 * @len: the length of the string, or -1 if the string is nul-terminated<footnoteref linkend="nul-unsafe"/>.
 * @bytes_read: location to store the number of bytes in the input string that were successfully converted, or %NULL. Even if the conversion was successful, this may be less than @len if there were partial characters at the end of the input. If the error #G_CONVERT_ERROR_ILLEGAL_SEQUENCE occurs, the value stored will the byte offset after the last valid input sequence.
 * @bytes_written: the number of bytes stored in the output buffer (not including the terminating nul).
 * @error: location to store the error occuring, or %NULL to ignore errors. Any of the errors in #GConvertError may occur.
 *
 * Converts a string which is in the encoding used for strings by
 * the C runtime (usually the same as that used by the operating
 * system) in the <link linkend="setlocale">current locale</link> into a
 * UTF-8 string.
 *
 * Returns: The converted string, or %NULL on an error.
 */


/**
 * g_lstat:
 * @filename: a pathname in the GLib file name encoding (UTF-8 on Windows)
 * @buf: a pointer to a <structname>stat</structname> struct, which will be filled with the file information
 *
 * A wrapper for the POSIX lstat() function. The lstat() function is
 * like stat() except that in the case of symbolic links, it returns
 * information about the symbolic link itself and not the file that it
 * refers to. If the system does not support symbolic links g_lstat()
 * is identical to g_stat().
 * See your C library manual for more details about lstat().
 * occurred
 *
 * Returns: 0 if the information was successfully retrieved, -1 if an error
 * Since: 2.6
 */


/**
 * g_main_context_acquire:
 * @context: a #GMainContext
 *
 * Tries to become the owner of the specified context.
 * If some other thread is the owner of the context,
 * returns %FALSE immediately. Ownership is properly
 * and will release ownership when g_main_context_release()
 * is called as many times as g_main_context_acquire().
 * You must be the owner of a context before you
 * can call g_main_context_prepare(), g_main_context_query(),
 * g_main_context_check(), g_main_context_dispatch().
 * this thread is now the owner of @context.
 *
 * Recursive: the owner can require ownership again
 * Returns: %TRUE if the operation succeeded, and
 */


/**
 * g_main_context_add_poll:
 * @context: a #GMainContext (or %NULL for the default context)
 * @fd: a #GPollFD structure holding information about a file descriptor to watch.
 * @priority: the priority for this file descriptor which should be the same as the priority used for g_source_attach() to ensure that the file descriptor is polled whenever the results may be needed.
 *
 * Adds a file descriptor to the set of file descriptors polled for
 * this context. This will very seldomly be used directly. Instead
 * a typical event source will use g_source_add_poll() instead.
 */


/**
 * g_main_context_check:
 * @context: a #GMainContext
 * @max_priority: the maximum numerical priority of sources to check
 * @fds: array of #GPollFD's that was passed to the last call to g_main_context_query()
 * @n_fds: return value of g_main_context_query()
 *
 * Passes the results of polling back to the main loop.
 *
 * Returns: %TRUE if some sources are ready to be dispatched.
 */


/**
 * g_main_context_default:
 *
 * Returns the global default main context. This is the main context
 * used for main loop functions when a main loop is not explicitly
 * specified, and corresponds to the "main" main loop. See also
 * g_main_context_get_thread_default().
 *
 * Returns: the global default main context.
 */


/**
 * g_main_context_dispatch:
 * @context: a #GMainContext
 *
 * Dispatches all pending sources.
 */


/**
 * g_main_context_find_source_by_funcs_user_data:
 * @context: a #GMainContext (if %NULL, the default context will be used).
 * @funcs: the @source_funcs passed to g_source_new().
 * @user_data: the user data from the callback.
 *
 * Finds a source with the given source functions and user data.  If
 * multiple sources exist with the same source function and user data,
 * the first one found will be returned.
 *
 * Returns: the source, if one was found, otherwise %NULL
 */


/**
 * g_main_context_find_source_by_id:
 * @context: a #GMainContext (if %NULL, the default context will be used)
 * @source_id: the source ID, as returned by g_source_get_id().
 *
 * Finds a #GSource given a pair of context and ID.
 *
 * Returns: the #GSource if found, otherwise, %NULL
 */


/**
 * g_main_context_find_source_by_user_data:
 * @context: a #GMainContext
 * @user_data: the user_data for the callback.
 *
 * Finds a source with the given user data for the callback.  If
 * multiple sources exist with the same user data, the first
 * one found will be returned.
 *
 * Returns: the source, if one was found, otherwise %NULL
 */


/**
 * g_main_context_get_poll_func:
 * @context: a #GMainContext
 *
 * Gets the poll function set by g_main_context_set_poll_func().
 *
 * Returns: the poll function
 */


/**
 * g_main_context_get_thread_default:
 *
 * Gets the thread-default #GMainContext for this thread. Asynchronous
 * operations that want to be able to be run in contexts other than
 * the default one should call this method to get a #GMainContext to
 * add their #GSource<!-- -->s to. (Note that even in single-threaded
 * programs applications may sometimes want to temporarily push a
 * non-default context, so it is not safe to assume that this will
 * always return %NULL if threads are not initialized.)
 * thread-default context is the global default context.
 *
 * Returns: the thread-default #GMainContext, or %NULL if the
 * Since: 2.22
 */


/**
 * g_main_context_invoke:
 * @context: a #GMainContext, or %NULL
 * @function: function to call
 * @data: data to pass to @function
 *
 * Invokes a function in such a way that @context is owned during the
 * invocation of @function.
 * If @context is %NULL then the global default main context — as
 * returned by g_main_context_default() — is used.
 * If @context is owned by the current thread, @function is called
 * directly.  Otherwise, if @context is the thread-default main context
 * of the current thread and g_main_context_acquire() succeeds, then
 * afterwards.
 * In any other case, an idle source is created to call @function and
 * that source is attached to @context (presumably to be run in another
 * thread).  The idle source is attached with #G_PRIORITY_DEFAULT
 * priority.  If you want a different priority, use
 * g_main_context_invoke_full().
 * Note that, as with normal idle functions, @function should probably
 * return %FALSE.  If it returns %TRUE, it will be continuously run in a
 * loop (and may prevent this call from returning).
 *
 * Since: 2.28
 */


/**
 * g_main_context_invoke_full:
 * @context: a #GMainContext, or %NULL
 * @priority: the priority at which to run @function
 * @function: function to call
 * @data: data to pass to @function
 * @notify: a function to call when @data is no longer in use, or %NULL.
 *
 * Invokes a function in such a way that @context is owned during the
 * invocation of @function.
 * This function is the same as g_main_context_invoke() except that it
 * lets you specify the priority incase @function ends up being
 * scheduled as an idle and also lets you give a #GDestroyNotify for @data.
 * thread or with any particular context acquired.
 *
 * Since: 2.28
 */


/**
 * g_main_context_is_owner:
 * @context: a #GMainContext
 *
 * Determines whether this thread holds the (recursive)
 * ownership of this #GMaincontext. This is useful to
 * know before waiting on another thread that may be
 * blocking to get ownership of @context.
 *
 * Returns: %TRUE if current thread is owner of @context.
 * Since: 2.10
 */


/**
 * g_main_context_iteration:
 * @context: a #GMainContext (if %NULL, the default context will be used)
 * @may_block: whether the call may block.
 *
 * Runs a single iteration for the given main loop. This involves
 * checking to see if any event sources are ready to be processed,
 * then if no events sources are ready and @may_block is %TRUE, waiting
 * for a source to become ready, then dispatching the highest priority
 * events sources that are ready. Otherwise, if @may_block is %FALSE
 * sources are not waited to become ready, only those highest priority
 * events sources will be dispatched (if any), that are ready at this
 * given moment without further waiting.
 * Note that even when @may_block is %TRUE, it is still possible for
 * g_main_context_iteration() to return %FALSE, since the the wait may
 * be interrupted for other reasons than an event source becoming ready.
 *
 * Returns: %TRUE if events were dispatched.
 */


/**
 * g_main_context_new:
 *
 * Creates a new #GMainContext structure.
 *
 * Returns: the new #GMainContext
 */


/**
 * g_main_context_pending:
 * @context: a #GMainContext (if %NULL, the default context will be used)
 *
 * Checks if any sources have pending events for the given context.
 *
 * Returns: %TRUE if events are pending.
 */


/**
 * g_main_context_pop_thread_default:
 * @context: a #GMainContext object, or %NULL
 *
 * Pops @context off the thread-default context stack (verifying that
 * it was on the top of the stack).
 *
 * Since: 2.22
 */


/**
 * g_main_context_prepare:
 * @context: a #GMainContext
 * @priority: location to store priority of highest priority source already ready.
 *
 * Prepares to poll sources within a main loop. The resulting information
 * for polling is determined by calling g_main_context_query ().
 * prior to polling.
 *
 * Returns: %TRUE if some source is ready to be dispatched
 */


/**
 * g_main_context_push_thread_default:
 * @context: a #GMainContext, or %NULL for the global default context
 *
 * Acquires @context and sets it as the thread-default context for the
 * current thread. This will cause certain asynchronous operations
 * (such as most <link linkend="gio">gio</link>-based I/O) which are
 * started in this thread to run under @context and deliver their
 * results to its main loop, rather than running under the global
 * default context in the main thread. Note that calling this function
 * changes the context returned by
 * g_main_context_get_thread_default(), <emphasis>not</emphasis> the
 * one returned by g_main_context_default(), so it does not affect the
 * context used by functions like g_idle_add().
 * Normally you would call this function shortly after creating a new
 * thread, passing it a #GMainContext which will be run by a
 * #GMainLoop in that thread, to set a new default context for all
 * async operations in that thread. (In this case, you don't need to
 * ever call g_main_context_pop_thread_default().) In some cases
 * however, you may want to schedule a single operation in a
 * non-default context, or temporarily use a non-default context in
 * the main thread. In that case, you can wrap the call to the
 * asynchronous operation inside a
 * g_main_context_push_thread_default() /
 * g_main_context_pop_thread_default() pair, but it is up to you to
 * ensure that no other asynchronous operations accidentally get
 * started while the non-default context is active.
 * Beware that libraries that predate this function may not correctly
 * handle being used from a thread with a thread-default context. Eg,
 * see g_file_supports_thread_contexts().
 *
 * Since: 2.22
 */


/**
 * g_main_context_query:
 * @context: a #GMainContext
 * @max_priority: maximum priority source to check
 * @timeout_: location to store timeout to be used in polling
 * @fds: location to store #GPollFD records that need to be polled.
 * @n_fds: length of @fds.
 *
 * Determines information necessary to poll this main loop.
 * or, if more than @n_fds records need to be stored, the number
 * of records that need to be stored.
 *
 * Returns: the number of records actually stored in @fds,
 */


/**
 * g_main_context_ref:
 * @context: a #GMainContext
 *
 * Increases the reference count on a #GMainContext object by one.
 *
 * Returns: the @context that was passed in (since 2.6)
 */


/**
 * g_main_context_release:
 * @context: a #GMainContext
 *
 * Releases ownership of a context previously acquired by this thread
 * with g_main_context_acquire(). If the context was acquired multiple
 * times, the ownership will be released only when g_main_context_release()
 * is called as many times as it was acquired.
 */


/**
 * g_main_context_remove_poll:
 * @fd: a #GPollFD descriptor previously added with g_main_context_add_poll()
 *
 * Removes file descriptor from the set of file descriptors to be
 * polled for a particular context.
 */


/**
 * g_main_context_set_poll_func:
 * @context: a #GMainContext
 * @func: the function to call to poll all file descriptors
 *
 * Sets the function to use to handle polling of file descriptors. It
 * will be used instead of the poll() system call
 * (or GLib's replacement function, which is used where
 * poll() isn't available).
 * This function could possibly be used to integrate the GLib event
 * loop with an external event loop.
 */


/**
 * g_main_context_unref:
 * @context: a #GMainContext
 *
 * Decreases the reference count on a #GMainContext object by one. If
 * the result is zero, free the context and free all associated memory.
 */


/**
 * g_main_context_wait:
 * @context: a #GMainContext
 * @cond: a condition variable
 * @mutex: a mutex, currently held
 *
 * Tries to become the owner of the specified context,
 * as with g_main_context_acquire(). But if another thread
 * is the owner, atomically drop @mutex and wait on @cond until
 * that owner releases ownership or until @cond is signaled, then
 * try again (once) to become the owner.
 * this thread is now the owner of @context.
 *
 * Returns: %TRUE if the operation succeeded, and
 */


/**
 * g_main_context_wakeup:
 * @context: a #GMainContext
 *
 * If @context is currently waiting in a poll(), interrupt
 * the poll(), and continue the iteration process.
 */


/**
 * g_main_current_source:
 *
 * Returns the currently firing source for this thread.
 *
 * Returns: The currently firing source or %NULL.
 * Since: 2.12
 */


/**
 * g_main_depth:
 *
 * Returns the depth of the stack of calls to
 * g_main_context_dispatch() on any #GMainContext in the current thread.
 * That is, when called from the toplevel, it gives 0. When
 * called from within a callback from g_main_context_iteration()
 * (or g_main_loop_run(), etc.) it returns 1. When called from within
 * a callback to a recursive call to g_main_context_iteration(),
 * it returns 2. And so forth.
 * This function is useful in a situation like the following:
 * Imagine an extremely simple "garbage collected" system.
 * |[
 * static GList *free_list;
 * gpointer
 * allocate_memory (gsize size)
 * {
 * gpointer result = g_malloc (size);
 * free_list = g_list_prepend (free_list, result);
 * return result;
 * }
 * void
 * free_allocated_memory (void)
 * {
 * GList *l;
 * for (l = free_list; l; l = l->next);
 * g_free (l->data);
 * g_list_free (free_list);
 * free_list = NULL;
 * }
 * [...]
 * while (TRUE);
 * {
 * g_main_context_iteration (NULL, TRUE);
 * free_allocated_memory();
 * }
 * ]|
 * This works from an application, however, if you want to do the same
 * thing from a library, it gets more difficult, since you no longer
 * control the main loop. You might think you can simply use an idle
 * function to make the call to free_allocated_memory(), but that
 * doesn't work, since the idle function could be called from a
 * recursive callback. This can be fixed by using g_main_depth()
 * |[
 * gpointer
 * allocate_memory (gsize size)
 * {
 * FreeListBlock *block = g_new (FreeListBlock, 1);
 * block->mem = g_malloc (size);
 * block->depth = g_main_depth ();
 * free_list = g_list_prepend (free_list, block);
 * return block->mem;
 * }
 * void
 * free_allocated_memory (void)
 * {
 * GList *l;
 * int depth = g_main_depth ();
 * for (l = free_list; l; );
 * {
 * GList *next = l->next;
 * FreeListBlock *block = l->data;
 * if (block->depth > depth)
 * {
 * g_free (block->mem);
 * g_free (block);
 * free_list = g_list_delete_link (free_list, l);
 * }
 * l = next;
 * }
 * }
 * ]|
 * There is a temptation to use g_main_depth() to solve
 * problems with reentrancy. For instance, while waiting for data
 * to be received from the network in response to a menu item,
 * the menu item might be selected again. It might seem that
 * one could make the menu item's callback return immediately
 * and do nothing if g_main_depth() returns a value greater than 1.
 * However, this should be avoided since the user then sees selecting
 * the menu item do nothing. Furthermore, you'll find yourself adding
 * these checks all over your code, since there are doubtless many,
 * many things that the user could do. Instead, you can use the
 * following techniques:
 * <orderedlist>
 * <listitem>
 * <para>
 * Use gtk_widget_set_sensitive() or modal dialogs to prevent
 * the user from interacting with elements while the main
 * loop is recursing.
 * </para>
 * </listitem>
 * <listitem>
 * <para>
 * Avoid main loop recursion in situations where you can't handle
 * arbitrary  callbacks. Instead, structure your code so that you
 * simply return to the main loop and then get called again when
 * there is more work to do.
 * </para>
 * </listitem>
 * </orderedlist>
 *
 * Returns: The main loop recursion level in the current thread
 */


/**
 * g_main_destroy:
 * @loop: a #GMainLoop
 *
 * Frees the memory allocated for the #GMainLoop.
 *
 * Deprecated: 2.2: Use g_main_loop_unref() instead
 */


/**
 * g_main_is_running:
 * @loop: a #GMainLoop
 *
 * Checks if the main loop is running.
 *
 * Returns: %TRUE if the main loop is running
 * Deprecated: 2.2: Use g_main_loop_is_running() instead
 */


/**
 * g_main_iteration:
 * @may_block: set to %TRUE if it should block (i.e. wait) until an event source becomes ready. It will return after an event source has been processed. If set to %FALSE it will return immediately if no event source is ready to be processed.
 *
 * Runs a single iteration for the default #GMainContext.
 *
 * Returns: %TRUE if more events are pending.
 * Deprecated: 2.2: Use g_main_context_iteration() instead.
 */


/**
 * g_main_loop_get_context:
 * @loop: a #GMainLoop.
 *
 * Returns the #GMainContext of @loop.
 *
 * Returns: the #GMainContext of @loop
 */


/**
 * g_main_loop_is_running:
 * @loop: a #GMainLoop.
 *
 * Checks to see if the main loop is currently being run via g_main_loop_run().
 *
 * Returns: %TRUE if the mainloop is currently being run.
 */


/**
 * g_main_loop_new:
 * @context: (allow-none): a #GMainContext  (if %NULL, the default context will be used).
 * @is_running: set to %TRUE to indicate that the loop is running. This is not very important since calling g_main_loop_run() will set this to %TRUE anyway.
 *
 * Creates a new #GMainLoop structure.
 *
 * Returns: a new #GMainLoop.
 */


/**
 * g_main_loop_quit:
 * @loop: a #GMainLoop
 *
 * Stops a #GMainLoop from running. Any calls to g_main_loop_run()
 * for the loop will return.
 * Note that sources that have already been dispatched when
 * g_main_loop_quit() is called will still be executed.
 */


/**
 * g_main_loop_ref:
 * @loop: a #GMainLoop
 *
 * Increases the reference count on a #GMainLoop object by one.
 *
 * Returns: @loop
 */


/**
 * g_main_loop_run:
 * @loop: a #GMainLoop
 *
 * Runs a main loop until g_main_loop_quit() is called on the loop.
 * If this is called for the thread of the loop's #GMainContext,
 * it will process events from the loop, otherwise it will
 * simply wait.
 */


/**
 * g_main_loop_unref:
 * @loop: a #GMainLoop
 *
 * Decreases the reference count on a #GMainLoop object by one. If
 * the result is zero, free the loop and free all associated memory.
 */


/**
 * g_main_new:
 * @is_running: set to %TRUE to indicate that the loop is running. This is not very important since calling g_main_run() will set this to %TRUE anyway.
 *
 * Creates a new #GMainLoop for th default main context.
 *
 * Returns: a new #GMainLoop
 * Deprecated: 2.2: Use g_main_loop_new() instead
 */


/**
 * g_main_pending:
 *
 * Checks if any events are pending for the default #GMainContext
 * (i.e. ready to be processed).
 *
 * Returns: %TRUE if any events are pending.
 * Deprected: 2.2: Use g_main_context_pending() instead.
 */


/**
 * g_main_quit:
 * @loop: a #GMainLoop
 *
 * Stops the #GMainLoop.
 * If g_main_run() was called to run the #GMainLoop, it will now return.
 *
 * Deprecated: 2.2: Use g_main_loop_quit() instead
 */


/**
 * g_main_run:
 * @loop: a #GMainLoop
 *
 * Runs a main loop until it stops running.
 *
 * Deprecated: 2.2: Use g_main_loop_run() instead
 */


/**
 * g_main_set_poll_func:
 * @func: the function to call to poll all file descriptors
 *
 * Sets the function to use for the handle polling of file descriptors
 * for the default main context.
 *
 * Deprecated: 2.2: Use g_main_context_set_poll_func() again
 */


/**
 * g_malloc:
 * @n_bytes: the number of bytes to allocate
 *
 * Allocates @n_bytes bytes of memory.
 * If @n_bytes is 0 it returns %NULL.
 *
 * Returns: a pointer to the allocated memory
 */


/**
 * g_malloc0:
 * @n_bytes: the number of bytes to allocate
 *
 * Allocates @n_bytes bytes of memory, initialized to 0's.
 * If @n_bytes is 0 it returns %NULL.
 *
 * Returns: a pointer to the allocated memory
 */


/**
 * g_malloc0_n:
 * @n_blocks: the number of blocks to allocate
 * @n_block_bytes: the size of each block in bytes
 *
 * This function is similar to g_malloc0(), allocating (@n_blocks * @n_block_bytes) bytes,
 * but care is taken to detect possible overflow during multiplication.
 *
 * Since: 2.24
 * Returns: a pointer to the allocated memory
 */


/**
 * g_malloc_n:
 * @n_blocks: the number of blocks to allocate
 * @n_block_bytes: the size of each block in bytes
 *
 * This function is similar to g_malloc(), allocating (@n_blocks * @n_block_bytes) bytes,
 * but care is taken to detect possible overflow during multiplication.
 *
 * Since: 2.24
 * Returns: a pointer to the allocated memory
 */


/**
 * g_mapped_file_free:
 * @file: a #GMappedFile
 *
 * This call existed before #GMappedFile had refcounting and is currently
 * exactly the same as g_mapped_file_unref().
 *
 * Since: 2.8
 * Deprecated:2.22: Use g_mapped_file_unref() instead.
 */


/**
 * g_mapped_file_get_contents:
 * @file: a #GMappedFile
 *
 * Returns the contents of a #GMappedFile.
 * Note that the contents may not be zero-terminated,
 * even if the #GMappedFile is backed by a text file.
 * If the file is empty then %NULL is returned.
 *
 * Returns: the contents of @file, or %NULL.
 * Since: 2.8
 */


/**
 * g_mapped_file_get_length:
 * @file: a #GMappedFile
 *
 * Returns the length of the contents of a #GMappedFile.
 *
 * Returns: the length of the contents of @file.
 * Since: 2.8
 */


/**
 * g_mapped_file_new:
 * @filename: The path of the file to load, in the GLib filename encoding
 * @writable: whether the mapping should be writable
 * @error: return location for a #GError, or %NULL
 *
 * Maps a file into memory. On UNIX, this is using the mmap() function.
 * If @writable is %TRUE, the mapped buffer may be modified, otherwise
 * it is an error to modify the mapped buffer. Modifications to the buffer
 * are not visible to other processes mapping the same file, and are not
 * written back to the file.
 * Note that modifications of the underlying file might affect the contents
 * of the #GMappedFile. Therefore, mapping should only be used if the file
 * will not be modified, or if all modifications of the file are done
 * atomically (e.g. using g_file_set_contents()).
 * with g_mapped_file_unref(), or %NULL if the mapping failed.
 *
 * Returns: a newly allocated #GMappedFile which must be unref'd
 * Since: 2.8
 */


/**
 * g_mapped_file_ref:
 * @file: a #GMappedFile
 *
 * Increments the reference count of @file by one.  It is safe to call
 * this function from any thread.
 *
 * Returns: the passed in #GMappedFile.
 * Since: 2.22
 */


/**
 * g_mapped_file_unref:
 * @file: a #GMappedFile
 *
 * Decrements the reference count of @file by one.  If the reference count
 * drops to 0, unmaps the buffer of @file and frees it.
 * It is safe to call this function from any thread.
 * Since 2.22
 */


/**
 * g_markup_collect_attributes:
 * @element_name: the current tag name
 * @attribute_names: the attribute names
 * @attribute_values: the attribute values
 * @error: a pointer to a #GError or %NULL
 * @first_type: the #GMarkupCollectType of the first attribute
 * @first_attr: the name of the first attribute
 * @...: a pointer to the storage location of the first attribute (or %NULL), followed by more types names and pointers, ending with %G_MARKUP_COLLECT_INVALID
 *
 * Collects the attributes of the element from the data passed to the
 * #GMarkupParser start_element function, dealing with common error
 * conditions and supporting boolean values.
 * This utility function is not required to write a parser but can save
 * a lot of typing.
 * The @element_name, @attribute_names, @attribute_values and @error
 * parameters passed to the start_element callback should be passed
 * unmodified to this function.
 * Following these arguments is a list of "supported" attributes to collect.
 * It is an error to specify multiple attributes with the same name. If any
 * attribute not in the list appears in the @attribute_names array then an
 * unknown attribute error will result.
 * The #GMarkupCollectType field allows specifying the type of collection
 * to perform and if a given attribute must appear or is optional.
 * The attribute name is simply the name of the attribute to collect.
 * The pointer should be of the appropriate type (see the descriptions
 * under #GMarkupCollectType) and may be %NULL in case a particular
 * attribute is to be allowed but ignored.
 * This function deals with issuing errors for missing attributes
 * (of type %G_MARKUP_ERROR_MISSING_ATTRIBUTE), unknown attributes
 * (of type %G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE) and duplicate
 * attributes (of type %G_MARKUP_ERROR_INVALID_CONTENT) as well
 * as parse errors for boolean-valued attributes (again of type
 * %G_MARKUP_ERROR_INVALID_CONTENT). In all of these cases %FALSE
 * will be returned and @error will be set as appropriate.
 *
 * Returns: %TRUE if successful
 * Since: 2.16
 */


/**
 * g_markup_escape_text:
 * @text: some valid UTF-8 text
 * @length: length of @text in bytes, or -1 if the text is nul-terminated
 *
 * Escapes text so that the markup parser will parse it verbatim.
 * Less than, greater than, ampersand, etc. are replaced with the
 * corresponding entities. This function would typically be used
 * when writing out a file to be parsed with the markup parser.
 * Note that this function doesn't protect whitespace and line endings
 * from being processed according to the XML rules for normalization
 * of line endings and attribute values.
 * Note also that this function will produce character references in
 * the range of &amp;#x1; ... &amp;#x1f; for all control sequences
 * except for tabstop, newline and carriage return.  The character
 * references in this range are not valid XML 1.0, but they are
 * valid XML 1.1 and will be accepted by the GMarkup parser.
 *
 * Returns: a newly allocated string with the escaped text
 */


/**
 * g_markup_parse_context_end_parse:
 * @context: a #GMarkupParseContext
 * @error: return location for a #GError
 *
 * Signals to the #GMarkupParseContext that all data has been
 * fed into the parse context with g_markup_parse_context_parse().
 * This function reports an error if the document isn't complete,
 * for example if elements are still open.
 *
 * Returns: %TRUE on success, %FALSE if an error was set
 */


/**
 * g_markup_parse_context_free:
 * @context: a #GMarkupParseContext
 *
 * Frees a #GMarkupParseContext.
 * This function can't be called from inside one of the
 * #GMarkupParser functions or while a subparser is pushed.
 */


/**
 * g_markup_parse_context_get_element:
 * @context: a #GMarkupParseContext
 *
 * Retrieves the name of the currently open element.
 * If called from the start_element or end_element handlers this will
 * give the element_name as passed to those functions. For the parent
 * elements, see g_markup_parse_context_get_element_stack().
 *
 * Returns: the name of the currently open element, or %NULL
 * Since: 2.2
 */


/**
 * g_markup_parse_context_get_element_stack:
 * @context: a #GMarkupParseContext
 *
 * Retrieves the element stack from the internal state of the parser.
 * The returned #GSList is a list of strings where the first item is
 * the currently open tag (as would be returned by
 * g_markup_parse_context_get_element()) and the next item is its
 * immediate parent.
 * This function is intended to be used in the start_element and
 * end_element handlers where g_markup_parse_context_get_element()
 * would merely return the name of the element that is being
 * processed.
 *
 * Returns: the element stack, which must not be modified
 * Since: 2.16
 */


/**
 * g_markup_parse_context_get_position:
 * @context: a #GMarkupParseContext
 * @line_number: (allow-none): return location for a line number, or %NULL
 * @char_number: (allow-none): return location for a char-on-line number, or %NULL
 *
 * Retrieves the current line number and the number of the character on
 * that line. Intended for use in error messages; there are no strict
 * semantics for what constitutes the "current" line number other than
 * "the best number we could come up with for error messages."
 */


/**
 * g_markup_parse_context_get_user_data:
 * @context: a #GMarkupParseContext
 *
 * Returns the user_data associated with @context.
 * This will either be the user_data that was provided to
 * g_markup_parse_context_new() or to the most recent call
 * of g_markup_parse_context_push().
 * the markup context and will be freed when
 * g_markup_parse_context_free() is called.
 *
 * Returns: the provided user_data. The returned data belongs to
 * Since: 2.18
 */


/**
 * g_markup_parse_context_new:
 * @parser: a #GMarkupParser
 * @flags: one or more #GMarkupParseFlags
 * @user_data: user data to pass to #GMarkupParser functions
 * @user_data_dnotify: user data destroy notifier called when the parse context is freed
 *
 * Creates a new parse context. A parse context is used to parse
 * marked-up documents. You can feed any number of documents into
 * a context, as long as no errors occur; once an error occurs,
 * the parse context can't continue to parse text (you have to
 * free it and create a new parse context).
 *
 * Returns: a new #GMarkupParseContext
 */


/**
 * g_markup_parse_context_parse:
 * @context: a #GMarkupParseContext
 * @text: chunk of text to parse
 * @text_len: length of @text in bytes
 * @error: return location for a #GError
 *
 * Feed some data to the #GMarkupParseContext.
 * The data need not be valid UTF-8; an error will be signaled if
 * it's invalid. The data need not be an entire document; you can
 * feed a document into the parser incrementally, via multiple calls
 * to this function. Typically, as you receive data from a network
 * connection or file, you feed each received chunk of data into this
 * function, aborting the process if an error occurs. Once an error
 * is reported, no further data may be fed to the #GMarkupParseContext;
 * all errors are fatal.
 *
 * Returns: %FALSE if an error occurred, %TRUE on success
 */


/**
 * g_markup_parse_context_pop:
 * @context: a #GMarkupParseContext
 *
 * Completes the process of a temporary sub-parser redirection.
 * This function exists to collect the user_data allocated by a
 * matching call to g_markup_parse_context_push(). It must be called
 * in the end_element handler corresponding to the start_element
 * handler during which g_markup_parse_context_push() was called.
 * You must not call this function from the error callback -- the
 * This function is not intended to be directly called by users
 * interested in invoking subparsers. Instead, it is intended to
 * be used by the subparsers themselves to implement a higher-level
 * interface.
 *
 * Returns: the user data passed to g_markup_parse_context_push()
 * Since: 2.18
 */


/**
 * g_markup_parse_context_push:
 * @context: a #GMarkupParseContext
 * @parser: a #GMarkupParser
 * @user_data: user data to pass to #GMarkupParser functions
 *
 * Temporarily redirects markup data to a sub-parser.
 * This function may only be called from the start_element handler of
 * a #GMarkupParser. It must be matched with a corresponding call to
 * g_markup_parse_context_pop() in the matching end_element handler
 * (except in the case that the parser aborts due to an error).
 * All tags, text and other data between the matching tags is
 * redirected to the subparser given by @parser. @user_data is used
 * as the user_data for that parser. @user_data is also passed to the
 * error callback in the event that an error occurs. This includes
 * errors that occur in subparsers of the subparser.
 * The end tag matching the start tag for which this call was made is
 * handled by the previous parser (which is given its own user_data)
 * which is why g_markup_parse_context_pop() is provided to allow "one
 * last access" to the @user_data provided to this function. In the
 * case of error, the @user_data provided here is passed directly to
 * the error callback of the subparser and g_markup_parse_context_pop()
 * should not be called. In either case, if @user_data was allocated
 * then it ought to be freed from both of these locations.
 * This function is not intended to be directly called by users
 * interested in invoking subparsers. Instead, it is intended to be
 * used by the subparsers themselves to implement a higher-level
 * interface.
 * As an example, see the following implementation of a simple
 * parser that counts the number of tags encountered.
 * |[
 * typedef struct
 * {
 * gint tag_count;
 * } CounterData;
 * static void
 * counter_start_element (GMarkupParseContext  *context,
 * const gchar          *element_name,
 * const gchar         **attribute_names,
 * const gchar         **attribute_values,
 * gpointer              user_data,
 * GError              **error)
 * {
 * CounterData *data = user_data;
 * data->tag_count++;
 * }
 * static void
 * counter_error (GMarkupParseContext *context,
 * GError              *error,
 * gpointer             user_data)
 * {
 * CounterData *data = user_data;
 * g_slice_free (CounterData, data);
 * }
 * static GMarkupParser counter_subparser =
 * {
 * counter_start_element,
 * NULL,
 * NULL,
 * NULL,
 * counter_error
 * };
 * ]|
 * In order to allow this parser to be easily used as a subparser, the
 * following interface is provided:
 * |[
 * void
 * start_counting (GMarkupParseContext *context)
 * {
 * CounterData *data = g_slice_new (CounterData);
 * data->tag_count = 0;
 * g_markup_parse_context_push (context, &counter_subparser, data);
 * }
 * gint
 * end_counting (GMarkupParseContext *context)
 * {
 * CounterData *data = g_markup_parse_context_pop (context);
 * int result;
 * result = data->tag_count;
 * g_slice_free (CounterData, data);
 * return result;
 * }
 * ]|
 * The subparser would then be used as follows:
 * |[
 * static void start_element (context, element_name, ...)
 * {
 * if (strcmp (element_name, "count-these") == 0)
 * start_counting (context);
 * /&ast; else, handle other tags... &ast;/
 * }
 * static void end_element (context, element_name, ...)
 * {
 * if (strcmp (element_name, "count-these") == 0)
 * g_print ("Counted %d tags\n", end_counting (context));
 * /&ast; else, handle other tags... &ast;/
 * }
 * ]|
 *
 * Since: 2.18
 */


/**
 * g_markup_printf_escaped:
 * @format: printf() style format string
 * @Varargs: the arguments to insert in the format string
 *
 * Formats arguments according to @format, escaping
 * all string and character arguments in the fashion
 * of g_markup_escape_text(). This is useful when you
 * want to insert literal strings into XML-style markup
 * output, without having to worry that the strings
 * might themselves contain markup.
 * |[
 * const char *store = "Fortnum &amp; Mason";
 * const char *item = "Tea";
 * char *output;
 * &nbsp;
 * output = g_markup_printf_escaped ("&lt;purchase&gt;"
 * "&lt;store&gt;&percnt;s&lt;/store&gt;"
 * "&lt;item&gt;&percnt;s&lt;/item&gt;"
 * "&lt;/purchase&gt;",
 * store, item);
 * ]|
 * operation. Free with g_free().
 *
 * Returns: newly allocated result from formatting
 * Since: 2.4
 */


/**
 * g_markup_vprintf_escaped:
 * @format: printf() style format string
 * @args: variable argument list, similar to vprintf()
 *
 * Formats the data in @args according to @format, escaping
 * all string and character arguments in the fashion
 * of g_markup_escape_text(). See g_markup_printf_escaped().
 * operation. Free with g_free().
 *
 * Returns: newly allocated result from formatting
 * Since: 2.4
 */


/**
 * g_match_info_expand_references:
 * @match_info: a #GMatchInfo or %NULL
 * @string_to_expand: the string to expand
 * @error: location to store the error occuring, or %NULL to ignore errors
 *
 * Returns a new string containing the text in @string_to_expand with
 * references and escape sequences expanded. References refer to the last
 * match done with @string against @regex and have the same syntax used by
 * g_regex_replace().
 * The @string_to_expand must be UTF-8 encoded even if #G_REGEX_RAW was
 * passed to g_regex_new().
 * The backreferences are extracted from the string passed to the match
 * function, so you cannot call this function after freeing the string.
 * contain references. For instance "foo\n" does not refer to an actual
 * pattern and '\n' merely will be replaced with \n character,
 * while to expand "\0" (whole match) one needs the result of a match.
 * Use g_regex_check_replacement() to find out whether @string_to_expand
 * contains references.
 *
 * Returns: (allow-none): the expanded string, or %NULL if an error occurred
 * Since: 2.14
 */


/**
 * g_match_info_fetch:
 * @match_info: #GMatchInfo structure
 * @match_num: number of the sub expression
 *
 * Retrieves the text matching the @match_num<!-- -->'th capturing
 * parentheses. 0 is the full text of the match, 1 is the first paren
 * set, 2 the second, and so on.
 * If @match_num is a valid sub pattern but it didn't match anything
 * (e.g. sub pattern 1, matching "b" against "(a)?b") then an empty
 * string is returned.
 * If the match was obtained using the DFA algorithm, that is using
 * g_regex_match_all() or g_regex_match_all_full(), the retrieved
 * string is not that of a set of parentheses but that of a matched
 * substring. Substrings are matched in reverse order of length, so
 * 0 is the longest match.
 * The string is fetched from the string passed to the match function,
 * so you cannot call this function after freeing the string.
 * occurred. You have to free the string yourself
 *
 * Returns: (allow-none): The matched substring, or %NULL if an error
 * Since: 2.14
 */


/**
 * g_match_info_fetch_all:
 * @match_info: a #GMatchInfo structure
 *
 * Bundles up pointers to each of the matching substrings from a match
 * and stores them in an array of gchar pointers. The first element in
 * the returned array is the match number 0, i.e. the entire matched
 * text.
 * If a sub pattern didn't match anything (e.g. sub pattern 1, matching
 * "b" against "(a)?b") then an empty string is inserted.
 * If the last match was obtained using the DFA algorithm, that is using
 * g_regex_match_all() or g_regex_match_all_full(), the retrieved
 * strings are not that matched by sets of parentheses but that of the
 * matched substring. Substrings are matched in reverse order of length,
 * so the first one is the longest match.
 * The strings are fetched from the string passed to the match function,
 * so you cannot call this function after freeing the string.
 * It must be freed using g_strfreev(). If the previous match failed
 * %NULL is returned
 *
 * Returns: (allow-none): a %NULL-terminated array of gchar * pointers.
 * Since: 2.14
 */


/**
 * g_match_info_fetch_named:
 * @match_info: #GMatchInfo structure
 * @name: name of the subexpression
 *
 * Retrieves the text matching the capturing parentheses named @name.
 * If @name is a valid sub pattern name but it didn't match anything
 * (e.g. sub pattern "X", matching "b" against "(?P&lt;X&gt;a)?b")
 * then an empty string is returned.
 * The string is fetched from the string passed to the match function,
 * so you cannot call this function after freeing the string.
 * occurred. You have to free the string yourself
 *
 * Returns: (allow-none): The matched substring, or %NULL if an error
 * Since: 2.14
 */


/**
 * g_match_info_fetch_named_pos:
 * @match_info: #GMatchInfo structure
 * @name: name of the subexpression
 * @start_pos: (out) (allow-none): pointer to location where to store the start position, or %NULL
 * @end_pos: (out) (allow-none): pointer to location where to store the end position, or %NULL
 *
 * Retrieves the position in bytes of the capturing parentheses named @name.
 * If @name is a valid sub pattern name but it didn't match anything
 * (e.g. sub pattern "X", matching "b" against "(?P&lt;X&gt;a)?b")
 * then @start_pos and @end_pos are set to -1 and %TRUE is returned.
 * If the position cannot be fetched, @start_pos and @end_pos
 * are left unchanged.
 *
 * Returns: %TRUE if the position was fetched, %FALSE otherwise.
 * Since: 2.14
 */


/**
 * g_match_info_fetch_pos:
 * @match_info: #GMatchInfo structure
 * @match_num: number of the sub expression
 * @start_pos: (out) (allow-none): pointer to location where to store the start position, or %NULL
 * @end_pos: (out) (allow-none): pointer to location where to store the end position, or %NULL
 *
 * Retrieves the position in bytes of the @match_num<!-- -->'th capturing
 * parentheses. 0 is the full text of the match, 1 is the first
 * paren set, 2 the second, and so on.
 * If @match_num is a valid sub pattern but it didn't match anything
 * (e.g. sub pattern 1, matching "b" against "(a)?b") then @start_pos
 * and @end_pos are set to -1 and %TRUE is returned.
 * If the match was obtained using the DFA algorithm, that is using
 * g_regex_match_all() or g_regex_match_all_full(), the retrieved
 * position is not that of a set of parentheses but that of a matched
 * substring. Substrings are matched in reverse order of length, so
 * 0 is the longest match.
 * the position cannot be fetched, @start_pos and @end_pos are left
 * unchanged
 *
 * Returns: %TRUE if the position was fetched, %FALSE otherwise. If
 * Since: 2.14
 */


/**
 * g_match_info_free:
 * @match_info: a #GMatchInfo
 *
 * Frees all the memory associated with the #GMatchInfo structure.
 *
 * Since: 2.14
 */


/**
 * g_match_info_get_match_count:
 * @match_info: a #GMatchInfo structure
 *
 * Retrieves the number of matched substrings (including substring 0,
 * that is the whole matched text), so 1 is returned if the pattern
 * has no substrings in it and 0 is returned if the match failed.
 * If the last match was obtained using the DFA algorithm, that is
 * using g_regex_match_all() or g_regex_match_all_full(), the retrieved
 * count is not that of the number of capturing parentheses but that of
 * the number of matched substrings.
 *
 * Returns: Number of matched substrings, or -1 if an error occurred
 * Since: 2.14
 */


/**
 * g_match_info_get_regex:
 * @match_info: a #GMatchInfo
 *
 * Returns #GRegex object used in @match_info. It belongs to Glib
 * and must not be freed. Use g_regex_ref() if you need to keep it
 * after you free @match_info object.
 *
 * Returns: #GRegex object used in @match_info
 * Since: 2.14
 */


/**
 * g_match_info_get_string:
 * @match_info: a #GMatchInfo
 *
 * Returns the string searched with @match_info. This is the
 * string passed to g_regex_match() or g_regex_replace() so
 * you may not free it before calling this function.
 *
 * Returns: the string searched with @match_info
 * Since: 2.14
 */


/**
 * g_match_info_is_partial_match:
 * @match_info: a #GMatchInfo structure
 *
 * Usually if the string passed to g_regex_match*() matches as far as
 * it goes, but is too short to match the entire pattern, %FALSE is
 * returned. There are circumstances where it might be helpful to
 * distinguish this case from other cases in which there is no match.
 * Consider, for example, an application where a human is required to
 * type in data for a field with specific formatting requirements. An
 * example might be a date in the form ddmmmyy, defined by the pattern
 * "^\d?\d(jan|feb|mar|apr|may|jun|jul|aug|sep|oct|nov|dec)\d\d$".
 * If the application sees the user’s keystrokes one by one, and can
 * check that what has been typed so far is potentially valid, it is
 * able to raise an error as soon as a mistake is made.
 * GRegex supports the concept of partial matching by means of the
 * #G_REGEX_MATCH_PARTIAL flag. When this is set the return code for
 * g_regex_match() or g_regex_match_full() is, as usual, %TRUE
 * for a complete match, %FALSE otherwise. But, when these functions
 * return %FALSE, you can check if the match was partial calling
 * g_match_info_is_partial_match().
 * When using partial matching you cannot use g_match_info_fetch*().
 * Because of the way certain internal optimizations are implemented
 * the partial matching algorithm cannot be used with all patterns.
 * So repeated single characters such as "a{2,4}" and repeated single
 * meta-sequences such as "\d+" are not permitted if the maximum number
 * of occurrences is greater than one. Optional items such as "\d?"
 * (where the maximum is one) are permitted. Quantifiers with any values
 * are permitted after parentheses, so the invalid examples above can be
 * coded thus "(a){2,4}" and "(\d)+". If #G_REGEX_MATCH_PARTIAL is set
 * for a pattern that does not conform to the restrictions, matching
 * functions return an error.
 *
 * Returns: %TRUE if the match was partial, %FALSE otherwise
 * Since: 2.14
 */


/**
 * g_match_info_matches:
 * @match_info: a #GMatchInfo structure
 *
 * Returns whether the previous match operation succeeded.
 * %FALSE otherwise
 *
 * Returns: %TRUE if the previous match operation succeeded,
 * Since: 2.14
 */


/**
 * g_match_info_next:
 * @match_info: a #GMatchInfo structure
 * @error: location to store the error occuring, or %NULL to ignore errors
 *
 * Scans for the next match using the same parameters of the previous
 * call to g_regex_match_full() or g_regex_match() that returned
 * The match is done on the string passed to the match function, so you
 * cannot free it before calling this function.
 *
 * Returns: %TRUE is the string matched, %FALSE otherwise
 * Since: 2.14
 */


/**
 * g_mem_chunk_alloc:
 * @mem_chunk: a #GMemChunk.
 * @Returns: a pointer to the allocated atom.
 *
 * Allocates an atom of memory from a #GMemChunk.
 *
 * Deprecated:2.10: Use g_slice_alloc() instead
 */


/**
 * g_mem_chunk_alloc0:
 * @mem_chunk: a #GMemChunk.
 * @Returns: a pointer to the allocated atom.
 *
 * Allocates an atom of memory from a #GMemChunk, setting the memory to
 * 0.
 *
 * Deprecated:2.10: Use g_slice_alloc0() instead
 */


/**
 * g_mem_chunk_clean:
 * @mem_chunk: a #GMemChunk.
 *
 * Frees any blocks in a #GMemChunk which are no longer being used.
 * allocator</link> instead
 *
 * Deprecated:2.10: Use the <link linkend="glib-Memory-Slices">slice
 */


/**
 * g_mem_chunk_create:
 * @type: the type of the atoms, typically a structure name.
 * @pre_alloc: the number of atoms to store in each block of memory.
 * @alloc_type: the type of the #GMemChunk.  #G_ALLOC_AND_FREE is used if the atoms will be freed individually.  #G_ALLOC_ONLY should be used if atoms will never be freed individually.  #G_ALLOC_ONLY is quicker, since it does not need to track free atoms, but it obviously wastes memory if you no longer need many of the atoms.
 * @Returns: the new #GMemChunk.
 *
 * A convenience macro for creating a new #GMemChunk. It calls
 * g_mem_chunk_new(), using the given type to create the #GMemChunk
 * name. The atom size is determined using
 * <function>sizeof()</function>, and the area size is calculated by
 * multiplying the @pre_alloc parameter with the atom size.
 * allocator</link> instead
 *
 * Deprecated:2.10: Use the <link linkend="glib-Memory-Slices">slice
 */


/**
 * g_mem_chunk_destroy:
 * @mem_chunk: a #GMemChunk.
 *
 * Frees all of the memory allocated for a #GMemChunk.
 * allocator</link> instead
 *
 * Deprecated:2.10: Use the <link linkend="glib-Memory-Slices">slice
 */


/**
 * g_mem_chunk_free:
 * @mem_chunk: a #GMemChunk.
 * @mem: a pointer to the atom to free.
 *
 * Frees an atom in a #GMemChunk. This should only be called if the
 * #GMemChunk was created with #G_ALLOC_AND_FREE. Otherwise it will
 * simply return.
 *
 * Deprecated:2.10: Use g_slice_free1() instead
 */


/**
 * g_mem_chunk_info:
 *
 * Outputs debugging information for all #GMemChunk objects currently
 * in use. It outputs the number of #GMemChunk objects currently
 * allocated, and calls g_mem_chunk_print() to output information on
 * each one.
 * allocator</link> instead
 *
 * Deprecated:2.10: Use the <link linkend="glib-Memory-Slices">slice
 */


/**
 * g_mem_chunk_new:
 * @name: a string to identify the #GMemChunk. It is not copied so it should be valid for the lifetime of the #GMemChunk. It is only used in g_mem_chunk_print(), which is used for debugging.
 * @atom_size: the size, in bytes, of each element in the #GMemChunk.
 * @area_size: the size, in bytes, of each block of memory allocated to contain the atoms.
 * @type: the type of the #GMemChunk.  #G_ALLOC_AND_FREE is used if the atoms will be freed individually.  #G_ALLOC_ONLY should be used if atoms will never be freed individually. #G_ALLOC_ONLY is quicker, since it does not need to track free atoms, but it obviously wastes memory if you no longer need many of the atoms.
 * @Returns: the new #GMemChunk.
 *
 * Creates a new #GMemChunk.
 * allocator</link> instead
 *
 * Deprecated:2.10: Use the <link linkend="glib-Memory-Slices">slice
 */


/**
 * g_mem_chunk_print:
 * @mem_chunk: a #GMemChunk.
 *
 * Outputs debugging information for a #GMemChunk. It outputs the name
 * of the #GMemChunk (set with g_mem_chunk_new()), the number of bytes
 * used, and the number of blocks of memory allocated.
 * allocator</link> instead
 *
 * Deprecated:2.10: Use the <link linkend="glib-Memory-Slices">slice
 */


/**
 * g_mem_chunk_reset:
 * @mem_chunk: a #GMemChunk.
 *
 * Resets a GMemChunk to its initial state. It frees all of the
 * currently allocated blocks of memory.
 * allocator</link> instead
 *
 * Deprecated:2.10: Use the <link linkend="glib-Memory-Slices">slice
 */


/**
 * g_mem_gc_friendly:
 *
 * This variable is %TRUE if the <envar>G_DEBUG</envar> environment variable
 * includes the key <link linkend="G_DEBUG">gc-friendly</link>.
 */


/**
 * g_mem_is_system_malloc:
 *
 * Checks whether the allocator used by g_malloc() is the system's
 * malloc implementation. If it returns %TRUE memory allocated with
 * malloc() can be used interchangeable with memory allocated using g_malloc().
 * This function is useful for avoiding an extra copy of allocated memory returned
 * by a non-GLib-based API.
 * A different allocator can be set using g_mem_set_vtable().
 *
 * Returns: if %TRUE, malloc() and g_malloc() can be mixed.
 */


/**
 * g_mem_profile:
 *
 * Outputs a summary of memory usage.
 * It outputs the frequency of allocations of different sizes,
 * the total number of bytes which have been allocated,
 * the total number of bytes which have been freed,
 * and the difference between the previous two values, i.e. the number of bytes
 * still in use.
 * Note that this function will not output anything unless you have
 * previously installed the #glib_mem_profiler_table with g_mem_set_vtable().
 */


/**
 * g_mem_set_vtable:
 * @vtable: table of memory allocation routines.
 *
 * Sets the #GMemVTable to use for memory allocation. You can use this to provide
 * custom memory allocation routines. <emphasis>This function must be called
 * before using any other GLib functions.</emphasis> The @vtable only needs to
 * provide malloc(), realloc(), and free() functions; GLib can provide default
 * implementations of the others. The malloc() and realloc() implementations
 * should return %NULL on failure, GLib will handle error-checking for you.
 */


/**
 * g_memdup:
 * @mem: the memory to copy.
 * @byte_size: the number of bytes to copy.
 *
 * Allocates @byte_size bytes of memory, and copies @byte_size bytes into it
 * from @mem. If @mem is %NULL it returns %NULL.
 * is %NULL.
 *
 * Returns: a pointer to the newly-allocated copy of the memory, or %NULL if @mem
 */


/**
 * g_memmove:
 * @dest: the destination address to copy the bytes to.
 * @src: the source address to copy the bytes from.
 * @len: the number of bytes to copy.
 *
 * Copies a block of memory @len bytes long, from @src to @dest.
 * The source and destination areas may overlap.
 * In order to use this function, you must include
 * <filename>string.h</filename> yourself, because this macro will
 * typically simply resolve to memmove() and GLib does not include
 * <filename>string.h</filename> for you.
 */


/**
 * g_mkdir:
 * @filename: a pathname in the GLib file name encoding (UTF-8 on Windows)
 * @mode: permissions to use for the newly created directory
 *
 * A wrapper for the POSIX mkdir() function. The mkdir() function
 * attempts to create a directory with the given name and permissions.
 * The mode argument is ignored on Windows.
 * See your C library manual for more details about mkdir().
 * occurred
 *
 * Returns: 0 if the directory was successfully created, -1 if an error
 * Since: 2.6
 */


/**
 * g_mkdir_with_parents:
 * @pathname: a pathname in the GLib file name encoding
 * @mode: permissions to use for newly created directories
 *
 * Create a directory if it doesn't already exist. Create intermediate
 * parent directories as needed, too.
 * created. Returns -1 if an error occurred, with errno set.
 *
 * Returns: 0 if the directory already exists, or was successfully
 * Since: 2.8
 */


/**
 * g_mkstemp:
 * @tmpl: template filename
 *
 * Opens a temporary file. See the mkstemp() documentation
 * on most UNIX-like systems.
 * The parameter is a string that should follow the rules for
 * mkstemp() templates, i.e. contain the string "XXXXXX".
 * g_mkstemp() is slightly more flexible than mkstemp()
 * in that the sequence does not have to occur at the very end of the
 * template. The X string will
 * be modified to form the name of a file that didn't exist.
 * The string should be in the GLib file name encoding. Most importantly,
 * on Windows it should be in UTF-8.
 * opened for reading and writing. The file is opened in binary mode
 * on platforms where there is a difference. The file handle should be
 * closed with close(). In case of errors, -1 is returned.
 *
 * Returns: A file handle (as from open()) to the file
 */


/**
 * g_mkstemp_full:
 * @tmpl: template filename
 * @flags: flags to pass to an open() call in addition to O_EXCL and O_CREAT, which are passed automatically
 * @mode: permissios to create the temporary file with
 *
 * Opens a temporary file. See the mkstemp() documentation
 * on most UNIX-like systems.
 * The parameter is a string that should follow the rules for
 * mkstemp() templates, i.e. contain the string "XXXXXX".
 * g_mkstemp_full() is slightly more flexible than mkstemp()
 * in that the sequence does not have to occur at the very end of the
 * template and you can pass a @mode and additional @flags. The X
 * string will be modified to form the name of a file that didn't exist.
 * The string should be in the GLib file name encoding. Most importantly,
 * on Windows it should be in UTF-8.
 * opened for reading and writing. The file handle should be
 * closed with close(). In case of errors, -1 is returned.
 *
 * Returns: A file handle (as from open()) to the file
 * Since: 2.22
 */


/**
 * g_mutex_free:
 * @mutex: a #GMutex.
 *
 * Destroys @mutex.
 * <note><para>Calling g_mutex_free() on a locked mutex may result in
 * undefined behaviour.</para></note>
 */


/**
 * g_mutex_lock:
 * @mutex: a #GMutex.
 *
 * Locks @mutex. If @mutex is already locked by another thread, the
 * current thread will block until @mutex is unlocked by the other
 * thread.
 * This function can be used even if g_thread_init() has not yet been
 * called, and, in that case, will do nothing.
 * <note><para>#GMutex is neither guaranteed to be recursive nor to be
 * non-recursive, i.e. a thread could deadlock while calling
 * g_mutex_lock(), if it already has locked @mutex. Use
 * #GStaticRecMutex, if you need recursive mutexes.</para></note>
 */


/**
 * g_mutex_new:
 * @Returns: a new #GMutex.
 *
 * Creates a new #GMutex.
 * <note><para>This function will abort if g_thread_init() has not been
 * called yet.</para></note>
 */


/**
 * g_mutex_trylock:
 * @mutex: a #GMutex.
 * @Returns: %TRUE, if @mutex could be locked.
 *
 * Tries to lock @mutex. If @mutex is already locked by another thread,
 * it immediately returns %FALSE. Otherwise it locks @mutex and returns
 * %TRUE.
 * This function can be used even if g_thread_init() has not yet been
 * called, and, in that case, will immediately return %TRUE.
 * <note><para>#GMutex is neither guaranteed to be recursive nor to be
 * non-recursive, i.e. the return value of g_mutex_trylock() could be
 * both %FALSE or %TRUE, if the current thread already has locked
 * mutexes.</para></note>
 */


/**
 * g_mutex_unlock:
 * @mutex: a #GMutex.
 *
 * Unlocks @mutex. If another thread is blocked in a g_mutex_lock()
 * call for @mutex, it will be woken and can lock @mutex itself.
 * This function can be used even if g_thread_init() has not yet been
 * called, and, in that case, will do nothing.
 */


/**
 * g_new:
 * @struct_type: the type of the elements to allocate
 * @n_structs: the number of elements to allocate
 *
 * Allocates @n_structs elements of type @struct_type.
 * The returned pointer is cast to a pointer to the given type.
 * If @n_structs is 0 it returns %NULL.
 * Care is taken to avoid overflow when calculating the size of the allocated block.
 * Since the returned pointer is already casted to the right type,
 * it is normally unnecessary to cast it explicitly, and doing
 * so might hide memory allocation errors.
 *
 * Returns: a pointer to the allocated memory, cast to a pointer to @struct_type
 */


/**
 * g_new0:
 * @struct_type: the type of the elements to allocate.
 * @n_structs: the number of elements to allocate.
 *
 * Allocates @n_structs elements of type @struct_type, initialized to 0's.
 * The returned pointer is cast to a pointer to the given type.
 * If @n_structs is 0 it returns %NULL.
 * Care is taken to avoid overflow when calculating the size of the allocated block.
 * Since the returned pointer is already casted to the right type,
 * it is normally unnecessary to cast it explicitly, and doing
 * so might hide memory allocation errors.
 *
 * Returns: a pointer to the allocated memory, cast to a pointer to @struct_type.
 */


/**
 * g_newa:
 * @struct_type: Type of memory chunks to be allocated
 * @n_structs: Number of chunks to be allocated
 *
 * Wraps g_alloca() in a more typesafe manner.
 *
 * Returns: Pointer to stack space for @n_structs chunks of type @struct_type
 */


/**
 * g_node_append:
 * @parent: the #GNode to place the new #GNode under
 * @node: the #GNode to insert
 *
 * Inserts a #GNode as the last child of the given parent.
 *
 * Returns: the inserted #GNode
 */


/**
 * g_node_append_data:
 * @parent: the #GNode to place the new #GNode under
 * @data: the data for the new #GNode
 *
 * Inserts a new #GNode as the last child of the given parent.
 *
 * Returns: the new #GNode
 */


/**
 * g_node_child_index:
 * @node: a #GNode
 * @data: the data to find
 *
 * Gets the position of the first child of a #GNode
 * which contains the given data.
 *
 * Returns: the index of the child of @node which contains
 */


/**
 * g_node_child_position:
 * @node: a #GNode
 * @child: a child of @node
 *
 * Gets the position of a #GNode with respect to its siblings.
 * the second 1, and so on.
 *
 * Returns: the position of @child with respect to its siblings
 */


/**
 * g_node_children_foreach:
 * @node: a #GNode
 * @flags: which types of children are to be visited, one of %G_TRAVERSE_ALL, %G_TRAVERSE_LEAVES and %G_TRAVERSE_NON_LEAVES
 * @func: the function to call for each visited node
 * @data: user data to pass to the function
 *
 * Calls a function for each of the children of a #GNode.
 * Note that it doesn't descend beneath the child nodes.
 */


/**
 * g_node_copy:
 * @node: a #GNode
 *
 * Recursively copies a #GNode (but does not deep-copy the data inside the
 * nodes, see g_node_copy_deep() if you need that).
 *
 * Returns: a new #GNode containing the same data pointers
 */


/**
 * g_node_copy_deep:
 * @node: a #GNode
 * @copy_func: the function which is called to copy the data inside each node, or %NULL to use the original data.
 * @data: data to pass to @copy_func
 *
 * Recursively copies a #GNode and its data.
 *
 * Returns: a new #GNode containing copies of the data in @node.
 * Since: 2.4
 */


/**
 * g_node_depth:
 * @node: a #GNode
 *
 * Gets the depth of a #GNode.
 * If @node is %NULL the depth is 0. The root node has a depth of 1.
 * For the children of the root node the depth is 2. And so on.
 *
 * Returns: the depth of the #GNode
 */


/**
 * g_node_destroy:
 * @root: the root of the tree/subtree to destroy
 *
 * Removes @root and its children from the tree, freeing any memory
 * allocated.
 */


/**
 * g_node_find:
 * @root: the root #GNode of the tree to search
 * @order: the order in which nodes are visited - %G_IN_ORDER, %G_PRE_ORDER, %G_POST_ORDER, or %G_LEVEL_ORDER
 * @flags: which types of children are to be searched, one of %G_TRAVERSE_ALL, %G_TRAVERSE_LEAVES and %G_TRAVERSE_NON_LEAVES
 * @data: the data to find
 *
 * Finds a #GNode in a tree.
 *
 * Returns: the found #GNode, or %NULL if the data is not found
 */


/**
 * g_node_find_child:
 * @node: a #GNode
 * @flags: which types of children are to be searched, one of %G_TRAVERSE_ALL, %G_TRAVERSE_LEAVES and %G_TRAVERSE_NON_LEAVES
 * @data: the data to find
 *
 * Finds the first child of a #GNode with the given data.
 *
 * Returns: the found child #GNode, or %NULL if the data is not found
 */


/**
 * g_node_first_child:
 * @node: a #GNode
 *
 * Gets the first child of a #GNode.
 * or has no children
 *
 * Returns: the first child of @node, or %NULL if @node is %NULL
 */


/**
 * g_node_first_sibling:
 * @node: a #GNode
 *
 * Gets the first sibling of a #GNode.
 * This could possibly be the node itself.
 *
 * Returns: the first sibling of @node
 */


/**
 * g_node_get_root:
 * @node: a #GNode
 *
 * Gets the root of a tree.
 *
 * Returns: the root of the tree
 */


/**
 * g_node_insert:
 * @parent: the #GNode to place @node under
 * @position: the position to place @node at, with respect to its siblings If position is -1, @node is inserted as the last child of @parent
 * @node: the #GNode to insert
 *
 * Inserts a #GNode beneath the parent at the given position.
 *
 * Returns: the inserted #GNode
 */


/**
 * g_node_insert_after:
 * @parent: the #GNode to place @node under
 * @sibling: the sibling #GNode to place @node after. If sibling is %NULL, the node is inserted as the first child of @parent.
 * @node: the #GNode to insert
 *
 * Inserts a #GNode beneath the parent after the given sibling.
 *
 * Returns: the inserted #GNode
 */


/**
 * g_node_insert_before:
 * @parent: the #GNode to place @node under
 * @sibling: the sibling #GNode to place @node before. If sibling is %NULL, the node is inserted as the last child of @parent.
 * @node: the #GNode to insert
 *
 * Inserts a #GNode beneath the parent before the given sibling.
 *
 * Returns: the inserted #GNode
 */


/**
 * g_node_insert_data:
 * @parent: the #GNode to place the new #GNode under
 * @position: the position to place the new #GNode at. If position is -1, the new #GNode is inserted as the last child of @parent
 * @data: the data for the new #GNode
 *
 * Inserts a new #GNode at the given position.
 *
 * Returns: the new #GNode
 */


/**
 * g_node_insert_data_before:
 * @parent: the #GNode to place the new #GNode under
 * @sibling: the sibling #GNode to place the new #GNode before
 * @data: the data for the new #GNode
 *
 * Inserts a new #GNode before the given sibling.
 *
 * Returns: the new #GNode
 */


/**
 * g_node_is_ancestor:
 * @node: a #GNode
 * @descendant: a #GNode
 *
 * Returns %TRUE if @node is an ancestor of @descendant.
 * This is true if node is the parent of @descendant,
 * or if node is the grandparent of @descendant etc.
 *
 * Returns: %TRUE if @node is an ancestor of @descendant
 */


/**
 * g_node_last_child:
 * @node: a #GNode (must not be %NULL)
 *
 * Gets the last child of a #GNode.
 *
 * Returns: the last child of @node, or %NULL if @node has no children
 */


/**
 * g_node_last_sibling:
 * @node: a #GNode
 *
 * Gets the last sibling of a #GNode.
 * This could possibly be the node itself.
 *
 * Returns: the last sibling of @node
 */


/**
 * g_node_max_height:
 * @root: a #GNode
 *
 * Gets the maximum height of all branches beneath a #GNode.
 * This is the maximum distance from the #GNode to all leaf nodes.
 * If @root is %NULL, 0 is returned. If @root has no children,
 * 1 is returned. If @root has children, 2 is returned. And so on.
 *
 * Returns: the maximum height of the tree beneath @root
 */


/**
 * g_node_n_children:
 * @node: a #GNode
 *
 * Gets the number of children of a #GNode.
 *
 * Returns: the number of children of @node
 */


/**
 * g_node_n_nodes:
 * @root: a #GNode
 * @flags: which types of children are to be counted, one of %G_TRAVERSE_ALL, %G_TRAVERSE_LEAVES and %G_TRAVERSE_NON_LEAVES
 *
 * Gets the number of nodes in a tree.
 *
 * Returns: the number of nodes in the tree
 */


/**
 * g_node_new:
 * @data: the data of the new node
 *
 * Creates a new #GNode containing the given data.
 * Used to create the first node in a tree.
 *
 * Returns: a new #GNode
 */


/**
 * g_node_next_sibling:
 * @node: a #GNode
 *
 * Gets the next sibling of a #GNode.
 * or %NULL
 *
 * Returns: the next sibling of @node, or %NULL if @node is the last node
 */


/**
 * g_node_nth_child:
 * @node: a #GNode
 * @n: the index of the desired child
 *
 * Gets a child of a #GNode, using the given index.
 * The first child is at index 0. If the index is
 * too big, %NULL is returned.
 *
 * Returns: the child of @node at index @n
 */


/**
 * g_node_pop_allocator:
 *
 * Restores the previous #GAllocator, used when allocating #GNode
 * elements.
 * Note that this function is not available if GLib has been compiled
 * with <option>--disable-mem-pools</option>
 * the <link linkend="glib-Memory-Slices">slice
 * allocator</link>
 *
 * Deprecated:2.10: It does nothing, since #GNode has been converted to
 */


/**
 * g_node_prepend:
 * @parent: the #GNode to place the new #GNode under
 * @node: the #GNode to insert
 *
 * Inserts a #GNode as the first child of the given parent.
 *
 * Returns: the inserted #GNode
 */


/**
 * g_node_prepend_data:
 * @parent: the #GNode to place the new #GNode under
 * @data: the data for the new #GNode
 *
 * Inserts a new #GNode as the first child of the given parent.
 *
 * Returns: the new #GNode
 */


/**
 * g_node_prev_sibling:
 * @node: a #GNode
 *
 * Gets the previous sibling of a #GNode.
 * node or %NULL
 *
 * Returns: the previous sibling of @node, or %NULL if @node is the first
 */


/**
 * g_node_push_allocator:
 * @dummy: the #GAllocator to use when allocating #GNode elements.
 *
 * Sets the allocator to use to allocate #GNode elements. Use
 * g_node_pop_allocator() to restore the previous allocator.
 * Note that this function is not available if GLib has been compiled
 * with <option>--disable-mem-pools</option>
 * the <link linkend="glib-Memory-Slices">slice
 * allocator</link>
 *
 * Deprecated:2.10: It does nothing, since #GNode has been converted to
 */


/**
 * g_node_reverse_children:
 * @node: a #GNode.
 *
 * Reverses the order of the children of a #GNode.
 * (It doesn't change the order of the grandchildren.)
 */


/**
 * g_node_traverse:
 * @root: the root #GNode of the tree to traverse
 * @order: the order in which nodes are visited - %G_IN_ORDER, %G_PRE_ORDER, %G_POST_ORDER, or %G_LEVEL_ORDER.
 * @flags: which types of children are to be visited, one of %G_TRAVERSE_ALL, %G_TRAVERSE_LEAVES and %G_TRAVERSE_NON_LEAVES
 * @max_depth: the maximum depth of the traversal. Nodes below this depth will not be visited. If max_depth is -1 all nodes in the tree are visited. If depth is 1, only the root is visited. If depth is 2, the root and its children are visited. And so on.
 * @func: the function to call for each visited #GNode
 * @data: user data to pass to the function
 *
 * Traverses a tree starting at the given root #GNode.
 * It calls the given function for each node visited.
 * The traversal can be halted at any point by returning %TRUE from @func.
 */


/**
 * g_node_unlink:
 * @node: the #GNode to unlink, which becomes the root of a new tree
 *
 * Unlinks a #GNode from a tree, resulting in two separate trees.
 */


/**
 * g_nullify_pointer:
 * @nullify_location: the memory address of the pointer.
 *
 * Set the pointer at the specified location to %NULL.
 */


/**
 * g_once:
 * @once: a #GOnce structure
 * @func: the #GThreadFunc function associated to @once. This function is called only once, regardless of the number of times it and its associated #GOnce struct are passed to g_once().
 * @arg: data to be passed to @func
 *
 * The first call to this routine by a process with a given #GOnce
 * struct calls @func with the given argument. Thereafter, subsequent
 * calls to g_once()  with the same #GOnce struct do not call @func
 * again, but return the stored result of the first call. On return
 * from g_once(), the status of @once will be %G_ONCE_STATUS_READY.
 * For example, a mutex or a thread-specific data key must be created
 * exactly once. In a threaded environment, calling g_once() ensures
 * that the initialization is serialized across multiple threads.
 * <note><para>Calling g_once() recursively on the same #GOnce struct in
 * <informalexample>
 * <programlisting>
 * gpointer
 * get_debug_flags (void)
 * {
 * static GOnce my_once = G_ONCE_INIT;
 * g_once (&my_once, parse_debug_flags, NULL);
 * return my_once.retval;
 * }
 * </programlisting>
 * </informalexample>
 *
 * Since: 2.4
 */


/**
 * g_once_init_enter:
 * @value_location: location of a static initializable variable containing 0.
 * @Returns: %TRUE if the initialization section should be entered, %FALSE and blocks otherwise
 *
 * Function to be called when starting a critical initialization
 * section. The argument @value_location must point to a static
 * 0-initialized variable that will be set to a value other than 0 at
 * the end of the initialization section. In combination with
 * g_once_init_leave() and the unique address @value_location, it can
 * be ensured that an initialization section will be executed only once
 * during a program's life time, and that concurrent threads are
 * blocked until initialization completed. To be used in constructs
 * like this:
 * <informalexample>
 * <programlisting>
 * static gsize initialization_value = 0;
 * if (g_once_init_enter (&amp;initialization_value))
 * {
 * gsize setup_value = 42; /<!-- -->* initialization code here *<!-- -->/
 * g_once_init_leave (&amp;initialization_value, setup_value);
 * }
 * /<!-- -->* use initialization_value here *<!-- -->/
 * </programlisting>
 * </informalexample>
 *
 * Since: 2.14
 */


/**
 * g_once_init_leave:
 * @value_location: location of a static initializable variable containing 0.
 * @initialization_value: new non-0 value for *@value_location.
 *
 * Counterpart to g_once_init_enter(). Expects a location of a static
 * 0-initialized initialization variable, and an initialization value
 * other than 0. Sets the variable to the initialization value, and
 * releases concurrent threads blocking in g_once_init_enter() on this
 * initialization variable.
 *
 * Since: 2.14
 */


/**
 * g_open:
 * @filename: a pathname in the GLib file name encoding (UTF-8 on Windows)
 * @flags: as in open()
 * @mode: as in open()
 *
 * A wrapper for the POSIX open() function. The open() function is
 * used to convert a pathname into a file descriptor.
 * On POSIX systems file descriptors are implemented by the operating
 * system. On Windows, it's the C library that implements open() and
 * file descriptors. The actual Win32 API for opening files is quite
 * different, see MSDN documentation for CreateFile(). The Win32 API
 * uses file handles, which are more randomish integers, not small
 * integers like file descriptors.
 * Because file descriptors are specific to the C library on Windows,
 * the file descriptor returned by this function makes sense only to
 * functions in the same C library. Thus if the GLib-using code uses a
 * different C library than GLib does, the file descriptor returned by
 * this function cannot be passed to C library functions like write()
 * or read().
 * See your C library manual for more details about open().
 * return value can be used exactly like the return value from open().
 *
 * Returns: a new file descriptor, or -1 if an error occurred. The
 * Since: 2.6
 */


/**
 * g_option_context_add_group:
 * @context: a #GOptionContext
 * @group: the group to add
 *
 * Adds a #GOptionGroup to the @context, so that parsing with @context
 * will recognize the options in the group. Note that the group will
 * be freed together with the context when g_option_context_free() is
 * called, so you must not free the group yourself after adding it
 * to a context.
 *
 * Since: 2.6
 */


/**
 * g_option_context_add_main_entries:
 * @context: a #GOptionContext
 * @entries: a %NULL-terminated array of #GOptionEntry<!-- -->s
 * @translation_domain: a translation domain to use for translating the <option>--help</option> output for the options in @entries with gettext(), or %NULL
 *
 * A convenience function which creates a main group if it doesn't
 * exist, adds the @entries to it and sets the translation domain.
 *
 * Since: 2.6
 */


/**
 * g_option_context_free:
 * @context: a #GOptionContext
 *
 * Frees context and all the groups which have been
 * added to it.
 * Please note that parsed arguments need to be freed separately (see
 * #GOptionEntry).
 *
 * Since: 2.6
 */


/**
 * g_option_context_get_description:
 * @context: a #GOptionContext
 *
 * Returns the description. See g_option_context_set_description().
 *
 * Returns: the description
 * Since: 2.12
 */


/**
 * g_option_context_get_help:
 * @context: a #GOptionContext
 * @main_help: if %TRUE, only include the main group
 * @group: the #GOptionGroup to create help for, or %NULL
 *
 * Returns a formatted, translated help text for the given context.
 * To obtain the text produced by <option>--help</option>, call
 * <literal>g_option_context_get_help (context, TRUE, NULL)</literal>.
 * To obtain the text produced by <option>--help-all</option>, call
 * <literal>g_option_context_get_help (context, FALSE, NULL)</literal>.
 * To obtain the help text for an option group, call
 * <literal>g_option_context_get_help (context, FALSE, group)</literal>.
 *
 * Returns: A newly allocated string containing the help text
 * Since: 2.14
 */


/**
 * g_option_context_get_help_enabled:
 * @context: a #GOptionContext
 *
 * Returns whether automatic <option>--help</option> generation
 * is turned on for @context. See g_option_context_set_help_enabled().
 *
 * Returns: %TRUE if automatic help generation is turned on.
 * Since: 2.6
 */


/**
 * g_option_context_get_ignore_unknown_options:
 * @context: a #GOptionContext
 *
 * Returns whether unknown options are ignored or not. See
 * g_option_context_set_ignore_unknown_options().
 *
 * Returns: %TRUE if unknown options are ignored.
 * Since: 2.6
 */


/**
 * g_option_context_get_main_group:
 * @context: a #GOptionContext
 *
 * Returns a pointer to the main group of @context.
 * have a main group. Note that group belongs to @context and should
 * not be modified or freed.
 *
 * Returns: the main group of @context, or %NULL if @context doesn't
 * Since: 2.6
 */


/**
 * g_option_context_get_summary:
 * @context: a #GOptionContext
 *
 * Returns the summary. See g_option_context_set_summary().
 *
 * Returns: the summary
 * Since: 2.12
 */


/**
 * g_option_context_new:
 * @parameter_string: a string which is displayed in the first line of <option>--help</option> output, after the usage summary <literal><replaceable>programname</replaceable> [OPTION...]</literal>
 *
 * Creates a new option context.
 * The @parameter_string can serve multiple purposes. It can be used
 * to add descriptions for "rest" arguments, which are not parsed by
 * the #GOptionContext, typically something like "FILES" or
 * "FILE1 FILE2...". If you are using #G_OPTION_REMAINING for
 * collecting "rest" arguments, GLib handles this automatically by
 * using the @arg_description of the corresponding #GOptionEntry in
 * the usage summary.
 * Another usage is to give a short summary of the program
 * functionality, like " - frob the strings", which will be displayed
 * in the same line as the usage. For a longer description of the
 * program functionality that should be displayed as a paragraph
 * below the usage line, use g_option_context_set_summary().
 * Note that the @parameter_string is translated using the
 * function set with g_option_context_set_translate_func(), so
 * it should normally be passed untranslated.
 * freed with g_option_context_free() after use.
 *
 * Returns: a newly created #GOptionContext, which must be
 * Since: 2.6
 */


/**
 * g_option_context_parse:
 * @context: a #GOptionContext
 * @argc: (inout) (allow-none): a pointer to the number of command line arguments
 * @argv: (inout) (array length=argc) (allow-none): a pointer to the array of command line arguments
 * @error: a return location for errors
 *
 * Parses the command line arguments, recognizing options
 * which have been added to @context. A side-effect of
 * calling this function is that g_set_prgname() will be
 * called.
 * If the parsing is successful, any parsed arguments are
 * removed from the array and @argc and @argv are updated
 * accordingly. A '--' option is stripped from @argv
 * unless there are unparsed options before and after it,
 * or some of the options after it start with '-'. In case
 * of an error, @argc and @argv are left unmodified.
 * If automatic <option>--help</option> support is enabled
 * (see g_option_context_set_help_enabled()), and the
 * this function will produce help output to stdout and
 * call <literal>exit (0)</literal>.
 * Note that function depends on the
 * <link linkend="setlocale">current locale</link> for
 * automatic character set conversion of string and filename
 * arguments.
 * %FALSE if an error occurred
 *
 * Returns: %TRUE if the parsing was successful,
 * Since: 2.6
 */


/**
 * g_option_context_set_description:
 * @context: a #GOptionContext
 * @description: a string to be shown in <option>--help</option> output after the list of options, or %NULL
 *
 * Adds a string to be displayed in <option>--help</option> output
 * after the list of options. This text often includes a bug reporting
 * address.
 * Note that the summary is translated (see
 * g_option_context_set_translate_func()).
 *
 * Since: 2.12
 */


/**
 * g_option_context_set_help_enabled:
 * @context: a #GOptionContext
 * @help_enabled: %TRUE to enable <option>--help</option>, %FALSE to disable it
 *
 * Enables or disables automatic generation of <option>--help</option>
 * output. By default, g_option_context_parse() recognizes
 * <option>--help</option>, <option>-h</option>,
 * <option>-?</option>, <option>--help-all</option>
 * and <option>--help-</option><replaceable>groupname</replaceable> and creates
 * suitable output to stdout.
 *
 * Since: 2.6
 */


/**
 * g_option_context_set_ignore_unknown_options:
 * @context: a #GOptionContext
 * @ignore_unknown: %TRUE to ignore unknown options, %FALSE to produce an error when unknown options are met
 *
 * Sets whether to ignore unknown options or not. If an argument is
 * ignored, it is left in the @argv array after parsing. By default,
 * g_option_context_parse() treats unknown options as error.
 * This setting does not affect non-option arguments (i.e. arguments
 * which don't start with a dash). But note that GOption cannot reliably
 * determine whether a non-option belongs to a preceding unknown option.
 *
 * Since: 2.6
 */


/**
 * g_option_context_set_main_group:
 * @context: a #GOptionContext
 * @group: the group to set as main group
 *
 * Sets a #GOptionGroup as main group of the @context.
 * This has the same effect as calling g_option_context_add_group(),
 * the only difference is that the options in the main group are
 * treated differently when generating <option>--help</option> output.
 *
 * Since: 2.6
 */


/**
 * g_option_context_set_summary:
 * @context: a #GOptionContext
 * @summary: a string to be shown in <option>--help</option> output before the list of options, or %NULL
 *
 * Adds a string to be displayed in <option>--help</option> output
 * before the list of options. This is typically a summary of the
 * program functionality.
 * Note that the summary is translated (see
 * g_option_context_set_translate_func() and
 * g_option_context_set_translation_domain()).
 *
 * Since: 2.12
 */


/**
 * g_option_context_set_translate_func:
 * @context: a #GOptionContext
 * @func: the #GTranslateFunc, or %NULL
 * @data: user data to pass to @func, or %NULL
 * @destroy_notify: a function which gets called to free @data, or %NULL
 *
 * Sets the function which is used to translate the contexts
 * user-visible strings, for <option>--help</option> output.
 * If @func is %NULL, strings are not translated.
 * Note that option groups have their own translation functions,
 * this function only affects the @parameter_string (see g_option_context_new()),
 * the summary (see g_option_context_set_summary()) and the description
 * (see g_option_context_set_description()).
 * If you are using gettext(), you only need to set the translation
 * domain, see g_option_context_set_translation_domain().
 *
 * Since: 2.12
 */


/**
 * g_option_context_set_translation_domain:
 * @context: a #GOptionContext
 * @domain: the domain to use
 *
 * A convenience function to use gettext() for translating
 * user-visible strings.
 *
 * Since: 2.12
 */


/**
 * g_option_group_add_entries:
 * @group: a #GOptionGroup
 * @entries: a %NULL-terminated array of #GOptionEntry<!-- -->s
 *
 * Adds the options specified in @entries to @group.
 *
 * Since: 2.6
 */


/**
 * g_option_group_free:
 * @group: a #GOptionGroup
 *
 * Frees a #GOptionGroup. Note that you must <emphasis>not</emphasis>
 * free groups which have been added to a #GOptionContext.
 *
 * Since: 2.6
 */


/**
 * g_option_group_new:
 * @name: the name for the option group, this is used to provide help for the options in this group with <option>--help-</option>@name
 * @description: a description for this group to be shown in <option>--help</option>. This string is translated using the translation domain or translation function of the group
 * @help_description: a description for the <option>--help-</option>@name option. This string is translated using the translation domain or translation function of the group
 * @user_data: user data that will be passed to the pre- and post-parse hooks, the error hook and to callbacks of %G_OPTION_ARG_CALLBACK options, or %NULL
 * @destroy: a function that will be called to free @user_data, or %NULL
 *
 * Creates a new #GOptionGroup.
 * to a #GOptionContext or freed with g_option_group_free().
 *
 * Returns: a newly created option group. It should be added
 * Since: 2.6
 */


/**
 * g_option_group_set_error_hook:
 * @group: a #GOptionGroup
 * @error_func: a function to call when an error occurs
 *
 * Associates a function with @group which will be called
 * from g_option_context_parse() when an error occurs.
 * Note that the user data to be passed to @error_func can be
 * specified when constructing the group with g_option_group_new().
 *
 * Since: 2.6
 */


/**
 * g_option_group_set_parse_hooks:
 * @group: a #GOptionGroup
 * @pre_parse_func: a function to call before parsing, or %NULL
 * @post_parse_func: a function to call after parsing, or %NULL
 *
 * Associates two functions with @group which will be called
 * from g_option_context_parse() before the first option is parsed
 * and after the last option has been parsed, respectively.
 * Note that the user data to be passed to @pre_parse_func and
 * with g_option_group_new().
 *
 * Since: 2.6
 */


/**
 * g_option_group_set_translate_func:
 * @group: a #GOptionGroup
 * @func: the #GTranslateFunc, or %NULL
 * @data: user data to pass to @func, or %NULL
 * @destroy_notify: a function which gets called to free @data, or %NULL
 *
 * Sets the function which is used to translate user-visible
 * strings, for <option>--help</option> output. Different
 * groups can use different #GTranslateFunc<!-- -->s. If @func
 * is %NULL, strings are not translated.
 * If you are using gettext(), you only need to set the translation
 * domain, see g_option_group_set_translation_domain().
 *
 * Since: 2.6
 */


/**
 * g_option_group_set_translation_domain:
 * @group: a #GOptionGroup
 * @domain: the domain to use
 *
 * A convenience function to use gettext() for translating
 * user-visible strings.
 *
 * Since: 2.6
 */


/**
 * g_parse_debug_string:
 * @string: (allow-none): a list of debug options separated by colons, spaces, or commas, or %NULL.
 * @keys: (array length=nkeys): pointer to an array of #GDebugKey which associate strings with bit flags.
 * @nkeys: the number of #GDebugKey<!-- -->s in the array.
 *
 * Parses a string containing debugging options
 * into a %guint containing bit flags. This is used
 * within GDK and GTK+ to parse the debug options passed on the
 * command line or through environment variables.
 * If @string is equal to "all", all flags are set.  If @string
 * is equal to "help", all the available keys in @keys are printed
 * out to standard error.
 *
 * Returns: the combined set of bit flags.
 */


/**
 * g_path_get_basename:
 * @file_name: the name of the file.
 *
 * Gets the last component of the filename. If @file_name ends with a
 * directory separator it gets the component before the last slash. If
 * possibly a drive letter), a single separator is returned. If
 * the filename.
 *
 * Returns: a newly allocated string containing the last component of
 */


/**
 * g_path_get_dirname:
 * @file_name: the name of the file.
 *
 * Gets the directory components of a file name.  If the file name has no
 * directory components "." is returned.  The returned string should be
 * freed when no longer needed.
 *
 * Returns: the directory components of the file.
 */


/**
 * g_path_is_absolute:
 * @file_name: a file name.
 *
 * Returns %TRUE if the given @file_name is an absolute file name.
 * Note that this is a somewhat vague concept on Windows.
 * On POSIX systems, an absolute file name is well-defined. It always
 * starts from the single root directory. For example "/usr/local".
 * On Windows, the concepts of current drive and drive-specific
 * current directory introduce vagueness. This function interprets as
 * an absolute file name one that either begins with a directory
 * separator such as "\Users\tml" or begins with the root on a drive,
 * for example "C:\Windows". The first case also includes UNC paths
 * such as "\\myserver\docs\foo". In all cases, either slashes or
 * backslashes are accepted.
 * Note that a file name relative to the current drive root does not
 * truly specify a file uniquely over time and across processes, as
 * the current drive is a per-process value and can be changed.
 * File names relative the current directory on some specific drive,
 * such as "D:foo/bar", are not interpreted as absolute by this
 * function, but they obviously are not relative to the normal current
 * directory as returned by getcwd() or g_get_current_dir()
 * either. Such paths should be avoided, or need to be handled using
 * Windows-specific code.
 *
 * Returns: %TRUE if @file_name is absolute.
 */


/**
 * g_path_skip_root:
 * @file_name: a file name.
 *
 * Returns a pointer into @file_name after the root component, i.e. after
 * the "/" in UNIX or "C:\" under Windows. If @file_name is not an absolute
 * path it returns %NULL.
 *
 * Returns: a pointer into @file_name after the root component.
 */


/**
 * g_pattern_match:
 * @pspec: a #GPatternSpec
 * @string_length: the length of @string (in bytes, i.e. strlen(), <emphasis>not</emphasis> g_utf8_strlen())
 * @string: the UTF-8 encoded string to match
 * @string_reversed: the reverse of @string or %NULL
 * @Returns: %TRUE if @string matches @pspec
 *
 * Matches a string against a compiled pattern. Passing the correct
 * length of the string given is mandatory. The reversed string can be
 * omitted by passing %NULL, this is more efficient if the reversed
 * version of the string to be matched is not at hand, as
 * g_pattern_match() will only construct it if the compiled pattern
 * requires reverse matches.
 * Note that, if the user code will (possibly) match a string against a
 * multitude of patterns containing wildcards, chances are high that
 * some patterns will require a reversed string. In this case, it's
 * more efficient to provide the reversed string to avoid multiple
 * constructions thereof in the various calls to g_pattern_match().
 * Note also that the reverse of a UTF-8 encoded string can in general
 * <emphasis>not</emphasis> be obtained by g_strreverse(). This works
 * only if the string doesn't contain any multibyte characters. GLib
 * offers the g_utf8_strreverse() function to reverse UTF-8 encoded
 * strings.
 */


/**
 * g_pattern_match_simple:
 * @pattern: the UTF-8 encoded pattern
 * @string: the UTF-8 encoded string to match
 * @Returns: %TRUE if @string matches @pspec
 *
 * Matches a string against a pattern given as a string. If this
 * function is to be called in a loop, it's more efficient to compile
 * the pattern once with g_pattern_spec_new() and call
 * g_pattern_match_string() repeatedly.
 */


/**
 * g_pattern_match_string:
 * @pspec: a #GPatternSpec
 * @string: the UTF-8 encoded string to match
 * @Returns: %TRUE if @string matches @pspec
 *
 * Matches a string against a compiled pattern. If the string is to be
 * matched against more than one pattern, consider using
 * g_pattern_match() instead while supplying the reversed string.
 */


/**
 * g_pattern_spec_equal:
 * @pspec1: a #GPatternSpec
 * @pspec2: another #GPatternSpec
 * @Returns: Whether the compiled patterns are equal
 *
 * Compares two compiled pattern specs and returns whether they will
 * match the same set of strings.
 */


/**
 * g_pattern_spec_free:
 * @pspec: a #GPatternSpec
 *
 * Frees the memory allocated for the #GPatternSpec.
 */


/**
 * g_pattern_spec_new:
 * @pattern: a zero-terminated UTF-8 encoded string
 * @Returns: a newly-allocated #GPatternSpec
 *
 * Compiles a pattern to a #GPatternSpec.
 */


/**
 * g_pointer_bit_lock:
 * @address: a pointer to a #gpointer-sized value
 * @lock_bit: a bit value between 0 and 31
 *
 * This is equivalent to g_bit_lock, but working on pointers (or other
 * pointer-sized values).
 * For portability reasons, you may only lock on the bottom 32 bits of
 * the pointer.
 *
 * Since: 2.30
 */


/**
 * g_pointer_bit_trylock:
 * @address: a pointer to a #gpointer-sized value
 * @lock_bit: a bit value between 0 and 31
 * @returns: %TRUE if the lock was acquired
 *
 * This is equivalent to g_bit_trylock, but working on pointers (or
 * other pointer-sized values).
 * For portability reasons, you may only lock on the bottom 32 bits of
 * the pointer.
 *
 * Since: 2.30
 */


/**
 * g_pointer_bit_unlock:
 * @address: a pointer to a #gpointer-sized value
 * @lock_bit: a bit value between 0 and 31
 *
 * This is equivalent to g_bit_unlock, but working on pointers (or other
 * pointer-sized values).
 * For portability reasons, you may only lock on the bottom 32 bits of
 * the pointer.
 *
 * Since: 2.30
 */


/**
 * g_poll:
 * @fds: file descriptors to poll
 * @nfds: the number of file descriptors in @fds
 * @timeout: amount of time to wait, in milliseconds, or -1 to wait forever
 *
 * Polls @fds, as with the poll() system call, but portably. (On
 * systems that don't have poll(), it is emulated using select().)
 * This is used internally by #GMainContext, but it can be called
 * directly if you need to block until a file descriptor is ready, but
 * don't want to run the full main loop.
 * Each element of @fds is a #GPollFD describing a single file
 * descriptor to poll. The %fd field indicates the file descriptor,
 * and the %events field indicates the events to poll for. On return,
 * the %revents fields will be filled with the events that actually
 * occurred.
 * On POSIX systems, the file descriptors in @fds can be any sort of
 * file descriptor, but the situation is much more complicated on
 * Windows. If you need to use g_poll() in code that has to run on
 * Windows, the easiest solution is to construct all of your
 * #GPollFD<!-- -->s with g_io_channel_win32_make_pollfd().
 * were filled in, or 0 if the operation timed out, or -1 on error or
 * if the call was interrupted.
 *
 * Returns: the number of entries in @fds whose %revents fields
 * Since: 2.20
 */


/**
 * g_prefix_error:
 * @err: a return location for a #GError, or %NULL
 * @format: printf()-style format string
 * @...: arguments to @format
 * @err is %NULL (ie: no error variable) then do
 *
 * Formats a string according to @format and
 * prefix it to an existing error message.  If
 * nothing.
 * present but there is no error condition) then
 * also do nothing.  Whether or not it makes
 * sense to take advantage of this feature is up
 * to you.
 *
 * If *@err is %null (ie: an error variable is
 * Since: 2.16
 */


/**
 * g_printf:
 * @format: a standard printf() format string, but notice <link linkend="string-precision">string precision pitfalls</link>.
 * @Varargs: the arguments to insert in the output.
 *
 * An implementation of the standard printf() function which supports
 * positional parameters, as specified in the Single Unix Specification.
 *
 * Returns: the number of bytes printed.
 * Since: 2.2
 */


/**
 * g_private_get:
 * @private_key: a #GPrivate.
 * @Returns: the corresponding pointer.
 *
 * Returns the pointer keyed to @private_key for the current thread. If
 * g_private_set() hasn't been called for the current @private_key and
 * thread yet, this pointer will be %NULL.
 * This function can be used even if g_thread_init() has not yet been
 * called, and, in that case, will return the value of @private_key
 * casted to #gpointer. Note however, that private data set
 * <emphasis>before</emphasis> g_thread_init() will
 * <emphasis>not</emphasis> be retained <emphasis>after</emphasis> the
 * call. Instead, %NULL will be returned in all threads directly after
 * g_thread_init(), regardless of any g_private_set() calls issued
 * before threading system intialization.
 */


/**
 * g_private_new:
 * @destructor: a function to destroy the data keyed to #GPrivate when a thread ends.
 * @Returns: a new #GPrivate.
 *
 * Creates a new #GPrivate. If @destructor is non-%NULL, it is a
 * pointer to a destructor function. Whenever a thread ends and the
 * corresponding pointer keyed to this instance of #GPrivate is
 * non-%NULL, the destructor is called with this pointer as the
 * argument.
 * <note><para>@destructor is used quite differently from @notify in
 * g_static_private_set().</para></note>
 * <note><para>A #GPrivate cannot be freed. Reuse it instead, if you
 * can, to avoid shortage, or use #GStaticPrivate.</para></note>
 * <note><para>This function will abort if g_thread_init() has not been
 * called yet.</para></note>
 */


/**
 * g_private_set:
 * @private_key: a #GPrivate.
 * @data: the new pointer.
 *
 * Sets the pointer keyed to @private_key for the current thread.
 * This function can be used even if g_thread_init() has not yet been
 * called, and, in that case, will set @private_key to @data casted to
 * #GPrivate*. See g_private_get() for resulting caveats.
 */


/**
 * g_propagate_error:
 * @dest: error return location
 * @src: error to move into the return location
 *
 * If @dest is %NULL, free @src; otherwise, moves @src into *@dest.
 * The error variable @dest points to must be %NULL.
 */


/**
 * g_propagate_prefixed_error:
 * @dest: error return location
 * @src: error to move into the return location
 * @format: printf()-style format string
 * @...: arguments to @format
 *
 * If @dest is %NULL, free @src; otherwise,
 * moves @src into *@dest. *@dest must be %NULL.
 * After the move, add a prefix as with
 * g_prefix_error().
 *
 * Since: 2.16
 */


/**
 * g_ptr_array_add:
 * @array: a #GPtrArray.
 * @data: the pointer to add.
 *
 * Adds a pointer to the end of the pointer array. The array will grow
 * in size automatically if necessary.
 */


/**
 * g_ptr_array_foreach:
 * @array: a #GPtrArray
 * @func: the function to call for each array element
 * @user_data: user data to pass to the function
 *
 * Calls a function for each element of a #GPtrArray.
 *
 * Since: 2.4
 */


/**
 * g_ptr_array_free:
 * @array: a #GPtrArray.
 * @free_seg: if %TRUE the actual pointer array is freed as well.
 * @Returns: the pointer array if @free_seg is %FALSE, otherwise %NULL. The pointer array should be freed using g_free().
 *
 * Frees the memory allocated for the #GPtrArray. If @free_seg is %TRUE
 * it frees the memory block holding the elements as well. Pass %FALSE
 * if you want to free the #GPtrArray wrapper but preserve the
 * underlying array for use elsewhere. If the reference count of @array
 * is greater than one, the #GPtrArray wrapper is preserved but the
 * size of @array will be set to zero.
 * <note><para>If array contents point to dynamically-allocated
 * memory, they should be freed separately if @free_seg is %TRUE and no
 * #GDestroyNotify function has been set for @array.</para></note>
 */


/**
 * g_ptr_array_index:
 * @array: a #GPtrArray.
 * @index_: the index of the pointer to return.
 * @Returns: the pointer at the given index.
 *
 * Returns the pointer at the given index of the pointer array.
 */


/**
 * g_ptr_array_new:
 * @Returns: the new #GPtrArray.
 *
 * Creates a new #GPtrArray with a reference count of 1.
 */


/**
 * g_ptr_array_new_with_free_func:
 * @element_free_func: A function to free elements with destroy @array or %NULL.
 *
 * Creates a new #GPtrArray with a reference count of 1 and use @element_free_func
 * for freeing each element when the array is destroyed either via
 * g_ptr_array_unref(), when g_ptr_array_free() is called with @free_segment
 * set to %TRUE or when removing elements.
 *
 * Returns: A new #GPtrArray.
 * Since: 2.22
 */


/**
 * g_ptr_array_ref:
 * @array: A #GArray.
 *
 * Atomically increments the reference count of @array by one. This
 * function is MT-safe and may be called from any thread.
 *
 * Returns: The passed in #GPtrArray.
 * Since: 2.22
 */


/**
 * g_ptr_array_remove:
 * @array: a #GPtrArray.
 * @data: the pointer to remove.
 * @Returns: %TRUE if the pointer is removed. %FALSE if the pointer is not found in the array.
 *
 * Removes the first occurrence of the given pointer from the pointer
 * array. The following elements are moved down one place. If @array
 * has a non-%NULL #GDestroyNotify function it is called for the
 * removed element.
 * It returns %TRUE if the pointer was removed, or %FALSE if the
 * pointer was not found.
 */


/**
 * g_ptr_array_remove_fast:
 * @array: a #GPtrArray.
 * @data: the pointer to remove.
 * @Returns: %TRUE if the pointer was found in the array.
 *
 * Removes the first occurrence of the given pointer from the pointer
 * array. The last element in the array is used to fill in the space,
 * so this function does not preserve the order of the array. But it is
 * faster than g_ptr_array_remove(). If @array has a non-%NULL
 * #GDestroyNotify function it is called for the removed element.
 * It returns %TRUE if the pointer was removed, or %FALSE if the
 * pointer was not found.
 */


/**
 * g_ptr_array_remove_index:
 * @array: a #GPtrArray.
 * @index_: the index of the pointer to remove.
 * @Returns: the pointer which was removed.
 *
 * Removes the pointer at the given index from the pointer array. The
 * following elements are moved down one place. If @array has a
 * non-%NULL #GDestroyNotify function it is called for the removed
 * element.
 */


/**
 * g_ptr_array_remove_index_fast:
 * @array: a #GPtrArray.
 * @index_: the index of the pointer to remove.
 * @Returns: the pointer which was removed.
 *
 * Removes the pointer at the given index from the pointer array. The
 * last element in the array is used to fill in the space, so this
 * function does not preserve the order of the array. But it is faster
 * than g_ptr_array_remove_index(). If @array has a non-%NULL
 * #GDestroyNotify function it is called for the removed element.
 */


/**
 * g_ptr_array_remove_range:
 * @array: a @GPtrArray.
 * @index_: the index of the first pointer to remove.
 * @length: the number of pointers to remove.
 *
 * Removes the given number of pointers starting at the given index
 * from a #GPtrArray.  The following elements are moved to close the
 * gap. If @array has a non-%NULL #GDestroyNotify function it is called
 * for the removed elements.
 *
 * Since: 2.4
 */


/**
 * g_ptr_array_set_free_func:
 * @array: A #GPtrArray.
 * @element_free_func: A function to free elements with destroy @array or %NULL.
 *
 * Sets a function for freeing each element when @array is destroyed
 * either via g_ptr_array_unref(), when g_ptr_array_free() is called
 * with @free_segment set to %TRUE or when removing elements.
 *
 * Since: 2.22
 */


/**
 * g_ptr_array_set_size:
 * @array: a #GPtrArray.
 * @length: the new length of the pointer array.
 *
 * Sets the size of the array. When making the array larger,
 * newly-added elements will be set to %NULL. When making it smaller,
 * if @array has a non-%NULL #GDestroyNotify function then it will be
 * called for the removed elements.
 */


/**
 * g_ptr_array_sized_new:
 * @reserved_size: number of pointers preallocated.
 * @Returns: the new #GPtrArray.
 *
 * Creates a new #GPtrArray with @reserved_size pointers preallocated
 * and a reference count of 1. This avoids frequent reallocation, if
 * you are going to add many pointers to the array. Note however that
 * the size of the array is still 0.
 */


/**
 * g_ptr_array_sort:
 * @array: a #GPtrArray.
 * @compare_func: comparison function.
 *
 * Sorts the array, using @compare_func which should be a qsort()-style
 * comparison function (returns less than zero for first arg is less
 * than second arg, zero for equal, greater than zero if irst arg is
 * greater than second arg).
 * If two array elements compare equal, their order in the sorted array
 * is undefined. If you want equal elements to keep their order &#8211; i.e.
 * you want a stable sort &#8211; you can write a comparison function that,
 * if two elements would otherwise compare equal, compares them by
 * their addresses.
 * <note><para>The comparison function for g_ptr_array_sort() doesn't
 * take the pointers from the array as arguments, it takes pointers to
 * the pointers in the array.</para></note>
 */


/**
 * g_ptr_array_sort_with_data:
 * @array: a #GPtrArray.
 * @compare_func: comparison function.
 * @user_data: data to pass to @compare_func.
 *
 * Like g_ptr_array_sort(), but the comparison function has an extra
 * user data argument.
 * <note><para>The comparison function for g_ptr_array_sort_with_data()
 * doesn't take the pointers from the array as arguments, it takes
 * pointers to the pointers in the array.</para></note>
 */


/**
 * g_ptr_array_unref:
 * @array: A #GPtrArray.
 *
 * Atomically decrements the reference count of @array by one. If the
 * reference count drops to 0, the effect is the same as calling
 * g_ptr_array_free() with @free_segment set to %TRUE. This function
 * is MT-safe and may be called from any thread.
 *
 * Since: 2.22
 */


/**
 * g_qsort_with_data:
 * @pbase: start of array to sort
 * @total_elems: elements in the array
 * @size: size of each element
 * @compare_func: function to compare elements
 * @user_data: data to pass to @compare_func
 *
 * This is just like the standard C qsort() function, but
 * the comparison routine accepts a user data argument.
 */


/**
 * g_quark_from_static_string:
 * @string: a string.
 * @Returns: the #GQuark identifying the string, or 0 if @string is %NULL.
 *
 * Gets the #GQuark identifying the given (static) string. If the
 * string does not currently have an associated #GQuark, a new #GQuark
 * is created, linked to the given string.
 * Note that this function is identical to g_quark_from_string() except
 * that if a new #GQuark is created the string itself is used rather
 * than a copy. This saves memory, but can only be used if the string
 * will <emphasis>always</emphasis> exist. It can be used with
 * statically allocated strings in the main program, but not with
 * statically allocated memory in dynamically loaded modules, if you
 * expect to ever unload the module again (e.g. do not use this
 * function in GTK+ theme engines).
 */


/**
 * g_quark_from_string:
 * @string: a string.
 * @Returns: the #GQuark identifying the string, or 0 if @string is %NULL.
 *
 * Gets the #GQuark identifying the given string. If the string does
 * not currently have an associated #GQuark, a new #GQuark is created,
 * using a copy of the string.
 */


/**
 * g_quark_to_string:
 * @quark: a #GQuark.
 * @Returns: the string associated with the #GQuark.
 *
 * Gets the string associated with the given #GQuark.
 */


/**
 * g_quark_try_string:
 * @string: a string.
 * @Returns: the #GQuark associated with the string, or 0 if @string is %NULL or there is no #GQuark associated with it.
 *
 * Gets the #GQuark associated with the given string, or 0 if string is
 * %NULL or it has no associated #GQuark.
 * If you want the GQuark to be created if it doesn't already exist,
 * use g_quark_from_string() or g_quark_from_static_string().
 */


/**
 * g_queue_clear:
 * @queue: a #GQueue
 *
 * Removes all the elements in @queue. If queue elements contain
 * dynamically-allocated memory, they should be freed first.
 *
 * Since: 2.14
 */


/**
 * g_queue_copy:
 * @queue: a #GQueue
 *
 * Copies a @queue. Note that is a shallow copy. If the elements in the
 * queue consist of pointers to data, the pointers are copied, but the
 * actual data is not.
 *
 * Returns: A copy of @queue
 * Since: 2.4
 */


/**
 * g_queue_delete_link:
 * @queue: a #GQueue
 * @link_: a #GList link that <emphasis>must</emphasis> be part of @queue
 *
 * Removes @link_ from @queue and frees it.
 *
 * Since: 2.4
 */


/**
 * g_queue_find:
 * @queue: a #GQueue
 * @data: data to find
 *
 * Finds the first link in @queue which contains @data.
 *
 * Returns: The first link in @queue which contains @data.
 * Since: 2.4
 */


/**
 * g_queue_find_custom:
 * @queue: a #GQueue
 * @data: user data passed to @func
 * @func: a #GCompareFunc to call for each element. It should return 0 when the desired element is found
 *
 * Finds an element in a #GQueue, using a supplied function to find the
 * desired element. It iterates over the queue, calling the given function
 * which should return 0 when the desired element is found. The function
 * takes two gconstpointer arguments, the #GQueue element's data as the
 * first argument and the given user data as the second argument.
 *
 * Returns: The found link, or %NULL if it wasn't found
 * Since: 2.4
 */


/**
 * g_queue_foreach:
 * @queue: a #GQueue
 * @func: the function to call for each element's data
 * @user_data: user data to pass to @func
 *
 * Calls @func for each element in the queue passing @user_data to the
 * function.
 *
 * Since: 2.4
 */


/**
 * g_queue_free:
 * @queue: a #GQueue.
 *
 * Frees the memory allocated for the #GQueue. Only call this function if
 * dynamically-allocated memory, they should be freed first.
 */


/**
 * g_queue_get_length:
 * @queue: a #GQueue
 *
 * Returns the number of items in @queue.
 *
 * Returns: The number of items in @queue.
 * Since: 2.4
 */


/**
 * g_queue_index:
 * @queue: a #GQueue
 * @data: the data to find.
 *
 * Returns the position of the first element in @queue which contains @data.
 *
 * Returns: The position of the first element in @queue which contains @data, or -1 if no element in @queue contains @data.
 * Since: 2.4
 */


/**
 * g_queue_init:
 * @queue: an uninitialized #GQueue
 *
 * A statically-allocated #GQueue must be initialized with this function
 * before it can be used. Alternatively you can initialize it with
 * #G_QUEUE_INIT. It is not necessary to initialize queues created with
 * g_queue_new().
 *
 * Since: 2.14
 */


/**
 * g_queue_insert_after:
 * @queue: a #GQueue
 * @sibling: a #GList link that <emphasis>must</emphasis> be part of @queue
 * @data: the data to insert
 *
 * Inserts @data into @queue after @sibling
 *
 * Since: 2.4
 */


/**
 * g_queue_insert_before:
 * @queue: a #GQueue
 * @sibling: a #GList link that <emphasis>must</emphasis> be part of @queue
 * @data: the data to insert
 *
 * Inserts @data into @queue before @sibling.
 *
 * Since: 2.4
 */


/**
 * g_queue_insert_sorted:
 * @queue: a #GQueue
 * @data: the data to insert
 * @func: the #GCompareDataFunc used to compare elements in the queue. It is called with two elements of the @queue and @user_data. It should return 0 if the elements are equal, a negative value if the first element comes before the second, and a positive value if the second element comes before the first.
 * @user_data: user data passed to @func.
 *
 * Inserts @data into @queue using @func to determine the new position.
 *
 * Since: 2.4
 */


/**
 * g_queue_is_empty:
 * @queue: a #GQueue.
 *
 * Returns %TRUE if the queue is empty.
 *
 * Returns: %TRUE if the queue is empty.
 */


/**
 * g_queue_link_index:
 * @queue: a #GQueue
 * @link_: A #GList link
 *
 * Returns the position of @link_ in @queue.
 * not part of @queue
 *
 * Returns: The position of @link_, or -1 if the link is
 * Since: 2.4
 */


/**
 * g_queue_new:
 *
 * Creates a new #GQueue.
 *
 * Returns: a new #GQueue.
 */


/**
 * g_queue_peek_head:
 * @queue: a #GQueue.
 *
 * Returns the first element of the queue.
 * is empty.
 *
 * Returns: the data of the first element in the queue, or %NULL if the queue
 */


/**
 * g_queue_peek_head_link:
 * @queue: a #GQueue
 *
 * Returns the first link in @queue
 *
 * Returns: the first link in @queue, or %NULL if @queue is empty
 * Since: 2.4
 */


/**
 * g_queue_peek_nth:
 * @queue: a #GQueue
 * @n: the position of the element.
 *
 * Returns the @n'th element of @queue.
 * off the end of @queue.
 *
 * Returns: The data for the @n'th element of @queue, or %NULL if @n is
 * Since: 2.4
 */


/**
 * g_queue_peek_nth_link:
 * @queue: a #GQueue
 * @n: the position of the link
 *
 * Returns the link at the given position
 * end of the list
 *
 * Returns: The link at the @n'th position, or %NULL if @n is off the
 * Since: 2.4
 */


/**
 * g_queue_peek_tail:
 * @queue: a #GQueue.
 *
 * Returns the last element of the queue.
 * is empty.
 *
 * Returns: the data of the last element in the queue, or %NULL if the queue
 */


/**
 * g_queue_peek_tail_link:
 * @queue: a #GQueue
 *
 * Returns the last link @queue.
 *
 * Returns: the last link in @queue, or %NULL if @queue is empty
 * Since: 2.4
 */


/**
 * g_queue_pop_head:
 * @queue: a #GQueue.
 *
 * Removes the first element of the queue.
 * is empty.
 *
 * Returns: the data of the first element in the queue, or %NULL if the queue
 */


/**
 * g_queue_pop_head_link:
 * @queue: a #GQueue.
 *
 * Removes the first element of the queue.
 * is empty.
 *
 * Returns: the #GList element at the head of the queue, or %NULL if the queue
 */


/**
 * g_queue_pop_nth:
 * @queue: a #GQueue
 * @n: the position of the element.
 *
 * Removes the @n'th element of @queue.
 *
 * Returns: the element's data, or %NULL if @n is off the end of @queue.
 * Since: 2.4
 */


/**
 * g_queue_pop_nth_link:
 * @queue: a #GQueue
 * @n: the link's position
 *
 * Removes and returns the link at the given position.
 *
 * Returns: The @n'th link, or %NULL if @n is off the end of @queue.
 * Since: 2.4
 */


/**
 * g_queue_pop_tail:
 * @queue: a #GQueue.
 *
 * Removes the last element of the queue.
 * is empty.
 *
 * Returns: the data of the last element in the queue, or %NULL if the queue
 */


/**
 * g_queue_pop_tail_link:
 * @queue: a #GQueue.
 *
 * Removes the last element of the queue.
 * is empty.
 *
 * Returns: the #GList element at the tail of the queue, or %NULL if the queue
 */


/**
 * g_queue_push_head:
 * @queue: a #GQueue.
 * @data: the data for the new element.
 *
 * Adds a new element at the head of the queue.
 */


/**
 * g_queue_push_head_link:
 * @queue: a #GQueue.
 * @link_: a single #GList element, <emphasis>not</emphasis> a list with more than one element.
 *
 * Adds a new element at the head of the queue.
 */


/**
 * g_queue_push_nth:
 * @queue: a #GQueue
 * @data: the data for the new element
 * @n: the position to insert the new element. If @n is negative or larger than the number of elements in the @queue, the element is added to the end of the queue.
 *
 * Inserts a new element into @queue at the given position
 *
 * Since: 2.4
 */


/**
 * g_queue_push_nth_link:
 * @queue: a #GQueue
 * @n: the position to insert the link. If this is negative or larger than the number of elements in @queue, the link is added to the end of
 * @link_: the link to add to @queue
 *
 * Inserts @link into @queue at the given position.
 *
 * Since: 2.4
 */


/**
 * g_queue_push_tail:
 * @queue: a #GQueue.
 * @data: the data for the new element.
 *
 * Adds a new element at the tail of the queue.
 */


/**
 * g_queue_push_tail_link:
 * @queue: a #GQueue.
 * @link_: a single #GList element, <emphasis>not</emphasis> a list with more than one element.
 *
 * Adds a new element at the tail of the queue.
 */


/**
 * g_queue_remove:
 * @queue: a #GQueue
 * @data: data to remove.
 *
 * Removes the first element in @queue that contains @data.
 *
 * Returns: %TRUE if @data was found and removed from @queue
 * Since: 2.4
 */


/**
 * g_queue_remove_all:
 * @queue: a #GQueue
 * @data: data to remove
 *
 * Remove all elements whose data equals @data from @queue.
 *
 * Returns: the number of elements removed from @queue
 * Since: 2.4
 */


/**
 * g_queue_reverse:
 * @queue: a #GQueue
 *
 * Reverses the order of the items in @queue.
 *
 * Since: 2.4
 */


/**
 * g_queue_sort:
 * @queue: a #GQueue
 * @compare_func: the #GCompareDataFunc used to sort @queue. This function is passed two elements of the queue and should return 0 if they are equal, a negative value if the first comes before the second, and a positive value if the second comes before the first.
 * @user_data: user data passed to @compare_func
 *
 * Sorts @queue using @compare_func.
 *
 * Since: 2.4
 */


/**
 * g_queue_unlink:
 * @queue: a #GQueue
 * @link_: a #GList link that <emphasis>must</emphasis> be part of @queue
 *
 * Unlinks @link_ so that it will no longer be part of @queue. The link is
 * not freed.
 *
 * Since: 2.4
 */


/**
 * g_rand_boolean:
 * @rand_: a #GRand.
 * @Returns: a random #gboolean.
 *
 * Returns a random #gboolean from @rand_. This corresponds to a
 * unbiased coin toss.
 */


/**
 * g_rand_copy:
 * @rand_: a #GRand.
 *
 * Copies a #GRand into a new one with the same exact state as before.
 * This way you can take a snapshot of the random number generator for
 * replaying later.
 *
 * Returns: the new #GRand.
 * Since: 2.4
 */


/**
 * g_rand_double:
 * @rand_: a #GRand.
 *
 * Returns the next random #gdouble from @rand_ equally distributed over
 * the range [0..1).
 *
 * Returns: A random number.
 */


/**
 * g_rand_double_range:
 * @rand_: a #GRand.
 * @begin: lower closed bound of the interval.
 * @end: upper open bound of the interval.
 *
 * Returns the next random #gdouble from @rand_ equally distributed over
 * the range [@begin..@end).
 *
 * Returns: A random number.
 */


/**
 * g_rand_free:
 * @rand_: a #GRand.
 *
 * Frees the memory allocated for the #GRand.
 */


/**
 * g_rand_int:
 * @rand_: a #GRand.
 *
 * Returns the next random #guint32 from @rand_ equally distributed over
 * the range [0..2^32-1].
 *
 * Returns: A random number.
 */


/**
 * g_rand_int_range:
 * @rand_: a #GRand.
 * @begin: lower closed bound of the interval.
 * @end: upper open bound of the interval.
 *
 * Returns the next random #gint32 from @rand_ equally distributed over
 * the range [@begin..@end-1].
 *
 * Returns: A random number.
 */


/**
 * g_rand_new:
 *
 * Creates a new random number generator initialized with a seed taken
 * either from <filename>/dev/urandom</filename> (if existing) or from
 * the current time (as a fallback).
 *
 * Returns: the new #GRand.
 */


/**
 * g_rand_new_with_seed:
 * @seed: a value to initialize the random number generator.
 *
 * Creates a new random number generator initialized with @seed.
 *
 * Returns: the new #GRand.
 */


/**
 * g_rand_new_with_seed_array:
 * @seed: an array of seeds to initialize the random number generator.
 * @seed_length: an array of seeds to initialize the random number generator.
 *
 * Creates a new random number generator initialized with @seed.
 *
 * Returns: the new #GRand.
 * Since: 2.4
 */


/**
 * g_rand_set_seed:
 * @rand_: a #GRand.
 * @seed: a value to reinitialize the random number generator.
 *
 * Sets the seed for the random number generator #GRand to @seed.
 */


/**
 * g_rand_set_seed_array:
 * @rand_: a #GRand.
 * @seed: array to initialize with
 * @seed_length: length of array
 *
 * Initializes the random number generator by an array of
 * longs.  Array can be of arbitrary size, though only the
 * first 624 values are taken.  This function is useful
 * if you have many low entropy seeds, or if you require more then
 * 32bits of actual entropy for your application.
 *
 * Since: 2.4
 */


/**
 * g_random_boolean:
 * @Returns: a random #gboolean.
 *
 * Returns a random #gboolean. This corresponds to a unbiased coin toss.
 */


/**
 * g_random_double:
 *
 * Returns a random #gdouble equally distributed over the range [0..1).
 *
 * Returns: A random number.
 */


/**
 * g_random_double_range:
 * @begin: lower closed bound of the interval.
 * @end: upper open bound of the interval.
 *
 * Returns a random #gdouble equally distributed over the range [@begin..@end).
 *
 * Returns: A random number.
 */


/**
 * g_random_int:
 *
 * Return a random #guint32 equally distributed over the range
 * [0..2^32-1].
 *
 * Returns: A random number.
 */


/**
 * g_random_int_range:
 * @begin: lower closed bound of the interval.
 * @end: upper open bound of the interval.
 *
 * Returns a random #gint32 equally distributed over the range
 * [@begin..@end-1].
 *
 * Returns: A random number.
 */


/**
 * g_random_set_seed:
 * @seed: a value to reinitialize the global random number generator.
 *
 * Sets the seed for the global random number generator, which is used
 * by the <function>g_random_*</function> functions, to @seed.
 */


/**
 * g_realloc:
 * @mem: the memory to reallocate
 * @n_bytes: new size of the memory in bytes
 *
 * Reallocates the memory pointed to by @mem, so that it now has space for
 * have been moved. @mem may be %NULL, in which case it's considered to
 * have zero-length. @n_bytes may be 0, in which case %NULL will be returned
 * and @mem will be freed unless it is %NULL.
 *
 * Returns: the new address of the allocated memory
 */


/**
 * g_realloc_n:
 * @mem: the memory to reallocate
 * @n_blocks: the number of blocks to allocate
 * @n_block_bytes: the size of each block in bytes
 *
 * This function is similar to g_realloc(), allocating (@n_blocks * @n_block_bytes) bytes,
 * but care is taken to detect possible overflow during multiplication.
 *
 * Since: 2.24
 * Returns: the new address of the allocated memory
 */


/**
 * g_regex_check_replacement:
 * @replacement: the replacement string
 * @has_references: (out) (allow-none): location to store information about references in @replacement or %NULL
 * @error: location to store error
 *
 * Checks whether @replacement is a valid replacement string
 * (see g_regex_replace()), i.e. that all escape sequences in
 * it are valid.
 * If @has_references is not %NULL then @replacement is checked
 * for pattern references. For instance, replacement text 'foo\n'
 * does not contain references and may be evaluated without information
 * about actual match, but '\0\1' (whole match followed by first
 * subpattern) requires valid #GMatchInfo object.
 *
 * Returns: whether @replacement is a valid replacement string
 * Since: 2.14
 */


/**
 * g_regex_escape_string:
 * @string: (array length=length): the string to escape
 * @length: the length of @string, or -1 if @string is nul-terminated
 *
 * Escapes the special characters used for regular expressions
 * in @string, for instance "a.b*c" becomes "a\.b\*c". This
 * function is useful to dynamically generate regular expressions.
 * in this case remember to specify the correct length of @string
 * in @length.
 *
 * Returns: a newly-allocated escaped string
 * Since: 2.14
 */


/**
 * g_regex_get_capture_count:
 * @regex: a #GRegex
 *
 * Returns the number of capturing subpatterns in the pattern.
 *
 * Returns: the number of capturing subpatterns
 * Since: 2.14
 */


/**
 * g_regex_get_compile_flags:
 * @regex: a #GRegex
 *
 * Returns the compile options that @regex was created with.
 *
 * Returns: flags from #GRegexCompileFlags
 * Since: 2.26
 */


/**
 * g_regex_get_match_flags:
 * @regex: a #GRegex
 *
 * Returns the match options that @regex was created with.
 *
 * Returns: flags from #GRegexMatchFlags
 * Since: 2.26
 */


/**
 * g_regex_get_max_backref:
 * @regex: a #GRegex
 *
 * Returns the number of the highest back reference
 * in the pattern, or 0 if the pattern does not contain
 * back references.
 *
 * Returns: the number of the highest back reference
 * Since: 2.14
 */


/**
 * g_regex_get_pattern:
 * @regex: a #GRegex structure
 *
 * Gets the pattern string associated with @regex, i.e. a copy of
 * the string passed to g_regex_new().
 *
 * Returns: the pattern of @regex
 * Since: 2.14
 */


/**
 * g_regex_get_string_number:
 * @regex: #GRegex structure
 * @name: name of the subexpression
 *
 * Retrieves the number of the subexpression named @name.
 * does not exists
 *
 * Returns: The number of the subexpression or -1 if @name
 * Since: 2.14
 */


/**
 * g_regex_match:
 * @regex: a #GRegex structure from g_regex_new()
 * @string: the string to scan for matches
 * @match_options: match options
 * @match_info: (out) (allow-none): pointer to location where to store the #GMatchInfo, or %NULL if you do not need it
 *
 * Scans for a match in string for the pattern in @regex.
 * The @match_options are combined with the match options specified
 * when the @regex structure was created, letting you have more
 * flexibility in reusing #GRegex structures.
 * A #GMatchInfo structure, used to get information on the match,
 * is stored in @match_info if not %NULL. Note that if @match_info
 * is not %NULL then it is created even if the function returns %FALSE,
 * i.e. you must free it regardless if regular expression actually matched.
 * To retrieve all the non-overlapping matches of the pattern in
 * string you can use g_match_info_next().
 * |[
 * static void
 * print_uppercase_words (const gchar *string)
 * {
 * /&ast; Print all uppercase-only words. &ast;/
 * GRegex *regex;
 * GMatchInfo *match_info;
 * &nbsp;
 * regex = g_regex_new ("[A-Z]+", 0, 0, NULL);
 * g_regex_match (regex, string, 0, &amp;match_info);
 * while (g_match_info_matches (match_info))
 * {
 * gchar *word = g_match_info_fetch (match_info, 0);
 * g_free (word);
 * g_match_info_next (match_info, NULL);
 * }
 * g_match_info_free (match_info);
 * g_regex_unref (regex);
 * }
 * ]|
 * you use any #GMatchInfo method (except g_match_info_free()) after
 * freeing or modifying @string then the behaviour is undefined.
 *
 * G_print ("found: %s\n", word);
 * Returns: %TRUE is the string matched, %FALSE otherwise
 * Since: 2.14
 */


/**
 * g_regex_match_all:
 * @regex: a #GRegex structure from g_regex_new()
 * @string: the string to scan for matches
 * @match_options: match options
 * @match_info: (out) (allow-none): pointer to location where to store the #GMatchInfo, or %NULL if you do not need it
 *
 * Using the standard algorithm for regular expression matching only
 * the longest match in the string is retrieved. This function uses
 * a different algorithm so it can retrieve all the possible matches.
 * For more documentation see g_regex_match_all_full().
 * A #GMatchInfo structure, used to get information on the match, is
 * stored in @match_info if not %NULL. Note that if @match_info is
 * not %NULL then it is created even if the function returns %FALSE,
 * i.e. you must free it regardless if regular expression actually
 * matched.
 * you use any #GMatchInfo method (except g_match_info_free()) after
 * freeing or modifying @string then the behaviour is undefined.
 *
 * Returns: %TRUE is the string matched, %FALSE otherwise
 * Since: 2.14
 */


/**
 * g_regex_match_all_full:
 * @regex: a #GRegex structure from g_regex_new()
 * @string: (array length=string_len): the string to scan for matches
 * @string_len: the length of @string, or -1 if @string is nul-terminated
 * @start_position: starting index of the string to match
 * @match_options: match options
 * @match_info: (out) (allow-none): pointer to location where to store the #GMatchInfo, or %NULL if you do not need it
 * @error: location to store the error occuring, or %NULL to ignore errors
 *
 * Using the standard algorithm for regular expression matching only
 * the longest match in the string is retrieved, it is not possibile
 * to obtain all the available matches. For instance matching
 * "&lt;a&gt; &lt;b&gt; &lt;c&gt;" against the pattern "&lt;.*&gt;"
 * you get "&lt;a&gt; &lt;b&gt; &lt;c&gt;".
 * This function uses a different algorithm (called DFA, i.e. deterministic
 * finite automaton), so it can retrieve all the possible matches, all
 * starting at the same point in the string. For instance matching
 * "&lt;a&gt; &lt;b&gt; &lt;c&gt;" against the pattern "&lt;.*&gt;"
 * "&lt;a&gt; &lt;b&gt;" and "&lt;a&gt;".
 * The number of matched strings is retrieved using
 * g_match_info_get_match_count(). To obtain the matched strings and
 * their position you can use, respectively, g_match_info_fetch() and
 * g_match_info_fetch_pos(). Note that the strings are returned in
 * reverse order of length; that is, the longest matching string is
 * given first.
 * Note that the DFA algorithm is slower than the standard one and it
 * is not able to capture substrings, so backreferences do not work.
 * Setting @start_position differs from just passing over a shortened
 * string and setting #G_REGEX_MATCH_NOTBOL in the case of a pattern
 * that begins with any kind of lookbehind assertion, such as "\b".
 * A #GMatchInfo structure, used to get information on the match, is
 * stored in @match_info if not %NULL. Note that if @match_info is
 * not %NULL then it is created even if the function returns %FALSE,
 * i.e. you must free it regardless if regular expression actually
 * matched.
 * you use any #GMatchInfo method (except g_match_info_free()) after
 * freeing or modifying @string then the behaviour is undefined.
 *
 * You would obtain three matches: "&lt;a&gt; &lt;b&gt; &lt;c&gt;",
 * Returns: %TRUE is the string matched, %FALSE otherwise
 * Since: 2.14
 */


/**
 * g_regex_match_full:
 * @regex: a #GRegex structure from g_regex_new()
 * @string: (array length=string_len): the string to scan for matches
 * @string_len: the length of @string, or -1 if @string is nul-terminated
 * @start_position: starting index of the string to match
 * @match_options: match options
 * @match_info: (out) (allow-none): pointer to location where to store the #GMatchInfo, or %NULL if you do not need it
 * @error: location to store the error occuring, or %NULL to ignore errors
 *
 * Scans for a match in string for the pattern in @regex.
 * The @match_options are combined with the match options specified
 * when the @regex structure was created, letting you have more
 * flexibility in reusing #GRegex structures.
 * Setting @start_position differs from just passing over a shortened
 * string and setting #G_REGEX_MATCH_NOTBOL in the case of a pattern
 * that begins with any kind of lookbehind assertion, such as "\b".
 * A #GMatchInfo structure, used to get information on the match, is
 * stored in @match_info if not %NULL. Note that if @match_info is
 * not %NULL then it is created even if the function returns %FALSE,
 * i.e. you must free it regardless if regular expression actually
 * matched.
 * you use any #GMatchInfo method (except g_match_info_free()) after
 * freeing or modifying @string then the behaviour is undefined.
 * To retrieve all the non-overlapping matches of the pattern in
 * string you can use g_match_info_next().
 * |[
 * static void
 * print_uppercase_words (const gchar *string)
 * {
 * /&ast; Print all uppercase-only words. &ast;/
 * GRegex *regex;
 * GMatchInfo *match_info;
 * GError *error = NULL;
 * &nbsp;
 * regex = g_regex_new ("[A-Z]+", 0, 0, NULL);
 * g_regex_match_full (regex, string, -1, 0, 0, &amp;match_info, &amp;error);
 * while (g_match_info_matches (match_info))
 * {
 * gchar *word = g_match_info_fetch (match_info, 0);
 * g_free (word);
 * g_match_info_next (match_info, &amp;error);
 * }
 * g_match_info_free (match_info);
 * g_regex_unref (regex);
 * if (error != NULL)
 * {
 * g_error_free (error);
 * }
 * }
 * ]|
 *
 * G_print ("found: %s\n", word);
 * G_printerr ("error while matching: %s\n", error->message);
 * Returns: %TRUE is the string matched, %FALSE otherwise
 * Since: 2.14
 */


/**
 * g_regex_match_simple:
 * @pattern: the regular expression
 * @string: the string to scan for matches
 * @compile_options: compile options for the regular expression, or 0
 * @match_options: match options, or 0
 *
 * Scans for a match in @string for @pattern.
 * This function is equivalent to g_regex_match() but it does not
 * require to compile the pattern with g_regex_new(), avoiding some
 * lines of code when you need just to do a match without extracting
 * substrings, capture counts, and so on.
 * If this function is to be called on the same @pattern more than
 * once, it's more efficient to compile the pattern once with
 * g_regex_new() and then use g_regex_match().
 *
 * Returns: %TRUE if the string matched, %FALSE otherwise
 * Since: 2.14
 */


/**
 * g_regex_new:
 * @pattern: the regular expression
 * @compile_options: compile options for the regular expression, or 0
 * @match_options: match options for the regular expression, or 0
 * @error: return location for a #GError
 *
 * Compiles the regular expression to an internal form, and does
 * the initial setup of the #GRegex structure.
 * are done with it
 *
 * Returns: a #GRegex structure. Call g_regex_unref() when you
 * Since: 2.14
 */


/**
 * g_regex_ref:
 * @regex: a #GRegex
 *
 * Increases reference count of @regex by 1.
 *
 * Returns: @regex
 * Since: 2.14
 */


/**
 * g_regex_replace:
 * @regex: a #GRegex structure
 * @string: (array length=string_len): the string to perform matches against
 * @string_len: the length of @string, or -1 if @string is nul-terminated
 * @start_position: starting index of the string to match
 * @replacement: text to replace each match with
 * @match_options: options for the match
 * @error: location to store the error occuring, or %NULL to ignore errors
 *
 * Replaces all occurrences of the pattern in @regex with the
 * replacement text. Backreferences of the form '\number' or
 * '\g&lt;number&gt;' in the replacement text are interpolated by the
 * number-th captured subexpression of the match, '\g&lt;name&gt;' refers
 * to the captured subexpression with the given name. '\0' refers to the
 * complete match, but '\0' followed by a number is the octal representation
 * of a character. To include a literal '\' in the replacement, write '\\'.
 * There are also escapes that changes the case of the following text:
 * <variablelist>
 * <varlistentry><term>\l</term>
 * <listitem>
 * <para>Convert to lower case the next character</para>
 * </listitem>
 * </varlistentry>
 * <varlistentry><term>\u</term>
 * <listitem>
 * <para>Convert to upper case the next character</para>
 * </listitem>
 * </varlistentry>
 * <varlistentry><term>\L</term>
 * <listitem>
 * <para>Convert to lower case till \E</para>
 * </listitem>
 * </varlistentry>
 * <varlistentry><term>\U</term>
 * <listitem>
 * <para>Convert to upper case till \E</para>
 * </listitem>
 * </varlistentry>
 * <varlistentry><term>\E</term>
 * <listitem>
 * <para>End case modification</para>
 * </listitem>
 * </varlistentry>
 * </variablelist>
 * If you do not need to use backreferences use g_regex_replace_literal().
 * The @replacement string must be UTF-8 encoded even if #G_REGEX_RAW was
 * passed to g_regex_new(). If you want to use not UTF-8 encoded stings
 * you can use g_regex_replace_literal().
 * Setting @start_position differs from just passing over a shortened
 * string and setting #G_REGEX_MATCH_NOTBOL in the case of a pattern that
 * begins with any kind of lookbehind assertion, such as "\b".
 *
 * Returns: a newly allocated string containing the replacements
 * Since: 2.14
 */


/**
 * g_regex_replace_eval:
 * @regex: a #GRegex structure from g_regex_new()
 * @string: (array length=string_len): string to perform matches against
 * @string_len: the length of @string, or -1 if @string is nul-terminated
 * @start_position: starting index of the string to match
 * @match_options: options for the match
 * @eval: a function to call for each match
 * @user_data: user data to pass to the function
 * @error: location to store the error occuring, or %NULL to ignore errors
 *
 * Replaces occurrences of the pattern in regex with the output of
 * Setting @start_position differs from just passing over a shortened
 * string and setting #G_REGEX_MATCH_NOTBOL in the case of a pattern
 * that begins with any kind of lookbehind assertion, such as "\b".
 * The following example uses g_regex_replace_eval() to replace multiple
 * strings at once:
 * |[
 * static gboolean
 * eval_cb (const GMatchInfo *info,
 * GString          *res,
 * gpointer          data)
 * {
 * gchar *match;
 * gchar *r;
 * match = g_match_info_fetch (info, 0);
 * r = g_hash_table_lookup ((GHashTable *)data, match);
 * g_string_append (res, r);
 * g_free (match);
 * return FALSE;
 * }
 * /&ast; ... &ast;/
 * GRegex *reg;
 * GHashTable *h;
 * gchar *res;
 * h = g_hash_table_new (g_str_hash, g_str_equal);
 * g_hash_table_insert (h, "1", "ONE");
 * g_hash_table_insert (h, "2", "TWO");
 * g_hash_table_insert (h, "3", "THREE");
 * g_hash_table_insert (h, "4", "FOUR");
 * reg = g_regex_new ("1|2|3|4", 0, 0, NULL);
 * res = g_regex_replace_eval (reg, text, -1, 0, 0, eval_cb, h, NULL);
 * g_hash_table_destroy (h);
 * /&ast; ... &ast;/
 * ]|
 *
 * Returns: a newly allocated string containing the replacements
 * Since: 2.14
 */


/**
 * g_regex_replace_literal:
 * @regex: a #GRegex structure
 * @string: (array length=string_len): the string to perform matches against
 * @string_len: the length of @string, or -1 if @string is nul-terminated
 * @start_position: starting index of the string to match
 * @replacement: text to replace each match with
 * @match_options: options for the match
 * @error: location to store the error occuring, or %NULL to ignore errors
 *
 * Replaces all occurrences of the pattern in @regex with the
 * replacement text. @replacement is replaced literally, to
 * include backreferences use g_regex_replace().
 * Setting @start_position differs from just passing over a
 * shortened string and setting #G_REGEX_MATCH_NOTBOL in the
 * case of a pattern that begins with any kind of lookbehind
 * assertion, such as "\b".
 *
 * Returns: a newly allocated string containing the replacements
 * Since: 2.14
 */


/**
 * g_regex_split:
 * @regex: a #GRegex structure
 * @string: the string to split with the pattern
 * @match_options: match time option flags
 *
 * Breaks the string on the pattern, and returns an array of the tokens.
 * If the pattern contains capturing parentheses, then the text for each
 * of the substrings will also be returned. If the pattern does not match
 * anywhere in the string, then the whole string is returned as the first
 * token.
 * As a special case, the result of splitting the empty string "" is an
 * empty vector, not a vector containing a single string. The reason for
 * this special case is that being able to represent a empty vector is
 * typically more useful than consistent handling of empty elements. If
 * you do need to represent empty elements, you'll need to check for the
 * empty string before calling this function.
 * A pattern that can match empty strings splits @string into separate
 * characters wherever it matches the empty string between characters.
 * For example splitting "ab c" using as a separator "\s*", you will get
 * "a", "b" and "c".
 *
 * Returns: a %NULL-terminated gchar ** array. Free it using g_strfreev()
 * Since: 2.14
 */


/**
 * g_regex_split_full:
 * @regex: a #GRegex structure
 * @string: (array length=string_len): the string to split with the pattern
 * @string_len: the length of @string, or -1 if @string is nul-terminated
 * @start_position: starting index of the string to match
 * @match_options: match time option flags
 * @max_tokens: the maximum number of tokens to split @string into. If this is less than 1, the string is split completely
 * @error: return location for a #GError
 *
 * Breaks the string on the pattern, and returns an array of the tokens.
 * If the pattern contains capturing parentheses, then the text for each
 * of the substrings will also be returned. If the pattern does not match
 * anywhere in the string, then the whole string is returned as the first
 * token.
 * As a special case, the result of splitting the empty string "" is an
 * empty vector, not a vector containing a single string. The reason for
 * this special case is that being able to represent a empty vector is
 * typically more useful than consistent handling of empty elements. If
 * you do need to represent empty elements, you'll need to check for the
 * empty string before calling this function.
 * A pattern that can match empty strings splits @string into separate
 * characters wherever it matches the empty string between characters.
 * For example splitting "ab c" using as a separator "\s*", you will get
 * "a", "b" and "c".
 * Setting @start_position differs from just passing over a shortened
 * string and setting #G_REGEX_MATCH_NOTBOL in the case of a pattern
 * that begins with any kind of lookbehind assertion, such as "\b".
 *
 * Returns: a %NULL-terminated gchar ** array. Free it using g_strfreev()
 * Since: 2.14
 */


/**
 * g_regex_split_simple:
 * @pattern: the regular expression
 * @string: the string to scan for matches
 * @compile_options: compile options for the regular expression, or 0
 * @match_options: match options, or 0
 *
 * Breaks the string on the pattern, and returns an array of
 * the tokens. If the pattern contains capturing parentheses,
 * then the text for each of the substrings will also be returned.
 * If the pattern does not match anywhere in the string, then the
 * whole string is returned as the first token.
 * This function is equivalent to g_regex_split() but it does
 * not require to compile the pattern with g_regex_new(), avoiding
 * some lines of code when you need just to do a split without
 * extracting substrings, capture counts, and so on.
 * If this function is to be called on the same @pattern more than
 * once, it's more efficient to compile the pattern once with
 * g_regex_new() and then use g_regex_split().
 * As a special case, the result of splitting the empty string ""
 * is an empty vector, not a vector containing a single string.
 * The reason for this special case is that being able to represent
 * a empty vector is typically more useful than consistent handling
 * of empty elements. If you do need to represent empty elements,
 * you'll need to check for the empty string before calling this
 * function.
 * A pattern that can match empty strings splits @string into
 * separate characters wherever it matches the empty string between
 * characters. For example splitting "ab c" using as a separator
 * "\s*", you will get "a", "b" and "c".
 *
 * Returns: a %NULL-terminated array of strings. Free it using g_strfreev()
 * Since: 2.14
 */


/**
 * g_regex_unref:
 * @regex: a #GRegex
 *
 * Decreases reference count of @regex by 1. When reference count drops
 * to zero, it frees all the memory associated with the regex structure.
 *
 * Since: 2.14
 */


/**
 * g_relation_count:
 * @relation: a #GRelation.
 * @key: the value to compare with.
 * @field: the field of each record to match.
 * @Returns: the number of matches.
 *
 * Returns the number of tuples in a #GRelation that have the given
 * value in the given field.
 *
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_relation_delete:
 * @relation: a #GRelation.
 * @key: the value to compare with.
 * @field: the field of each record to match.
 * @Returns: the number of records deleted.
 *
 * Deletes any records from a #GRelation that have the given key value
 * in the given field.
 *
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_relation_destroy:
 * @relation: a #GRelation.
 *
 * Destroys the #GRelation, freeing all memory allocated. However, it
 * does not free memory allocated for the tuple data, so you should
 * free that first if appropriate.
 *
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_relation_exists:
 * @relation: a #GRelation.
 * @Varargs: the fields of the record to compare. The number must match the number of fields in the #GRelation.
 * @Returns: %TRUE if a record matches.
 *
 * Returns %TRUE if a record with the given values exists in a
 * #GRelation. Note that the values are compared directly, so that, for
 * example, two copies of the same string will not match.
 *
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_relation_index:
 * @relation: a #GRelation.
 * @field: the field to index, counting from 0.
 * @hash_func: a function to produce a hash value from the field data.
 * @key_equal_func: a function to compare two values of the given field.
 *
 * Creates an index on the given field. Note that this must be called
 * before any records are added to the #GRelation.
 *
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_relation_insert:
 * @relation: a #GRelation.
 * @Varargs: the fields of the record to add. These must match the number of fields in the #GRelation, and of type #gpointer or #gconstpointer.
 *
 * Inserts a record into a #GRelation.
 *
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_relation_new:
 * @fields: the number of fields.
 * @Returns: a new #GRelation.
 *
 * Creates a new #GRelation with the given number of fields. Note that
 * currently the number of fields must be 2.
 *
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_relation_print:
 * @relation: a #GRelation.
 *
 * Outputs information about all records in a #GRelation, as well as
 * the indexes. It is for debugging.
 *
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_relation_select:
 * @relation: a #GRelation.
 * @key: the value to compare with.
 * @field: the field of each record to match.
 * @Returns: the records (tuples) that matched.
 *
 * Returns all of the tuples which have the given key in the given
 * field. Use g_tuples_index() to access the returned records. The
 * returned records should be freed with g_tuples_destroy().
 *
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_reload_user_special_dirs_cache:
 *
 * Resets the cache used for g_get_user_special_dir(), so
 * that the latest on-disk version is used. Call this only
 * if you just changed the data on disk yourself.
 * Due to threadsafety issues this may cause leaking of strings
 * that were previously returned from g_get_user_special_dir()
 * that can't be freed. We ensure to only leak the data for
 * the directories that actually changed value though.
 *
 * Since: 2.22
 */


/**
 * g_remove:
 * @filename: a pathname in the GLib file name encoding (UTF-8 on Windows)
 *
 * A wrapper for the POSIX remove() function. The remove() function
 * deletes a name from the filesystem.
 * See your C library manual for more details about how remove() works
 * on your system. On Unix, remove() removes also directories, as it
 * calls unlink() for files and rmdir() for directories. On Windows,
 * although remove() in the C library only works for files, this
 * function tries first remove() and then if that fails rmdir(), and
 * thus works for both files and directories. Note however, that on
 * Windows, it is in general not possible to remove a file that is
 * open to some process, or mapped into memory.
 * If this function fails on Windows you can't infer too much from the
 * errno value. rmdir() is tried regardless of what caused remove() to
 * fail. Any errno value set by remove() will be overwritten by that
 * set by rmdir().
 * occurred
 *
 * Returns: 0 if the file was successfully removed, -1 if an error
 * Since: 2.6
 */


/**
 * g_rename:
 * @oldfilename: a pathname in the GLib file name encoding (UTF-8 on Windows)
 * @newfilename: a pathname in the GLib file name encoding
 *
 * A wrapper for the POSIX rename() function. The rename() function
 * renames a file, moving it between directories if required.
 * See your C library manual for more details about how rename() works
 * on your system. It is not possible in general on Windows to rename
 * a file that is open to some process.
 *
 * Returns: 0 if the renaming succeeded, -1 if an error occurred
 * Since: 2.6
 */


/**
 * g_renew:
 * @struct_type: the type of the elements to allocate
 * @mem: the currently allocated memory
 * @n_structs: the number of elements to allocate
 *
 * Reallocates the memory pointed to by @mem, so that it now has space for
 * the memory, which may have been moved.
 * Care is taken to avoid overflow when calculating the size of the allocated block.
 *
 * Returns: a pointer to the new allocated memory, cast to a pointer to @struct_type
 */


/**
 * g_rmdir:
 * @filename: a pathname in the GLib file name encoding (UTF-8 on Windows)
 *
 * A wrapper for the POSIX rmdir() function. The rmdir() function
 * deletes a directory from the filesystem.
 * See your C library manual for more details about how rmdir() works
 * on your system.
 * occurred
 *
 * Returns: 0 if the directory was successfully removed, -1 if an error
 * Since: 2.6
 */


/**
 * g_sequence_append:
 * @seq: a #GSequence
 * @data: the data for the new item
 *
 * Adds a new item to the end of @seq.
 *
 * Returns: an iterator pointing to the new item
 * Since: 2.14
 */


/**
 * g_sequence_foreach:
 * @seq: a #GSequence
 * @func: the function to call for each item in @seq
 * @user_data: user data passed to @func
 *
 * Calls @func for each item in the sequence passing @user_data
 * to the function.
 *
 * Since: 2.14
 */


/**
 * g_sequence_foreach_range:
 * @begin: a #GSequenceIter
 * @end: a #GSequenceIter
 * @func: a #GFunc
 * @user_data: user data passed to @func
 *
 * Calls @func for each item in the range (@begin, @end) passing
 *
 * Since: 2.14
 */


/**
 * g_sequence_free:
 * @seq: a #GSequence
 *
 * Frees the memory allocated for @seq. If @seq has a data destroy
 * function associated with it, that function is called on all items in
 *
 * Since: 2.14
 */


/**
 * g_sequence_get:
 * @iter: a #GSequenceIter
 *
 * Returns the data that @iter points to.
 *
 * Returns: the data that @iter points to
 * Since: 2.14
 */


/**
 * g_sequence_get_begin_iter:
 * @seq: a #GSequence
 *
 * Returns the begin iterator for @seq.
 *
 * Returns: the begin iterator for @seq.
 * Since: 2.14
 */


/**
 * g_sequence_get_end_iter:
 * @seq: a #GSequence
 *
 * Returns the end iterator for @seg
 *
 * Returns: the end iterator for @seq
 * Since: 2.14
 */


/**
 * g_sequence_get_iter_at_pos:
 * @seq: a #GSequence
 * @pos: a position in @seq, or -1 for the end.
 *
 * Returns the iterator at position @pos. If @pos is negative or larger
 * than the number of items in @seq, the end iterator is returned.
 *
 * Returns: The #GSequenceIter at position @pos
 * Since: 2.14
 */


/**
 * g_sequence_get_length:
 * @seq: a #GSequence
 *
 * Returns the length of @seq
 *
 * Returns: the length of @seq
 * Since: 2.14
 */


/**
 * g_sequence_insert_before:
 * @iter: a #GSequenceIter
 * @data: the data for the new item
 *
 * Inserts a new item just before the item pointed to by @iter.
 *
 * Returns: an iterator pointing to the new item
 * Since: 2.14
 */


/**
 * g_sequence_insert_sorted:
 * @seq: a #GSequence
 * @data: the data to insert
 * @cmp_func: the function used to compare items in the sequence
 * @cmp_data: user data passed to @cmp_func.
 *
 * Inserts @data into @sequence using @func to determine the new
 * position. The sequence must already be sorted according to @cmp_func;
 * otherwise the new position of @data is undefined.
 * It should return 0 if the items are equal, a negative value
 * if the first item comes before the second, and a positive value
 * if the second  item comes before the first.
 *
 * Returns: a #GSequenceIter pointing to the new item.
 * Since: 2.14
 */


/**
 * g_sequence_insert_sorted_iter:
 * @seq: a #GSequence
 * @data: data for the new item
 * @iter_cmp: the function used to compare iterators in the sequence
 * @cmp_data: user data passed to @cmp_func
 *
 * Like g_sequence_insert_sorted(), but uses
 * a #GSequenceIterCompareFunc instead of a #GCompareDataFunc as
 * the compare function.
 * It should return 0 if the iterators are equal, a negative
 * value if the first iterator comes before the second, and a
 * positive value if the second iterator comes before the first.
 * It is called with two iterators pointing into @seq. It should
 * return 0 if the iterators are equal, a negative value if the
 * first iterator comes before the second, and a positive value
 * if the second iterator comes before the first.
 *
 * Returns: a #GSequenceIter pointing to the new item
 * Since: 2.14
 */


/**
 * g_sequence_iter_compare:
 * @a: a #GSequenceIter
 * @b: a #GSequenceIter
 *
 * Returns a negative number if @a comes before @b, 0 if they are equal,
 * and a positive number if @a comes after @b.
 * The @a and @b iterators must point into the same sequence.
 * equal, and a positive number if @a comes after @b.
 *
 * Returns: A negative number if @a comes before @b, 0 if they are
 * Since: 2.14
 */


/**
 * g_sequence_iter_get_position:
 * @iter: a #GSequenceIter
 *
 * Returns the position of @iter
 *
 * Returns: the position of @iter
 * Since: 2.14
 */


/**
 * g_sequence_iter_get_sequence:
 * @iter: a #GSequenceIter
 *
 * Returns the #GSequence that @iter points into.
 *
 * Returns: the #GSequence that @iter points into.
 * Since: 2.14
 */


/**
 * g_sequence_iter_is_begin:
 * @iter: a #GSequenceIter
 *
 * Returns whether @iter is the begin iterator
 *
 * Returns: whether @iter is the begin iterator
 * Since: 2.14
 */


/**
 * g_sequence_iter_is_end:
 * @iter: a #GSequenceIter
 *
 * Returns whether @iter is the end iterator
 *
 * Returns: Whether @iter is the end iterator.
 * Since: 2.14
 */


/**
 * g_sequence_iter_move:
 * @iter: a #GSequenceIter
 * @delta: A positive or negative number indicating how many positions away from @iter the returned #GSequenceIter will be.
 *
 * Returns the #GSequenceIter which is @delta positions away from @iter.
 * If @iter is closer than -@delta positions to the beginning of the sequence,
 * the begin iterator is returned. If @iter is closer than @delta positions
 * to the end of the sequence, the end iterator is returned.
 *
 * Returns: a #GSequenceIter which is @delta positions away from @iter.
 * Since: 2.14
 */


/**
 * g_sequence_iter_next:
 * @iter: a #GSequenceIter
 *
 * Returns an iterator pointing to the next position after @iter. If
 *
 * Returns: a #GSequenceIter pointing to the next position after @iter.
 * Since: 2.14
 */


/**
 * g_sequence_iter_prev:
 * @iter: a #GSequenceIter
 *
 * Returns an iterator pointing to the previous position before @iter. If
 *
 * Returns: a #GSequenceIter pointing to the previous position before
 * Since: 2.14
 */


/**
 * g_sequence_lookup:
 * @seq: a #GSequence
 * @data: data to lookup
 * @cmp_func: the function used to compare items in the sequence
 * @cmp_data: user data passed to @cmp_func.
 *
 * Returns an iterator pointing to the position of the first item found
 * equal to @data according to @cmp_func and @cmp_data. If more than one
 * item is equal, it is not guaranteed that it is the first which is
 * returned. In that case, you can use g_sequence_iter_next() and
 * g_sequence_iter_prev() to get others.
 * It should return 0 if the items are equal, a negative value if
 * the first item comes before the second, and a positive value if
 * the second item comes before the first.
 * first item found equal to @data according to @cmp_func and @cmp_data.
 *
 * Returns: an #GSequenceIter pointing to the position of the
 * Since: 2.28
 */


/**
 * g_sequence_lookup_iter:
 * @seq: a #GSequence
 * @data: data to lookup
 * @iter_cmp: the function used to compare iterators in the sequence
 * @cmp_data: user data passed to @iter_cmp
 *
 * Like g_sequence_lookup(), but uses a #GSequenceIterCompareFunc
 * instead of a #GCompareDataFunc as the compare function.
 * It should return 0 if the iterators are equal, a negative value
 * if the first iterator comes before the second, and a positive
 * value if the second iterator comes before the first.
 * the first item found equal to @data according to @cmp_func
 * and @cmp_data.
 *
 * Returns: an #GSequenceIter pointing to the position of
 * Since: 2.28
 */


/**
 * g_sequence_move:
 * @src: a #GSequenceIter pointing to the item to move
 * @dest: a #GSequenceIter pointing to the position to which the item is moved.
 *
 * Moves the item pointed to by @src to the position indicated by @dest.
 * After calling this function @dest will point to the position immediately
 * after @src. It is allowed for @src and @dest to point into different
 * sequences.
 *
 * Since: 2.14
 */


/**
 * g_sequence_move_range:
 * @dest: a #GSequenceIter
 * @begin: a #GSequenceIter
 * @end: a #GSequenceIter
 *
 * Inserts the (@begin, @end) range at the destination pointed to by ptr.
 * The @begin and @end iters must point into the same sequence. It is
 * allowed for @dest to point to a different sequence than the one pointed
 * into by @begin and @end.
 * If @dest is NULL, the range indicated by @begin and @end is
 * removed from the sequence. If @dest iter points to a place within
 * the (@begin, @end) range, the range does not move.
 *
 * Since: 2.14
 */


/**
 * g_sequence_new:
 * @data_destroy: a #GDestroyNotify function, or %NULL
 *
 * Creates a new GSequence. The @data_destroy function, if non-%NULL will
 * be called on all items when the sequence is destroyed and on items that
 * are removed from the sequence.
 *
 * Returns: a new #GSequence
 * Since: 2.14
 */


/**
 * g_sequence_prepend:
 * @seq: a #GSequence
 * @data: the data for the new item
 *
 * Adds a new item to the front of @seq
 *
 * Returns: an iterator pointing to the new item
 * Since: 2.14
 */


/**
 * g_sequence_range_get_midpoint:
 * @begin: a #GSequenceIter
 * @end: a #GSequenceIter
 *
 * Finds an iterator somewhere in the range (@begin, @end). This
 * iterator will be close to the middle of the range, but is not
 * guaranteed to be <emphasis>exactly</emphasis> in the middle.
 * The @begin and @end iterators must both point to the same sequence and
 * (@begin, @end) range.
 *
 * Returns: A #GSequenceIter pointing somewhere in the
 * Since: 2.14
 */


/**
 * g_sequence_remove:
 * @iter: a #GSequenceIter
 *
 * Removes the item pointed to by @iter. It is an error to pass the
 * end iterator to this function.
 * If the sequnce has a data destroy function associated with it, this
 * function is called on the data for the removed item.
 *
 * Since: 2.14
 */


/**
 * g_sequence_remove_range:
 * @begin: a #GSequenceIter
 * @end: a #GSequenceIter
 *
 * Removes all items in the (@begin, @end) range.
 * If the sequence has a data destroy function associated with it, this
 * function is called on the data for the removed items.
 *
 * Since: 2.14
 */


/**
 * g_sequence_search:
 * @seq: a #GSequence
 * @data: data for the new item
 * @cmp_func: the function used to compare items in the sequence
 * @cmp_data: user data passed to @cmp_func.
 *
 * Returns an iterator pointing to the position where @data would
 * be inserted according to @cmp_func and @cmp_data.
 * It should return 0 if the items are equal, a negative value if
 * the first item comes before the second, and a positive value if
 * the second item comes before the first.
 * If you are simply searching for an existing element of the sequence,
 * consider using g_sequence_lookup().
 * would have been inserted according to @cmp_func and @cmp_data.
 *
 * Returns: an #GSequenceIter pointing to the position where @data
 * Since: 2.14
 */


/**
 * g_sequence_search_iter:
 * @seq: a #GSequence
 * @data: data for the new item
 * @iter_cmp: the function used to compare iterators in the sequence
 * @cmp_data: user data passed to @iter_cmp
 *
 * Like g_sequence_search(), but uses a #GSequenceIterCompareFunc
 * instead of a #GCompareDataFunc as the compare function.
 * It should return 0 if the iterators are equal, a negative value
 * if the first iterator comes before the second, and a positive
 * value if the second iterator comes before the first.
 * If you are simply searching for an existing element of the sequence,
 * consider using g_sequence_lookup_iter().
 * where @data would have been inserted according to @iter_cmp
 * and @cmp_data.
 *
 * Returns: a #GSequenceIter pointing to the position in @seq
 * Since: 2.14
 */


/**
 * g_sequence_set:
 * @iter: a #GSequenceIter
 * @data: new data for the item
 *
 * Changes the data for the item pointed to by @iter to be @data. If
 * the sequence has a data destroy function associated with it, that
 * function is called on the existing data that @iter pointed to.
 *
 * Since: 2.14
 */


/**
 * g_sequence_sort:
 * @seq: a #GSequence
 * @cmp_func: the function used to sort the sequence
 * @cmp_data: user data passed to @cmp_func
 *
 * Sorts @seq using @cmp_func.
 * return 0 if they are equal, a negative value if the
 * first comes before the second, and a positive value
 * if the second comes before the first.
 *
 * Since: 2.14
 */


/**
 * g_sequence_sort_changed:
 * @iter: A #GSequenceIter
 * @cmp_func: the function used to compare items in the sequence
 * @cmp_data: user data passed to @cmp_func.
 *
 * Moves the data pointed to a new position as indicated by @cmp_func. This
 * function should be called for items in a sequence already sorted according
 * to @cmp_func whenever some aspect of an item changes so that @cmp_func
 * may return different values for that item.
 * It should return 0 if the items are equal, a negative value if
 * the first item comes before the second, and a positive value if
 * the second item comes before the first.
 *
 * Since: 2.14
 */


/**
 * g_sequence_sort_changed_iter:
 * @iter: a #GSequenceIter
 * @iter_cmp: the function used to compare iterators in the sequence
 * @cmp_data: user data passed to @cmp_func
 *
 * Like g_sequence_sort_changed(), but uses
 * a #GSequenceIterCompareFunc instead of a #GCompareDataFunc as
 * the compare function.
 * return 0 if the iterators are equal, a negative value if the first
 * iterator comes before the second, and a positive value if the second
 * iterator comes before the first.
 *
 * Since: 2.14
 */


/**
 * g_sequence_sort_iter:
 * @seq: a #GSequence
 * @cmp_func: the function used to compare iterators in the sequence
 * @cmp_data: user data passed to @cmp_func
 *
 * Like g_sequence_sort(), but uses a #GSequenceIterCompareFunc instead
 * of a GCompareDataFunc as the compare function
 * return 0 if the iterators are equal, a negative value if the first
 * iterator comes before the second, and a positive value if the second
 * iterator comes before the first.
 *
 * Since: 2.14
 */


/**
 * g_sequence_swap:
 * @a: a #GSequenceIter
 * @b: a #GSequenceIter
 *
 * Swaps the items pointed to by @a and @b. It is allowed for @a and @b
 * to point into difference sequences.
 *
 * Since: 2.14
 */


/**
 * g_set_application_name:
 * @application_name: localized name of the application
 *
 * Sets a human-readable name for the application. This name should be
 * localized if possible, and is intended for display to the user.
 * Contrast with g_set_prgname(), which sets a non-localized name.
 * g_set_prgname() will be called automatically by gtk_init(),
 * but g_set_application_name() will not.
 * Note that for thread safety reasons, this function can only
 * be called once.
 * The application name will be used in contexts such as error messages,
 * or when displaying an application's name in the task list.
 *
 * Since: 2.2
 */


/**
 * g_set_error:
 * @err: a return location for a #GError, or %NULL
 * @domain: error domain
 * @code: error code
 * @format: printf()-style format
 * @Varargs: args for @format
 *
 * Does nothing if @err is %NULL; if @err is non-%NULL, then *@err
 * must be %NULL. A new #GError is created and assigned to *@err.
 */


/**
 * g_set_error_literal:
 * @err: a return location for a #GError, or %NULL
 * @domain: error domain
 * @code: error code
 * @message: error message
 *
 * Does nothing if @err is %NULL; if @err is non-%NULL, then *@err
 * must be %NULL. A new #GError is created and assigned to *@err.
 * Unlike g_set_error(), @message is not a printf()-style format string.
 * Use this function if @message contains text you don't have control over,
 * that could include printf() escape sequences.
 *
 * Since: 2.18
 */


/**
 * g_set_prgname:
 * @prgname: the name of the program.
 *
 * Sets the name of the program. This name should <emphasis>not</emphasis>
 * be localized, contrast with g_set_application_name(). Note that for
 * thread-safety reasons this function can only be called once.
 */


/**
 * g_setenv:
 * @variable: the environment variable to set, must not contain '='.
 * @value: the value for to set the variable to.
 * @overwrite: whether to change the variable if it already exists.
 *
 * Sets an environment variable. Both the variable's name and value
 * should be in the GLib file name encoding. On UNIX, this means that
 * they can be any sequence of bytes. On Windows, they should be in
 * UTF-8.
 * Note that on some systems, when variables are overwritten, the memory
 * used for the previous variables and its value isn't reclaimed.
 *
 * Returns: %FALSE if the environment variable couldn't be set.
 * Since: 2.4
 */


/**
 * g_shell_parse_argv:
 * @command_line: command line to parse
 * @argcp: (out): return location for number of args
 * @argvp: (out) (array length=argcp zero-terminated=1): return location for array of args
 * @error: return location for error
 *
 * Parses a command line into an argument vector, in much the same way
 * the shell would, but without many of the expansions the shell would
 * perform (variable expansion, globs, operators, filename expansion,
 * etc. are not supported). The results are defined to be the same as
 * those you would get from a UNIX98 /bin/sh, as long as the input
 * contains none of the unsupported shell expansions. If the input
 * does contain such expansions, they are passed through
 * literally. Possible errors are those from the #G_SHELL_ERROR
 * domain. Free the returned vector with g_strfreev().
 *
 * Returns: %TRUE on success, %FALSE if error set
 */


/**
 * g_shell_quote:
 * @unquoted_string: a literal string
 *
 * Quotes a string so that the shell (/bin/sh) will interpret the
 * quoted string to mean @unquoted_string. If you pass a filename to
 * the shell, for example, you should first quote it with this
 * function.  The return value must be freed with g_free(). The
 * quoting style used is undefined (single or double quotes may be
 * used).
 *
 * Returns: quoted string
 */


/**
 * g_shell_unquote:
 * @quoted_string: shell-quoted string
 * @error: error return location or NULL
 *
 * Unquotes a string as the shell (/bin/sh) would. Only handles
 * quotes; if a string contains file globs, arithmetic operators,
 * variables, backticks, redirections, or other special-to-the-shell
 * features, the result will be different from the result a real shell
 * would produce (the variables, backticks, etc. will be passed
 * through literally instead of being expanded). This function is
 * guaranteed to succeed if applied to the result of
 * g_shell_quote(). If it fails, it returns %NULL and sets the
 * error. The @quoted_string need not actually contain quoted or
 * escaped text; g_shell_unquote() simply goes through the string and
 * unquotes/unescapes anything that the shell would. Both single and
 * double quotes are handled, as are escapes including escaped
 * newlines. The return value must be freed with g_free(). Possible
 * errors are in the #G_SHELL_ERROR domain.
 * Shell quoting rules are a bit strange. Single quotes preserve the
 * literal string exactly. escape sequences are not allowed; not even
 * \' - if you want a ' in the quoted text, you have to do something
 * like 'foo'\''bar'.  Double quotes allow $, `, ", \, and newline to
 * be escaped with backslash. Otherwise double quotes preserve things
 * literally.
 *
 * Returns: an unquoted string
 */


/**
 * g_signal_connect:
 * @instance: the instance to connect to.
 * @detailed_signal: a string of the form "signal-name::detail".
 * @c_handler: the #GCallback to connect.
 * @data: data to pass to @c_handler calls.
 *
 * Connects a #GCallback function to a signal for a particular object.
 * The handler will be called before the default handler of the signal.
 *
 * Returns: the handler id
 */


/**
 * g_signal_connect_after:
 * @instance: the instance to connect to.
 * @detailed_signal: a string of the form "signal-name::detail".
 * @c_handler: the #GCallback to connect.
 * @data: data to pass to @c_handler calls.
 *
 * Connects a #GCallback function to a signal for a particular object.
 * The handler will be called after the default handler of the signal.
 *
 * Returns: the handler id
 */


/**
 * g_signal_connect_swapped:
 * @instance: the instance to connect to.
 * @detailed_signal: a string of the form "signal-name::detail".
 * @c_handler: the #GCallback to connect.
 * @data: data to pass to @c_handler calls.
 *
 * Connects a #GCallback function to a signal for a particular object.
 * The instance on which the signal is emitted and @data will be swapped when
 * calling the handler.
 *
 * Returns: the handler id
 */


/**
 * g_signal_handlers_block_by_func:
 * @instance: The instance to block handlers from.
 * @func: The C closure callback of the handlers (useless for non-C closures).
 * @data: The closure data of the handlers' closures.
 *
 * Blocks all handlers on an instance that match @func and @data.
 *
 * Returns: The number of handlers that matched.
 */


/**
 * g_signal_handlers_disconnect_by_func:
 * @instance: The instance to remove handlers from.
 * @func: The C closure callback of the handlers (useless for non-C closures).
 * @data: The closure data of the handlers' closures.
 *
 * Disconnects all handlers on an instance that match @func and @data.
 *
 * Returns: The number of handlers that matched.
 */


/**
 * g_signal_handlers_unblock_by_func:
 * @instance: The instance to unblock handlers from.
 * @func: The C closure callback of the handlers (useless for non-C closures).
 * @data: The closure data of the handlers' closures.
 *
 * Unblocks all handlers on an instance that match @func and @data.
 *
 * Returns: The number of handlers that matched.
 */


/**
 * g_slist_alloc:
 * @Returns: a pointer to the newly-allocated #GSList element.
 *
 * Allocates space for one #GSList element. It is called by the
 * g_slist_append(), g_slist_prepend(), g_slist_insert() and
 * g_slist_insert_sorted() functions and so is rarely used on its own.
 */


/**
 * g_slist_append:
 * @list: a #GSList
 * @data: the data for the new element
 *
 * Adds a new element on to the end of the list.
 * <note><para>
 * The return value is the new start of the list, which may
 * have changed, so make sure you store the new value.
 * </para></note>
 * <note><para>
 * Note that g_slist_append() has to traverse the entire list
 * to find the end, which is inefficient when adding multiple
 * elements. A common idiom to avoid the inefficiency is to prepend
 * the elements and reverse the list when all elements have been added.
 * </para></note>
 * |[
 * /&ast; Notice that these are initialized to the empty list. &ast;/
 * GSList *list = NULL, *number_list = NULL;
 * /&ast; This is a list of strings. &ast;/
 * list = g_slist_append (list, "first");
 * list = g_slist_append (list, "second");
 * /&ast; This is a list of integers. &ast;/
 * number_list = g_slist_append (number_list, GINT_TO_POINTER (27));
 * number_list = g_slist_append (number_list, GINT_TO_POINTER (14));
 * ]|
 *
 * Returns: the new start of the #GSList
 */


/**
 * g_slist_concat:
 * @list1: a #GSList
 * @list2: the #GSList to add to the end of the first #GSList
 *
 * Adds the second #GSList onto the end of the first #GSList.
 * Note that the elements of the second #GSList are not copied.
 * They are used directly.
 *
 * Returns: the start of the new #GSList
 */


/**
 * g_slist_copy:
 * @list: a #GSList
 *
 * Copies a #GSList.
 * <note><para>
 * Note that this is a "shallow" copy. If the list elements
 * consist of pointers to data, the pointers are copied but
 * the actual data isn't.
 * </para></note>
 *
 * Returns: a copy of @list
 */


/**
 * g_slist_delete_link:
 * @list: a #GSList
 * @link_: node to delete
 *
 * Removes the node link_ from the list and frees it.
 * Compare this to g_slist_remove_link() which removes the node
 * without freeing it.
 *
 * Returns: the new head of @list
 */


/**
 * g_slist_find:
 * @list: a #GSList
 * @data: the element data to find
 *
 * Finds the element in a #GSList which
 * contains the given data.
 * or %NULL if it is not found
 *
 * Returns: the found #GSList element,
 */


/**
 * g_slist_find_custom:
 * @list: a #GSList
 * @data: user data passed to the function
 * @func: the function to call for each element. It should return 0 when the desired element is found
 *
 * Finds an element in a #GSList, using a supplied function to
 * find the desired element. It iterates over the list, calling
 * the given function which should return 0 when the desired
 * element is found. The function takes two #gconstpointer arguments,
 * the #GSList element's data as the first argument and the
 * given user data.
 *
 * Returns: the found #GSList element, or %NULL if it is not found
 */


/**
 * g_slist_foreach:
 * @list: a #GSList
 * @func: the function to call with each element's data
 * @user_data: user data to pass to the function
 *
 * Calls a function for each element of a #GSList.
 */


/**
 * g_slist_free:
 * @list: a #GSList
 *
 * Frees all of the memory used by a #GSList.
 * The freed elements are returned to the slice allocator.
 * <note><para>
 * If list elements contain dynamically-allocated memory,
 * you should either use g_slist_free_full() or free them manually
 * first.
 * </para></note>
 */


/**
 * g_slist_free1:
 *
 * A macro which does the same as g_slist_free_1().
 *
 * Since: 2.10
 */


/**
 * g_slist_free_1:
 * @list: a #GSList element
 *
 * Frees one #GSList element.
 * It is usually used after g_slist_remove_link().
 */


/**
 * g_slist_free_full:
 * @list: a pointer to a #GSList
 * @free_func: the function to be called to free each element's data
 *
 * Convenience method, which frees all the memory used by a #GSList, and
 * calls the specified destroy function on every element's data.
 *
 * Since: 2.28
 */


/**
 * g_slist_index:
 * @list: a #GSList
 * @data: the data to find
 *
 * Gets the position of the element containing
 * the given data (starting from 0).
 * or -1 if the data is not found
 *
 * Returns: the index of the element containing the data,
 */


/**
 * g_slist_insert:
 * @list: a #GSList
 * @data: the data for the new element
 * @position: the position to insert the element. If this is negative, or is larger than the number of elements in the list, the new element is added on to the end of the list.
 *
 * Inserts a new element into the list at the given position.
 *
 * Returns: the new start of the #GSList
 */


/**
 * g_slist_insert_before:
 * @slist: a #GSList
 * @sibling: node to insert @data before
 * @data: data to put in the newly-inserted node
 *
 * Inserts a node before @sibling containing @data.
 *
 * Returns: the new head of the list.
 */


/**
 * g_slist_insert_sorted:
 * @list: a #GSList
 * @data: the data for the new element
 * @func: the function to compare elements in the list. It should return a number > 0 if the first parameter comes after the second parameter in the sort order.
 *
 * Inserts a new element into the list, using the given
 * comparison function to determine its position.
 *
 * Returns: the new start of the #GSList
 */


/**
 * g_slist_insert_sorted_with_data:
 * @list: a #GSList
 * @data: the data for the new element
 * @func: the function to compare elements in the list. It should return a number > 0 if the first parameter comes after the second parameter in the sort order.
 * @user_data: data to pass to comparison function
 *
 * Inserts a new element into the list, using the given
 * comparison function to determine its position.
 *
 * Returns: the new start of the #GSList
 * Since: 2.10
 */


/**
 * g_slist_last:
 * @list: a #GSList
 *
 * Gets the last element in a #GSList.
 * <note><para>
 * This function iterates over the whole list.
 * </para></note>
 * or %NULL if the #GSList has no elements
 *
 * Returns: the last element in the #GSList,
 */


/**
 * g_slist_length:
 * @list: a #GSList
 *
 * Gets the number of elements in a #GSList.
 * <note><para>
 * This function iterates over the whole list to
 * count its elements.
 * </para></note>
 *
 * Returns: the number of elements in the #GSList
 */


/**
 * g_slist_next:
 * @slist: an element in a #GSList.
 * @Returns: the next element, or %NULL if there are no more elements.
 *
 * A convenience macro to get the next element in a #GSList.
 */


/**
 * g_slist_nth:
 * @list: a #GSList
 * @n: the position of the element, counting from 0
 *
 * Gets the element at the given position in a #GSList.
 * the end of the #GSList
 *
 * Returns: the element, or %NULL if the position is off
 */


/**
 * g_slist_nth_data:
 * @list: a #GSList
 * @n: the position of the element
 *
 * Gets the data of the element at the given position.
 * is off the end of the #GSList
 *
 * Returns: the element's data, or %NULL if the position
 */


/**
 * g_slist_pop_allocator:
 *
 * Restores the previous #GAllocator, used when allocating #GSList
 * elements.
 * Note that this function is not available if GLib has been compiled
 * with <option>--disable-mem-pools</option>
 * to the <link linkend="glib-Memory-Slices">slice
 * allocator</link>
 *
 * Deprecated: 2.10: It does nothing, since #GSList has been converted
 */


/**
 * g_slist_position:
 * @list: a #GSList
 * @llink: an element in the #GSList
 *
 * Gets the position of the given element
 * in the #GSList (starting from 0).
 * or -1 if the element is not found
 *
 * Returns: the position of the element in the #GSList,
 */


/**
 * g_slist_prepend:
 * @list: a #GSList
 * @data: the data for the new element
 *
 * Adds a new element on to the start of the list.
 * <note><para>
 * The return value is the new start of the list, which
 * may have changed, so make sure you store the new value.
 * </para></note>
 * |[
 * /&ast; Notice that it is initialized to the empty list. &ast;/
 * GSList *list = NULL;
 * list = g_slist_prepend (list, "last");
 * list = g_slist_prepend (list, "first");
 * ]|
 *
 * Returns: the new start of the #GSList
 */


/**
 * g_slist_push_allocator:
 * @dummy: the #GAllocator to use when allocating #GSList elements.
 *
 * Sets the allocator to use to allocate #GSList elements. Use
 * g_slist_pop_allocator() to restore the previous allocator.
 * Note that this function is not available if GLib has been compiled
 * with <option>--disable-mem-pools</option>
 * to the <link linkend="glib-Memory-Slices">slice
 * allocator</link>
 *
 * Deprecated: 2.10: It does nothing, since #GSList has been converted
 */


/**
 * g_slist_remove:
 * @list: a #GSList
 * @data: the data of the element to remove
 *
 * Removes an element from a #GSList.
 * If two elements contain the same data, only the first is removed.
 * If none of the elements contain the data, the #GSList is unchanged.
 *
 * Returns: the new start of the #GSList
 */


/**
 * g_slist_remove_all:
 * @list: a #GSList
 * @data: data to remove
 *
 * Removes all list nodes with data equal to @data.
 * Returns the new head of the list. Contrast with
 * g_slist_remove() which removes only the first node
 * matching the given data.
 *
 * Returns: new head of @list
 */


/**
 * g_slist_remove_link:
 * @list: a #GSList
 * @link_: an element in the #GSList
 *
 * Removes an element from a #GSList, without
 * freeing the element. The removed element's next
 * link is set to %NULL, so that it becomes a
 * self-contained list with one element.
 *
 * Returns: the new start of the #GSList, without the element
 */


/**
 * g_slist_reverse:
 * @list: a #GSList
 *
 * Reverses a #GSList.
 *
 * Returns: the start of the reversed #GSList
 */


/**
 * g_slist_sort:
 * @list: a #GSList
 * @compare_func: the comparison function used to sort the #GSList. This function is passed the data from 2 elements of the #GSList and should return 0 if they are equal, a negative value if the first element comes before the second, or a positive value if the first element comes after the second.
 *
 * Sorts a #GSList using the given comparison function.
 *
 * Returns: the start of the sorted #GSList
 */


/**
 * g_slist_sort_with_data:
 * @list: a #GSList
 * @compare_func: comparison function
 * @user_data: data to pass to comparison function
 *
 * Like g_slist_sort(), but the sort function accepts a user data argument.
 *
 * Returns: new head of the list
 */


/**
 * g_snprintf:
 * @string: the buffer to hold the output.
 * @n: the maximum number of bytes to produce (including the terminating nul character).
 * @format: a standard printf() format string, but notice <link linkend="string-precision">string precision pitfalls</link>.
 * @Varargs: the arguments to insert in the output.
 *
 * A safer form of the standard sprintf() function. The output is guaranteed
 * to not exceed @n characters (including the terminating nul character), so
 * it is easy to ensure that a buffer overflow cannot occur.
 * See also g_strdup_printf().
 * In versions of GLib prior to 1.2.3, this function may return -1 if the
 * output was truncated, and the truncated string may not be nul-terminated.
 * In versions prior to 1.3.12, this function returns the length of the output
 * string.
 * The return value of g_snprintf() conforms to the snprintf()
 * function as standardized in ISO C99. Note that this is different from
 * traditional snprintf(), which returns the length of the output string.
 * The format string may contain positional parameters, as specified in
 * the Single Unix Specification.
 * was large enough.
 *
 * Returns: the number of bytes which would be produced if the buffer
 */


/**
 * g_source_add_child_source:
 * @child_source: a second #GSource that @source should "poll"
 *
 * Adds @child_source to @source as a "polled" source; when @source is
 * added to a #GMainContext, @child_source will be automatically added
 * with the same priority, when @child_source is triggered, it will
 * cause @source to dispatch (in addition to calling its own
 * callback), and when @source is destroyed, it will destroy
 * its own prepare/check functions indicate that it is ready.)
 * If you don't need @child_source to do anything on its own when it
 * triggers, you can call g_source_set_dummy_callback() on it to set a
 * callback that does nothing (except return %TRUE if appropriate).
 * is attached to it.
 *
 * Since: 2.28
 */


/**
 * g_source_add_poll:
 * @fd: a #GPollFD structure holding information about a file descriptor to watch.
 *
 * Adds a file descriptor to the set of file descriptors polled for
 * this source. This is usually combined with g_source_new() to add an
 * event source. The event source's check function will typically test
 * the @revents field in the #GPollFD struct and return %TRUE if events need
 * to be processed.
 */


/**
 * g_source_attach:
 * @source: a #GSource
 * @context: a #GMainContext (if %NULL, the default context will be used)
 *
 * Adds a #GSource to a @context so that it will be executed within
 * that context. Remove it by calling g_source_destroy().
 * #GMainContext.
 *
 * Returns: the ID (greater than 0) for the source within the
 */


/**
 * g_source_destroy:
 * @source: a #GSource
 *
 * Removes a source from its #GMainContext, if any, and mark it as
 * destroyed.  The source cannot be subsequently added to another
 * context.
 */


/**
 * g_source_get_can_recurse:
 * @source: a #GSource
 *
 * Checks whether a source is allowed to be called recursively.
 * see g_source_set_can_recurse().
 *
 * Returns: whether recursion is allowed.
 */


/**
 * g_source_get_context:
 * @source: a #GSource
 *
 * Gets the #GMainContext with which the source is associated.
 * Calling this function on a destroyed source is an error.
 * or %NULL if the context has not yet been added
 * to a source.
 *
 * Returns: the #GMainContext with which the source is associated,
 */


/**
 * g_source_get_current_time:
 * @source: a #GSource
 * @timeval: #GTimeVal structure in which to store current time.
 *
 * Gets the "current time" to be used when checking
 * this source. The advantage of calling this function over
 * calling g_get_current_time() directly is that when
 * checking multiple sources, GLib can cache a single value
 * instead of having to repeatedly get the system time.
 *
 * Deprecated: 2.28: use g_source_get_time() instead
 */


/**
 * g_source_get_id:
 * @source: a #GSource
 *
 * Returns the numeric ID for a particular source. The ID of a source
 * is a positive integer which is unique within a particular main loop
 * context. The reverse
 * mapping from ID to source is done by g_main_context_find_source_by_id().
 *
 * Returns: the ID (greater than 0) for the source
 */


/**
 * g_source_get_name:
 * @source: a #GSource
 *
 * Gets a name for the source, used in debugging and profiling.
 * The name may be #NULL if it has never been set with
 * g_source_set_name().
 *
 * Returns: the name of the source
 * Since: 2.26
 */


/**
 * g_source_get_priority:
 * @source: a #GSource
 *
 * Gets the priority of a source.
 *
 * Returns: the priority of the source
 */


/**
 * g_source_get_time:
 * @source: a #GSource
 *
 * Gets the time to be used when checking this source. The advantage of
 * calling this function over calling g_get_monotonic_time() directly is
 * that when checking multiple sources, GLib can cache a single value
 * instead of having to repeatedly get the system monotonic time.
 * The time here is the system monotonic time, if available, or some
 * other reasonable alternative otherwise.  See g_get_monotonic_time().
 *
 * Returns: the monotonic time in microseconds
 * Since: 2.28
 */


/**
 * g_source_is_destroyed:
 * @source: a #GSource
 *
 * Returns whether @source has been destroyed.
 * This is important when you operate upon your objects
 * from within idle handlers, but may have freed the object
 * before the dispatch of your idle handler.
 * |[
 * static gboolean
 * idle_callback (gpointer data)
 * {
 * SomeWidget *self = data;
 * GDK_THREADS_ENTER (<!-- -->);
 * /<!-- -->* do stuff with self *<!-- -->/
 * self->idle_id = 0;
 * GDK_THREADS_LEAVE (<!-- -->);
 * return FALSE;
 * }
 * static void
 * some_widget_do_stuff_later (SomeWidget *self)
 * {
 * self->idle_id = g_idle_add (idle_callback, self);
 * }
 * static void
 * some_widget_finalize (GObject *object)
 * {
 * SomeWidget *self = SOME_WIDGET (object);
 * if (self->idle_id)
 * g_source_remove (self->idle_id);
 * G_OBJECT_CLASS (parent_class)->finalize (object);
 * }
 * ]|
 * This will fail in a multi-threaded application if the
 * widget is destroyed before the idle handler fires due
 * to the use after free in the callback. A solution, to
 * this particular problem, is to check to if the source
 * has already been destroy within the callback.
 * |[
 * static gboolean
 * idle_callback (gpointer data)
 * {
 * SomeWidget *self = data;
 * GDK_THREADS_ENTER ();
 * if (!g_source_is_destroyed (g_main_current_source ()))
 * {
 * /<!-- -->* do stuff with self *<!-- -->/
 * }
 * GDK_THREADS_LEAVE ();
 * return FALSE;
 * }
 * ]|
 *
 * Returns: %TRUE if the source has been destroyed
 * Since: 2.12
 */


/**
 * g_source_new:
 * @source_funcs: structure containing functions that implement the sources behavior.
 * @struct_size: size of the #GSource structure to create.
 *
 * Creates a new #GSource structure. The size is specified to
 * allow creating structures derived from #GSource that contain
 * additional data. The size passed in must be at least
 * <literal>sizeof (GSource)</literal>.
 * The source will not initially be associated with any #GMainContext
 * and must be added to one with g_source_attach() before it will be
 * executed.
 *
 * Returns: the newly-created #GSource.
 */


/**
 * g_source_ref:
 * @source: a #GSource
 *
 * Increases the reference count on a source by one.
 *
 * Returns: @source
 */


/**
 * g_source_remove:
 * @tag: the ID of the source to remove.
 *
 * Removes the source with the given id from the default main context.
 * The id of
 * a #GSource is given by g_source_get_id(), or will be returned by the
 * functions g_source_attach(), g_idle_add(), g_idle_add_full(),
 * g_timeout_add(), g_timeout_add_full(), g_child_watch_add(),
 * g_child_watch_add_full(), g_io_add_watch(), and g_io_add_watch_full().
 * See also g_source_destroy(). You must use g_source_destroy() for sources
 * added to a non-default main context.
 *
 * Returns: %TRUE if the source was found and removed.
 */


/**
 * g_source_remove_by_funcs_user_data:
 * @funcs: The @source_funcs passed to g_source_new()
 * @user_data: the user data for the callback
 *
 * Removes a source from the default main loop context given the
 * source functions and user data. If multiple sources exist with the
 * same source functions and user data, only one will be destroyed.
 *
 * Returns: %TRUE if a source was found and removed.
 */


/**
 * g_source_remove_by_user_data:
 * @user_data: the user_data for the callback.
 *
 * Removes a source from the default main loop context given the user
 * data for the callback. If multiple sources exist with the same user
 * data, only one will be destroyed.
 *
 * Returns: %TRUE if a source was found and removed.
 */


/**
 * g_source_remove_child_source:
 * @child_source: a #GSource previously passed to g_source_add_child_source().
 *
 * Detaches @child_source from @source and destroys it.
 *
 * Since: 2.28
 */


/**
 * g_source_remove_poll:
 * @fd: a #GPollFD structure previously passed to g_source_add_poll().
 *
 * Removes a file descriptor from the set of file descriptors polled for
 * this source.
 */


/**
 * g_source_set_callback:
 * @source: the source
 * @func: a callback function
 * @data: the data to pass to callback function
 * @notify: a function to call when @data is no longer in use, or %NULL.
 *
 * Sets the callback function for a source. The callback for a source is
 * called from the source's dispatch function.
 * The exact type of @func depends on the type of source; ie. you
 * should not count on @func being called with @data as its first
 * parameter.
 * Typically, you won't use this function. Instead use functions specific
 * to the type of source you are using.
 */


/**
 * g_source_set_callback_indirect:
 * @source: the source
 * @callback_data: pointer to callback data "object"
 * @callback_funcs: functions for reference counting @callback_data and getting the callback and data
 *
 * Sets the callback function storing the data as a refcounted callback
 * "object". This is used internally. Note that calling
 * g_source_set_callback_indirect() assumes
 * an initial reference count on @callback_data, and thus
 * than @callback_funcs->ref.
 */


/**
 * g_source_set_can_recurse:
 * @source: a #GSource
 * @can_recurse: whether recursion is allowed for this source
 *
 * Sets whether a source can be called recursively. If @can_recurse is
 * %TRUE, then while the source is being dispatched then this source
 * will be processed normally. Otherwise, all processing of this
 * source is blocked until the dispatch function returns.
 */


/**
 * g_source_set_funcs:
 * @source: a #GSource
 * @funcs: the new #GSourceFuncs
 *
 * Sets the source functions (can be used to override
 * default implementations) of an unattached source.
 *
 * Since: 2.12
 */


/**
 * g_source_set_name:
 * @source: a #GSource
 * @name: debug name for the source
 *
 * Sets a name for the source, used in debugging and profiling.
 * The name defaults to #NULL.
 * The source name should describe in a human-readable way
 * what the source does. For example, "X11 event queue"
 * or "GTK+ repaint idle handler" or whatever it is.
 * It is permitted to call this function multiple times, but is not
 * recommended due to the potential performance impact.  For example,
 * one could change the name in the "check" function of a #GSourceFuncs
 * to include details like the event type in the source name.
 *
 * Since: 2.26
 */


/**
 * g_source_set_name_by_id:
 * @tag: a #GSource ID
 * @name: debug name for the source
 *
 * Sets the name of a source using its ID.
 * This is a convenience utility to set source names from the return
 * value of g_idle_add(), g_timeout_add(), etc.
 *
 * Since: 2.26
 */


/**
 * g_source_set_priority:
 * @source: a #GSource
 * @priority: the new priority.
 *
 * Sets the priority of a source. While the main loop is being run, a
 * source will be dispatched if it is ready to be dispatched and no
 * sources at a higher (numerically smaller) priority are ready to be
 * dispatched.
 */


/**
 * g_source_unref:
 * @source: a #GSource
 *
 * Decreases the reference count of a source by one. If the
 * resulting reference count is zero the source and associated
 * memory will be destroyed.
 */


/**
 * g_spaced_primes_closest:
 * @num: a #guint
 *
 * Gets the smallest prime number from a built-in array of primes which
 * is larger than @num. This is used within GLib to calculate the optimum
 * size of a #GHashTable.
 * The built-in array of primes ranges from 11 to 13845163 such that
 * each prime is approximately 1.5-2 times the previous prime.
 * which is larger than @num
 *
 * Returns: the smallest prime number from a built-in array of primes
 */


/**
 * g_spawn_async:
 * @working_directory: (allow-none): child's current working directory, or %NULL to inherit parent's
 * @argv: (array zero-terminated=1): child's argument vector
 * @envp: (array zero-terminated=1) (allow-none): child's environment, or %NULL to inherit parent's
 * @flags: flags from #GSpawnFlags
 * @child_setup: (scope async) (allow-none): function to run in the child just before exec()
 * @user_data: (closure): user data for @child_setup
 * @child_pid: (out) (allow-none): return location for child process reference, or %NULL
 * @error: return location for error
 *
 * See g_spawn_async_with_pipes() for a full description; this function
 * simply calls the g_spawn_async_with_pipes() without any pipes.
 * You should call g_spawn_close_pid() on the returned child process
 * reference when you don't need it any more.
 * <note><para>
 * If you are writing a GTK+ application, and the program you
 * are spawning is a graphical application, too, then you may
 * want to use gdk_spawn_on_screen() instead to ensure that
 * the spawned program opens its windows on the right screen.
 * </para></note>
 * <note><para> Note that the returned @child_pid on Windows is a
 * handle to the child process and not its identifier. Process handles
 * and process identifiers are different concepts on Windows.
 * </para></note>
 *
 * Returns: %TRUE on success, %FALSE if error is set
 */


/**
 * g_spawn_async_with_pipes:
 * @working_directory: (allow-none): child's current working directory, or %NULL to inherit parent's, in the GLib file name encoding
 * @argv: (array zero-terminated=1): child's argument vector, in the GLib file name encoding
 * @envp: (array zero-terminated=1) (allow-none): child's environment, or %NULL to inherit parent's, in the GLib file name encoding
 * @flags: flags from #GSpawnFlags
 * @child_setup: (scope async) (allow-none): function to run in the child just before exec()
 * @user_data: (closure): user data for @child_setup
 * @child_pid: (out) (allow-none): return location for child process ID, or %NULL
 * @standard_input: (out) (allow-none): return location for file descriptor to write to child's stdin, or %NULL
 * @standard_output: (out) (allow-none): return location for file descriptor to read child's stdout, or %NULL
 * @standard_error: (out) (allow-none): return location for file descriptor to read child's stderr, or %NULL
 * @error: return location for error
 *
 * Executes a child program asynchronously (your program will not
 * block waiting for the child to exit). The child program is
 * specified by the only argument that must be provided, @argv. @argv
 * should be a %NULL-terminated array of strings, to be passed as the
 * argument vector for the child. The first string in @argv is of
 * course the name of the program to execute. By default, the name of
 * the program must be a full path; the <envar>PATH</envar> shell variable
 * will only be searched if you pass the %G_SPAWN_SEARCH_PATH flag.
 * On Windows, note that all the string or string vector arguments to
 * this function and the other g_spawn*() functions are in UTF-8, the
 * GLib file name encoding. Unicode characters that are not part of
 * the system codepage passed in these arguments will be correctly
 * available in the spawned program only if it uses wide character API
 * to retrieve its command line. For C programs built with Microsoft's
 * tools it is enough to make the program have a wmain() instead of
 * main(). wmain() has a wide character argument vector as parameter.
 * At least currently, mingw doesn't support wmain(), so if you use
 * mingw to develop the spawned program, it will have to call the
 * undocumented function __wgetmainargs() to get the wide character
 * argument vector and environment. See gspawn-win32-helper.c in the
 * GLib sources or init.c in the mingw runtime sources for a prototype
 * for that function. Alternatively, you can retrieve the Win32 system
 * level wide character command line passed to the spawned program
 * using the GetCommandLineW() function.
 * On Windows the low-level child process creation API
 * <function>CreateProcess()</function> doesn't use argument vectors,
 * but a command line. The C runtime library's
 * <function>spawn*()</function> family of functions (which
 * g_spawn_async_with_pipes() eventually calls) paste the argument
 * vector elements together into a command line, and the C runtime startup code
 * does a corresponding reconstruction of an argument vector from the
 * command line, to be passed to main(). Complications arise when you have
 * argument vector elements that contain spaces of double quotes. The
 * <function>spawn*()</function> functions don't do any quoting or
 * escaping, but on the other hand the startup code does do unquoting
 * and unescaping in order to enable receiving arguments with embedded
 * spaces or double quotes. To work around this asymmetry,
 * g_spawn_async_with_pipes() will do quoting and escaping on argument
 * vector elements that need it before calling the C runtime
 * spawn() function.
 * The returned @child_pid on Windows is a handle to the child
 * process, not its identifier. Process handles and process
 * identifiers are different concepts on Windows.
 * has the form <literal>KEY=VALUE</literal>. This will become
 * the child's environment. If @envp is %NULL, the child inherits its
 * parent's environment.
 * function's behaviour. The %G_SPAWN_DO_NOT_REAP_CHILD means that
 * the child will not automatically be reaped; you must use a
 * #GChildWatch source to be notified about the death of the child
 * process. Eventually you must call g_spawn_close_pid() on the
 * with the child process. (On Unix, using a #GChildWatch source is
 * equivalent to calling waitpid() or handling the %SIGCHLD signal
 * manually. On Windows, calling g_spawn_close_pid() is equivalent
 * to calling CloseHandle() on the process handle returned in
 * %G_SPAWN_LEAVE_DESCRIPTORS_OPEN means that the parent's open file
 * descriptors will be inherited by the child; otherwise all
 * descriptors except stdin/stdout/stderr will be closed before
 * calling exec() in the child. %G_SPAWN_SEARCH_PATH
 * means that <literal>argv[0]</literal> need not be an absolute path, it
 * will be looked for in the user's <envar>PATH</envar>.
 * %G_SPAWN_STDOUT_TO_DEV_NULL means that the child's standard output will
 * be discarded, instead of going to the same location as the parent's
 * standard output. If you use this flag, @standard_output must be %NULL.
 * %G_SPAWN_STDERR_TO_DEV_NULL means that the child's standard error
 * will be discarded, instead of going to the same location as the parent's
 * standard error. If you use this flag, @standard_error must be %NULL.
 * %G_SPAWN_CHILD_INHERITS_STDIN means that the child will inherit the parent's
 * standard input (by default, the child's standard input is attached to
 * /dev/null). If you use this flag, @standard_input must be %NULL.
 * %G_SPAWN_FILE_AND_ARGV_ZERO means that the first element of @argv is
 * the file to execute, while the remaining elements are the
 * actual argument vector to pass to the file. Normally
 * g_spawn_async_with_pipes() uses @argv[0] as the file to execute, and
 * passes all of @argv to the child.
 * platforms, the function is called in the child after GLib has
 * performed all the setup it plans to perform (including creating
 * pipes, closing file descriptors, etc.) but before calling
 * exec(). That is, @child_setup is called just
 * before calling exec() in the child. Obviously
 * actions taken in this function will only affect the child, not the
 * parent.
 * On Windows, there is no separate fork() and exec()
 * functionality. Child processes are created and run with a single
 * API call, CreateProcess(). There is no sensible thing @child_setup
 * could be used for on Windows so it is ignored and not called.
 * If non-%NULL, @child_pid will on Unix be filled with the child's
 * process ID. You can use the process ID to send signals to the
 * child, or to use g_child_watch_add() (or waitpid()) if you specified the
 * %G_SPAWN_DO_NOT_REAP_CHILD flag. On Windows, @child_pid will be
 * filled with a handle to the child process only if you specified the
 * %G_SPAWN_DO_NOT_REAP_CHILD flag. You can then access the child
 * process using the Win32 API, for example wait for its termination
 * with the <function>WaitFor*()</function> functions, or examine its
 * exit code with GetExitCodeProcess(). You should close the handle
 * with CloseHandle() or g_spawn_close_pid() when you no longer need it.
 * If non-%NULL, the @standard_input, @standard_output, @standard_error
 * locations will be filled with file descriptors for writing to the child's
 * standard input or reading from its standard output or standard error.
 * The caller of g_spawn_async_with_pipes() must close these file descriptors
 * when they are no longer in use. If these parameters are %NULL, the corresponding
 * pipe won't be created.
 * If @standard_input is NULL, the child's standard input is attached to
 * /dev/null unless %G_SPAWN_CHILD_INHERITS_STDIN is set.
 * If @standard_error is NULL, the child's standard error goes to the same
 * location as the parent's standard error unless %G_SPAWN_STDERR_TO_DEV_NULL
 * is set.
 * If @standard_output is NULL, the child's standard output goes to the same
 * location as the parent's standard output unless %G_SPAWN_STDOUT_TO_DEV_NULL
 * is set.
 * If an error is set, the function returns %FALSE. Errors
 * are reported even if they occur in the child (for example if the
 * executable in <literal>argv[0]</literal> is not found). Typically
 * the <literal>message</literal> field of returned errors should be displayed
 * to users. Possible errors are those from the #G_SPAWN_ERROR domain.
 * If an error occurs, @child_pid, @standard_input, @standard_output,
 * and @standard_error will not be filled with valid values.
 * If @child_pid is not %NULL and an error does not occur then the returned
 * process reference must be closed using g_spawn_close_pid().
 * <note><para>
 * If you are writing a GTK+ application, and the program you
 * are spawning is a graphical application, too, then you may
 * want to use gdk_spawn_on_screen_with_pipes() instead to ensure that
 * the spawned program opens its windows on the right screen.
 * </para></note>
 *
 * Returns: %TRUE on success, %FALSE if an error was set
 */


/**
 * g_spawn_close_pid:
 * @pid: The process reference to close
 *
 * On some platforms, notably Windows, the #GPid type represents a resource
 * which must be closed to prevent resource leaking. g_spawn_close_pid()
 * is provided for this purpose. It should be used on all platforms, even
 * though it doesn't do anything under UNIX.
 */


/**
 * g_spawn_command_line_async:
 * @command_line: a command line
 * @error: return location for errors
 *
 * A simple version of g_spawn_async() that parses a command line with
 * g_shell_parse_argv() and passes it to g_spawn_async(). Runs a
 * command line in the background. Unlike g_spawn_async(), the
 * %G_SPAWN_SEARCH_PATH flag is enabled, other flags are not. Note
 * that %G_SPAWN_SEARCH_PATH can have security implications, so
 * consider using g_spawn_async() directly if appropriate. Possible
 * errors are those from g_shell_parse_argv() and g_spawn_async().
 * The same concerns on Windows apply as for g_spawn_command_line_sync().
 *
 * Returns: %TRUE on success, %FALSE if error is set.
 */


/**
 * g_spawn_command_line_sync:
 * @command_line: a command line
 * @standard_output: (out) (array zero-terminated=1) (element-type guint8) (allow-none): return location for child output
 * @standard_error: (out) (array zero-terminated=1) (element-type guint8) (allow-none): return location for child errors
 * @exit_status: (out) (allow-none): return location for child exit status, as returned by waitpid()
 * @error: return location for errors
 *
 * A simple version of g_spawn_sync() with little-used parameters
 * removed, taking a command line instead of an argument vector.  See
 * g_spawn_sync() for full details. @command_line will be parsed by
 * g_shell_parse_argv(). Unlike g_spawn_sync(), the %G_SPAWN_SEARCH_PATH flag
 * is enabled. Note that %G_SPAWN_SEARCH_PATH can have security
 * implications, so consider using g_spawn_sync() directly if
 * appropriate. Possible errors are those from g_spawn_sync() and those
 * from g_shell_parse_argv().
 * If @exit_status is non-%NULL, the exit status of the child is stored there as
 * it would be returned by waitpid(); standard UNIX macros such as WIFEXITED()
 * and WEXITSTATUS() must be used to evaluate the exit status.
 * On Windows, please note the implications of g_shell_parse_argv()
 * parsing @command_line. Parsing is done according to Unix shell rules, not
 * Windows command interpreter rules.
 * Space is a separator, and backslashes are
 * special. Thus you cannot simply pass a @command_line containing
 * canonical Windows paths, like "c:\\program files\\app\\app.exe", as
 * the backslashes will be eaten, and the space will act as a
 * separator. You need to enclose such paths with single quotes, like
 * "'c:\\program files\\app\\app.exe' 'e:\\folder\\argument.txt'".
 *
 * Returns: %TRUE on success, %FALSE if an error was set
 */


/**
 * g_spawn_sync:
 * @working_directory: (allow-none): child's current working directory, or %NULL to inherit parent's
 * @argv: (array zero-terminated=1): child's argument vector
 * @envp: (array zero-terminated=1) (allow-none): child's environment, or %NULL to inherit parent's
 * @flags: flags from #GSpawnFlags
 * @child_setup: (scope async) (allow-none): function to run in the child just before exec()
 * @user_data: (closure): user data for @child_setup
 * @standard_output: (out) (array zero-terminated=1) (element-type guint8) (allow-none): return location for child output, or %NULL
 * @standard_error: (out) (array zero-terminated=1) (element-type guint8) (allow-none): return location for child error messages, or %NULL
 * @exit_status: (out) (allow-none): return location for child exit status, as returned by waitpid(), or %NULL
 * @error: return location for error, or %NULL
 *
 * Executes a child synchronously (waits for the child to exit before returning).
 * All output from the child is stored in @standard_output and @standard_error,
 * if those parameters are non-%NULL. Note that you must set the
 * %G_SPAWN_STDOUT_TO_DEV_NULL and %G_SPAWN_STDERR_TO_DEV_NULL flags when
 * passing %NULL for @standard_output and @standard_error.
 * If @exit_status is non-%NULL, the exit status of the child is stored
 * there as it would be returned by waitpid(); standard UNIX macros such
 * as WIFEXITED() and WEXITSTATUS() must be used to evaluate the exit status.
 * Note that this function call waitpid() even if @exit_status is %NULL, and
 * does not accept the %G_SPAWN_DO_NOT_REAP_CHILD flag.
 * If an error occurs, no data is returned in @standard_output,
 * This function calls g_spawn_async_with_pipes() internally; see that
 * function for full details on the other parameters and details on
 * how these functions work on Windows.
 *
 * Returns: %TRUE on success, %FALSE if an error was set.
 */


/**
 * g_sprintf:
 * @string: A pointer to a memory buffer to contain the resulting string. It is up to the caller to ensure that the allocated buffer is large enough to hold the formatted result
 * @format: a standard printf() format string, but notice <link linkend="string-precision">string precision pitfalls</link>.
 * @Varargs: the arguments to insert in the output.
 *
 * An implementation of the standard sprintf() function which supports
 * positional parameters, as specified in the Single Unix Specification.
 * Note that it is usually better to use g_snprintf(), to avoid the
 * risk of buffer overflow.
 * See also g_strdup_printf().
 *
 * Returns: the number of bytes printed.
 * Since: 2.2
 */


/**
 * g_stat:
 * @filename: a pathname in the GLib file name encoding (UTF-8 on Windows)
 * @buf: a pointer to a <structname>stat</structname> struct, which will be filled with the file information
 *
 * A wrapper for the POSIX stat() function. The stat() function
 * returns information about a file. On Windows the stat() function in
 * the C library checks only the FAT-style READONLY attribute and does
 * not look at the ACL at all. Thus on Windows the protection bits in
 * the st_mode field are a fabrication of little use.
 * On Windows the Microsoft C libraries have several variants of the
 * <structname>stat</structname> struct and stat() function with names
 * like "_stat", "_stat32", "_stat32i64" and "_stat64i32". The one
 * used here is for 32-bit code the one with 32-bit size and time
 * fields, specifically called "_stat32".
 * In Microsoft's compiler, by default "struct stat" means one with
 * 64-bit time fields while in MinGW "struct stat" is the legacy one
 * with 32-bit fields. To hopefully clear up this messs, the gstdio.h
 * header defines a type GStatBuf which is the appropriate struct type
 * depending on the platform and/or compiler being used. On POSIX it
 * is just "struct stat", but note that even on POSIX platforms,
 * "stat" might be a macro.
 * See your C library manual for more details about stat().
 * occurred
 *
 * Returns: 0 if the information was successfully retrieved, -1 if an error
 * Since: 2.6
 */


/**
 * g_static_mutex_free:
 * @mutex: a #GStaticMutex to be freed.
 *
 * Releases all resources allocated to @mutex.
 * You don't have to call this functions for a #GStaticMutex with an
 * unbounded lifetime, i.e. objects declared 'static', but if you have
 * a #GStaticMutex as a member of a structure and the structure is
 * freed, you should also free the #GStaticMutex.
 * <note><para>Calling g_static_mutex_free() on a locked mutex may
 * result in undefined behaviour.</para></note>
 */


/**
 * g_static_mutex_get_mutex:
 * @mutex: a #GStaticMutex.
 * @Returns: the #GMutex corresponding to @mutex.
 *
 * For some operations (like g_cond_wait()) you must have a #GMutex
 * instead of a #GStaticMutex. This function will return the
 * corresponding #GMutex for @mutex.
 */


/**
 * g_static_mutex_init:
 * @mutex: a #GStaticMutex to be initialized.
 *
 * Initializes @mutex. Alternatively you can initialize it with
 * #G_STATIC_MUTEX_INIT.
 */


/**
 * g_static_mutex_lock:
 * @mutex: a #GStaticMutex.
 *
 * Works like g_mutex_lock(), but for a #GStaticMutex.
 */


/**
 * g_static_mutex_trylock:
 * @mutex: a #GStaticMutex.
 * @Returns: %TRUE, if the #GStaticMutex could be locked.
 *
 * Works like g_mutex_trylock(), but for a #GStaticMutex.
 */


/**
 * g_static_mutex_unlock:
 * @mutex: a #GStaticMutex.
 *
 * Works like g_mutex_unlock(), but for a #GStaticMutex.
 */


/**
 * g_static_private_free:
 * @private_key: a #GStaticPrivate to be freed.
 *
 * Releases all resources allocated to @private_key.
 * You don't have to call this functions for a #GStaticPrivate with an
 * unbounded lifetime, i.e. objects declared 'static', but if you have
 * a #GStaticPrivate as a member of a structure and the structure is
 * freed, you should also free the #GStaticPrivate.
 */


/**
 * g_static_private_get:
 * @private_key: a #GStaticPrivate.
 * @Returns: the corresponding pointer.
 *
 * Works like g_private_get() only for a #GStaticPrivate.
 * This function works even if g_thread_init() has not yet been called.
 */


/**
 * g_static_private_init:
 * @private_key: a #GStaticPrivate to be initialized.
 *
 * Initializes @private_key. Alternatively you can initialize it with
 * #G_STATIC_PRIVATE_INIT.
 */


/**
 * g_static_private_set:
 * @private_key: a #GStaticPrivate.
 * @data: the new pointer.
 * @notify: a function to be called with the pointer whenever the current thread ends or sets this pointer again.
 *
 * Sets the pointer keyed to @private_key for the current thread and
 * the function @notify to be called with that pointer (%NULL or
 * non-%NULL), whenever the pointer is set again or whenever the
 * current thread ends.
 * This function works even if g_thread_init() has not yet been called.
 * If g_thread_init() is called later, the @data keyed to @private_key
 * will be inherited only by the main thread, i.e. the one that called
 * g_thread_init().
 * <note><para>@notify is used quite differently from @destructor in
 * g_private_new().</para></note>
 */


/**
 * g_static_rec_mutex_free:
 * @mutex: a #GStaticRecMutex to be freed.
 *
 * Releases all resources allocated to a #GStaticRecMutex.
 * You don't have to call this functions for a #GStaticRecMutex with an
 * unbounded lifetime, i.e. objects declared 'static', but if you have
 * a #GStaticRecMutex as a member of a structure and the structure is
 * freed, you should also free the #GStaticRecMutex.
 */


/**
 * g_static_rec_mutex_init:
 * @mutex: a #GStaticRecMutex to be initialized.
 *
 * A #GStaticRecMutex must be initialized with this function before it
 * can be used. Alternatively you can initialize it with
 * #G_STATIC_REC_MUTEX_INIT.
 */


/**
 * g_static_rec_mutex_lock:
 * @mutex: a #GStaticRecMutex to lock.
 *
 * Locks @mutex. If @mutex is already locked by another thread, the
 * current thread will block until @mutex is unlocked by the other
 * thread. If @mutex is already locked by the calling thread, this
 * functions increases the depth of @mutex and returns immediately.
 */


/**
 * g_static_rec_mutex_lock_full:
 * @mutex: a #GStaticRecMutex to lock.
 * @depth: number of times this mutex has to be unlocked to be completely unlocked.
 *
 * Works like calling g_static_rec_mutex_lock() for @mutex @depth times.
 */


/**
 * g_static_rec_mutex_trylock:
 * @mutex: a #GStaticRecMutex to lock.
 * @Returns: %TRUE, if @mutex could be locked.
 *
 * Tries to lock @mutex. If @mutex is already locked by another thread,
 * it immediately returns %FALSE. Otherwise it locks @mutex and returns
 * %TRUE. If @mutex is already locked by the calling thread, this
 * functions increases the depth of @mutex and immediately returns
 * %TRUE.
 */


/**
 * g_static_rec_mutex_unlock:
 * @mutex: a #GStaticRecMutex to unlock.
 *
 * Unlocks @mutex. Another thread will be allowed to lock @mutex only
 * when it has been unlocked as many times as it had been locked
 * before. If @mutex is completely unlocked and another thread is
 * blocked in a g_static_rec_mutex_lock() call for @mutex, it will be
 * woken and can lock @mutex itself.
 */


/**
 * g_static_rec_mutex_unlock_full:
 * @mutex: a #GStaticRecMutex to completely unlock.
 * @Returns: number of times @mutex has been locked by the current thread.
 *
 * Completely unlocks @mutex. If another thread is blocked in a
 * g_static_rec_mutex_lock() call for @mutex, it will be woken and can
 * lock @mutex itself. This function returns the number of times that
 * before the call to g_static_rec_mutex_unlock_full() you can call
 * g_static_rec_mutex_lock_full() with the depth returned by this
 * function.
 */


/**
 * g_static_rw_lock_free:
 * @lock: a #GStaticRWLock to be freed.
 *
 * Releases all resources allocated to @lock.
 * You don't have to call this functions for a #GStaticRWLock with an
 * unbounded lifetime, i.e. objects declared 'static', but if you have
 * a #GStaticRWLock as a member of a structure, and the structure is
 * freed, you should also free the #GStaticRWLock.
 */


/**
 * g_static_rw_lock_init:
 * @lock: a #GStaticRWLock to be initialized.
 *
 * A #GStaticRWLock must be initialized with this function before it
 * can be used. Alternatively you can initialize it with
 * #G_STATIC_RW_LOCK_INIT.
 */


/**
 * g_static_rw_lock_reader_lock:
 * @lock: a #GStaticRWLock to lock for reading.
 *
 * Locks @lock for reading. There may be unlimited concurrent locks for
 * reading of a #GStaticRWLock at the same time.  If @lock is already
 * locked for writing by another thread or if another thread is already
 * waiting to lock @lock for writing, this function will block until
 * threads want to lock @lock. This lock has to be unlocked by
 * g_static_rw_lock_reader_unlock().
 * #GStaticRWLock is not recursive. It might seem to be possible to
 * recursively lock for reading, but that can result in a deadlock, due
 * to writer preference.
 */


/**
 * g_static_rw_lock_reader_trylock:
 * @lock: a #GStaticRWLock to lock for reading.
 * @Returns: %TRUE, if @lock could be locked for reading.
 *
 * Tries to lock @lock for reading. If @lock is already locked for
 * writing by another thread or if another thread is already waiting to
 * lock @lock for writing, immediately returns %FALSE. Otherwise locks
 * g_static_rw_lock_reader_unlock().
 */


/**
 * g_static_rw_lock_reader_unlock:
 * @lock: a #GStaticRWLock to unlock after reading.
 *
 * Unlocks @lock. If a thread waits to lock @lock for writing and all
 * locks for reading have been unlocked, the waiting thread is woken up
 * and can lock @lock for writing.
 */


/**
 * g_static_rw_lock_writer_lock:
 * @lock: a #GStaticRWLock to lock for writing.
 *
 * Locks @lock for writing. If @lock is already locked for writing or
 * reading by other threads, this function will block until @lock is
 * completely unlocked and then lock @lock for writing. While this
 * functions waits to lock @lock, no other thread can lock @lock for
 * reading. When @lock is locked for writing, no other thread can lock
 * unlocked by g_static_rw_lock_writer_unlock().
 */


/**
 * g_static_rw_lock_writer_trylock:
 * @lock: a #GStaticRWLock to lock for writing.
 * @Returns: %TRUE, if @lock could be locked for writing.
 *
 * Tries to lock @lock for writing. If @lock is already locked (for
 * either reading or writing) by another thread, it immediately returns
 * %FALSE. Otherwise it locks @lock for writing and returns %TRUE. This
 * lock has to be unlocked by g_static_rw_lock_writer_unlock().
 */


/**
 * g_static_rw_lock_writer_unlock:
 * @lock: a #GStaticRWLock to unlock after writing.
 *
 * Unlocks @lock. If a thread is waiting to lock @lock for writing and
 * all locks for reading have been unlocked, the waiting thread is
 * woken up and can lock @lock for writing. If no thread is waiting to
 * lock @lock for writing, and some thread or threads are waiting to
 * lock @lock for reading, the waiting threads are woken up and can
 * lock @lock for reading.
 */


/**
 * g_stpcpy:
 * @dest: destination buffer.
 * @src: source string.
 *
 * Copies a nul-terminated string into the dest buffer, include the
 * trailing nul, and return a pointer to the trailing nul byte.
 * This is useful for concatenating multiple strings together
 * without having to repeatedly scan for the end.
 *
 * Returns: a pointer to trailing nul byte.
 */


/**
 * g_str_equal:
 * @v1: a key
 * @v2: a key to compare with @v1
 *
 * Compares two strings for byte-by-byte equality and returns %TRUE
 * if they are equal. It can be passed to g_hash_table_new() as the
 * Note that this function is primarily meant as a hash table comparison
 * function. For a general-purpose, %NULL-safe string comparison function,
 * see g_strcmp0().
 *
 * Returns: %TRUE if the two keys match
 */


/**
 * g_str_has_prefix:
 * @str: a nul-terminated string.
 * @prefix: the nul-terminated prefix to look for.
 *
 * Looks whether the string @str begins with @prefix.
 *
 * Returns: %TRUE if @str begins with @prefix, %FALSE otherwise.
 * Since: 2.2
 */


/**
 * g_str_has_suffix:
 * @str: a nul-terminated string.
 * @suffix: the nul-terminated suffix to look for.
 *
 * Looks whether the string @str ends with @suffix.
 *
 * Returns: %TRUE if @str end with @suffix, %FALSE otherwise.
 * Since: 2.2
 */


/**
 * g_str_hash:
 * @v: a string key
 *
 * Converts a string to a hash value.
 * This function implements the widely used "djb" hash apparently posted
 * by Daniel Bernstein to comp.lang.c some time ago.  The 32 bit
 * unsigned hash value starts at 5381 and for each byte 'c' in the
 * function uses the signed value of each byte.
 * It can be passed to g_hash_table_new() as the @hash_func parameter,
 * when using strings as keys in a #GHashTable.
 *
 * String, is updated: <literal>hash = hash * 33 + c</literal>.  This
 * Returns: a hash value corresponding to the key
 */


/**
 * g_strcasecmp:
 * @s1: a string.
 * @s2: a string to compare with @s1.
 *
 * A case-insensitive string comparison, corresponding to the standard
 * strcasecmp() function on platforms which support it.
 * or a positive value if @s1 &gt; @s2.
 * is deprecated and how to replace it.
 *
 * Returns: 0 if the strings match, a negative value if @s1 &lt; @s2,
 * Deprecated:2.2: See g_strncasecmp() for a discussion of why this function
 */


/**
 * g_strcmp0:
 * @str1: a C string or %NULL
 * @str2: another C string or %NULL
 *
 * Compares @str1 and @str2 like strcmp(). Handles %NULL
 * gracefully by sorting it before non-%NULL strings.
 * Comparing two %NULL pointers returns 0.
 *
 * Returns: -1, 0 or 1, if @str1 is <, == or > than @str2.
 * Since: 2.16
 */


/**
 * g_strconcat:
 * @string1: the first string to add, which must not be %NULL
 * @Varargs: a %NULL-terminated list of strings to append to the string
 *
 * Concatenates all of the given strings into one long string.
 * The returned string should be freed with g_free() when no longer needed.
 * Note that this function is usually not the right function to use to
 * assemble a translated message from pieces, since proper translation
 * often requires the pieces to be reordered.
 * <warning><para>The variable argument list <emphasis>must</emphasis> end
 * with %NULL. If you forget the %NULL, g_strconcat() will start appending
 * random memory junk to your string.</para></warning>
 *
 * Returns: a newly-allocated string containing all the string arguments
 */


/**
 * g_strdown:
 * @string: the string to convert.
 *
 * Converts a string to lower case.
 * in the g_strncasecmp() docs - use g_ascii_strdown() or g_utf8_strdown()
 * instead.
 *
 * Returns: the string
 * Deprecated:2.2: This function is totally broken for the reasons discussed
 */


/**
 * g_strdup:
 * @str: the string to duplicate
 *
 * Duplicates a string. If @str is %NULL it returns %NULL.
 * The returned string should be freed with g_free()
 * when no longer needed.
 *
 * Returns: a newly-allocated copy of @str
 */


/**
 * g_strdup_printf:
 * @format: a standard printf() format string, but notice <link linkend="string-precision">string precision pitfalls</link>
 * @Varargs: the parameters to insert into the format string
 *
 * Similar to the standard C sprintf() function but safer, since it
 * calculates the maximum space required and allocates memory to hold
 * the result. The returned string should be freed with g_free() when no
 * longer needed.
 *
 * Returns: a newly-allocated string holding the result
 */


/**
 * g_strdup_vprintf:
 * @format: a standard printf() format string, but notice <link linkend="string-precision">string precision pitfalls</link>
 * @args: the list of parameters to insert into the format string
 *
 * Similar to the standard C vsprintf() function but safer, since it
 * calculates the maximum space required and allocates memory to hold
 * the result. The returned string should be freed with g_free() when
 * no longer needed.
 * See also g_vasprintf(), which offers the same functionality, but
 * additionally returns the length of the allocated string.
 *
 * Returns: a newly-allocated string holding the result
 */


/**
 * g_strdupv:
 * @str_array: %NULL-terminated array of strings.
 *
 * Copies %NULL-terminated array of strings. The copy is a deep copy;
 * the new array should be freed by first freeing each string, then
 * the array itself. g_strfreev() does this for you. If called
 * on a %NULL value, g_strdupv() simply returns %NULL.
 *
 * Returns: a new %NULL-terminated array of strings.
 */


/**
 * g_strerror:
 * @errnum: the system error number. See the standard C %errno documentation
 *
 * Returns a string corresponding to the given error code, e.g.
 * "no such process". You should use this function in preference to
 * strerror(), because it returns a string in UTF-8 encoding, and since
 * not all platforms support the strerror() function.
 * is unknown, it returns "unknown error (&lt;code&gt;)". The string
 * can only be used until the next call to g_strerror()
 *
 * Returns: a UTF-8 string describing the error code. If the error code
 */


/**
 * g_strfreev:
 * @str_array: a %NULL-terminated array of strings to free.
 *
 * Frees a %NULL-terminated array of strings, and the array itself.
 * If called on a %NULL value, g_strfreev() simply returns.
 */


/**
 * g_string_append:
 * @string: a #GString
 * @val: the string to append onto the end of @string
 *
 * Adds a string onto the end of a #GString, expanding
 * it if necessary.
 *
 * Returns: @string
 */


/**
 * g_string_append_c:
 * @string: a #GString
 * @c: the byte to append onto the end of @string
 *
 * Adds a byte onto the end of a #GString, expanding
 * it if necessary.
 *
 * Returns: @string
 */


/**
 * g_string_append_len:
 * @string: a #GString
 * @val: bytes to append
 * @len: number of bytes of @val to use
 *
 * Appends @len bytes of @val to @string. Because @len is
 * provided, @val may contain embedded nuls and need not
 * be nul-terminated.
 * Since this function does not stop at nul bytes, it is
 * the caller's responsibility to ensure that @val has at
 * least @len addressable bytes.
 *
 * Returns: @string
 */


/**
 * g_string_append_printf:
 * @string: a #GString
 * @format: the string format. See the printf() documentation
 * @Varargs: the parameters to insert into the format string
 *
 * Appends a formatted string onto the end of a #GString.
 * This function is similar to g_string_printf() except
 * that the text is appended to the #GString.
 */


/**
 * g_string_append_unichar:
 * @string: a #GString
 * @wc: a Unicode character
 *
 * Converts a Unicode character into UTF-8, and appends it
 * to the string.
 *
 * Returns: @string
 */


/**
 * g_string_append_uri_escaped:
 * @string: a #GString
 * @unescaped: a string
 * @reserved_chars_allowed: a string of reserved characters allowed to be used, or %NULL
 * @allow_utf8: set %TRUE if the escaped string may include UTF8 characters
 *
 * Appends @unescaped to @string, escaped any characters that
 * are reserved in URIs using URI-style escape sequences.
 *
 * Returns: @string
 * Since: 2.16
 */


/**
 * g_string_append_vprintf:
 * @string: a #GString
 * @format: the string format. See the printf() documentation
 * @args: the list of arguments to insert in the output
 *
 * Appends a formatted string onto the end of a #GString.
 * This function is similar to g_string_append_printf()
 * except that the arguments to the format string are passed
 * as a va_list.
 *
 * Since: 2.14
 */


/**
 * g_string_ascii_down:
 * @string: a GString
 *
 * Converts all upper case ASCII letters to lower case ASCII letters.
 * characters converted to lower case in place, with
 * semantics that exactly match g_ascii_tolower().
 *
 * Returns: passed-in @string pointer, with all the upper case
 */


/**
 * g_string_ascii_up:
 * @string: a GString
 *
 * Converts all lower case ASCII letters to upper case ASCII letters.
 * characters converted to upper case in place, with
 * semantics that exactly match g_ascii_toupper().
 *
 * Returns: passed-in @string pointer, with all the lower case
 */


/**
 * g_string_assign:
 * @string: the destination #GString. Its current contents are destroyed.
 * @rval: the string to copy into @string
 *
 * Copies the bytes from a string into a #GString,
 * destroying any previous contents. It is rather like
 * the standard strcpy() function, except that you do not
 * have to worry about having enough space to copy the string.
 *
 * Returns: @string
 */


/**
 * g_string_chunk_clear:
 * @chunk: a #GStringChunk
 *
 * Frees all strings contained within the #GStringChunk.
 * After calling g_string_chunk_clear() it is not safe to
 * access any of the strings which were contained within it.
 *
 * Since: 2.14
 */


/**
 * g_string_chunk_free:
 * @chunk: a #GStringChunk
 *
 * Frees all memory allocated by the #GStringChunk.
 * After calling g_string_chunk_free() it is not safe to
 * access any of the strings which were contained within it.
 */


/**
 * g_string_chunk_insert:
 * @chunk: a #GStringChunk
 * @string: the string to add
 *
 * Adds a copy of @string to the #GStringChunk.
 * It returns a pointer to the new copy of the string
 * in the #GStringChunk. The characters in the string
 * can be changed, if necessary, though you should not
 * change anything after the end of the string.
 * Unlike g_string_chunk_insert_const(), this function
 * does not check for duplicates. Also strings added
 * with g_string_chunk_insert() will not be searched
 * by g_string_chunk_insert_const() when looking for
 * duplicates.
 * the #GStringChunk
 *
 * Returns: a pointer to the copy of @string within
 */


/**
 * g_string_chunk_insert_const:
 * @chunk: a #GStringChunk
 * @string: the string to add
 *
 * Adds a copy of @string to the #GStringChunk, unless the same
 * string has already been added to the #GStringChunk with
 * g_string_chunk_insert_const().
 * This function is useful if you need to copy a large number
 * of strings but do not want to waste space storing duplicates.
 * But you must remember that there may be several pointers to
 * the same string, and so any changes made to the strings
 * should be done very carefully.
 * Note that g_string_chunk_insert_const() will not return a
 * pointer to a string added with g_string_chunk_insert(), even
 * if they do match.
 * within the #GStringChunk
 *
 * Returns: a pointer to the new or existing copy of @string
 */


/**
 * g_string_chunk_insert_len:
 * @chunk: a #GStringChunk
 * @string: bytes to insert
 * @len: number of bytes of @string to insert, or -1 to insert a nul-terminated string
 *
 * Adds a copy of the first @len bytes of @string to the #GStringChunk.
 * The copy is nul-terminated.
 * Since this function does not stop at nul bytes, it is the caller's
 * responsibility to ensure that @string has at least @len addressable
 * bytes.
 * The characters in the returned string can be changed, if necessary,
 * though you should not change anything after the end of the string.
 *
 * Returns: a pointer to the copy of @string within the #GStringChunk
 * Since: 2.4
 */


/**
 * g_string_chunk_new:
 * @size: the default size of the blocks of memory which are allocated to store the strings. If a particular string is larger than this default size, a larger block of memory will be allocated for it.
 *
 * Creates a new #GStringChunk.
 *
 * Returns: a new #GStringChunk
 */


/**
 * g_string_down:
 * @string: a #GString
 *
 * Converts a #GString to lowercase.
 * tolower() function, which is almost never the right thing.
 * Use g_string_ascii_down() or g_utf8_strdown() instead.
 *
 * Returns: the #GString.
 * Deprecated:2.2: This function uses the locale-specific
 */


/**
 * g_string_equal:
 * @v: a #GString
 * @v2: another #GString
 *
 * Compares two strings for equality, returning %TRUE if they are equal.
 * For use with #GHashTable.
 * same bytes
 *
 * Returns: %TRUE if they strings are the same length and contain the
 */


/**
 * g_string_erase:
 * @string: a #GString
 * @pos: the position of the content to remove
 * @len: the number of bytes to remove, or -1 to remove all following bytes
 *
 * Removes @len bytes from a #GString, starting at position @pos.
 * The rest of the #GString is shifted down to fill the gap.
 *
 * Returns: @string
 */


/**
 * g_string_free:
 * @string: a #GString
 * @free_segment: if %TRUE the actual character data is freed as well
 *
 * Frees the memory allocated for the #GString.
 * If @free_segment is %TRUE it also frees the character data.  If
 * it's %FALSE, the caller gains ownership of the buffer and must
 * free it after use with g_free().
 * (i.e. %NULL if @free_segment is %TRUE)
 *
 * Returns: the character data of @string
 */


/**
 * g_string_hash:
 * @str: a string to hash
 *
 * Creates a hash code for @str; for use with #GHashTable.
 *
 * Returns: hash code for @str
 */


/**
 * g_string_insert:
 * @string: a #GString
 * @pos: the position to insert the copy of the string
 * @val: the string to insert
 *
 * Inserts a copy of a string into a #GString,
 * expanding it if necessary.
 *
 * Returns: @string
 */


/**
 * g_string_insert_c:
 * @string: a #GString
 * @pos: the position to insert the byte
 * @c: the byte to insert
 *
 * Inserts a byte into a #GString, expanding it if necessary.
 *
 * Returns: @string
 */


/**
 * g_string_insert_len:
 * @string: a #GString
 * @pos: position in @string where insertion should happen, or -1 for at the end
 * @val: bytes to insert
 * @len: number of bytes of @val to insert
 *
 * Inserts @len bytes of @val into @string at @pos.
 * Because @len is provided, @val may contain embedded
 * nuls and need not be nul-terminated. If @pos is -1,
 * bytes are inserted at the end of the string.
 * Since this function does not stop at nul bytes, it is
 * the caller's responsibility to ensure that @val has at
 * least @len addressable bytes.
 *
 * Returns: @string
 */


/**
 * g_string_insert_unichar:
 * @string: a #GString
 * @pos: the position at which to insert character, or -1 to append at the end of the string
 * @wc: a Unicode character
 *
 * Converts a Unicode character into UTF-8, and insert it
 * into the string at the given position.
 *
 * Returns: @string
 */


/**
 * g_string_new:
 * @init: the initial text to copy into the string
 *
 * Creates a new #GString, initialized with the given string.
 *
 * Returns: the new #GString
 */


/**
 * g_string_new_len:
 * @init: initial contents of the string
 * @len: length of @init to use
 *
 * Creates a new #GString with @len bytes of the @init buffer.
 * Because a length is provided, @init need not be nul-terminated,
 * and can contain embedded nul bytes.
 * Since this function does not stop at nul bytes, it is the caller's
 * responsibility to ensure that @init has at least @len addressable
 * bytes.
 *
 * Returns: a new #GString
 */


/**
 * g_string_overwrite:
 * @string: a #GString
 * @pos: the position at which to start overwriting
 * @val: the string that will overwrite the @string starting at @pos
 *
 * Overwrites part of a string, lengthening it if necessary.
 *
 * Returns: @string
 * Since: 2.14
 */


/**
 * g_string_overwrite_len:
 * @string: a #GString
 * @pos: the position at which to start overwriting
 * @val: the string that will overwrite the @string starting at @pos
 * @len: the number of bytes to write from @val
 *
 * Overwrites part of a string, lengthening it if necessary.
 * This function will work with embedded nuls.
 *
 * Returns: @string
 * Since: 2.14
 */


/**
 * g_string_prepend:
 * @string: a #GString
 * @val: the string to prepend on the start of @string
 *
 * Adds a string on to the start of a #GString,
 * expanding it if necessary.
 *
 * Returns: @string
 */


/**
 * g_string_prepend_c:
 * @string: a #GString
 * @c: the byte to prepend on the start of the #GString
 *
 * Adds a byte onto the start of a #GString,
 * expanding it if necessary.
 *
 * Returns: @string
 */


/**
 * g_string_prepend_len:
 * @string: a #GString
 * @val: bytes to prepend
 * @len: number of bytes in @val to prepend
 *
 * Prepends @len bytes of @val to @string.
 * Because @len is provided, @val may contain
 * embedded nuls and need not be nul-terminated.
 * Since this function does not stop at nul bytes,
 * it is the caller's responsibility to ensure that
 *
 * Returns: @string
 */


/**
 * g_string_prepend_unichar:
 * @string: a #GString
 * @wc: a Unicode character
 *
 * Converts a Unicode character into UTF-8, and prepends it
 * to the string.
 *
 * Returns: @string
 */


/**
 * g_string_printf:
 * @string: a #GString
 * @format: the string format. See the printf() documentation
 * @Varargs: the parameters to insert into the format string
 *
 * Writes a formatted string into a #GString.
 * This is similar to the standard sprintf() function,
 * except that the #GString buffer automatically expands
 * to contain the results. The previous contents of the
 * #GString are destroyed.
 */


/**
 * g_string_set_size:
 * @string: a #GString
 * @len: the new length
 *
 * Sets the length of a #GString. If the length is less than
 * the current length, the string will be truncated. If the
 * length is greater than the current length, the contents
 * of the newly added area are undefined. (However, as
 * always, string->str[string->len] will be a nul byte.)
 *
 * Returns: @string
 */


/**
 * g_string_sized_new:
 * @dfl_size: the default size of the space allocated to hold the string
 *
 * Creates a new #GString, with enough space for @dfl_size
 * bytes. This is useful if you are going to add a lot of
 * text to the string and don't want it to be reallocated
 * too often.
 *
 * Returns: the new #GString
 */


/**
 * g_string_sprintf:
 * @string: a #GString
 * @format: the string format. See the sprintf() documentation
 * @Varargs: the parameters to insert into the format string
 *
 * Writes a formatted string into a #GString.
 * This is similar to the standard sprintf() function,
 * except that the #GString buffer automatically expands
 * to contain the results. The previous contents of the
 * #GString are destroyed.
 *
 * Deprecated: This function has been renamed to g_string_printf().
 */


/**
 * g_string_sprintfa:
 * @string: a #GString
 * @format: the string format. See the sprintf() documentation
 * @Varargs: the parameters to insert into the format string
 *
 * Appends a formatted string onto the end of a #GString.
 * This function is similar to g_string_sprintf() except that
 * the text is appended to the #GString.
 *
 * Deprecated: This function has been renamed to g_string_append_printf()
 */


/**
 * g_string_truncate:
 * @string: a #GString
 * @len: the new size of @string
 *
 * Cuts off the end of the GString, leaving the first @len bytes.
 *
 * Returns: @string
 */


/**
 * g_string_up:
 * @string: a #GString
 *
 * Converts a #GString to uppercase.
 * toupper() function, which is almost never the right thing.
 * Use g_string_ascii_up() or g_utf8_strup() instead.
 *
 * Returns: @string
 * Deprecated:2.2: This function uses the locale-specific
 */


/**
 * g_string_vprintf:
 * @string: a #GString
 * @format: the string format. See the printf() documentation
 * @args: the parameters to insert into the format string
 *
 * Writes a formatted string into a #GString.
 * This function is similar to g_string_printf() except that
 * the arguments to the format string are passed as a va_list.
 *
 * Since: 2.14
 */


/**
 * g_strip_context:
 * @msgid: a string
 * @msgval: another string
 *
 * An auxiliary function for gettext() support (see Q_()).
 * a '|' character, in which case a pointer to the substring of msgid after
 * the first '|' character is returned.
 *
 * Returns: @msgval, unless @msgval is identical to @msgid and contains
 * Since: 2.4
 */


/**
 * g_strjoin:
 * @separator: a string to insert between each of the strings, or %NULL
 * @Varargs: a %NULL-terminated list of strings to join
 *
 * Joins a number of strings together to form one long string, with the
 * optional @separator inserted between each of them. The returned string
 * should be freed with g_free().
 * together, with @separator between them
 *
 * Returns: a newly-allocated string containing all of the strings joined
 */


/**
 * g_strjoinv:
 * @separator: a string to insert between each of the strings, or %NULL
 * @str_array: a %NULL-terminated array of strings to join
 *
 * Joins a number of strings together to form one long string, with the
 * optional @separator inserted between each of them. The returned string
 * should be freed with g_free().
 * together, with @separator between them
 *
 * Returns: a newly-allocated string containing all of the strings joined
 */


/**
 * g_strlcat:
 * @dest: destination buffer, already containing one nul-terminated string
 * @src: source buffer
 * @dest_size: length of @dest buffer in bytes (not length of existing string inside @dest)
 *
 * Portability wrapper that calls strlcat() on systems which have it,
 * and emulates it otherwise. Appends nul-terminated @src string to @dest,
 * guaranteeing nul-termination for @dest. The total size of @dest won't
 * exceed @dest_size.
 * At most dest_size - 1 characters will be copied.
 * Unlike strncat, dest_size is the full size of dest, not the space left over.
 * This function does NOT allocate memory.
 * This always NUL terminates (unless siz == 0 or there were no NUL characters
 * in the dest_size characters of dest to start with).
 * <note><para>Caveat: this is supposedly a more secure alternative to
 * strcat() or strncat(), but for real security g_strconcat() is harder
 * to mess up.</para></note>
 * (original dest)) + strlen (src), so if retval >= dest_size,
 * truncation occurred.
 *
 * Returns: size of attempted result, which is MIN (dest_size, strlen
 */


/**
 * g_strlcpy:
 * @dest: destination buffer
 * @src: source buffer
 * @dest_size: length of @dest in bytes
 *
 * Portability wrapper that calls strlcpy() on systems which have it,
 * and emulates strlcpy() otherwise. Copies @src to @dest; @dest is
 * guaranteed to be nul-terminated; @src must be nul-terminated;
 * At most dest_size - 1 characters will be copied. Always nul-terminates
 * (unless dest_size == 0). This function does <emphasis>not</emphasis>
 * allocate memory. Unlike strncpy(), this function doesn't pad dest (so
 * it's often faster). It returns the size of the attempted result,
 * strlen (src), so if @retval >= @dest_size, truncation occurred.
 * <note><para>Caveat: strlcpy() is supposedly more secure than
 * strcpy() or strncpy(), but if you really want to avoid screwups,
 * g_strdup() is an even better idea.</para></note>
 *
 * Returns: length of @src
 */


/**
 * g_strncasecmp:
 * @s1: a string.
 * @s2: a string to compare with @s1.
 * @n: the maximum number of characters to compare.
 *
 * A case-insensitive string comparison, corresponding to the standard
 * strncasecmp() function on platforms which support it.
 * It is similar to g_strcasecmp() except it only compares the first @n
 * characters of the strings.
 * or a positive value if @s1 &gt; @s2.
 * comparison by calling toupper()/tolower(). These functions are
 * locale-specific and operate on single bytes. However, it is impossible
 * to handle things correctly from an I18N standpoint by operating on
 * bytes, since characters may be multibyte. Thus g_strncasecmp() is
 * broken if your string is guaranteed to be ASCII, since it's
 * locale-sensitive, and it's broken if your string is localized, since
 * it doesn't work on many encodings at all, including UTF-8, EUC-JP,
 * etc.
 * which only works on ASCII and is not locale-sensitive, and
 * g_utf8_casefold(), which is good for case-insensitive sorting of UTF-8.
 *
 * Returns: 0 if the strings match, a negative value if @s1 &lt; @s2,
 * Deprecated:2.2: The problem with g_strncasecmp() is that it does the
 * There are therefore two replacement functions: g_ascii_strncasecmp(),
 */


/**
 * g_strndup:
 * @str: the string to duplicate
 * @n: the maximum number of bytes to copy from @str
 *
 * Duplicates the first @n bytes of a string, returning a newly-allocated
 * buffer @n + 1 bytes long which will always be nul-terminated.
 * If @str is less than @n bytes long the buffer is padded with nuls.
 * If @str is %NULL it returns %NULL.
 * The returned value should be freed when no longer needed.
 * <note><para>
 * To copy a number of characters from a UTF-8 encoded string, use
 * g_utf8_strncpy() instead.
 * </para></note>
 * of @str, nul-terminated
 *
 * Returns: a newly-allocated buffer containing the first @n bytes
 */


/**
 * g_strnfill:
 * @length: the length of the new string
 * @fill_char: the byte to fill the string with
 *
 * Creates a new string @length bytes long filled with @fill_char.
 * The returned string should be freed when no longer needed.
 *
 * Returns: a newly-allocated string filled the @fill_char
 */


/**
 * g_strreverse:
 * @string: the string to reverse
 *
 * Reverses all of the bytes in a string. For example,
 * <literal>g_strreverse ("abcdef")</literal> will result
 * in "fedcba".
 * Note that g_strreverse() doesn't work on UTF-8 strings
 * containing multibyte characters. For that purpose, use
 * g_utf8_strreverse().
 *
 * Returns: the same pointer passed in as @string
 */


/**
 * g_strrstr:
 * @haystack: a nul-terminated string.
 * @needle: the nul-terminated string to search for.
 *
 * Searches the string @haystack for the last occurrence
 * of the string @needle.
 * %NULL if not found.
 *
 * Returns: a pointer to the found occurrence, or
 */


/**
 * g_strrstr_len:
 * @haystack: a nul-terminated string.
 * @haystack_len: the maximum length of @haystack.
 * @needle: the nul-terminated string to search for.
 *
 * Searches the string @haystack for the last occurrence
 * of the string @needle, limiting the length of the search
 * to @haystack_len.
 * %NULL if not found.
 *
 * Returns: a pointer to the found occurrence, or
 */


/**
 * g_strsignal:
 * @signum: the signal number. See the <literal>signal</literal> documentation
 *
 * Returns a string describing the given signal, e.g. "Segmentation fault".
 * You should use this function in preference to strsignal(), because it
 * returns a string in UTF-8 encoding, and since not all platforms support
 * the strsignal() function.
 * it returns "unknown signal (&lt;signum&gt;)". The string can only be
 * used until the next call to g_strsignal()
 *
 * Returns: a UTF-8 string describing the signal. If the signal is unknown,
 */


/**
 * g_strsplit:
 * @string: a string to split.
 * @delimiter: a string which specifies the places at which to split the string. The delimiter is not included in any of the resulting strings, unless
 * @max_tokens: the maximum number of pieces to split @string into. If this is less than 1, the string is split completely.
 *
 * Splits a string into a maximum of @max_tokens pieces, using the given
 * to the last token.
 * As a special case, the result of splitting the empty string "" is an empty
 * vector, not a vector containing a single string. The reason for this
 * special case is that being able to represent a empty vector is typically
 * more useful than consistent handling of empty elements. If you do need
 * to represent empty elements, you'll need to check for the empty string
 * before calling g_strsplit().
 * g_strfreev() to free it.
 *
 * Returns: a newly-allocated %NULL-terminated array of strings. Use
 */


/**
 * g_strsplit_set:
 * @string: The string to be tokenized
 * @delimiters: A nul-terminated string containing bytes that are used to split the string.
 * @max_tokens: The maximum number of tokens to split @string into. If this is less than 1, the string is split completely
 *
 * Splits @string into a number of tokens not containing any of the characters
 * in @delimiter. A token is the (possibly empty) longest string that does not
 * contain any of the characters in @delimiters. If @max_tokens is reached, the
 * remainder is appended to the last token.
 * For example the result of g_strsplit_set ("abc:def/ghi", ":/", -1) is a
 * %NULL-terminated vector containing the three strings "abc", "def",
 * and "ghi".
 * The result if g_strsplit_set (":def/ghi:", ":/", -1) is a %NULL-terminated
 * vector containing the four strings "", "def", "ghi", and "".
 * As a special case, the result of splitting the empty string "" is an empty
 * vector, not a vector containing a single string. The reason for this
 * special case is that being able to represent a empty vector is typically
 * more useful than consistent handling of empty elements. If you do need
 * to represent empty elements, you'll need to check for the empty string
 * before calling g_strsplit_set().
 * Note that this function works on bytes not characters, so it can't be used
 * to delimit UTF-8 strings for anything but ASCII characters.
 * g_strfreev() to free it.
 *
 * Returns: a newly-allocated %NULL-terminated array of strings. Use
 * Since: 2.4
 */


/**
 * g_strstr_len:
 * @haystack: a string.
 * @haystack_len: the maximum length of @haystack. Note that -1 is a valid length, if @haystack is nul-terminated, meaning it will search through the whole string.
 * @needle: the string to search for.
 *
 * Searches the string @haystack for the first occurrence
 * of the string @needle, limiting the length of the search
 * to @haystack_len.
 * %NULL if not found.
 *
 * Returns: a pointer to the found occurrence, or
 */


/**
 * g_strtod:
 * @nptr: the string to convert to a numeric value.
 * @endptr: if non-%NULL, it returns the character after the last character used in the conversion.
 *
 * Converts a string to a #gdouble value.
 * It calls the standard strtod() function to handle the conversion, but
 * if the string is not completely converted it attempts the conversion
 * again with g_ascii_strtod(), and returns the best match.
 * This function should seldomly be used. The normal situation when reading
 * numbers not for human consumption is to use g_ascii_strtod(). Only when
 * you know that you must expect both locale formatted and C formatted numbers
 * should you use this. Make sure that you don't pass strings such as comma
 * separated lists of values, since the commas may be interpreted as a decimal
 * point in some locales, causing unexpected results.
 *
 * Returns: the #gdouble value.
 */


/**
 * g_strup:
 * @string: the string to convert.
 *
 * Converts a string to upper case.
 * in the g_strncasecmp() docs - use g_ascii_strup() or g_utf8_strup() instead.
 *
 * Returns: the string
 * Deprecated:2.2: This function is totally broken for the reasons discussed
 */


/**
 * g_strv_length:
 * @str_array: a %NULL-terminated array of strings.
 *
 * Returns the length of the given %NULL-terminated
 * string array @str_array.
 *
 * Returns: length of @str_array.
 * Since: 2.6
 */


/**
 * g_test_add:
 * @testpath: The test path for a new test case.
 * @Fixture: The type of a fixture data structure.
 * @tdata: Data argument for the test functions.
 * @fsetup: The function to set up the fixture data.
 * @ftest: The actual test function.
 * @fteardown: The function to tear down the fixture data.
 *
 * Hook up a new test case at @testpath, similar to g_test_add_func().
 * A fixture data structure with setup and teardown function may be provided
 * though, similar to g_test_create_case().
 * g_test_add() is implemented as a macro, so that the fsetup(), ftest() and
 * fteardown() callbacks can expect a @Fixture pointer as first argument in
 * a type safe manner.
 *
 * Since: 2.16
 */


/**
 * g_test_add_data_func:
 * @testpath: Slash-separated test case path name for the test.
 * @test_data: Test data argument for the test function.
 * @test_func: The test function to invoke for this test.
 *
 * Create a new test case, similar to g_test_create_case(). However
 * the test is assumed to use no fixture, and test suites are automatically
 * created on the fly and added to the root fixture, based on the
 * slash-separated portions of @testpath. The @test_data argument
 * will be passed as first argument to @test_func.
 *
 * Since: 2.16
 */


/**
 * g_test_add_func:
 * @testpath: Slash-separated test case path name for the test.
 * @test_func: The test function to invoke for this test.
 *
 * Create a new test case, similar to g_test_create_case(). However
 * the test is assumed to use no fixture, and test suites are automatically
 * created on the fly and added to the root fixture, based on the
 * slash-separated portions of @testpath.
 *
 * Since: 2.16
 */


/**
 * g_test_bug:
 * @bug_uri_snippet: Bug specific bug tracker URI portion.
 *
 * This function adds a message to test reports that
 * associates a bug URI with a test case.
 * Bug URIs are constructed from a base URI set with g_test_bug_base()
 * and @bug_uri_snippet.
 *
 * Since: 2.16
 */


/**
 * g_test_bug_base:
 * @uri_pattern: the base pattern for bug URIs
 *
 * Specify the base URI for bug reports.
 * The base URI is used to construct bug report messages for
 * g_test_message() when g_test_bug() is called.
 * Calling this function outside of a test case sets the
 * default base URI for all test cases. Calling it from within
 * a test case changes the base URI for the scope of the test
 * case only.
 * Bug URIs are constructed by appending a bug specific URI
 * portion to @uri_pattern, or by replacing the special string
 * '%s' within @uri_pattern if that is present.
 *
 * Since: 2.16
 */


/**
 * g_test_create_case:
 * @test_name: the name for the test case
 * @data_size: the size of the fixture data structure
 * @test_data: test data argument for the test functions
 * @data_setup: the function to set up the fixture data
 * @data_test: the actual test function
 * @data_teardown: the function to teardown the fixture data
 *
 * Create a new #GTestCase, named @test_name, this API is fairly
 * low level, calling g_test_add() or g_test_add_func() is preferable.
 * When this test is executed, a fixture structure of size @data_size
 * will be allocated and filled with 0s. Then data_setup() is called
 * to initialize the fixture. After fixture setup, the actual test
 * function data_test() is called. Once the test run completed, the
 * fixture structure is torn down  by calling data_teardown() and
 * after that the memory is released.
 * Splitting up a test run into fixture setup, test function and
 * fixture teardown is most usful if the same fixture is used for
 * multiple tests. In this cases, g_test_create_case() will be
 * called with the same fixture, but varying @test_name and
 *
 * Returns: a newly allocated #GTestCase.
 * Since: 2.16
 */


/**
 * g_test_create_suite:
 * @suite_name: a name for the suite
 *
 * Create a new test suite with the name @suite_name.
 *
 * Returns: A newly allocated #GTestSuite instance.
 * Since: 2.16
 */


/**
 * g_test_fail:
 *
 * Indicates that a test failed. This function can be called
 * multiple times from the same test. You can use this function
 * if your test failed in a recoverable way.
 * Do not use this function if the failure of a test could cause
 * other tests to malfunction.
 * Calling this function will not stop the test from running, you
 * need to return from the test function yourself. So you can
 * produce additional diagnostic messages or even continue running
 * the test.
 * If not called from inside a test, this function does nothing.
 *
 * Since: 2.30
 */


/**
 * g_test_get_root:
 *
 * Get the toplevel test suite for the test path API.
 *
 * Returns: the toplevel #GTestSuite
 * Since: 2.16
 */


/**
 * g_test_init:
 * @argc: Address of the @argc parameter of the main() function. Changed if any arguments were handled.
 * @argv: Address of the @argv parameter of main(). Any parameters understood by g_test_init() stripped before return.
 * @Varargs: Reserved for future extension. Currently, you must pass %NULL.
 *
 * Initialize the GLib testing framework, e.g. by seeding the
 * test random number generator, the name for g_get_prgname()
 * and parsing test related command line args.
 * So far, the following arguments are understood:
 * <variablelist>
 * <varlistentry>
 * <term><option>-l</option></term>
 * <listitem><para>
 * list test cases available in a test executable.
 * </para></listitem>
 * </varlistentry>
 * <varlistentry>
 * <term><option>--seed=<replaceable>RANDOMSEED</replaceable></option></term>
 * <listitem><para>
 * provide a random seed to reproduce test runs using random numbers.
 * </para></listitem>
 * </varlistentry>
 * <varlistentry>
 * <term><option>--verbose</option></term>
 * <listitem><para>run tests verbosely.</para></listitem>
 * </varlistentry>
 * <varlistentry>
 * <term><option>-q</option>, <option>--quiet</option></term>
 * <listitem><para>run tests quietly.</para></listitem>
 * </varlistentry>
 * <varlistentry>
 * <term><option>-p <replaceable>TESTPATH</replaceable></option></term>
 * <listitem><para>
 * execute all tests matching <replaceable>TESTPATH</replaceable>.
 * </para></listitem>
 * </varlistentry>
 * <varlistentry>
 * <term><option>-m {perf|slow|thorough|quick}</option></term>
 * <listitem><para>
 * execute tests according to these test modes:
 * <variablelist>
 * <varlistentry>
 * <term>perf</term>
 * <listitem><para>
 * performance tests, may take long and report results.
 * </para></listitem>
 * </varlistentry>
 * <varlistentry>
 * <term>slow, thorough</term>
 * <listitem><para>
 * slow and thorough tests, may take quite long and
 * maximize coverage.
 * </para></listitem>
 * </varlistentry>
 * <varlistentry>
 * <term>quick</term>
 * <listitem><para>
 * quick tests, should run really quickly and give good coverage.
 * </para></listitem>
 * </varlistentry>
 * </variablelist>
 * </para></listitem>
 * </varlistentry>
 * <varlistentry>
 * <term><option>--debug-log</option></term>
 * <listitem><para>debug test logging output.</para></listitem>
 * </varlistentry>
 * <varlistentry>
 * <term><option>-k</option>, <option>--keep-going</option></term>
 * <listitem><para>gtester-specific argument.</para></listitem>
 * </varlistentry>
 * <varlistentry>
 * <term><option>--GTestLogFD <replaceable>N</replaceable></option></term>
 * <listitem><para>gtester-specific argument.</para></listitem>
 * </varlistentry>
 * <varlistentry>
 * <term><option>--GTestSkipCount <replaceable>N</replaceable></option></term>
 * <listitem><para>gtester-specific argument.</para></listitem>
 * </varlistentry>
 * </variablelist>
 *
 * Since: 2.16
 */


/**
 * g_test_log_buffer_free:
 *
 * Internal function for gtester to free test log messages, no ABI guarantees provided.
 */


/**
 * g_test_log_buffer_new:
 *
 * Internal function for gtester to decode test log messages, no ABI guarantees provided.
 */


/**
 * g_test_log_buffer_pop:
 *
 * Internal function for gtester to retrieve test log messages, no ABI guarantees provided.
 */


/**
 * g_test_log_buffer_push:
 *
 * Internal function for gtester to decode test log messages, no ABI guarantees provided.
 */


/**
 * g_test_log_msg_free:
 *
 * Internal function for gtester to free test log messages, no ABI guarantees provided.
 */


/**
 * g_test_log_set_fatal_handler:
 * @log_func: the log handler function.
 * @user_data: data passed to the log handler.
 *
 * Installs a non-error fatal log handler which can be
 * used to decide whether log messages which are counted
 * as fatal abort the program.
 * The use case here is that you are running a test case
 * that depends on particular libraries or circumstances
 * and cannot prevent certain known critical or warning
 * messages. So you install a handler that compares the
 * domain and message to precisely not abort in such a case.
 * Note that the handler is reset at the beginning of
 * any test case, so you have to set it inside each test
 * function which needs the special behavior.
 * This handler has no effect on g_error messages.
 *
 * Since: 2.22
 */


/**
 * g_test_maximized_result:
 * @maximized_quantity: the reported value
 * @format: the format string of the report message
 * @Varargs: arguments to pass to the printf() function
 *
 * Report the result of a performance or measurement test.
 * The test should generally strive to maximize the reported
 * quantities (larger values are better than smaller ones),
 * this and @maximized_quantity can determine sorting
 * order for test result reports.
 *
 * Since: 2.16
 */


/**
 * g_test_message:
 * @format: the format string
 * @...: printf-like arguments to @format
 *
 * Add a message to the test report.
 *
 * Since: 2.16
 */


/**
 * g_test_minimized_result:
 * @minimized_quantity: the reported value
 * @format: the format string of the report message
 * @Varargs: arguments to pass to the printf() function
 *
 * Report the result of a performance or measurement test.
 * The test should generally strive to minimize the reported
 * quantities (smaller values are better than larger ones),
 * this and @minimized_quantity can determine sorting
 * order for test result reports.
 *
 * Since: 2.16
 */


/**
 * g_test_queue_destroy:
 * @destroy_func: Destroy callback for teardown phase.
 * @destroy_data: Destroy callback data.
 *
 * This function enqueus a callback @destroy_func() to be executed
 * during the next test case teardown phase. This is most useful
 * to auto destruct allocted test resources at the end of a test run.
 * Resources are released in reverse queue order, that means enqueueing
 * callback A before callback B will cause B() to be called before
 * A() during teardown.
 *
 * Since: 2.16
 */


/**
 * g_test_queue_free:
 * @gfree_pointer: the pointer to be stored.
 *
 * Enqueue a pointer to be released with g_free() during the next
 * teardown phase. This is equivalent to calling g_test_queue_destroy()
 * with a destroy callback of g_free().
 *
 * Since: 2.16
 */


/**
 * g_test_rand_double:
 *
 * Get a reproducible random floating point number,
 * see g_test_rand_int() for details on test case random numbers.
 *
 * Returns: a random number from the seeded random number generator.
 * Since: 2.16
 */


/**
 * g_test_rand_double_range:
 * @range_start: the minimum value returned by this function
 * @range_end: the minimum value not returned by this function
 *
 * Get a reproducible random floating pointer number out of a specified range,
 * see g_test_rand_int() for details on test case random numbers.
 *
 * Returns: a number with @range_start <= number < @range_end.
 * Since: 2.16
 */


/**
 * g_test_rand_int:
 *
 * Get a reproducible random integer number.
 * The random numbers generated by the g_test_rand_*() family of functions
 * change with every new test program start, unless the --seed option is
 * given when starting test programs.
 * For individual test cases however, the random number generator is
 * reseeded, to avoid dependencies between tests and to make --seed
 * effective for all test cases.
 *
 * Returns: a random number from the seeded random number generator.
 * Since: 2.16
 */


/**
 * g_test_rand_int_range:
 * @begin: the minimum value returned by this function
 * @end: the smallest value not to be returned by this function
 *
 * Get a reproducible random integer number out of a specified range,
 * see g_test_rand_int() for details on test case random numbers.
 *
 * Returns: a number with @begin <= number < @end.
 * Since: 2.16
 */


/**
 * g_test_run:
 *
 * Runs all tests under the toplevel suite which can be retrieved
 * with g_test_get_root(). Similar to g_test_run_suite(), the test
 * cases to be run are filtered according to
 * test path arguments (-p <replaceable>testpath</replaceable>) as
 * parsed by g_test_init().
 * g_test_run_suite() or g_test_run() may only be called once
 * in a program.
 *
 * Returns: 0 on success
 * Since: 2.16
 */


/**
 * g_test_run_suite:
 * @suite: a #GTestSuite
 *
 * Execute the tests within @suite and all nested #GTestSuites.
 * The test suites to be executed are filtered according to
 * test path arguments (-p <replaceable>testpath</replaceable>)
 * as parsed by g_test_init().
 * g_test_run_suite() or g_test_run() may only be called once
 * in a program.
 *
 * Returns: 0 on success
 * Since: 2.16
 */


/**
 * g_test_suite_add:
 * @suite: a #GTestSuite
 * @test_case: a #GTestCase
 *
 * Adds @test_case to @suite.
 *
 * Since: 2.16
 */


/**
 * g_test_suite_add_suite:
 * @suite: a #GTestSuite
 * @nestedsuite: another #GTestSuite
 *
 * Adds @nestedsuite to @suite.
 *
 * Since: 2.16
 */


/**
 * g_test_timer_elapsed:
 *
 * Get the time since the last start of the timer with g_test_timer_start().
 *
 * Returns: the time since the last start of the timer, as a double
 * Since: 2.16
 */


/**
 * g_test_timer_last:
 *
 * Report the last result of g_test_timer_elapsed().
 *
 * Returns: the last result of g_test_timer_elapsed(), as a double
 * Since: 2.16
 */


/**
 * g_test_timer_start:
 *
 * Start a timing test. Call g_test_timer_elapsed() when the task is supposed
 * to be done. Call this function again to restart the timer.
 *
 * Since: 2.16
 */


/**
 * g_test_trap_fork:
 * @usec_timeout: Timeout for the forked test in micro seconds.
 * @test_trap_flags: Flags to modify forking behaviour.
 *
 * Fork the current test program to execute a test case that might
 * not return or that might abort. The forked test case is aborted
 * and considered failing if its run time exceeds @usec_timeout.
 * The forking behavior can be configured with the #GTestTrapFlags flags.
 * In the following example, the test code forks, the forked child
 * process produces some sample output and exits successfully.
 * The forking parent process then asserts successful child program
 * termination and validates child program outputs.
 * |[
 * static void
 * test_fork_patterns (void)
 * {
 * if (g_test_trap_fork (0, G_TEST_TRAP_SILENCE_STDOUT | G_TEST_TRAP_SILENCE_STDERR))
 * {
 * exit (0); /&ast; successful test run &ast;/
 * }
 * g_test_trap_assert_passed();
 * g_test_trap_assert_stdout ("*somagic17*");
 * g_test_trap_assert_stderr ("*semagic43*");
 * }
 * ]|
 * This function is implemented only on Unix platforms.
 *
 * G_print ("some stdout text: somagic17\n");
 * G_printerr ("some stderr text: semagic43\n");
 * Returns: %TRUE for the forked child and %FALSE for the executing parent process.
 * Since: 2.16
 */


/**
 * g_test_trap_has_passed:
 *
 * Check the result of the last g_test_trap_fork() call.
 *
 * Returns: %TRUE if the last forked child terminated successfully.
 * Since: 2.16
 */


/**
 * g_test_trap_reached_timeout:
 *
 * Check the result of the last g_test_trap_fork() call.
 *
 * Returns: %TRUE if the last forked child got killed due to a fork timeout.
 * Since: 2.16
 */


/**
 * g_thread_create:
 * @func: a function to execute in the new thread.
 * @data: an argument to supply to the new thread.
 * @joinable: should this thread be joinable?
 * @error: return location for error.
 * @Returns: the new #GThread on success.
 *
 * This function creates a new thread with the default priority.
 * If @joinable is %TRUE, you can wait for this threads termination
 * calling g_thread_join(). Otherwise the thread will just disappear
 * when it terminates.
 * The new thread executes the function @func with the argument @data.
 * If the thread was created successfully, it is returned.
 * The error is set, if and only if the function returns %NULL.
 */


/**
 * g_thread_create_full:
 * @func: a function to execute in the new thread.
 * @data: an argument to supply to the new thread.
 * @stack_size: a stack size for the new thread.
 * @joinable: should this thread be joinable?
 * @bound: should this thread be bound to a system thread?
 * @priority: a priority for the thread.
 * @error: return location for error.
 * @Returns: the new #GThread on success.
 *
 * This function creates a new thread with the priority @priority. If
 * the underlying thread implementation supports it, the thread gets a
 * stack size of @stack_size or the default value for the current
 * platform, if @stack_size is 0.
 * If @joinable is %TRUE, you can wait for this threads termination
 * calling g_thread_join(). Otherwise the thread will just disappear
 * when it terminates. If @bound is %TRUE, this thread will be
 * scheduled in the system scope, otherwise the implementation is free
 * to do scheduling in the process scope. The first variant is more
 * expensive resource-wise, but generally faster. On some systems (e.g.
 * Linux) all threads are bound.
 * The new thread executes the function @func with the argument @data.
 * If the thread was created successfully, it is returned.
 * The error is set, if and only if the function returns %NULL.
 * <note><para>It is not guaranteed that threads with different priorities
 * really behave accordingly. On some systems (e.g. Linux) there are no
 * thread priorities. On other systems (e.g. Solaris) there doesn't
 * seem to be different scheduling for different priorities. All in all
 * try to avoid being dependent on priorities. Use
 * %G_THREAD_PRIORITY_NORMAL here as a default.</para></note>
 * <note><para>Only use g_thread_create_full() if you really can't use
 * g_thread_create() instead. g_thread_create() does not take
 * be used in cases in which it is unavoidable.</para></note>
 */


/**
 * g_thread_exit:
 * @retval: the return value of this thread.
 *
 * Exits the current thread. If another thread is waiting for that
 * thread using g_thread_join() and the current thread is joinable, the
 * waiting thread will be woken up and get @retval as the return value
 * of g_thread_join(). If the current thread is not joinable, @retval
 * is ignored. Calling
 * <informalexample>
 * <programlisting>
 * g_thread_exit (retval);
 * </programlisting>
 * </informalexample>
 * is equivalent to returning @retval from the function @func, as given
 * to g_thread_create().
 * <note><para>Never call g_thread_exit() from within a thread of a
 * #GThreadPool, as that will mess up the bookkeeping and lead to funny
 * and unwanted results.</para></note>
 */


/**
 * g_thread_foreach:
 * @thread_func: function to call for all GThread structures
 * @user_data: second argument to @thread_func
 *
 * Call @thread_func on all existing #GThread structures. Note that
 * threads may decide to exit while @thread_func is running, so
 * without intimate knowledge about the lifetime of foreign threads,
 * first argument. However, @thread_func will not be called for threads
 * which are known to have exited already.
 * Due to thread lifetime checks, this function has an execution complexity
 * which is quadratic in the number of existing threads.
 *
 * Since: 2.10
 */


/**
 * g_thread_get_initialized:
 *
 * Indicates if g_thread_init() has been called.
 *
 * Returns: %TRUE if threads have been initialized.
 * Since: 2.20
 */


/**
 * g_thread_init:
 * @vtable: a function table of type #GThreadFunctions, that provides the entry points to the thread system to be used.
 *
 * If you use GLib from more than one thread, you must initialize the
 * thread system by calling g_thread_init(). Most of the time you will
 * only have to call <literal>g_thread_init (NULL)</literal>.
 * <note><para>Do not call g_thread_init() with a non-%NULL parameter unless
 * you really know what you are doing.</para></note>
 * <note><para>g_thread_init() must not be called directly or indirectly as a
 * callback from GLib. Also no mutexes may be currently locked while
 * calling g_thread_init().</para></note>
 * <note><para>g_thread_init() changes the way in which #GTimer measures
 * elapsed time. As a consequence, timers that are running while
 * g_thread_init() is called may report unreliable times.</para></note>
 * Calling g_thread_init() multiple times is allowed (since version
 * 2.24), but nothing happens except for the first call. If the
 * argument is non-%NULL on such a call a warning will be printed, but
 * otherwise the argument is ignored.
 * If no thread system is available and @vtable is %NULL or if not all
 * elements of @vtable are non-%NULL, then g_thread_init() will abort.
 * <note><para>To use g_thread_init() in your program, you have to link with
 * the libraries that the command <command>pkg-config --libs
 * gthread-2.0</command> outputs. This is not the case for all the
 * other thread related functions of GLib. Those can be used without
 * having to link with the thread libraries.</para></note>
 */


/**
 * g_thread_join:
 * @thread: a #GThread to be waited for.
 * @Returns: the return value of the thread.
 *
 * Waits until @thread finishes, i.e. the function @func, as given to
 * g_thread_create(), returns or g_thread_exit() is called by @thread.
 * All resources of @thread including the #GThread struct are released.
 * g_thread_create(). The value returned by @func or given to
 * g_thread_exit() by @thread is returned by this function.
 */


/**
 * g_thread_pool_free:
 * @pool: a #GThreadPool
 * @immediate: should @pool shut down immediately?
 * @wait_: should the function wait for all tasks to be finished?
 *
 * Frees all resources allocated for @pool.
 * If @immediate is %TRUE, no new task is processed for
 * processed. Note however, that no thread of this pool is
 * interrupted, while processing a task. Instead at least all still
 * running threads can finish their tasks before the @pool is freed.
 * If @wait_ is %TRUE, the functions does not return before all tasks
 * to be processed (dependent on @immediate, whether all or only the
 * currently running) are ready. Otherwise the function returns immediately.
 * After calling this function @pool must not be used anymore.
 */


/**
 * g_thread_pool_get_max_idle_time:
 *
 * This function will return the maximum @interval that a thread will
 * wait in the thread pool for new tasks before being stopped.
 * If this function returns 0, threads waiting in the thread pool for
 * new work are not stopped.
 * thread pool before stopping the thread (1/1000ths of a second).
 *
 * Returns: the maximum @interval to wait for new tasks in the
 * Since: 2.10
 */


/**
 * g_thread_pool_get_max_threads:
 * @pool: a #GThreadPool
 *
 * Returns the maximal number of threads for @pool.
 *
 * Returns: the maximal number of threads
 */


/**
 * g_thread_pool_get_max_unused_threads:
 *
 * Returns the maximal allowed number of unused threads.
 *
 * Returns: the maximal number of unused threads
 */


/**
 * g_thread_pool_get_num_threads:
 * @pool: a #GThreadPool
 *
 * Returns the number of threads currently running in @pool.
 *
 * Returns: the number of threads currently running
 */


/**
 * g_thread_pool_get_num_unused_threads:
 *
 * Returns the number of currently unused threads.
 *
 * Returns: the number of currently unused threads
 */


/**
 * g_thread_pool_new:
 * @func: a function to execute in the threads of the new thread pool
 * @user_data: user data that is handed over to @func every time it is called
 * @max_threads: the maximal number of threads to execute concurrently in the new thread pool, -1 means no limit
 * @exclusive: should this thread pool be exclusive?
 * @error: return location for error
 *
 * This function creates a new thread pool.
 * Whenever you call g_thread_pool_push(), either a new thread is
 * created or an unused one is reused. At most @max_threads threads
 * are running concurrently for this thread pool. @max_threads = -1
 * allows unlimited threads to be created for this thread pool. The
 * newly created or reused thread now executes the function @func with
 * the two arguments. The first one is the parameter to
 * g_thread_pool_push() and the second one is @user_data.
 * The parameter @exclusive determines, whether the thread pool owns
 * all threads exclusive or whether the threads are shared
 * globally. If @exclusive is %TRUE, @max_threads threads are started
 * immediately and they will run exclusively for this thread pool until
 * it is destroyed by g_thread_pool_free(). If @exclusive is %FALSE,
 * threads are created, when needed and shared between all
 * non-exclusive thread pools. This implies that @max_threads may not
 * be -1 for exclusive thread pools.
 * errors. An error can only occur when @exclusive is set to %TRUE and
 * not all @max_threads threads could be created.
 *
 * Returns: the new #GThreadPool
 */


/**
 * g_thread_pool_push:
 * @pool: a #GThreadPool
 * @data: a new task for @pool
 * @error: return location for error
 *
 * Inserts @data into the list of tasks to be executed by @pool. When
 * the number of currently running threads is lower than the maximal
 * allowed number of threads, a new thread is started (or reused) with
 * the properties given to g_thread_pool_new (). Otherwise @data stays
 * in the queue until a thread in this pool finishes its previous task
 * and processes @data.
 * errors. An error can only occur when a new thread couldn't be
 * created. In that case @data is simply appended to the queue of work
 * to do.
 */


/**
 * g_thread_pool_set_max_idle_time:
 * @interval: the maximum @interval (1/1000ths of a second) a thread can be idle.
 *
 * This function will set the maximum @interval that a thread waiting
 * in the pool for new tasks can be idle for before being
 * stopped. This function is similar to calling
 * g_thread_pool_stop_unused_threads() on a regular timeout, except,
 * this is done on a per thread basis.
 * By setting @interval to 0, idle threads will not be stopped.
 * This function makes use of g_async_queue_timed_pop () using
 *
 * Since: 2.10
 */


/**
 * g_thread_pool_set_max_threads:
 * @pool: a #GThreadPool
 * @max_threads: a new maximal number of threads for @pool
 * @error: return location for error
 *
 * Sets the maximal allowed number of threads for @pool. A value of -1
 * means, that the maximal number of threads is unlimited.
 * Setting @max_threads to 0 means stopping all work for @pool. It is
 * effectively frozen until @max_threads is set to a non-zero value
 * again.
 * A thread is never terminated while calling @func, as supplied by
 * g_thread_pool_new (). Instead the maximal number of threads only
 * has effect for the allocation of new threads in g_thread_pool_push().
 * A new thread is allocated, whenever the number of currently
 * running threads in @pool is smaller than the maximal number.
 * errors. An error can only occur when a new thread couldn't be
 * created.
 */


/**
 * g_thread_pool_set_max_unused_threads:
 * @max_threads: maximal number of unused threads
 *
 * Sets the maximal number of unused threads to @max_threads. If
 * threads.
 */


/**
 * g_thread_pool_set_sort_function:
 * @pool: a #GThreadPool
 * @func: the #GCompareDataFunc used to sort the list of tasks. This function is passed two tasks. It should return 0 if the order in which they are handled does not matter, a negative value if the first task should be processed before the second or a positive value if the second task should be processed first.
 * @user_data: user data passed to @func.
 *
 * Sets the function used to sort the list of tasks. This allows the
 * tasks to be processed by a priority determined by @func, and not
 * just in the order in which they were added to the pool.
 * Note, if the maximum number of threads is more than 1, the order
 * that threads are executed cannot be guranteed 100%. Threads are
 * scheduled by the operating system and are executed at random. It
 * cannot be assumed that threads are executed in the order they are
 * created.
 *
 * Since: 2.10
 */


/**
 * g_thread_pool_stop_unused_threads:
 *
 * Stops all currently unused threads. This does not change the
 * maximal number of unused threads. This function can be used to
 * regularly stop all unused threads e.g. from g_timeout_add().
 */


/**
 * g_thread_pool_unprocessed:
 * @pool: a #GThreadPool
 *
 * Returns the number of tasks still unprocessed in @pool.
 *
 * Returns: the number of unprocessed tasks
 */


/**
 * g_thread_self:
 * @Returns: the current thread.
 *
 * This functions returns the #GThread corresponding to the calling
 * thread.
 */


/**
 * g_thread_set_priority:
 * @thread: a #GThread.
 * @priority: a new priority for @thread.
 *
 * Changes the priority of @thread to @priority.
 * <note><para>It is not guaranteed that threads with different
 * priorities really behave accordingly. On some systems (e.g. Linux)
 * there are no thread priorities. On other systems (e.g. Solaris) there
 * doesn't seem to be different scheduling for different priorities. All
 * in all try to avoid being dependent on priorities.</para></note>
 */


/**
 * g_thread_supported:
 * @Returns: %TRUE, if the thread system is initialized.
 *
 * This function returns %TRUE if the thread system is initialized, and
 * %FALSE if it is not.
 * <note><para>This function is actually a macro. Apart from taking the
 * address of it you can however use it as if it was a
 * function.</para></note>
 */


/**
 * g_thread_yield:
 *
 * Gives way to other threads waiting to be scheduled.
 * This function is often used as a method to make busy wait less evil.
 * But in most cases you will encounter, there are better methods to do
 * that. So in general you shouldn't use this function.
 */


/**
 * g_time_val_add:
 * @time_: a #GTimeVal
 * @microseconds: number of microseconds to add to @time
 *
 * Adds the given number of microseconds to @time_. @microseconds can
 * also be negative to decrease the value of @time_.
 */


/**
 * g_time_val_from_iso8601:
 * @iso_date: an ISO 8601 encoded date string
 * @time_: a #GTimeVal
 *
 * Converts a string containing an ISO 8601 encoded date and time
 * to a #GTimeVal and puts it into @time_.
 *
 * Returns: %TRUE if the conversion was successful.
 * Since: 2.12
 */


/**
 * g_time_val_to_iso8601:
 * @time_: a #GTimeVal
 *
 * Converts @time_ into an ISO 8601 encoded string, relative to the
 * Coordinated Universal Time (UTC).
 *
 * Returns: a newly allocated string containing an ISO 8601 date
 * Since: 2.12
 */


/**
 * g_time_zone_adjust_time:
 * @tz: a #GTimeZone
 * @type: the #GTimeType of @time_
 * @time_: a pointer to a number of seconds since January 1, 1970
 *
 * Finds an interval within @tz that corresponds to the given @time_,
 * possibly adjusting @time_ if required to fit into an interval.
 * The meaning of @time_ depends on @type.
 * This function is similar to g_time_zone_find_interval(), with the
 * difference that it always succeeds (by making the adjustments
 * described below).
 * In any of the cases where g_time_zone_find_interval() succeeds then
 * this function returns the same value, without modifying @time_.
 * This function may, however, modify @time_ in order to deal with
 * non-existent times.  If the non-existent local @time_ of 02:30 were
 * requested on March 13th 2010 in Toronto then this function would
 * adjust @time_ to be 03:00 and return the interval containing the
 * adjusted time.
 *
 * Returns: the interval containing @time_, never -1
 * Since: 2.26
 */


/**
 * g_time_zone_find_interval:
 * @tz: a #GTimeZone
 * @type: the #GTimeType of @time_
 * @time_: a number of seconds since January 1, 1970
 *
 * Finds an the interval within @tz that corresponds to the given @time_.
 * The meaning of @time_ depends on @type.
 * If @type is %G_TIME_TYPE_UNIVERSAL then this function will always
 * succeed (since universal time is monotonic and continuous).
 * Otherwise @time_ is treated is local time.  The distinction between
 * %G_TIME_TYPE_STANDARD and %G_TIME_TYPE_DAYLIGHT is ignored except in
 * the case that the given @time_ is ambiguous.  In Toronto, for example,
 * 01:30 on November 7th 2010 occured twice (once inside of daylight
 * savings time and the next, an hour later, outside of daylight savings
 * time).  In this case, the different value of @type would result in a
 * different interval being returned.
 * It is still possible for this function to fail.  In Toronto, for
 * example, 02:00 on March 14th 2010 does not exist (due to the leap
 * forward to begin daylight savings time).  -1 is returned in that
 * case.
 *
 * Returns: the interval containing @time_, or -1 in case of failure
 * Since: 2.26
 */


/**
 * g_time_zone_get_abbreviation:
 * @tz: a #GTimeZone
 * @interval: an interval within the timezone
 *
 * Determines the time zone abbreviation to be used during a particular
 * For example, in Toronto this is currently "EST" during the winter
 * months and "EDT" during the summer months when daylight savings time
 * is in effect.
 *
 * Returns: the time zone abbreviation, which belongs to @tz
 * Since: 2.26
 */


/**
 * g_time_zone_get_offset:
 * @tz: a #GTimeZone
 * @interval: an interval within the timezone
 *
 * Determines the offset to UTC in effect during a particular @interval
 * of time in the time zone @tz.
 * The offset is the number of seconds that you add to UTC time to
 * west of GMT, positive numbers for east).
 * local time in @tz
 *
 * Arrive at local time for @tz (ie: negative numbers for time zones
 * Returns: the number of seconds that should be added to UTC to get the
 * Since: 2.26
 */


/**
 * g_time_zone_is_dst:
 * @tz: a #GTimeZone
 * @interval: an interval within the timezone
 *
 * Determines if daylight savings time is in effect during a particular
 *
 * Returns: %TRUE if daylight savings time is in effect
 * Since: 2.26
 */


/**
 * g_time_zone_new:
 * @identifier: (allow-none): a timezone identifier
 *
 * Creates a #GTimeZone corresponding to @identifier.
 * something that would pass as a valid value for the
 * <varname>TZ</varname> environment variable (including %NULL).
 * Valid RFC3339 time offsets are <literal>"Z"</literal> (for UTC) or
 * <literal>"±hh:mm"</literal>.  ISO 8601 additionally specifies
 * <literal>"±hhmm"</literal> and <literal>"±hh"</literal>.
 * The <varname>TZ</varname> environment variable typically corresponds
 * to the name of a file in the zoneinfo database, but there are many
 * other possibilities.  Note that those other possibilities are not
 * currently implemented, but are planned.
 * g_time_zone_new_local() calls this function with the value of the
 * <varname>TZ</varname> environment variable.  This function itself is
 * independent of the value of <varname>TZ</varname>, but if @identifier
 * is %NULL then <filename>/etc/localtime</filename> will be consulted
 * to discover the correct timezone.
 * See <ulink
 * url='http://tools.ietf.org/html/rfc3339#section-5.6'>RFC3339
 * §5.6</ulink> for a precise definition of valid RFC3339 time offsets
 * (the <varname>time-offset</varname> expansion) and ISO 8601 for the
 * full list of valid time offsets.  See <ulink
 * url='http://www.gnu.org/s/libc/manual/html_node/TZ-Variable.html'>The
 * GNU C Library manual</ulink> for an explanation of the possible
 * values of the <varname>TZ</varname> environment variable.
 * You should release the return value by calling g_time_zone_unref()
 * when you are done with it.
 *
 * Returns: the requested timezone
 * Since: 2.26
 */


/**
 * g_time_zone_new_local:
 *
 * Creates a #GTimeZone corresponding to local time.
 * This is equivalent to calling g_time_zone_new() with the value of the
 * <varname>TZ</varname> environment variable (including the possibility
 * of %NULL).  Changes made to <varname>TZ</varname> after the first
 * call to this function may or may not be noticed by future calls.
 * You should release the return value by calling g_time_zone_unref()
 * when you are done with it.
 *
 * Returns: the local timezone
 * Since: 2.26
 */


/**
 * g_time_zone_new_utc:
 *
 * Creates a #GTimeZone corresponding to UTC.
 * This is equivalent to calling g_time_zone_new() with a value like
 * "Z", "UTC", "+00", etc.
 * You should release the return value by calling g_time_zone_unref()
 * when you are done with it.
 *
 * Returns: the universal timezone
 * Since: 2.26
 */


/**
 * g_time_zone_ref:
 * @tz: a #GTimeZone
 *
 * Increases the reference count on @tz.
 *
 * Returns: a new reference to @tz.
 * Since: 2.26
 */


/**
 * g_time_zone_refresh_local:
 *
 * Notifies #GTimeZone that the local timezone may have changed.
 * In response, #GTimeZone will drop its cache of the local time zone.
 * No existing #GTimeZone will be modified and no #GDateTime will change
 * its timezone but future calls to g_time_zone_new_local() will start
 * returning the new timezone.
 * #GTimeZone does no monitoring of the local timezone on its own, which
 * is why you have to call this function to notify it of the change.
 * If you use #GTimeZoneMonitor to watch for changes then this function
 * will automatically be called for you.
 */


/**
 * g_time_zone_unref:
 * @tz: a #GTimeZone
 *
 * Decreases the reference count on @tz.
 *
 * Since: 2.26
 */


/**
 * g_timeout_add:
 * @interval: the time between calls to the function, in milliseconds (1/1000ths of a second)
 * @function: function to call
 * @data: data to pass to @function
 *
 * Sets a function to be called at regular intervals, with the default
 * priority, #G_PRIORITY_DEFAULT.  The function is called repeatedly
 * until it returns %FALSE, at which point the timeout is automatically
 * destroyed and the function will not be called again.  The first call
 * to the function will be at the end of the first @interval.
 * Note that timeout functions may be delayed, due to the processing of other
 * event sources. Thus they should not be relied on for precise timing.
 * After each call to the timeout function, the time of the next
 * timeout is recalculated based on the current time and the given interval
 * (it does not try to 'catch up' time lost in delays).
 * If you want to have a timer in the "seconds" range and do not care
 * about the exact time of the first call of the timer, use the
 * g_timeout_add_seconds() function; this function allows for more
 * optimizations and more efficient system power usage.
 * This internally creates a main loop source using g_timeout_source_new()
 * and attaches it to the main loop context using g_source_attach(). You can
 * do these steps manually if you need greater control.
 *
 * Returns: the ID (greater than 0) of the event source.
 */


/**
 * g_timeout_add_full:
 * @priority: the priority of the timeout source. Typically this will be in the range between #G_PRIORITY_DEFAULT and #G_PRIORITY_HIGH.
 * @interval: the time between calls to the function, in milliseconds (1/1000ths of a second)
 * @function: function to call
 * @data: data to pass to @function
 * @notify: function to call when the timeout is removed, or %NULL
 *
 * Sets a function to be called at regular intervals, with the given
 * priority.  The function is called repeatedly until it returns
 * %FALSE, at which point the timeout is automatically destroyed and
 * the function will not be called again.  The @notify function is
 * called when the timeout is destroyed.  The first call to the
 * function will be at the end of the first @interval.
 * Note that timeout functions may be delayed, due to the processing of other
 * event sources. Thus they should not be relied on for precise timing.
 * After each call to the timeout function, the time of the next
 * timeout is recalculated based on the current time and the given interval
 * (it does not try to 'catch up' time lost in delays).
 * This internally creates a main loop source using g_timeout_source_new()
 * and attaches it to the main loop context using g_source_attach(). You can
 * do these steps manually if you need greater control.
 *
 * Returns: the ID (greater than 0) of the event source.
 * Rename to: g_timeout_add
 */


/**
 * g_timeout_add_seconds:
 * @interval: the time between calls to the function, in seconds
 * @function: function to call
 * @data: data to pass to @function
 *
 * Sets a function to be called at regular intervals with the default
 * priority, #G_PRIORITY_DEFAULT. The function is called repeatedly until
 * it returns %FALSE, at which point the timeout is automatically destroyed
 * and the function will not be called again.
 * This internally creates a main loop source using
 * g_timeout_source_new_seconds() and attaches it to the main loop context
 * using g_source_attach(). You can do these steps manually if you need
 * greater control. Also see g_timeout_add_seconds_full().
 * Note that the first call of the timer may not be precise for timeouts
 * of one second. If you need finer precision and have such a timeout,
 * you may want to use g_timeout_add() instead.
 *
 * Returns: the ID (greater than 0) of the event source.
 * Since: 2.14
 */


/**
 * g_timeout_add_seconds_full:
 * @priority: the priority of the timeout source. Typically this will be in the range between #G_PRIORITY_DEFAULT and #G_PRIORITY_HIGH.
 * @interval: the time between calls to the function, in seconds
 * @function: function to call
 * @data: data to pass to @function
 * @notify: function to call when the timeout is removed, or %NULL
 *
 * Sets a function to be called at regular intervals, with @priority.
 * The function is called repeatedly until it returns %FALSE, at which
 * point the timeout is automatically destroyed and the function will
 * not be called again.
 * Unlike g_timeout_add(), this function operates at whole second granularity.
 * The initial starting point of the timer is determined by the implementation
 * and the implementation is expected to group multiple timers together so that
 * they fire all at the same time.
 * To allow this grouping, the @interval to the first timer is rounded
 * and can deviate up to one second from the specified interval.
 * Subsequent timer iterations will generally run at the specified interval.
 * Note that timeout functions may be delayed, due to the processing of other
 * event sources. Thus they should not be relied on for precise timing.
 * After each call to the timeout function, the time of the next
 * timeout is recalculated based on the current time and the given @interval
 * If you want timing more precise than whole seconds, use g_timeout_add()
 * instead.
 * The grouping of timers to fire at the same time results in a more power
 * and CPU efficient behavior so if your timer is in multiples of seconds
 * and you don't require the first timer exactly one second from now, the
 * use of g_timeout_add_seconds() is preferred over g_timeout_add().
 * This internally creates a main loop source using
 * g_timeout_source_new_seconds() and attaches it to the main loop context
 * using g_source_attach(). You can do these steps manually if you need
 * greater control.
 *
 * Returns: the ID (greater than 0) of the event source.
 * Since: 2.14
 * Rename to: g_timeout_add_seconds
 */


/**
 * g_timeout_source_new:
 * @interval: the timeout interval in milliseconds.
 *
 * Creates a new timeout source.
 * The source will not initially be associated with any #GMainContext
 * and must be added to one with g_source_attach() before it will be
 * executed.
 *
 * Returns: the newly-created timeout source
 */


/**
 * g_timeout_source_new_seconds:
 * @interval: the timeout interval in seconds
 *
 * Creates a new timeout source.
 * The source will not initially be associated with any #GMainContext
 * and must be added to one with g_source_attach() before it will be
 * executed.
 * The scheduling granularity/accuracy of this timeout source will be
 * in seconds.
 *
 * Returns: the newly-created timeout source
 * Since: 2.14
 */


/**
 * g_timer_continue:
 * @timer: a #GTimer.
 *
 * Resumes a timer that has previously been stopped with
 * g_timer_stop(). g_timer_stop() must be called before using this
 * function.
 *
 * Since: 2.4
 */


/**
 * g_timer_destroy:
 * @timer: a #GTimer to destroy.
 *
 * Destroys a timer, freeing associated resources.
 */


/**
 * g_timer_elapsed:
 * @timer: a #GTimer.
 * @microseconds: return location for the fractional part of seconds elapsed, in microseconds (that is, the total number of microseconds elapsed, modulo 1000000), or %NULL
 * @Returns: seconds elapsed as a floating point value, including any fractional part.
 *
 * If @timer has been started but not stopped, obtains the time since
 * the timer was started. If @timer has been stopped, obtains the
 * elapsed time between the time it was started and the time it was
 * stopped. The return value is the number of seconds elapsed,
 * including any fractional part. The @microseconds out parameter is
 * essentially useless.
 * <warning><para>
 * Calling initialization functions, in particular g_thread_init(), while a
 * timer is running will cause invalid return values from this function.
 * </para></warning>
 */


/**
 * g_timer_new:
 * @Returns: a new #GTimer.
 *
 * Creates a new timer, and starts timing (i.e. g_timer_start() is
 * implicitly called for you).
 */


/**
 * g_timer_reset:
 * @timer: a #GTimer.
 *
 * This function is useless; it's fine to call g_timer_start() on an
 * already-started timer to reset the start time, so g_timer_reset()
 * serves no purpose.
 */


/**
 * g_timer_start:
 * @timer: a #GTimer.
 *
 * Marks a start time, so that future calls to g_timer_elapsed() will
 * report the time since g_timer_start() was called. g_timer_new()
 * automatically marks the start time, so no need to call
 * g_timer_start() immediately after creating the timer.
 */


/**
 * g_timer_stop:
 * @timer: a #GTimer.
 *
 * Marks an end time, so calls to g_timer_elapsed() will return the
 * difference between this end time and the start time.
 */


/**
 * g_tree_destroy:
 * @tree: a #GTree.
 *
 * Removes all keys and values from the #GTree and decreases its
 * reference count by one. If keys and/or values are dynamically
 * allocated, you should either free them first or create the #GTree
 * using g_tree_new_full().  In the latter case the destroy functions
 * you supplied will be called on all keys and values before destroying
 * the #GTree.
 */


/**
 * g_tree_foreach:
 * @tree: a #GTree.
 * @func: the function to call for each node visited. If this function returns %TRUE, the traversal is stopped.
 * @user_data: user data to pass to the function.
 *
 * Calls the given function for each of the key/value pairs in the #GTree.
 * The function is passed the key and value of each pair, and the given
 * The tree may not be modified while iterating over it (you can't
 * add/remove items). To remove all items matching a predicate, you need
 * to add each item to a list in your #GTraverseFunc as you walk over
 * the tree, then walk the list and remove each item.
 */


/**
 * g_tree_height:
 * @tree: a #GTree.
 *
 * Gets the height of a #GTree.
 * If the #GTree contains no nodes, the height is 0.
 * If the #GTree contains only one root node the height is 1.
 * If the root node has children the height is 2, etc.
 *
 * Returns: the height of the #GTree.
 */


/**
 * g_tree_insert:
 * @tree: a #GTree.
 * @key: the key to insert.
 * @value: the value corresponding to the key.
 *
 * Inserts a key/value pair into a #GTree. If the given key already exists
 * in the #GTree its corresponding value is set to the new value. If you
 * supplied a value_destroy_func when creating the #GTree, the old value is
 * freed using that function. If you supplied a @key_destroy_func when
 * creating the #GTree, the passed key is freed using that function.
 * The tree is automatically 'balanced' as new key/value pairs are added,
 * so that the distance from the root to every leaf is as small as possible.
 */


/**
 * g_tree_lookup:
 * @tree: a #GTree.
 * @key: the key to look up.
 *
 * Gets the value corresponding to the given key. Since a #GTree is
 * automatically balanced as key/value pairs are added, key lookup is very
 * fast.
 * not found.
 *
 * Returns: the value corresponding to the key, or %NULL if the key was
 */


/**
 * g_tree_lookup_extended:
 * @tree: a #GTree.
 * @lookup_key: the key to look up.
 * @orig_key: returns the original key.
 * @value: returns the value associated with the key.
 *
 * Looks up a key in the #GTree, returning the original key and the
 * associated value and a #gboolean which is %TRUE if the key was found. This
 * is useful if you need to free the memory allocated for the original key,
 * for example before calling g_tree_remove().
 *
 * Returns: %TRUE if the key was found in the #GTree.
 */


/**
 * g_tree_new:
 * @key_compare_func: the function used to order the nodes in the #GTree. It should return values similar to the standard strcmp() function - 0 if the two arguments are equal, a negative value if the first argument comes before the second, or a positive value if the first argument comes after the second.
 *
 * Creates a new #GTree.
 *
 * Returns: a new #GTree.
 */


/**
 * g_tree_new_full:
 * @key_compare_func: qsort()-style comparison function.
 * @key_compare_data: data to pass to comparison function.
 * @key_destroy_func: a function to free the memory allocated for the key used when removing the entry from the #GTree or %NULL if you don't want to supply such a function.
 * @value_destroy_func: a function to free the memory allocated for the value used when removing the entry from the #GTree or %NULL if you don't want to supply such a function.
 *
 * Creates a new #GTree like g_tree_new() and allows to specify functions
 * to free the memory allocated for the key and value that get called when
 * removing the entry from the #GTree.
 *
 * Returns: a new #GTree.
 */


/**
 * g_tree_new_with_data:
 * @key_compare_func: qsort()-style comparison function.
 * @key_compare_data: data to pass to comparison function.
 *
 * Creates a new #GTree with a comparison function that accepts user data.
 * See g_tree_new() for more details.
 *
 * Returns: a new #GTree.
 */


/**
 * g_tree_nnodes:
 * @tree: a #GTree.
 *
 * Gets the number of nodes in a #GTree.
 *
 * Returns: the number of nodes in the #GTree.
 */


/**
 * g_tree_ref:
 * @tree: a #GTree.
 *
 * Increments the reference count of @tree by one.  It is safe to call
 * this function from any thread.
 *
 * Returns: the passed in #GTree.
 * Since: 2.22
 */


/**
 * g_tree_remove:
 * @tree: a #GTree.
 * @key: the key to remove.
 *
 * Removes a key/value pair from a #GTree.
 * If the #GTree was created using g_tree_new_full(), the key and value
 * are freed using the supplied destroy functions, otherwise you have to
 * make sure that any dynamically allocated values are freed yourself.
 * If the key does not exist in the #GTree, the function does nothing.
 * nothing)
 *
 * Returns: %TRUE if the key was found (prior to 2.8, this function returned
 */


/**
 * g_tree_replace:
 * @tree: a #GTree.
 * @key: the key to insert.
 * @value: the value corresponding to the key.
 *
 * Inserts a new key and value into a #GTree similar to g_tree_insert().
 * The difference is that if the key already exists in the #GTree, it gets
 * replaced by the new key. If you supplied a @value_destroy_func when
 * creating the #GTree, the old value is freed using that function. If you
 * supplied a @key_destroy_func when creating the #GTree, the old key is
 * freed using that function.
 * The tree is automatically 'balanced' as new key/value pairs are added,
 * so that the distance from the root to every leaf is as small as possible.
 */


/**
 * g_tree_search:
 * @tree: a #GTree
 * @search_func: a function used to search the #GTree
 * @user_data: the data passed as the second argument to @search_func
 *
 * Searches a #GTree using @search_func.
 * The @search_func is called with a pointer to the key of a key/value
 * pair in the tree, and the passed in @user_data. If @search_func returns
 * 0 for a key/value pair, then the corresponding value is returned as
 * the result of g_tree_search(). If @search_func returns -1, searching
 * will proceed among the key/value pairs that have a smaller key; if
 * pairs that have a larger key.
 * the key was not found.
 *
 * Returns: the value corresponding to the found key, or %NULL if
 */


/**
 * g_tree_steal:
 * @tree: a #GTree.
 * @key: the key to remove.
 *
 * Removes a key and its associated value from a #GTree without calling
 * the key and value destroy functions.
 * If the key does not exist in the #GTree, the function does nothing.
 * nothing)
 *
 * Returns: %TRUE if the key was found (prior to 2.8, this function returned
 */


/**
 * g_tree_traverse:
 * @tree: a #GTree.
 * @traverse_func: the function to call for each node visited. If this function returns %TRUE, the traversal is stopped.
 * @traverse_type: the order in which nodes are visited, one of %G_IN_ORDER, %G_PRE_ORDER and %G_POST_ORDER.
 * @user_data: user data to pass to the function.
 *
 * Calls the given function for each node in the #GTree.
 * just want to visit all nodes in sorted order, use g_tree_foreach()
 * instead. If you really need to visit nodes in a different order, consider
 * using an <link linkend="glib-N-ary-Trees">N-ary Tree</link>.
 *
 * Deprecated:2.2: The order of a balanced tree is somewhat arbitrary. If you
 */


/**
 * g_tree_unref:
 * @tree: a #GTree.
 *
 * Decrements the reference count of @tree by one.  If the reference count
 * drops to 0, all keys and values will be destroyed (if destroy
 * functions were specified) and all memory allocated by @tree will be
 * released.
 * It is safe to call this function from any thread.
 *
 * Since: 2.22
 */


/**
 * g_try_malloc:
 * @n_bytes: number of bytes to allocate.
 *
 * Attempts to allocate @n_bytes, and returns %NULL on failure.
 * Contrast with g_malloc(), which aborts the program on failure.
 *
 * Returns: the allocated memory, or %NULL.
 */


/**
 * g_try_malloc0:
 * @n_bytes: number of bytes to allocate
 *
 * Attempts to allocate @n_bytes, initialized to 0's, and returns %NULL on
 * failure. Contrast with g_malloc0(), which aborts the program on failure.
 *
 * Since: 2.8
 * Returns: the allocated memory, or %NULL
 */


/**
 * g_try_malloc0_n:
 * @n_blocks: the number of blocks to allocate
 * @n_block_bytes: the size of each block in bytes
 *
 * This function is similar to g_try_malloc0(), allocating (@n_blocks * @n_block_bytes) bytes,
 * but care is taken to detect possible overflow during multiplication.
 *
 * Since: 2.24
 * Returns: the allocated memory, or %NULL
 */


/**
 * g_try_malloc_n:
 * @n_blocks: the number of blocks to allocate
 * @n_block_bytes: the size of each block in bytes
 *
 * This function is similar to g_try_malloc(), allocating (@n_blocks * @n_block_bytes) bytes,
 * but care is taken to detect possible overflow during multiplication.
 *
 * Since: 2.24
 * Returns: the allocated memory, or %NULL.
 */


/**
 * g_try_new:
 * @struct_type: the type of the elements to allocate
 * @n_structs: the number of elements to allocate
 *
 * Attempts to allocate @n_structs elements of type @struct_type, and returns
 * %NULL on failure. Contrast with g_new(), which aborts the program on failure.
 * The returned pointer is cast to a pointer to the given type.
 * The function returns %NULL when @n_structs is 0 of if an overflow occurs.
 *
 * Since: 2.8
 * Returns: a pointer to the allocated memory, cast to a pointer to @struct_type
 */


/**
 * g_try_new0:
 * @struct_type: the type of the elements to allocate
 * @n_structs: the number of elements to allocate
 *
 * Attempts to allocate @n_structs elements of type @struct_type, initialized
 * to 0's, and returns %NULL on failure. Contrast with g_new0(), which aborts
 * the program on failure.
 * The returned pointer is cast to a pointer to the given type.
 * The function returns %NULL when @n_structs is 0 of if an overflow occurs.
 *
 * Since: 2.8
 * Returns: a pointer to the allocated memory, cast to a pointer to @struct_type
 */


/**
 * g_try_realloc:
 * @mem: previously-allocated memory, or %NULL.
 * @n_bytes: number of bytes to allocate.
 *
 * Attempts to realloc @mem to a new size, @n_bytes, and returns %NULL
 * on failure. Contrast with g_realloc(), which aborts the program
 * on failure. If @mem is %NULL, behaves the same as g_try_malloc().
 *
 * Returns: the allocated memory, or %NULL.
 */


/**
 * g_try_realloc_n:
 * @mem: previously-allocated memory, or %NULL.
 * @n_blocks: the number of blocks to allocate
 * @n_block_bytes: the size of each block in bytes
 *
 * This function is similar to g_try_realloc(), allocating (@n_blocks * @n_block_bytes) bytes,
 * but care is taken to detect possible overflow during multiplication.
 *
 * Since: 2.24
 * Returns: the allocated memory, or %NULL.
 */


/**
 * g_try_renew:
 * @struct_type: the type of the elements to allocate
 * @mem: the currently allocated memory
 * @n_structs: the number of elements to allocate
 *
 * Attempts to reallocate the memory pointed to by @mem, so that it now has
 * space for @n_structs elements of type @struct_type, and returns %NULL on
 * failure. Contrast with g_renew(), which aborts the program on failure.
 * It returns the new address of the memory, which may have been moved.
 * The function returns %NULL if an overflow occurs.
 *
 * Since: 2.8
 * Returns: a pointer to the new allocated memory, cast to a pointer to @struct_type
 */


/**
 * g_tuples_destroy:
 * @tuples: the tuple data to free.
 *
 * Frees the records which were returned by g_relation_select(). This
 * should always be called after g_relation_select() when you are
 * finished with the records. The records are not removed from the
 * #GRelation.
 *
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_tuples_index:
 * @tuples: the tuple data, returned by g_relation_select().
 * @index_: the index of the record.
 * @field: the field to return.
 * @Returns: the field of the record.
 *
 * Gets a field from the records returned by g_relation_select(). It
 * returns the given field of the record at the given index. The
 * returned value should not be changed.
 *
 * Deprecated: 2.26: Rarely used API
 */


/**
 * g_ucs4_to_utf16:
 * @str: a UCS-4 encoded string
 * @len: the maximum length (number of characters) of @str to use. If @len < 0, then the string is nul-terminated.
 * @items_read: location to store number of bytes read, or %NULL. If an error occurs then the index of the invalid input is stored here.
 * @items_written: location to store number of <type>gunichar2</type> written, or %NULL. The value stored here does not include the trailing 0.
 * @error: location to store the error occuring, or %NULL to ignore errors. Any of the errors in #GConvertError other than %G_CONVERT_ERROR_NO_CONVERSION may occur.
 *
 * Convert a string from UCS-4 to UTF-16. A 0 character will be
 * added to the result after the converted text.
 * This value must be freed with g_free(). If an
 * error occurs, %NULL will be returned and
 *
 * Returns: a pointer to a newly allocated UTF-16 string.
 */


/**
 * g_ucs4_to_utf8:
 * @str: a UCS-4 encoded string
 * @len: the maximum length (number of characters) of @str to use. If @len < 0, then the string is nul-terminated.
 * @items_read: location to store number of characters read, or %NULL.
 * @items_written: location to store number of bytes written or %NULL. The value here stored does not include the trailing 0 byte.
 * @error: location to store the error occuring, or %NULL to ignore errors. Any of the errors in #GConvertError other than %G_CONVERT_ERROR_NO_CONVERSION may occur.
 *
 * Convert a string from a 32-bit fixed width representation as UCS-4.
 * to UTF-8. The result will be terminated with a 0 byte.
 * This value must be freed with g_free(). If an
 * error occurs, %NULL will be returned and
 * set to the position of the first invalid input
 * character.
 *
 * Returns: a pointer to a newly allocated UTF-8 string.
 */


/**
 * g_unichar_break_type:
 * @c: a Unicode character
 *
 * Determines the break type of @c. @c should be a Unicode character
 * (to derive a character from UTF-8 encoded text, use
 * g_utf8_get_char()). The break type is used to find word and line
 * breaks ("text boundaries"), Pango implements the Unicode boundary
 * resolution algorithms and normally you would use a function such
 * as pango_break() instead of caring about break types yourself.
 *
 * Returns: the break type of @c
 */


/**
 * g_unichar_combining_class:
 * @uc: a Unicode character
 *
 * Determines the canonical combining class of a Unicode character.
 *
 * Returns: the combining class of the character
 * Since: 2.14
 */


/**
 * g_unichar_digit_value:
 * @c: a Unicode character
 *
 * Determines the numeric value of a character as a decimal
 * digit.
 * g_unichar_isdigit()), its numeric value. Otherwise, -1.
 *
 * Returns: If @c is a decimal digit (according to
 */


/**
 * g_unichar_get_mirror_char:
 * @ch: a Unicode character
 * @mirrored_ch: location to store the mirrored character
 *
 * In Unicode, some characters are <firstterm>mirrored</firstterm>. This
 * means that their images are mirrored horizontally in text that is laid
 * out from right to left. For instance, "(" would become its mirror image,
 * ")", in right-to-left text.
 * If @ch has the Unicode mirrored property and there is another unicode
 * character that typically has a glyph that is the mirror image of @ch's
 * glyph and @mirrored_ch is set, it puts that character in the address
 * pointed to by @mirrored_ch.  Otherwise the original character is put.
 *
 * Returns: %TRUE if @ch has a mirrored character, %FALSE otherwise
 * Since: 2.4
 */


/**
 * g_unichar_get_script:
 * @ch: a Unicode character
 *
 * Looks up the #GUnicodeScript for a particular character (as defined
 * by Unicode Standard Annex #24). No check is made for @ch being a
 * valid Unicode character; if you pass in invalid character, the
 * result is undefined.
 * This function is equivalent to pango_script_for_unichar() and the
 * two are interchangeable.
 *
 * Returns: the #GUnicodeScript for the character.
 * Since: 2.14
 */


/**
 * g_unichar_isalnum:
 * @c: a Unicode character
 *
 * Determines whether a character is alphanumeric.
 * Given some UTF-8 text, obtain a character value
 * with g_utf8_get_char().
 *
 * Returns: %TRUE if @c is an alphanumeric character
 */


/**
 * g_unichar_isalpha:
 * @c: a Unicode character
 *
 * Determines whether a character is alphabetic (i.e. a letter).
 * Given some UTF-8 text, obtain a character value with
 * g_utf8_get_char().
 *
 * Returns: %TRUE if @c is an alphabetic character
 */


/**
 * g_unichar_iscntrl:
 * @c: a Unicode character
 *
 * Determines whether a character is a control character.
 * Given some UTF-8 text, obtain a character value with
 * g_utf8_get_char().
 *
 * Returns: %TRUE if @c is a control character
 */


/**
 * g_unichar_isdefined:
 * @c: a Unicode character
 *
 * Determines if a given character is assigned in the Unicode
 * standard.
 *
 * Returns: %TRUE if the character has an assigned value
 */


/**
 * g_unichar_isdigit:
 * @c: a Unicode character
 *
 * Determines whether a character is numeric (i.e. a digit).  This
 * covers ASCII 0-9 and also digits in other languages/scripts.  Given
 * some UTF-8 text, obtain a character value with g_utf8_get_char().
 *
 * Returns: %TRUE if @c is a digit
 */


/**
 * g_unichar_isgraph:
 * @c: a Unicode character
 *
 * Determines whether a character is printable and not a space
 * (returns %FALSE for control characters, format characters, and
 * spaces). g_unichar_isprint() is similar, but returns %TRUE for
 * spaces. Given some UTF-8 text, obtain a character value with
 * g_utf8_get_char().
 *
 * Returns: %TRUE if @c is printable unless it's a space
 */


/**
 * g_unichar_islower:
 * @c: a Unicode character
 *
 * Determines whether a character is a lowercase letter.
 * Given some UTF-8 text, obtain a character value with
 * g_utf8_get_char().
 *
 * Returns: %TRUE if @c is a lowercase letter
 */


/**
 * g_unichar_ismark:
 * @c: a Unicode character
 *
 * Determines whether a character is a mark (non-spacing mark,
 * combining mark, or enclosing mark in Unicode speak).
 * Given some UTF-8 text, obtain a character value
 * with g_utf8_get_char().
 * ismark characters should be allowed to as they are essential
 * for writing most European languages as well as many non-Latin
 * scripts.
 *
 * Note: in most cases where isalpha characters are allowed,
 * Returns: %TRUE if @c is a mark character
 * Since: 2.14
 */


/**
 * g_unichar_isprint:
 * @c: a Unicode character
 *
 * Determines whether a character is printable.
 * Unlike g_unichar_isgraph(), returns %TRUE for spaces.
 * Given some UTF-8 text, obtain a character value with
 * g_utf8_get_char().
 *
 * Returns: %TRUE if @c is printable
 */


/**
 * g_unichar_ispunct:
 * @c: a Unicode character
 *
 * Determines whether a character is punctuation or a symbol.
 * Given some UTF-8 text, obtain a character value with
 * g_utf8_get_char().
 *
 * Returns: %TRUE if @c is a punctuation or symbol character
 */


/**
 * g_unichar_isspace:
 * @c: a Unicode character
 *
 * Determines whether a character is a space, tab, or line separator
 * (newline, carriage return, etc.).  Given some UTF-8 text, obtain a
 * character value with g_utf8_get_char().
 * (Note: don't use this to do word breaking; you have to use
 * Pango or equivalent to get word breaking right, the algorithm
 * is fairly complex.)
 *
 * Returns: %TRUE if @c is a space character
 */


/**
 * g_unichar_istitle:
 * @c: a Unicode character
 *
 * Determines if a character is titlecase. Some characters in
 * Unicode which are composites, such as the DZ digraph
 * have three case variants instead of just two. The titlecase
 * form is used at the beginning of a word where only the
 * first letter is capitalized. The titlecase form of the DZ
 * digraph is U+01F2 LATIN CAPITAL LETTTER D WITH SMALL LETTER Z.
 *
 * Returns: %TRUE if the character is titlecase
 */


/**
 * g_unichar_isupper:
 * @c: a Unicode character
 *
 * Determines if a character is uppercase.
 *
 * Returns: %TRUE if @c is an uppercase character
 */


/**
 * g_unichar_iswide:
 * @c: a Unicode character
 *
 * Determines if a character is typically rendered in a double-width
 * cell.
 *
 * Returns: %TRUE if the character is wide
 */


/**
 * g_unichar_iswide_cjk:
 * @c: a Unicode character
 *
 * Determines if a character is typically rendered in a double-width
 * cell under legacy East Asian locales.  If a character is wide according to
 * g_unichar_iswide(), then it is also reported wide with this function, but
 * the converse is not necessarily true.  See the
 * <ulink url="http://www.unicode.org/reports/tr11/">Unicode Standard
 * Annex #11</ulink> for details.
 * If a character passes the g_unichar_iswide() test then it will also pass
 * this test, but not the other way around.  Note that some characters may
 * pas both this test and g_unichar_iszerowidth().
 *
 * Returns: %TRUE if the character is wide in legacy East Asian locales
 * Since: 2.12
 */


/**
 * g_unichar_isxdigit:
 * @c: a Unicode character.
 *
 * Determines if a character is a hexidecimal digit.
 *
 * Returns: %TRUE if the character is a hexadecimal digit
 */


/**
 * g_unichar_iszerowidth:
 * @c: a Unicode character
 *
 * Determines if a given character typically takes zero width when rendered.
 * The return value is %TRUE for all non-spacing and enclosing marks
 * (e.g., combining accents), format characters, zero-width
 * space, but not U+00AD SOFT HYPHEN.
 * A typical use of this function is with one of g_unichar_iswide() or
 * g_unichar_iswide_cjk() to determine the number of cells a string occupies
 * when displayed on a grid display (terminals).  However, note that not all
 * terminals support zero-width rendering of zero-width marks.
 *
 * Returns: %TRUE if the character has zero width
 * Since: 2.14
 */


/**
 * g_unichar_to_utf8:
 * @c: a Unicode character code
 * @outbuf: output buffer, must have at least 6 bytes of space. If %NULL, the length will be computed and returned and nothing will be written to @outbuf.
 *
 * Converts a single character to UTF-8.
 *
 * Returns: number of bytes written
 */


/**
 * g_unichar_tolower:
 * @c: a Unicode character.
 *
 * Converts a character to lower case.
 * If @c is not an upperlower or titlecase character,
 * or has no lowercase equivalent @c is returned unchanged.
 *
 * Returns: the result of converting @c to lower case.
 */


/**
 * g_unichar_totitle:
 * @c: a Unicode character
 *
 * Converts a character to the titlecase.
 * If @c is not an uppercase or lowercase character,
 *
 * Returns: the result of converting @c to titlecase.
 */


/**
 * g_unichar_toupper:
 * @c: a Unicode character
 *
 * Converts a character to uppercase.
 * If @c is not an lowercase or titlecase character,
 * or has no upper case equivalent @c is returned unchanged.
 *
 * Returns: the result of converting @c to uppercase.
 */


/**
 * g_unichar_type:
 * @c: a Unicode character
 *
 * Classifies a Unicode character by type.
 *
 * Returns: the type of the character.
 */


/**
 * g_unichar_validate:
 * @ch: a Unicode character
 *
 * Checks whether @ch is a valid Unicode character. Some possible
 * integer values of @ch will not be valid. 0 is considered a valid
 * character, though it's normally a string terminator.
 *
 * Returns: %TRUE if @ch is a valid Unicode character
 */


/**
 * g_unichar_xdigit_value:
 * @c: a Unicode character
 *
 * Determines the numeric value of a character as a hexidecimal
 * digit.
 * g_unichar_isxdigit()), its numeric value. Otherwise, -1.
 *
 * Returns: If @c is a hex digit (according to
 */


/**
 * g_unicode_canonical_decomposition:
 * @ch: a Unicode character.
 * @result_len: location to store the length of the return value.
 *
 * Computes the canonical decomposition of a Unicode character.
 *
 * Returns: a newly allocated string of Unicode characters.
 */


/**
 * g_unicode_canonical_ordering:
 * @string: a UCS-4 encoded string.
 * @len: the maximum length of @string to use.
 *
 * Computes the canonical ordering of a string in-place.
 * This rearranges decomposed characters in the string
 * according to their combining classes.  See the Unicode
 * manual for more information.
 */


/**
 * g_unix_open_pipe:
 * @fds: Array of two integers
 * @flags: Bitfield of file descriptor flags, see "man 2 fcntl"
 * @error: a #GError
 *
 * Similar to the UNIX pipe() call, but on modern systems like Linux
 * uses the pipe2() system call, which atomically creates a pipe with
 * the configured flags.  The only supported flag currently is
 * %FD_CLOEXEC.  If for example you want to configure %O_NONBLOCK,
 * that must still be done separately with fcntl().
 * <note>This function does *not* take %O_CLOEXEC, it takes
 * %FD_CLOEXEC as if for fcntl(); these are different on
 * Linux/glibc.</note>
 *
 * Returns: %TRUE on success, %FALSE if not (and errno will be set).
 * Since: 2.30
 */


/**
 * g_unix_set_fd_nonblocking:
 * @fd: A file descriptor
 * @nonblock: If %TRUE, set the descriptor to be non-blocking
 * @error: a #GError
 *
 * Control the non-blocking state of the given file descriptor,
 * according to @nonblock.  On most systems this uses %O_NONBLOCK, but
 * on some older ones may use %O_NDELAY.
 *
 * Returns: %TRUE if successful
 * Since: 2.30
 */


/**
 * g_unix_signal_add_watch_full:
 * @signum: Signal number
 * @priority: the priority of the signal source. Typically this will be in the range between #G_PRIORITY_DEFAULT and #G_PRIORITY_HIGH.
 * @handler: Callback
 * @user_data: Data for @handler
 * @notify: #GDestroyNotify for @handler
 *
 * A convenience function for g_unix_signal_source_new(), which
 * attaches to the default #GMainContext.  You can remove the watch
 * using g_source_remove().
 *
 * Returns: An ID (greater than 0) for the event source
 * Since: 2.30
 */


/**
 * g_unix_signal_source_new:
 * @signum: A signal number
 *
 * Create a #GSource that will be dispatched upon delivery of the UNIX
 * signal @signum.  Currently only %SIGHUP, %SIGINT, and %SIGTERM can
 * be monitored.  Note that unlike the UNIX default, all sources which
 * have created a watch will be dispatched, regardless of which
 * underlying thread invoked g_unix_signal_source_new().
 * For example, an effective use of this function is to handle SIGTERM
 * cleanly; flushing any outstanding files, and then calling
 * g_main_loop_quit ().  It is not safe to do any of this a regular
 * UNIX signal handler; your handler may be invoked while malloc() or
 * another library function is running, causing reentrancy if you
 * attempt to use it from the handler.  None of the GLib/GObject API
 * is safe against this kind of reentrancy.
 * The interaction of this source when combined with native UNIX
 * functions like sigprocmask() is not defined.
 * <note>For reliable behavior, if your program links to gthread
 * (either directly or indirectly via GObject, GIO, or a higher level
 * library), you should ensure g_thread_init() is called before using
 * this function.  For example, if your program uses GObject, call
 * g_type_init().</note>
 * The source will not initially be associated with any #GMainContext
 * and must be added to one with g_source_attach() before it will be
 * executed.
 *
 * Returns: A newly created #GSource
 * Since: 2.30
 */


/**
 * g_unlink:
 * @filename: a pathname in the GLib file name encoding (UTF-8 on Windows)
 *
 * A wrapper for the POSIX unlink() function. The unlink() function
 * deletes a name from the filesystem. If this was the last link to the
 * file and no processes have it opened, the diskspace occupied by the
 * file is freed.
 * See your C library manual for more details about unlink(). Note
 * that on Windows, it is in general not possible to delete files that
 * are open to some process, or mapped into memory.
 * occurred
 *
 * Returns: 0 if the name was successfully deleted, -1 if an error
 * Since: 2.6
 */


/**
 * g_unsetenv:
 * @variable: the environment variable to remove, must not contain '='.
 *
 * Removes an environment variable from the environment.
 * Note that on some systems, when variables are overwritten, the memory
 * used for the previous variables and its value isn't reclaimed.
 * Furthermore, this function can't be guaranteed to operate in a
 * threadsafe way.
 *
 * Since: 2.4
 */


/**
 * g_uri_escape_string:
 * @unescaped: the unescaped input string.
 * @reserved_chars_allowed: a string of reserved characters that are allowed to be used, or %NULL.
 * @allow_utf8: %TRUE if the result can include UTF-8 characters.
 *
 * Escapes a string for use in a URI.
 * Normally all characters that are not "unreserved" (i.e. ASCII alphanumerical
 * characters plus dash, dot, underscore and tilde) are escaped.
 * But if you specify characters in @reserved_chars_allowed they are not
 * escaped. This is useful for the "reserved" characters in the URI
 * specification, since those are allowed unescaped in some portions of
 * a URI.
 * freed when no longer needed.
 *
 * Returns: an escaped version of @unescaped. The returned string should be
 * Since: 2.16
 */


/**
 * g_uri_list_extract_uris:
 * @uri_list: an URI list
 *
 * Splits an URI list conforming to the text/uri-list
 * mime type defined in RFC 2483 into individual URIs,
 * discarding any comments. The URIs are not validated.
 * strings holding the individual URIs. The array should
 * be freed with g_strfreev().
 *
 * Returns: a newly allocated %NULL-terminated list of
 * Since: 2.6
 */


/**
 * g_uri_parse_scheme:
 * @uri: a valid URI.
 *
 * Gets the scheme portion of a URI string. RFC 3986 decodes the scheme as:
 * <programlisting>
 * URI = scheme ":" hier-part [ "?" query ] [ "#" fragment ]
 * </programlisting>
 * Common schemes include "file", "http", "svn+ssh", etc.
 * The returned string should be freed when no longer needed.
 *
 * Returns: The "Scheme" component of the URI, or %NULL on error.
 * Since: 2.16
 */


/**
 * g_uri_unescape_segment:
 * @escaped_string: a string.
 * @escaped_string_end: a string.
 * @illegal_characters: an optional string of illegal characters not to be allowed.
 *
 * Unescapes a segment of an escaped string.
 * If any of the characters in @illegal_characters or the character zero appears
 * as an escaped character in @escaped_string then that is an error and %NULL
 * will be returned. This is useful it you want to avoid for instance having a
 * slash being expanded in an escaped path element, which might confuse pathname
 * handling.
 * The returned string should be freed when no longer needed.
 *
 * Returns: an unescaped version of @escaped_string or %NULL on error.
 * Since: 2.16
 */


/**
 * g_uri_unescape_string:
 * @escaped_string: an escaped string to be unescaped.
 * @illegal_characters: an optional string of illegal characters not to be allowed.
 *
 * Unescapes a whole escaped string.
 * If any of the characters in @illegal_characters or the character zero appears
 * as an escaped character in @escaped_string then that is an error and %NULL
 * will be returned. This is useful it you want to avoid for instance having a
 * slash being expanded in an escaped path element, which might confuse pathname
 * handling.
 * should be freed when no longer needed.
 *
 * Returns: an unescaped version of @escaped_string. The returned string
 * Since: 2.16
 */


/**
 * g_utf16_to_ucs4:
 * @str: a UTF-16 encoded string
 * @len: the maximum length (number of <type>gunichar2</type>) of @str to use. If @len < 0, then the string is nul-terminated.
 * @items_read: location to store number of words read, or %NULL. If %NULL, then %G_CONVERT_ERROR_PARTIAL_INPUT will be returned in case @str contains a trailing partial character. If an error occurs then the index of the invalid input is stored here.
 * @items_written: location to store number of characters written, or %NULL. The value stored here does not include the trailing 0 character.
 * @error: location to store the error occuring, or %NULL to ignore errors. Any of the errors in #GConvertError other than %G_CONVERT_ERROR_NO_CONVERSION may occur.
 *
 * Convert a string from UTF-16 to UCS-4. The result will be
 * nul-terminated.
 * This value must be freed with g_free(). If an
 * error occurs, %NULL will be returned and
 *
 * Returns: a pointer to a newly allocated UCS-4 string.
 */


/**
 * g_utf16_to_utf8:
 * @str: a UTF-16 encoded string
 * @len: the maximum length (number of <type>gunichar2</type>) of @str to use. If @len < 0, then the string is nul-terminated.
 * @items_read: location to store number of words read, or %NULL. If %NULL, then %G_CONVERT_ERROR_PARTIAL_INPUT will be returned in case @str contains a trailing partial character. If an error occurs then the index of the invalid input is stored here.
 * @items_written: location to store number of bytes written, or %NULL. The value stored here does not include the trailing 0 byte.
 * @error: location to store the error occuring, or %NULL to ignore errors. Any of the errors in #GConvertError other than %G_CONVERT_ERROR_NO_CONVERSION may occur.
 *
 * Convert a string from UTF-16 to UTF-8. The result will be
 * terminated with a 0 byte.
 * Note that the input is expected to be already in native endianness,
 * an initial byte-order-mark character is not handled specially.
 * g_convert() can be used to convert a byte buffer of UTF-16 data of
 * ambiguous endianess.
 * Further note that this function does not validate the result
 * string; it may e.g. include embedded NUL characters. The only
 * validation done by this function is to ensure that the input can
 * be correctly interpreted as UTF-16, i.e. it doesn't contain
 * things unpaired surrogates.
 * This value must be freed with g_free(). If an
 * error occurs, %NULL will be returned and
 *
 * Returns: a pointer to a newly allocated UTF-8 string.
 */


/**
 * g_utf8_casefold:
 * @str: a UTF-8 encoded string
 * @len: length of @str, in bytes, or -1 if @str is nul-terminated.
 *
 * Converts a string into a form that is independent of case. The
 * result will not correspond to any particular case, but can be
 * compared for equality or ordered with the results of calling
 * g_utf8_casefold() on other strings.
 * Note that calling g_utf8_casefold() followed by g_utf8_collate() is
 * only an approximation to the correct linguistic case insensitive
 * ordering, though it is a fairly good one. Getting this exactly
 * right would require a more sophisticated collation function that
 * takes case sensitivity into account. GLib does not currently
 * provide such a function.
 * case independent form of @str.
 *
 * Returns: a newly allocated string, that is a
 */


/**
 * g_utf8_collate:
 * @str1: a UTF-8 encoded string
 * @str2: a UTF-8 encoded string
 *
 * Compares two strings for ordering using the linguistically
 * correct rules for the <link linkend="setlocale">current locale</link>.
 * When sorting a large number of strings, it will be significantly
 * faster to obtain collation keys with g_utf8_collate_key() and
 * compare the keys with strcmp() when sorting instead of sorting
 * the original strings.
 * 0 if they compare equal, &gt; 0 if @str1 compares after @str2.
 *
 * Returns: &lt; 0 if @str1 compares before @str2,
 */


/**
 * g_utf8_collate_key:
 * @str: a UTF-8 encoded string.
 * @len: length of @str, in bytes, or -1 if @str is nul-terminated.
 *
 * Converts a string into a collation key that can be compared
 * with other collation keys produced by the same function using
 * strcmp().
 * The results of comparing the collation keys of two strings
 * with strcmp() will always be the same as comparing the two
 * original keys with g_utf8_collate().
 * Note that this function depends on the
 * <link linkend="setlocale">current locale</link>.
 * be freed with g_free() when you are done with it.
 *
 * Returns: a newly allocated string. This string should
 */


/**
 * g_utf8_collate_key_for_filename:
 * @str: a UTF-8 encoded string.
 * @len: length of @str, in bytes, or -1 if @str is nul-terminated.
 *
 * Converts a string into a collation key that can be compared
 * with other collation keys produced by the same function using strcmp().
 * In order to sort filenames correctly, this function treats the dot '.'
 * as a special case. Most dictionary orderings seem to consider it
 * insignificant, thus producing the ordering "event.c" "eventgenerator.c"
 * "event.h" instead of "event.c" "event.h" "eventgenerator.c". Also, we
 * would like to treat numbers intelligently so that "file1" "file10" "file5"
 * is sorted as "file1" "file5" "file10".
 * Note that this function depends on the
 * <link linkend="setlocale">current locale</link>.
 * be freed with g_free() when you are done with it.
 *
 * Returns: a newly allocated string. This string should
 * Since: 2.8
 */


/**
 * g_utf8_find_next_char:
 * @p: a pointer to a position within a UTF-8 encoded string
 * @end: a pointer to the byte following the end of the string, or %NULL to indicate that the string is nul-terminated.
 *
 * Finds the start of the next UTF-8 character in the string after @p.
 * is made to see if the character found is actually valid other than
 * it starts with an appropriate byte.
 *
 * Returns: a pointer to the found character or %NULL
 */


/**
 * g_utf8_find_prev_char:
 * @str: pointer to the beginning of a UTF-8 encoded string
 * @p: pointer to some position within @str
 *
 * Given a position @p with a UTF-8 encoded string @str, find the start
 * of the previous UTF-8 character starting before @p. Returns %NULL if no
 * UTF-8 characters are present in @str before @p.
 * is made to see if the character found is actually valid other than
 * it starts with an appropriate byte.
 *
 * Returns: a pointer to the found character or %NULL.
 */


/**
 * g_utf8_get_char:
 * @p: a pointer to Unicode character encoded as UTF-8
 *
 * Converts a sequence of bytes encoded as UTF-8 to a Unicode character.
 * If @p does not point to a valid UTF-8 encoded character, results are
 * undefined. If you are not sure that the bytes are complete
 * valid Unicode characters, you should use g_utf8_get_char_validated()
 * instead.
 *
 * Returns: the resulting character
 */


/**
 * g_utf8_get_char_validated:
 * @p: a pointer to Unicode character encoded as UTF-8
 * @max_len: the maximum number of bytes to read, or -1, for no maximum or if @p is nul-terminated
 *
 * Convert a sequence of bytes encoded as UTF-8 to a Unicode character.
 * This function checks for incomplete characters, for invalid characters
 * such as characters that are out of the range of Unicode, and for
 * overlong encodings of valid characters.
 * sequence at the end of a string that could begin a valid
 * character (or if @max_len is zero), returns (gunichar)-2;
 * otherwise, if @p does not point to a valid UTF-8 encoded
 * Unicode character, returns (gunichar)-1.
 *
 * Returns: the resulting character. If @p points to a partial
 */


/**
 * g_utf8_normalize:
 * @str: a UTF-8 encoded string.
 * @len: length of @str, in bytes, or -1 if @str is nul-terminated.
 * @mode: the type of normalization to perform.
 *
 * Converts a string into canonical form, standardizing
 * such issues as whether a character with an accent
 * is represented as a base character and combining
 * accent or as a single precomposed character. The
 * string has to be valid UTF-8, otherwise %NULL is
 * returned. You should generally call g_utf8_normalize()
 * before comparing two Unicode strings.
 * The normalization mode %G_NORMALIZE_DEFAULT only
 * standardizes differences that do not affect the
 * text content, such as the above-mentioned accent
 * representation. %G_NORMALIZE_ALL also standardizes
 * the "compatibility" characters in Unicode, such
 * as SUPERSCRIPT THREE to the standard forms
 * (in this case DIGIT THREE). Formatting information
 * may be lost but for most text operations such
 * characters should be considered the same.
 * %G_NORMALIZE_DEFAULT_COMPOSE and %G_NORMALIZE_ALL_COMPOSE
 * are like %G_NORMALIZE_DEFAULT and %G_NORMALIZE_ALL,
 * but returned a result with composed forms rather
 * than a maximally decomposed form. This is often
 * useful if you intend to convert the string to
 * a legacy encoding or pass it to a system with
 * less capable Unicode handling.
 * normalized form of @str, or %NULL if @str is not
 * valid UTF-8.
 *
 * Returns: a newly allocated string, that is the
 */


/**
 * g_utf8_offset_to_pointer:
 * @str: a UTF-8 encoded string
 * @offset: a character offset within @str
 *
 * Converts from an integer character offset to a pointer to a position
 * within the string.
 * Since 2.10, this function allows to pass a negative @offset to
 * step backwards. It is usually worth stepping backwards from the end
 * instead of forwards if @offset is in the last fourth of the string,
 * since moving forward is about 3 times faster than moving backward.
 * <note><para>
 * This function doesn't abort when reaching the end of @str. Therefore
 * you should be sure that @offset is within string boundaries before
 * calling that function. Call g_utf8_strlen() when unsure.
 * This limitation exists as this function is called frequently during
 * text rendering and therefore has to be as fast as possible.
 * </para></note>
 *
 * Returns: the resulting pointer
 */


/**
 * g_utf8_pointer_to_offset:
 * @str: a UTF-8 encoded string
 * @pos: a pointer to a position within @str
 *
 * Converts from a pointer to position within a string to a integer
 * character offset.
 * Since 2.10, this function allows @pos to be before @str, and returns
 * a negative offset in this case.
 *
 * Returns: the resulting character offset
 */


/**
 * g_utf8_prev_char:
 * @p: a pointer to a position within a UTF-8 encoded string
 *
 * Finds the previous UTF-8 character in the string before @p.
 * is made to see if the character found is actually valid other than
 * it starts with an appropriate byte. If @p might be the first
 * character of the string, you must use g_utf8_find_prev_char() instead.
 *
 * Returns: a pointer to the found character.
 */


/**
 * g_utf8_strchr:
 * @p: a nul-terminated UTF-8 encoded string
 * @len: the maximum length of @p
 * @c: a Unicode character
 *
 * Finds the leftmost occurrence of the given Unicode character
 * in a UTF-8 encoded string, while limiting the search to @len bytes.
 * If @len is -1, allow unbounded search.
 * otherwise, a pointer to the start of the leftmost occurrence of
 * the character in the string.
 *
 * Returns: %NULL if the string does not contain the character,
 */


/**
 * g_utf8_strdown:
 * @str: a UTF-8 encoded string
 * @len: length of @str, in bytes, or -1 if @str is nul-terminated.
 *
 * Converts all Unicode characters in the string that have a case
 * to lowercase. The exact manner that this is done depends
 * on the current locale, and may result in the number of
 * characters in the string changing.
 * converted to lowercase.
 *
 * Returns: a newly allocated string, with all characters
 */


/**
 * g_utf8_strlen:
 * @p: pointer to the start of a UTF-8 encoded string
 * @max: the maximum number of bytes to examine. If @max is less than 0, then the string is assumed to be nul-terminated. If @max is 0, @p will not be examined and may be %NULL.
 *
 * Computes the length of the string in characters, not including
 * the terminating nul character.
 *
 * Returns: the length of the string in characters
 */


/**
 * g_utf8_strncpy:
 * @dest: buffer to fill with characters from @src
 * @src: UTF-8 encoded string
 * @n: character count
 *
 * Like the standard C strncpy() function, but
 * copies a given number of characters instead of a given number of
 * bytes. The @src string must be valid UTF-8 encoded text.
 * (Use g_utf8_validate() on all text before trying to use UTF-8
 * utility functions with it.)
 *
 * Returns: @dest
 */


/**
 * g_utf8_strrchr:
 * @p: a nul-terminated UTF-8 encoded string
 * @len: the maximum length of @p
 * @c: a Unicode character
 *
 * Find the rightmost occurrence of the given Unicode character
 * in a UTF-8 encoded string, while limiting the search to @len bytes.
 * If @len is -1, allow unbounded search.
 * otherwise, a pointer to the start of the rightmost occurrence of the
 * character in the string.
 *
 * Returns: %NULL if the string does not contain the character,
 */


/**
 * g_utf8_strreverse:
 * @str: a UTF-8 encoded string
 * @len: the maximum length of @str to use, in bytes. If @len < 0, then the string is nul-terminated.
 *
 * Reverses a UTF-8 string. @str must be valid UTF-8 encoded text.
 * (Use g_utf8_validate() on all text before trying to use UTF-8
 * utility functions with it.)
 * This function is intended for programmatic uses of reversed strings.
 * It pays no attention to decomposed characters, combining marks, byte
 * order marks, directional indicators (LRM, LRO, etc) and similar
 * characters which might need special handling when reversing a string
 * for display purposes.
 * Note that unlike g_strreverse(), this function returns
 * newly-allocated memory, which should be freed with g_free() when
 * no longer needed.
 *
 * Returns: a newly-allocated string which is the reverse of @str.
 * Since: 2.2
 */


/**
 * g_utf8_strup:
 * @str: a UTF-8 encoded string
 * @len: length of @str, in bytes, or -1 if @str is nul-terminated.
 *
 * Converts all Unicode characters in the string that have a case
 * to uppercase. The exact manner that this is done depends
 * on the current locale, and may result in the number of
 * characters in the string increasing. (For instance, the
 * German ess-zet will be changed to SS.)
 * converted to uppercase.
 *
 * Returns: a newly allocated string, with all characters
 */


/**
 * g_utf8_to_ucs4:
 * @str: a UTF-8 encoded string
 * @len: the maximum length of @str to use, in bytes. If @len < 0, then the string is nul-terminated.
 * @items_read: location to store number of bytes read, or %NULL. If %NULL, then %G_CONVERT_ERROR_PARTIAL_INPUT will be returned in case @str contains a trailing partial character. If an error occurs then the index of the invalid input is stored here.
 * @items_written: location to store number of characters written or %NULL. The value here stored does not include the trailing 0 character.
 * @error: location to store the error occuring, or %NULL to ignore errors. Any of the errors in #GConvertError other than %G_CONVERT_ERROR_NO_CONVERSION may occur.
 *
 * Convert a string from UTF-8 to a 32-bit fixed width
 * representation as UCS-4. A trailing 0 will be added to the
 * string after the converted text.
 * This value must be freed with g_free(). If an
 * error occurs, %NULL will be returned and
 *
 * Returns: a pointer to a newly allocated UCS-4 string.
 */


/**
 * g_utf8_to_ucs4_fast:
 * @str: a UTF-8 encoded string
 * @len: the maximum length of @str to use, in bytes. If @len < 0, then the string is nul-terminated.
 * @items_written: location to store the number of characters in the result, or %NULL.
 *
 * Convert a string from UTF-8 to a 32-bit fixed width
 * representation as UCS-4, assuming valid UTF-8 input.
 * This function is roughly twice as fast as g_utf8_to_ucs4()
 * but does no error checking on the input.
 * This value must be freed with g_free().
 *
 * Returns: a pointer to a newly allocated UCS-4 string.
 */


/**
 * g_utf8_to_utf16:
 * @str: a UTF-8 encoded string
 * @len: the maximum length (number of bytes) of @str to use. If @len < 0, then the string is nul-terminated.
 * @items_read: location to store number of bytes read, or %NULL. If %NULL, then %G_CONVERT_ERROR_PARTIAL_INPUT will be returned in case @str contains a trailing partial character. If an error occurs then the index of the invalid input is stored here.
 * @items_written: location to store number of <type>gunichar2</type> written, or %NULL. The value stored here does not include the trailing 0.
 * @error: location to store the error occuring, or %NULL to ignore errors. Any of the errors in #GConvertError other than %G_CONVERT_ERROR_NO_CONVERSION may occur.
 *
 * Convert a string from UTF-8 to UTF-16. A 0 character will be
 * added to the result after the converted text.
 * This value must be freed with g_free(). If an
 * error occurs, %NULL will be returned and
 *
 * Returns: a pointer to a newly allocated UTF-16 string.
 */


/**
 * g_utf8_validate:
 * @str: a pointer to character data
 * @max_len: max bytes to validate, or -1 to go until NUL
 * @end: return location for end of valid data
 *
 * Validates UTF-8 encoded text. @str is the text to validate;
 * if @str is nul-terminated, then @max_len can be -1, otherwise
 * If @end is non-%NULL, then the end of the valid range
 * will be stored there (i.e. the start of the first invalid
 * character if some bytes were invalid, or the end of the text
 * being validated otherwise).
 * Note that g_utf8_validate() returns %FALSE if @max_len is
 * positive and NUL is met before @max_len bytes have been read.
 * Returns %TRUE if all of @str was valid. Many GLib and GTK+
 * routines <emphasis>require</emphasis> valid UTF-8 as input;
 * so data read from a file or the network should be checked
 * with g_utf8_validate() before doing anything else with it.
 *
 * Returns: %TRUE if the text was valid UTF-8
 */


/**
 * g_utime:
 * @filename: a pathname in the GLib file name encoding (UTF-8 on Windows)
 * @utb: a pointer to a struct utimbuf.
 *
 * A wrapper for the POSIX utime() function. The utime() function
 * sets the access and modification timestamps of a file.
 * See your C library manual for more details about how utime() works
 * on your system.
 * occurred
 *
 * Returns: 0 if the operation was successful, -1 if an error
 * Since: 2.18
 */


/**
 * g_variant_builder_add: (skp)
 * @builder: a #GVariantBuilder
 * @format_string: a #GVariant varargs format string
 * @...: arguments, as per @format_string
 *
 * Adds to a #GVariantBuilder.
 * This call is a convenience wrapper that is exactly equivalent to
 * calling g_variant_new() followed by g_variant_builder_add_value().
 * This function might be used as follows:
 * <programlisting>
 * GVariant *
 * make_pointless_dictionary (void)
 * {
 * GVariantBuilder *builder;
 * int i;
 * builder = g_variant_builder_new (G_VARIANT_TYPE_ARRAY);
 * for (i = 0; i < 16; i++)
 * {
 * gchar buf[3];
 * sprintf (buf, "%d", i);
 * g_variant_builder_add (builder, "{is}", i, buf);
 * }
 * return g_variant_builder_end (builder);
 * }
 * </programlisting>
 *
 * Since: 2.24
 */


/**
 * g_variant_builder_add_parsed:
 * @builder: a #GVariantBuilder
 * @format: a text format #GVariant
 * @...: arguments as per @format
 *
 * Adds to a #GVariantBuilder.
 * This call is a convenience wrapper that is exactly equivalent to
 * calling g_variant_new_parsed() followed by
 * g_variant_builder_add_value().
 * This function might be used as follows:
 * <programlisting>
 * GVariant *
 * make_pointless_dictionary (void)
 * {
 * GVariantBuilder *builder;
 * int i;
 * builder = g_variant_builder_new (G_VARIANT_TYPE_ARRAY);
 * g_variant_builder_add_parsed (builder, "{'width', <%i>}", 600);
 * g_variant_builder_add_parsed (builder, "{'title', <%s>}", "foo");
 * g_variant_builder_add_parsed (builder, "{'transparency', <0.5>}");
 * return g_variant_builder_end (builder);
 * }
 * </programlisting>
 *
 * Since: 2.26
 */


/**
 * g_variant_builder_add_value:
 * @builder: a #GVariantBuilder
 * @value: a #GVariant
 *
 * Adds @value to @builder.
 * It is an error to call this function in any way that would create an
 * inconsistent value to be constructed.  Some examples of this are
 * putting different types of items into an array, putting the wrong
 * types or number of items in a tuple, putting more than one value into
 * a variant, etc.
 * If @value is a floating reference (see g_variant_ref_sink()),
 * the @builder instance takes ownership of @value.
 *
 * Since: 2.24
 */


/**
 * g_variant_builder_clear: (skip)
 * @builder: a #GVariantBuilder
 *
 * Releases all memory associated with a #GVariantBuilder without
 * freeing the #GVariantBuilder structure itself.
 * It typically only makes sense to do this on a stack-allocated
 * #GVariantBuilder if you want to abort building the value part-way
 * through.  This function need not be called if you call
 * g_variant_builder_end() and it also doesn't need to be called on
 * builders allocated with g_variant_builder_new (see
 * g_variant_builder_unref() for that).
 * This function leaves the #GVariantBuilder structure set to all-zeros.
 * It is valid to call this function on either an initialised
 * #GVariantBuilder or one that is set to all-zeros but it is not valid
 * to call this function on uninitialised memory.
 *
 * Since: 2.24
 */


/**
 * g_variant_builder_close:
 * @builder: a #GVariantBuilder
 *
 * Closes the subcontainer inside the given @builder that was opened by
 * the most recent call to g_variant_builder_open().
 * It is an error to call this function in any way that would create an
 * subcontainer).
 *
 * Inconsistent value to be constructed (ie: too few values added to the
 * Since: 2.24
 */


/**
 * g_variant_builder_end:
 * @builder: a #GVariantBuilder
 * @returns: (transfer none): a new, floating, #GVariant
 *
 * Ends the builder process and returns the constructed value.
 * It is not permissible to use @builder in any way after this call
 * except for reference counting operations (in the case of a
 * heap-allocated #GVariantBuilder) or by reinitialising it with
 * g_variant_builder_init() (in the case of stack-allocated).
 * It is an error to call this function in any way that would create an
 * items added to a container with a specific number of children
 * required).  It is also an error to call this function if the builder
 * was created with an indefinite array or maybe type and no children
 * have been added; in this case it is impossible to infer the type of
 * the empty array.
 *
 * Inconsistent value to be constructed (ie: insufficient number of
 * Since: 2.24
 */


/**
 * g_variant_builder_init: (skip)
 * @builder: a #GVariantBuilder
 * @type: a container type
 *
 * Initialises a #GVariantBuilder structure.
 * construct.  It can be an indefinite type such as
 * %G_VARIANT_TYPE_ARRAY or a definite type such as "as" or "(ii)".
 * Maybe, array, tuple, dictionary entry and variant-typed values may be
 * constructed.
 * After the builder is initialised, values are added using
 * g_variant_builder_add_value() or g_variant_builder_add().
 * After all the child values are added, g_variant_builder_end() frees
 * the memory associated with the builder and returns the #GVariant that
 * was created.
 * This function completely ignores the previous contents of @builder.
 * On one hand this means that it is valid to pass in completely
 * uninitialised memory.  On the other hand, this means that if you are
 * initialising over top of an existing #GVariantBuilder you need to
 * first call g_variant_builder_clear() in order to avoid leaking
 * memory.
 * You must not call g_variant_builder_ref() or
 * g_variant_builder_unref() on a #GVariantBuilder that was initialised
 * with this function.  If you ever pass a reference to a
 * #GVariantBuilder outside of the control of your own code then you
 * should assume that the person receiving that reference may try to use
 * reference counting; you should use g_variant_builder_new() instead of
 * this function.
 *
 * Since: 2.24
 */


/**
 * g_variant_builder_new:
 * @type: a container type
 * @returns: (transfer full): a #GVariantBuilder
 *
 * Allocates and initialises a new #GVariantBuilder.
 * You should call g_variant_builder_unref() on the return value when it
 * is no longer needed.  The memory will not be automatically freed by
 * any other call.
 * In most cases it is easier to place a #GVariantBuilder directly on
 * the stack of the calling function and initialise it with
 * g_variant_builder_init().
 *
 * Since: 2.24
 */


/**
 * g_variant_builder_open:
 * @builder: a #GVariantBuilder
 * @type: a #GVariantType
 *
 * Opens a subcontainer inside the given @builder.  When done adding
 * items to the subcontainer, g_variant_builder_close() must be called.
 * It is an error to call this function in any way that would cause an
 * a value of an incorrect type).
 *
 * Inconsistent value to be constructed (ie: adding too many values or
 * Since: 2.24
 */


/**
 * g_variant_builder_ref:
 * @builder: a #GVariantBuilder allocated by g_variant_builder_new()
 * @returns: (transfer full): a new reference to @builder
 *
 * Increases the reference count on @builder.
 * Don't call this on stack-allocated #GVariantBuilder instances or bad
 * things will happen.
 *
 * Since: 2.24
 */


/**
 * g_variant_builder_unref:
 * @builder: (transfer full): a #GVariantBuilder allocated by g_variant_builder_new()
 *
 * Decreases the reference count on @builder.
 * In the event that there are no more references, releases all memory
 * associated with the #GVariantBuilder.
 * Don't call this on stack-allocated #GVariantBuilder instances or bad
 * things will happen.
 *
 * Since: 2.24
 */


/**
 * g_variant_byteswap:
 * @value: a #GVariant
 * @returns: (transfer full): the byteswapped form of @value
 *
 * Performs a byteswapping operation on the contents of @value.  The
 * result is that all multi-byte numeric data contained in @value is
 * byteswapped.  That includes 16, 32, and 64bit signed and unsigned
 * integers as well as file handles and double precision floating point
 * values.
 * This function is an identity mapping on any value that does not
 * contain multi-byte numeric data.  That include strings, booleans,
 * bytes and containers containing only these things (recursively).
 * The returned value is always in normal form and is marked as trusted.
 *
 * Since: 2.24
 */


/**
 * g_variant_classify:
 * @value: a #GVariant
 * @returns: the #GVariantClass of @value
 *
 * Classifies @value according to its top-level type.
 *
 * Since: 2.24
 */


/**
 * g_variant_compare:
 * @one: (type GVariant): a basic-typed #GVariant instance
 * @two: (type GVariant): a #GVariant instance of the same type
 * @returns: negative value if a &lt; b; zero if a = b; positive value if a &gt; b.
 *
 * Compares @one and @two.
 * The types of @one and @two are #gconstpointer only to allow use of
 * this function with #GTree, #GPtrArray, etc.  They must each be a
 * #GVariant.
 * strings).  For booleans, %FALSE is less than %TRUE.  Numbers are
 * ordered in the usual way.  Strings are in ASCII lexographical order.
 * It is a programmer error to attempt to compare container values or
 * two values that have types that are not exactly equal.  For example,
 * you cannot compare a 32-bit signed integer with a 32-bit unsigned
 * integer.  Also note that this function is not particularly
 * well-behaved when it comes to comparison of doubles; in particular,
 * If you only require an equality comparison, g_variant_equal() is more
 * general.
 *
 * Comparison is only defined for basic types (ie: booleans, numbers,
 * The handling of incomparable values (ie: NaN) is undefined.
 * Since: 2.26
 */


/**
 * g_variant_dup_bytestring:
 * @value: an array-of-bytes #GVariant instance
 * @length: (out) (allow-none) (default NULL): a pointer to a #gsize, to store the length (not including the nul terminator)
 * @returns: (transfer full) (array zero-terminated=1): a newly allocated string
 *
 * Similar to g_variant_get_bytestring() except that instead of
 * returning a constant string, the string is duplicated.
 * The return value must be freed using g_free().
 *
 * Since: 2.26
 */


/**
 * g_variant_dup_bytestring_array:
 * @value: an array of array of bytes #GVariant ('aay')
 * @length: (out) (allow-none): the length of the result, or %NULL
 * @returns: (array length=length) (transfer full): an array of strings
 *
 * Gets the contents of an array of array of bytes #GVariant.  This call
 * makes a deep copy; the return result should be released with
 * g_strfreev().
 * If @length is non-%NULL then the number of elements in the result is
 * stored there.  In any case, the resulting array will be
 * %NULL-terminated.
 * For an empty array, @length will be set to 0 and a pointer to a
 * %NULL pointer will be returned.
 *
 * Since: 2.26
 */


/**
 * g_variant_dup_string:
 * @value: a string #GVariant instance
 * @length: (out): a pointer to a #gsize, to store the length
 * @returns: (transfer full): a newly allocated string, utf8 encoded
 *
 * Similar to g_variant_get_string() except that instead of returning
 * a constant string, the string is duplicated.
 * The string will always be utf8 encoded.
 * The return value must be freed using g_free().
 *
 * Since: 2.24
 */


/**
 * g_variant_dup_strv:
 * @value: an array of strings #GVariant
 * @length: (out) (allow-none): the length of the result, or %NULL
 * @returns: (array length=length zero-terminated=1) (transfer full): an array of strings
 *
 * Gets the contents of an array of strings #GVariant.  This call
 * makes a deep copy; the return result should be released with
 * g_strfreev().
 * If @length is non-%NULL then the number of elements in the result
 * is stored there.  In any case, the resulting array will be
 * %NULL-terminated.
 * For an empty array, @length will be set to 0 and a pointer to a
 * %NULL pointer will be returned.
 *
 * Since: 2.24
 */


/**
 * g_variant_equal:
 * @one: (type GVariant): a #GVariant instance
 * @two: (type GVariant): a #GVariant instance
 * @returns: %TRUE if @one and @two are equal
 *
 * Checks if @one and @two have the same type and value.
 * The types of @one and @two are #gconstpointer only to allow use of
 * this function with #GHashTable.  They must each be a #GVariant.
 *
 * Since: 2.24
 */


/**
 * g_variant_get: (skip)
 * @value: a #GVariant instance
 * @format_string: a #GVariant format string
 * @...: arguments, as per @format_string
 *
 * Deconstructs a #GVariant instance.
 * Think of this function as an analogue to scanf().
 * The arguments that are expected by this function are entirely
 * determined by @format_string.  @format_string also restricts the
 * permissible types of @value.  It is an error to give a value with
 * an incompatible type.  See the section on <link
 * linkend='gvariant-format-strings'>GVariant Format Strings</link>.
 * Please note that the syntax of the format string is very likely to be
 * extended in the future.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_boolean:
 * @value: a boolean #GVariant instance
 * @returns: %TRUE or %FALSE
 *
 * Returns the boolean value of @value.
 * It is an error to call this function with a @value of any type
 * other than %G_VARIANT_TYPE_BOOLEAN.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_byte:
 * @value: a byte #GVariant instance
 * @returns: a #guchar
 *
 * Returns the byte value of @value.
 * It is an error to call this function with a @value of any type
 * other than %G_VARIANT_TYPE_BYTE.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_bytestring:
 * @value: an array-of-bytes #GVariant instance
 * @returns: (transfer none) (array zero-terminated=1): the constant string
 *
 * Returns the string value of a #GVariant instance with an
 * array-of-bytes type.  The string has no particular encoding.
 * If the array does not end with a nul terminator character, the empty
 * string is returned.  For this reason, you can always trust that a
 * non-%NULL nul-terminated string will be returned by this function.
 * If the array contains a nul terminator character somewhere other than
 * the last byte then the returned string is the string, up to the first
 * such nul character.
 * It is an error to call this function with a @value that is not an
 * array of bytes.
 * The return value remains valid as long as @value exists.
 *
 * Since: 2.26
 */


/**
 * g_variant_get_bytestring_array:
 * @value: an array of array of bytes #GVariant ('aay')
 * @length: (out) (allow-none): the length of the result, or %NULL
 * @returns: (array length=length) (transfer container): an array of constant strings
 *
 * Gets the contents of an array of array of bytes #GVariant.  This call
 * makes a shallow copy; the return result should be released with
 * g_free(), but the individual strings must not be modified.
 * If @length is non-%NULL then the number of elements in the result is
 * stored there.  In any case, the resulting array will be
 * %NULL-terminated.
 * For an empty array, @length will be set to 0 and a pointer to a
 * %NULL pointer will be returned.
 *
 * Since: 2.26
 */


/**
 * g_variant_get_child: (skip)
 * @value: a container #GVariant
 * @index_: the index of the child to deconstruct
 * @format_string: a #GVariant format string
 * @...: arguments, as per @format_string
 *
 * Reads a child item out of a container #GVariant instance and
 * deconstructs it according to @format_string.  This call is
 * essentially a combination of g_variant_get_child_value() and
 * g_variant_get().
 *
 * Since: 2.24
 */


/**
 * g_variant_get_child_value:
 * @value: a container #GVariant
 * @index_: the index of the child to fetch
 * @returns: (transfer full): the child at the specified index
 *
 * Reads a child item out of a container #GVariant instance.  This
 * includes variants, maybes, arrays, tuples and dictionary
 * entries.  It is an error to call this function on any other type of
 * #GVariant.
 * It is an error if @index_ is greater than the number of child items
 * in the container.  See g_variant_n_children().
 * This function is O(1).
 *
 * Since: 2.24
 */


/**
 * g_variant_get_data:
 * @value: a #GVariant instance
 * @returns: the serialised form of @value, or %NULL
 *
 * Returns a pointer to the serialised form of a #GVariant instance.
 * The returned data may not be in fully-normalised form if read from an
 * untrusted source.  The returned data must not be freed; it remains
 * valid for as long as @value exists.
 * If @value is a fixed-sized value that was deserialised from a
 * corrupted serialised container then %NULL may be returned.  In this
 * case, the proper thing to do is typically to use the appropriate
 * number of nul bytes in place of @value.  If @value is not fixed-sized
 * then %NULL is never returned.
 * In the case that @value is already in serialised form, this function
 * is O(1).  If the value is not already in serialised form,
 * serialisation occurs implicitly and is approximately O(n) in the size
 * of the result.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_double:
 * @value: a double #GVariant instance
 * @returns: a #gdouble
 *
 * Returns the double precision floating point value of @value.
 * It is an error to call this function with a @value of any type
 * other than %G_VARIANT_TYPE_DOUBLE.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_fixed_array:
 * @value: a #GVariant array with fixed-sized elements
 * @n_elements: (out): a pointer to the location to store the number of items
 * @element_size: the size of each element
 * @returns: (array length=n_elements): a pointer to the fixed array
 *
 * Provides access to the serialised data for an array of fixed-sized
 * items.
 * fixed-size as are tuples containing only other fixed-sized types.
 * example, if calling this function for an array of 32 bit integers,
 * you might say <code>sizeof (gint32)</code>.  This value isn't used
 * except for the purpose of a double-check that the form of the
 * seralised data matches the caller's expectation.
 * items in the array.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_handle:
 * @value: a handle #GVariant instance
 * @returns: a #gint32
 *
 * Returns the 32-bit signed integer value of @value.
 * It is an error to call this function with a @value of any type other
 * than %G_VARIANT_TYPE_HANDLE.
 * By convention, handles are indexes into an array of file descriptors
 * that are sent alongside a D-Bus message.  If you're not interacting
 * with D-Bus, you probably don't need them.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_int16:
 * @value: a int16 #GVariant instance
 * @returns: a #gint16
 *
 * Returns the 16-bit signed integer value of @value.
 * It is an error to call this function with a @value of any type
 * other than %G_VARIANT_TYPE_INT16.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_int32:
 * @value: a int32 #GVariant instance
 * @returns: a #gint32
 *
 * Returns the 32-bit signed integer value of @value.
 * It is an error to call this function with a @value of any type
 * other than %G_VARIANT_TYPE_INT32.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_int64:
 * @value: a int64 #GVariant instance
 * @returns: a #gint64
 *
 * Returns the 64-bit signed integer value of @value.
 * It is an error to call this function with a @value of any type
 * other than %G_VARIANT_TYPE_INT64.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_maybe:
 * @value: a maybe-typed value
 * @returns: (allow-none) (transfer full): the contents of @value, or %NULL
 *
 * Given a maybe-typed #GVariant instance, extract its value.  If the
 * value is Nothing, then this function returns %NULL.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_normal_form:
 * @value: a #GVariant
 * @returns: (transfer full): a trusted #GVariant
 *
 * Gets a #GVariant instance that has the same value as @value and is
 * trusted to be in normal form.
 * If @value is already trusted to be in normal form then a new
 * reference to @value is returned.
 * If @value is not already trusted, then it is scanned to check if it
 * is in normal form.  If it is found to be in normal form then it is
 * marked as trusted and a new reference to it is returned.
 * If @value is found not to be in normal form then a new trusted
 * #GVariant is created with the same value as @value.
 * It makes sense to call this function if you've received #GVariant
 * data from untrusted sources and you want to ensure your serialised
 * output is definitely in normal form.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_size:
 * @value: a #GVariant instance
 * @returns: the serialised size of @value
 *
 * Determines the number of bytes that would be required to store @value
 * with g_variant_store().
 * If @value has a fixed-sized type then this function always returned
 * that fixed size.
 * In the case that @value is already in serialised form or the size has
 * then this function is O(1).  Otherwise, the size is calculated, an
 * operation which is approximately O(n) in the number of values
 * involved.
 *
 * Already been calculated (ie: this function has been called before)
 * Since: 2.24
 */


/**
 * g_variant_get_string:
 * @value: a string #GVariant instance
 * @length: (allow-none) (default 0) (out): a pointer to a #gsize, to store the length
 * @returns: (transfer none): the constant string, utf8 encoded
 *
 * Returns the string value of a #GVariant instance with a string
 * type.  This includes the types %G_VARIANT_TYPE_STRING,
 * %G_VARIANT_TYPE_OBJECT_PATH and %G_VARIANT_TYPE_SIGNATURE.
 * The string will always be utf8 encoded.
 * If @length is non-%NULL then the length of the string (in bytes) is
 * returned there.  For trusted values, this information is already
 * known.  For untrusted values, a strlen() will be performed.
 * It is an error to call this function with a @value of any type
 * other than those three.
 * The return value remains valid as long as @value exists.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_strv:
 * @value: an array of strings #GVariant
 * @length: (out) (allow-none): the length of the result, or %NULL
 * @returns: (array length=length zero-terminated=1) (transfer container): an array of constant strings
 *
 * Gets the contents of an array of strings #GVariant.  This call
 * makes a shallow copy; the return result should be released with
 * g_free(), but the individual strings must not be modified.
 * If @length is non-%NULL then the number of elements in the result
 * is stored there.  In any case, the resulting array will be
 * %NULL-terminated.
 * For an empty array, @length will be set to 0 and a pointer to a
 * %NULL pointer will be returned.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_type:
 * @value: a #GVariant
 * @returns: a #GVariantType
 *
 * Determines the type of @value.
 * The return value is valid for the lifetime of @value and must not
 * be freed.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_type_string:
 * @value: a #GVariant
 * @returns: the type string for the type of @value
 *
 * Returns the type string of @value.  Unlike the result of calling
 * g_variant_type_peek_string(), this string is nul-terminated.  This
 * string belongs to #GVariant and must not be freed.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_uint16:
 * @value: a uint16 #GVariant instance
 * @returns: a #guint16
 *
 * Returns the 16-bit unsigned integer value of @value.
 * It is an error to call this function with a @value of any type
 * other than %G_VARIANT_TYPE_UINT16.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_uint32:
 * @value: a uint32 #GVariant instance
 * @returns: a #guint32
 *
 * Returns the 32-bit unsigned integer value of @value.
 * It is an error to call this function with a @value of any type
 * other than %G_VARIANT_TYPE_UINT32.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_uint64:
 * @value: a uint64 #GVariant instance
 * @returns: a #guint64
 *
 * Returns the 64-bit unsigned integer value of @value.
 * It is an error to call this function with a @value of any type
 * other than %G_VARIANT_TYPE_UINT64.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_va: (skip)
 * @value: a #GVariant
 * @format_string: a string that is prefixed with a format string
 * @endptr: (allow-none) (default NULL): location to store the end pointer, or %NULL
 * @app: a pointer to a #va_list
 *
 * This function is intended to be used by libraries based on #GVariant
 * that want to provide g_variant_get()-like functionality to their
 * users.
 * The API is more general than g_variant_get() to allow a wider range
 * of possible uses.
 * need to be nul-terminated if @endptr is %NULL.  If @endptr is
 * non-%NULL then it is updated to point to the first character past the
 * end of the format string.
 * pointing to the argument following the last.
 * These two generalisations allow mixing of multiple calls to
 * g_variant_new_va() and g_variant_get_va() within a single actual
 * varargs call by the user.
 *
 * Since: 2.24
 */


/**
 * g_variant_get_variant:
 * @value: a variant #GVariant instance
 * @returns: (transfer full): the item contained in the variant
 *
 * Unboxes @value.  The result is the #GVariant instance that was
 * contained in @value.
 *
 * Since: 2.24
 */


/**
 * g_variant_hash:
 * @value: (type GVariant): a basic #GVariant value as a #gconstpointer
 * @returns: a hash value corresponding to @value
 *
 * Generates a hash value for a #GVariant instance.
 * The output of this function is guaranteed to be the same for a given
 * value only per-process.  It may change between different processor
 * architectures or even different versions of GLib.  Do not use this
 * function as a basis for building protocols or file formats.
 * The type of @value is #gconstpointer only to allow use of this
 * function with #GHashTable.  @value must be a #GVariant.
 *
 * Since: 2.24
 */


/**
 * g_variant_is_container:
 * @value: a #GVariant instance
 * @returns: %TRUE if @value is a container
 *
 * Checks if @value is a container.
 */


/**
 * g_variant_is_floating:
 * @value: a #GVariant
 * @returns: whether @value is floating
 *
 * Checks whether @value has a floating reference count.
 * This function should only ever be used to assert that a given variant
 * is or is not floating, or for debug purposes. To acquire a reference
 * to a variant that might be floating, always use g_variant_ref_sink().
 * See g_variant_ref_sink() for more information about floating reference
 * counts.
 *
 * Since: 2.26
 */


/**
 * g_variant_is_normal_form:
 * @value: a #GVariant instance
 * @returns: %TRUE if @value is in normal form
 *
 * Checks if @value is in normal form.
 * The main reason to do this is to detect if a given chunk of
 * using g_variant_new_from_data() and then use this function to
 * check.
 * If @value is found to be in normal form then it will be marked as
 * being trusted.  If the value was already marked as being trusted then
 * this function will immediately return %TRUE.
 *
 * Serialised data is in normal form: load the data into a #GVariant
 * Since: 2.24
 */


/**
 * g_variant_is_object_path:
 * @string: a normal C nul-terminated string
 * @returns: %TRUE if @string is a D-Bus object path
 *
 * Determines if a given string is a valid D-Bus object path.  You
 * should ensure that a string is a valid D-Bus object path before
 * passing it to g_variant_new_object_path().
 * A valid object path starts with '/' followed by zero or more
 * sequences of characters separated by '/' characters.  Each sequence
 * must contain only the characters "[A-Z][a-z][0-9]_".  No sequence
 * (including the one following the final '/' character) may be empty.
 *
 * Since: 2.24
 */


/**
 * g_variant_is_of_type:
 * @value: a #GVariant instance
 * @type: a #GVariantType
 * @returns: %TRUE if the type of @value matches @type
 *
 * Checks if a value has a type matching the provided type.
 *
 * Since: 2.24
 */


/**
 * g_variant_is_signature:
 * @string: a normal C nul-terminated string
 * @returns: %TRUE if @string is a D-Bus type signature
 *
 * Determines if a given string is a valid D-Bus type signature.  You
 * should ensure that a string is a valid D-Bus type signature before
 * passing it to g_variant_new_signature().
 * D-Bus type signatures consist of zero or more definite #GVariantType
 * strings in sequence.
 *
 * Since: 2.24
 */


/**
 * g_variant_iter_copy:
 * @iter: a #GVariantIter
 * @returns: (transfer full): a new heap-allocated #GVariantIter
 *
 * Creates a new heap-allocated #GVariantIter to iterate over the
 * container that was being iterated over by @iter.  Iteration begins on
 * the new iterator from the current position of the old iterator but
 * the two copies are independent past that point.
 * Use g_variant_iter_free() to free the return value when you no longer
 * need it.
 * A reference is taken to the container that @iter is iterating over
 * and will be releated only when g_variant_iter_free() is called.
 *
 * Since: 2.24
 */


/**
 * g_variant_iter_free:
 * @iter: (transfer full): a heap-allocated #GVariantIter
 *
 * Frees a heap-allocated #GVariantIter.  Only call this function on
 * iterators that were returned by g_variant_iter_new() or
 * g_variant_iter_copy().
 *
 * Since: 2.24
 */


/**
 * g_variant_iter_init: (skip)
 * @iter: a pointer to a #GVariantIter
 * @value: a container #GVariant
 * @returns: the number of items in @value
 *
 * Initialises (without allocating) a #GVariantIter.  @iter may be
 * completely uninitialised prior to this call; its old value is
 * ignored.
 * The iterator remains valid for as long as @value exists, and need not
 * be freed in any way.
 *
 * Since: 2.24
 */


/**
 * g_variant_iter_loop: (skip)
 * @iter: a #GVariantIter
 * @format_string: a GVariant format string
 * @...: the arguments to unpack the value into
 * @returns: %TRUE if a value was unpacked, or %FALSE if there as no value
 *
 * Gets the next item in the container and unpacks it into the variable
 * argument list according to @format_string, returning %TRUE.
 * If no more items remain then %FALSE is returned.
 * On the first call to this function, the pointers appearing on the
 * variable argument list are assumed to point at uninitialised memory.
 * On the second and later calls, it is assumed that the same pointers
 * will be given and that they will point to the memory as set by the
 * previous call to this function.  This allows the previous values to
 * be freed, as appropriate.
 * This function is intended to be used with a while loop as
 * demonstrated in the following example.  This function can only be
 * used when iterating over an array.  It is only valid to call this
 * function with a string constant for the format string and the same
 * string constant must be used each time.  Mixing calls to this
 * function and g_variant_iter_next() or g_variant_iter_next_value() on
 * the same iterator is not recommended.
 * See the section on <link linkend='gvariant-format-strings'>GVariant
 * Format Strings</link>.
 * <example>
 * <title>Memory management with g_variant_iter_loop()</title>
 * <programlisting>
 * /<!-- -->* Iterates a dictionary of type 'a{sv}' *<!-- -->/
 * void
 * iterate_dictionary (GVariant *dictionary)
 * {
 * GVariantIter iter;
 * GVariant *value;
 * gchar *key;
 * g_variant_iter_init (&iter, dictionary);
 * while (g_variant_iter_loop (&iter, "{sv}", &key, &value))
 * {
 * g_print ("Item '%s' has type '%s'\n", key,
 * g_variant_get_type_string (value));
 * /<!-- -->* no need to free 'key' and 'value' here *<!-- -->/
 * }
 * }
 * </programlisting>
 * </example>
 * If you want a slightly less magical alternative that requires more
 * typing, see g_variant_iter_next().
 *
 * Since: 2.24
 */


/**
 * g_variant_iter_n_children:
 * @iter: a #GVariantIter
 * @returns: the number of children in the container
 *
 * Queries the number of child items in the container that we are
 * iterating over.  This is the total number of items -- not the number
 * of items remaining.
 * This function might be useful for preallocation of arrays.
 *
 * Since: 2.24
 */


/**
 * g_variant_iter_new:
 * @value: a container #GVariant
 * @returns: (transfer full): a new heap-allocated #GVariantIter
 *
 * Creates a heap-allocated #GVariantIter for iterating over the items
 * in @value.
 * Use g_variant_iter_free() to free the return value when you no longer
 * need it.
 * A reference is taken to @value and will be released only when
 * g_variant_iter_free() is called.
 *
 * Since: 2.24
 */


/**
 * g_variant_iter_next: (skip)
 * @iter: a #GVariantIter
 * @format_string: a GVariant format string
 * @...: the arguments to unpack the value into
 * @returns: %TRUE if a value was unpacked, or %FALSE if there as no value
 *
 * Gets the next item in the container and unpacks it into the variable
 * argument list according to @format_string, returning %TRUE.
 * If no more items remain then %FALSE is returned.
 * All of the pointers given on the variable arguments list of this
 * function are assumed to point at uninitialised memory.  It is the
 * responsibility of the caller to free all of the values returned by
 * the unpacking process.
 * See the section on <link linkend='gvariant-format-strings'>GVariant
 * Format Strings</link>.
 * <example>
 * <title>Memory management with g_variant_iter_next()</title>
 * <programlisting>
 * /<!-- -->* Iterates a dictionary of type 'a{sv}' *<!-- -->/
 * void
 * iterate_dictionary (GVariant *dictionary)
 * {
 * GVariantIter iter;
 * GVariant *value;
 * gchar *key;
 * g_variant_iter_init (&iter, dictionary);
 * while (g_variant_iter_next (&iter, "{sv}", &key, &value))
 * {
 * g_print ("Item '%s' has type '%s'\n", key,
 * g_variant_get_type_string (value));
 * /<!-- -->* must free data for ourselves *<!-- -->/
 * g_variant_unref (value);
 * g_free (key);
 * }
 * }
 * </programlisting>
 * </example>
 * For a solution that is likely to be more convenient to C programmers
 * when dealing with loops, see g_variant_iter_loop().
 *
 * Since: 2.24
 */


/**
 * g_variant_iter_next_value:
 * @iter: a #GVariantIter
 * @returns: (allow-none) (transfer full): a #GVariant, or %NULL
 *
 * Gets the next item in the container.  If no more items remain then
 * %NULL is returned.
 * Use g_variant_unref() to drop your reference on the return value when
 * you no longer need it.
 * <example>
 * <title>Iterating with g_variant_iter_next_value()</title>
 * <programlisting>
 * /<!-- -->* recursively iterate a container *<!-- -->/
 * void
 * iterate_container_recursive (GVariant *container)
 * {
 * GVariantIter iter;
 * GVariant *child;
 * g_variant_iter_init (&iter, container);
 * while ((child = g_variant_iter_next_value (&iter)))
 * {
 * g_print ("type '%s'\n", g_variant_get_type_string (child));
 * if (g_variant_is_container (child))
 * iterate_container_recursive (child);
 * g_variant_unref (child);
 * }
 * }
 * </programlisting>
 * </example>
 *
 * Since: 2.24
 */


/**
 * g_variant_lookup: (skip)
 * @dictionary: a dictionary #GVariant
 * @key: the key to lookup in the dictionary
 * @format_string: a GVariant format string
 * @...: the arguments to unpack the value into
 *
 * Looks up a value in a dictionary #GVariant.
 * This function is a wrapper around g_variant_lookup_value() and
 * g_variant_get().  In the case that %NULL would have been returned,
 * this function returns %FALSE.  Otherwise, it unpacks the returned
 * value and returns %TRUE.
 * See g_variant_get() for information about @format_string.
 *
 * Returns: %TRUE if a value was unpacked
 * Since: 2.28
 */


/**
 * g_variant_lookup_value:
 * @dictionary: a dictionary #GVariant
 * @key: the key to lookup in the dictionary
 * @expected_type: (allow-none): a #GVariantType, or %NULL
 *
 * Looks up a value in a dictionary #GVariant.
 * This function works with dictionaries of the type
 * <literal>a{s*}</literal> (and equally well with type
 * <literal>a{o*}</literal>, but we only further discuss the string case
 * for sake of clarity).
 * In the event that @dictionary has the type <literal>a{sv}</literal>,
 * the @expected_type string specifies what type of value is expected to
 * be inside of the variant.  If the value inside the variant has a
 * different type then %NULL is returned.  In the event that @dictionary
 * has a value type other than <literal>v</literal> then @expected_type
 * must directly match the key type and it is used to unpack the value
 * directly or an error occurs.
 * In either case, if @key is not found in @dictionary, %NULL is
 * returned.
 * If the key is found and the value has the correct type, it is
 * returned.  If @expected_type was specified then any non-%NULL return
 * value will have this type.
 *
 * Returns: (transfer full): the value of the dictionary key, or %NULL
 * Since: 2.28
 */


/**
 * g_variant_n_children:
 * @value: a container #GVariant
 * @returns: the number of children in the container
 *
 * Determines the number of children in a container #GVariant instance.
 * This includes variants, maybes, arrays, tuples and dictionary
 * entries.  It is an error to call this function on any other type of
 * #GVariant.
 * For variants, the return value is always 1.  For values with maybe
 * types, it is always zero or one.  For arrays, it is the length of the
 * array.  For tuples it is the number of tuple items (which depends
 * only on the type).  For dictionary entries, it is always 2
 * This function is O(1).
 *
 * Since: 2.24
 */


/**
 * g_variant_new: (skip)
 * @format_string: a #GVariant format string
 * @...: arguments, as per @format_string
 * @returns: a new floating #GVariant instance
 *
 * Creates a new #GVariant instance.
 * Think of this function as an analogue to g_strdup_printf().
 * The type of the created instance and the arguments that are
 * expected by this function are determined by @format_string.  See the
 * section on <link linkend='gvariant-format-strings'>GVariant Format
 * Strings</link>.  Please note that the syntax of the format string is
 * very likely to be extended in the future.
 * The first character of the format string must not be '*' '?' '@' or
 * 'r'; in essence, a new #GVariant must always be constructed by this
 * function (and not merely passed through it unmodified).
 *
 * Since: 2.24
 */


/**
 * g_variant_new_array:
 * @child_type: (allow-none): the element type of the new array
 * @children: (allow-none) (array length=n_children): an array of #GVariant pointers, the children
 * @n_children: the length of @children
 * @returns: (transfer none): a floating reference to a new #GVariant array
 *
 * Creates a new #GVariant array from @children.
 * child type is determined by inspecting the first element of the
 * definite type.
 * The items of the array are taken from the @children array.  No entry
 * in the @children array may be %NULL.
 * All items in the array must have the same type, which must be the
 * same as @child_type, if given.
 * If the @children are floating references (see g_variant_ref_sink()), the
 * new instance takes ownership of them as if via g_variant_ref_sink().
 *
 * Since: 2.24
 */


/**
 * g_variant_new_boolean:
 * @value: a #gboolean value
 * @returns: (transfer none): a floating reference to a new boolean #GVariant instance
 *
 * Creates a new boolean #GVariant instance -- either %TRUE or %FALSE.
 *
 * Since: 2.24
 */


/**
 * g_variant_new_byte:
 * @value: a #guint8 value
 * @returns: (transfer none): a floating reference to a new byte #GVariant instance
 *
 * Creates a new byte #GVariant instance.
 *
 * Since: 2.24
 */


/**
 * g_variant_new_bytestring:
 * @string: (array zero-terminated=1): a normal nul-terminated string in no particular encoding
 * @returns: (transfer none): a floating reference to a new bytestring #GVariant instance
 *
 * Creates an array-of-bytes #GVariant with the contents of @string.
 * This function is just like g_variant_new_string() except that the
 * string need not be valid utf8.
 * The nul terminator character at the end of the string is stored in
 * the array.
 *
 * Since: 2.26
 */


/**
 * g_variant_new_bytestring_array:
 * @strv: (array length=length): an array of strings
 * @length: the length of @strv, or -1
 * @returns: (transfer none): a new floating #GVariant instance
 *
 * Constructs an array of bytestring #GVariant from the given array of
 * strings.
 * If @length is -1 then @strv is %NULL-terminated.
 *
 * Since: 2.26
 */


/**
 * g_variant_new_dict_entry: (constructor)
 * @key: a basic #GVariant, the key
 * @value: a #GVariant, the value
 * @returns: (transfer none): a floating reference to a new dictionary entry #GVariant
 *
 * Creates a new dictionary entry #GVariant. @key and @value must be
 * If the @key or @value are floating references (see g_variant_ref_sink()),
 * the new instance takes ownership of them as if via g_variant_ref_sink().
 *
 * Non-%null. @key must be a value of a basic type (ie: not a container).
 * Since: 2.24
 */


/**
 * g_variant_new_double:
 * @value: a #gdouble floating point value
 * @returns: (transfer none): a floating reference to a new double #GVariant instance
 *
 * Creates a new double #GVariant instance.
 *
 * Since: 2.24
 */


/**
 * g_variant_new_from_data:
 * @type: a definite #GVariantType
 * @data: (array length=size) (element-type guint8): the serialised data
 * @size: the size of @data
 * @trusted: %TRUE if @data is definitely in normal form
 * @notify: (scope async): function to call when @data is no longer needed
 * @user_data: data for @notify
 * @returns: (transfer none): a new floating #GVariant of type @type
 *
 * Creates a new #GVariant instance from serialised data.
 * The interpretation of @data depends on knowing the type.
 * unchanging value until such a time as @notify is called with
 * the result is undefined.
 * If @data is trusted to be serialised data in normal form then
 * within this process or read from a trusted location on the disk (such
 * as a file installed in /usr/lib alongside your application).  You
 * should set trusted to %FALSE if @data is read from the network, a
 * file in the user's home directory, etc.
 * needed.  The exact time of this call is unspecified and might even be
 * before this function returns.
 *
 * Since: 2.24
 */


/**
 * g_variant_new_handle:
 * @value: a #gint32 value
 * @returns: (transfer none): a floating reference to a new handle #GVariant instance
 *
 * Creates a new handle #GVariant instance.
 * By convention, handles are indexes into an array of file descriptors
 * that are sent alongside a D-Bus message.  If you're not interacting
 * with D-Bus, you probably don't need them.
 *
 * Since: 2.24
 */


/**
 * g_variant_new_int16:
 * @value: a #gint16 value
 * @returns: (transfer none): a floating reference to a new int16 #GVariant instance
 *
 * Creates a new int16 #GVariant instance.
 *
 * Since: 2.24
 */


/**
 * g_variant_new_int32:
 * @value: a #gint32 value
 * @returns: (transfer none): a floating reference to a new int32 #GVariant instance
 *
 * Creates a new int32 #GVariant instance.
 *
 * Since: 2.24
 */


/**
 * g_variant_new_int64:
 * @value: a #gint64 value
 * @returns: (transfer none): a floating reference to a new int64 #GVariant instance
 *
 * Creates a new int64 #GVariant instance.
 *
 * Since: 2.24
 */


/**
 * g_variant_new_maybe:
 * @child_type: (allow-none): the #GVariantType of the child, or %NULL
 * @child: (allow-none): the child value, or %NULL
 * @returns: (transfer none): a floating reference to a new #GVariant maybe instance
 *
 * Depending on if @child is %NULL, either wraps @child inside of a
 * maybe container or creates a Nothing instance for the given @type.
 * At least one of @child_type and @child must be non-%NULL.
 * If @child_type is non-%NULL then it must be a definite type.
 * If they are both non-%NULL then @child_type must be the type
 * of @child.
 * If @child is a floating reference (see g_variant_ref_sink()), the new
 * instance takes ownership of @child.
 *
 * Since: 2.24
 */


/**
 * g_variant_new_object_path:
 * @object_path: a normal C nul-terminated string
 * @returns: (transfer none): a floating reference to a new object path #GVariant instance
 *
 * Creates a D-Bus object path #GVariant with the contents of @string.
 * g_variant_is_object_path() if you're not sure.
 *
 * Since: 2.24
 */


/**
 * g_variant_new_parsed:
 * @format: a text format #GVariant
 * @...: arguments as per @format
 * @returns: a new floating #GVariant instance
 * @format must be a text format #GVariant with one extension: at any
 *
 * Parses @format and returns the result.
 * point that a value may appear in the text, a '%' character followed
 * by a GVariant format string (as per g_variant_new()) may appear.  In
 * that case, the same arguments are collected from the argument list as
 * g_variant_new() would have collected.
 * Consider this simple example:
 * <informalexample><programlisting>
 * g_variant_new_parsed ("[('one', 1), ('two', %i), (%s, 3)]", 2, "three");
 * </programlisting></informalexample>
 * In the example, the variable argument parameters are collected and
 * filled in as if they were part of the original string to produce the
 * result of <code>[('one', 1), ('two', 2), ('three', 3)]</code>.
 * This function is intended only to be used with @format as a string
 * literal.  Any parse error is fatal to the calling process.  If you
 * want to parse data from untrusted sources, use g_variant_parse().
 * You may not use this function to return, unmodified, a single
 * #GVariant pointer from the argument list.  ie: @format may not solely
 * be anything along the lines of "%*", "%?", "%r", or anything starting
 * with "%@".
 */


/**
 * g_variant_new_parsed_va:
 * @format: a text format #GVariant
 * @app: a pointer to a #va_list
 * @returns: a new, usually floating, #GVariant
 *
 * Parses @format and returns the result.
 * This is the version of g_variant_new_parsed() intended to be used
 * from libraries.
 * The return value will be floating if it was a newly created GVariant
 * instance.  In the case that @format simply specified the collection
 * #GVariant pointer will be returned unmodified, without adding any
 * additional references.
 * In order to behave correctly in all cases it is necessary for the
 * calling function to g_variant_ref_sink() the return result before
 * returning control to the user that originally provided the pointer.
 * At this point, the caller will have their own full reference to the
 * result.  This can also be done by adding the result to a container,
 * or by passing it to another g_variant_new() call.
 *
 * Of a #gvariant pointer (eg: @format was "%*") then the collected
 */


/**
 * g_variant_new_signature:
 * @signature: a normal C nul-terminated string
 * @returns: (transfer none): a floating reference to a new signature #GVariant instance
 *
 * Creates a D-Bus type signature #GVariant with the contents of
 * g_variant_is_signature() if you're not sure.
 *
 * Since: 2.24
 */


/**
 * g_variant_new_string:
 * @string: a normal utf8 nul-terminated string
 * @returns: (transfer none): a floating reference to a new string #GVariant instance
 *
 * Creates a string #GVariant with the contents of @string.
 *
 * Since: 2.24
 */


/**
 * g_variant_new_strv:
 * @strv: (array length=length) (element-type utf8): an array of strings
 * @length: the length of @strv, or -1
 * @returns: (transfer none): a new floating #GVariant instance
 *
 * Constructs an array of strings #GVariant from the given array of
 * strings.
 * If @length is -1 then @strv is %NULL-terminated.
 *
 * Since: 2.24
 */


/**
 * g_variant_new_tuple:
 * @children: (array length=n_children): the items to make the tuple out of
 * @n_children: the length of @children
 * @returns: (transfer none): a floating reference to a new #GVariant tuple
 *
 * Creates a new tuple #GVariant out of the items in @children.  The
 * type is determined from the types of @children.  No entry in the
 * If @n_children is 0 then the unit tuple is constructed.
 * If the @children are floating references (see g_variant_ref_sink()), the
 * new instance takes ownership of them as if via g_variant_ref_sink().
 *
 * Since: 2.24
 */


/**
 * g_variant_new_uint16:
 * @value: a #guint16 value
 * @returns: (transfer none): a floating reference to a new uint16 #GVariant instance
 *
 * Creates a new uint16 #GVariant instance.
 *
 * Since: 2.24
 */


/**
 * g_variant_new_uint32:
 * @value: a #guint32 value
 * @returns: (transfer none): a floating reference to a new uint32 #GVariant instance
 *
 * Creates a new uint32 #GVariant instance.
 *
 * Since: 2.24
 */


/**
 * g_variant_new_uint64:
 * @value: a #guint64 value
 * @returns: (transfer none): a floating reference to a new uint64 #GVariant instance
 *
 * Creates a new uint64 #GVariant instance.
 *
 * Since: 2.24
 */


/**
 * g_variant_new_va: (skip)
 * @format_string: a string that is prefixed with a format string
 * @endptr: (allow-none) (default NULL): location to store the end pointer, or %NULL
 * @app: a pointer to a #va_list
 * @returns: a new, usually floating, #GVariant
 *
 * This function is intended to be used by libraries based on
 * #GVariant that want to provide g_variant_new()-like functionality
 * to their users.
 * The API is more general than g_variant_new() to allow a wider range
 * of possible uses.
 * needs to be nul-terminated if @endptr is %NULL.  If @endptr is
 * non-%NULL then it is updated to point to the first character past the
 * end of the format string.
 * pointing to the argument following the last.
 * These two generalisations allow mixing of multiple calls to
 * g_variant_new_va() and g_variant_get_va() within a single actual
 * varargs call by the user.
 * The return value will be floating if it was a newly created GVariant
 * instance (for example, if the format string was "(ii)").  In the case
 * that the format_string was '*', '?', 'r', or a format starting with
 * '@' then the collected #GVariant pointer will be returned unmodified,
 * without adding any additional references.
 * In order to behave correctly in all cases it is necessary for the
 * calling function to g_variant_ref_sink() the return result before
 * returning control to the user that originally provided the pointer.
 * At this point, the caller will have their own full reference to the
 * result.  This can also be done by adding the result to a container,
 * or by passing it to another g_variant_new() call.
 *
 * Since: 2.24
 */


/**
 * g_variant_new_variant:
 * @value: a #GVariant instance
 * @returns: (transfer none): a floating reference to a new variant #GVariant instance
 *
 * Boxes @value.  The result is a #GVariant instance representing a
 * variant containing the original value.
 * If @child is a floating reference (see g_variant_ref_sink()), the new
 * instance takes ownership of @child.
 *
 * Since: 2.24
 */


/**
 * g_variant_parse:
 * @type: a #GVariantType, or %NULL
 * @text: a string containing a GVariant in text form
 * @limit: a pointer to the end of @text, or %NULL
 * @endptr: a location to store the end pointer, or %NULL
 * @error: a pointer to a %NULL #GError pointer, or %NULL
 * @Returns: a reference to a #GVariant, or %NULL
 *
 * Parses a #GVariant from a text representation.
 * A single #GVariant is parsed from the content of @text.
 * The format is described <link linkend='gvariant-text'>here</link>.
 * The memory at @limit will never be accessed and the parser behaves as
 * if the character at @limit is the nul terminator.  This has the
 * effect of bounding @text.
 * If @endptr is non-%NULL then @text is permitted to contain data
 * following the value that this function parses and @endptr will be
 * updated to point to the first character past the end of the text
 * parsed by this function.  If @endptr is %NULL and there is extra data
 * then an error is returned.
 * If @type is non-%NULL then the value will be parsed to have that
 * type.  This may result in additional parse errors (in the case that
 * the parsed value doesn't fit the type) but may also result in fewer
 * errors (in the case that the type would have been ambiguous, such as
 * with empty arrays).
 * In the event that the parsing is successful, the resulting #GVariant
 * is returned.
 * In case of any error, %NULL will be returned.  If @error is non-%NULL
 * then it will be set to reflect the error that occured.
 * Officially, the language understood by the parser is "any string
 * produced by g_variant_print()".
 */


/**
 * g_variant_print:
 * @value: a #GVariant
 * @type_annotate: %TRUE if type information should be included in the output
 * @returns: (transfer full): a newly-allocated string holding the result.
 *
 * Pretty-prints @value in the format understood by g_variant_parse().
 * The format is described <link linkend='gvariant-text'>here</link>.
 * If @type_annotate is %TRUE, then type information is included in
 * the output.
 */


/**
 * g_variant_print_string: (skip)
 * @value: a #GVariant
 * @string: (allow-none) (default NULL): a #GString, or %NULL
 * @type_annotate: %TRUE if type information should be included in the output
 * @returns: a #GString containing the string
 *
 * Behaves as g_variant_print(), but operates on a #GString.
 * If @string is non-%NULL then it is appended to and returned.  Else,
 * a new empty #GString is allocated and it is returned.
 *
 * Since: 2.24
 */


/**
 * g_variant_ref:
 * @value: a #GVariant
 * @returns: the same @value
 *
 * Increases the reference count of @value.
 *
 * Since: 2.24
 */


/**
 * g_variant_ref_sink:
 * @value: a #GVariant
 * @returns: the same @value
 *
 * #GVariant uses a floating reference count system.  All functions with
 * names starting with <literal>g_variant_new_</literal> return floating
 * references.
 * Calling g_variant_ref_sink() on a #GVariant with a floating reference
 * will convert the floating reference into a full reference.  Calling
 * g_variant_ref_sink() on a non-floating #GVariant results in an
 * additional normal reference being added.
 * In other words, if the @value is floating, then this call "assumes
 * ownership" of the floating reference, converting it to a normal
 * reference.  If the @value is not floating, then this call adds a
 * new normal reference increasing the reference count by one.
 * All calls that result in a #GVariant instance being inserted into a
 * container will call g_variant_ref_sink() on the instance.  This means
 * that if the value was just created (and has only its floating
 * reference) then the container will assume sole ownership of the value
 * at that point and the caller will not need to unreference it.  This
 * makes certain common styles of programming much easier while still
 * maintaining normal refcounting semantics in situations where values
 * are not floating.
 *
 * Since: 2.24
 */


/**
 * g_variant_store:
 * @value: the #GVariant to store
 * @data: the location to store the serialised data at
 *
 * Stores the serialised form of @value at @data.  @data should be
 * large enough.  See g_variant_get_size().
 * The stored data is in machine native byte order but may not be in
 * fully-normalised form if read from an untrusted source.  See
 * g_variant_get_normal_form() for a solution.
 * This function is approximately O(n) in the size of @data.
 *
 * Since: 2.24
 */


/**
 * g_variant_type_copy:
 * @type: a #GVariantType
 * @returns: (transfer full): a new #GVariantType
 *
 * Makes a copy of a #GVariantType.  It is appropriate to call
 * g_variant_type_free() on the return value.  @type may not be %NULL.
 * Since 2.24
 */


/**
 * g_variant_type_dup_string:
 * @type: a #GVariantType
 * @returns: (transfer full): the corresponding type string
 *
 * Returns a newly-allocated copy of the type string corresponding to
 * call g_free() on the return value.
 * Since 2.24
 */


/**
 * g_variant_type_element:
 * @type: an array or maybe #GVariantType
 * @returns: (transfer none): the element type of @type
 *
 * Determines the element type of an array or maybe type.
 * This function may only be used with array or maybe types.
 * Since 2.24
 */


/**
 * g_variant_type_equal:
 * @type1: (type GVariantType): a #GVariantType
 * @type2: (type GVariantType): a #GVariantType
 * @returns: %TRUE if @type1 and @type2 are exactly equal
 *
 * Compares @type1 and @type2 for equality.
 * Only returns %TRUE if the types are exactly equal.  Even if one type
 * is an indefinite type and the other is a subtype of it, %FALSE will
 * be returned if they are not exactly equal.  If you want to check for
 * subtypes, use g_variant_type_is_subtype_of().
 * The argument types of @type1 and @type2 are only #gconstpointer to
 * allow use with #GHashTable without function pointer casting.  For
 * both arguments, a valid #GVariantType must be provided.
 * Since 2.24
 */


/**
 * g_variant_type_first:
 * @type: a tuple or dictionary entry #GVariantType
 * @returns: (transfer none): the first item type of @type, or %NULL
 *
 * Determines the first item type of a tuple or dictionary entry
 * type.
 * This function may only be used with tuple or dictionary entry types,
 * but must not be used with the generic tuple type
 * %G_VARIANT_TYPE_TUPLE.
 * In the case of a dictionary entry type, this returns the type of
 * the key.
 * %NULL is returned in case of @type being %G_VARIANT_TYPE_UNIT.
 * This call, together with g_variant_type_next() provides an iterator
 * interface over tuple and dictionary entry types.
 * Since 2.24
 */


/**
 * g_variant_type_free:
 * @type: a #GVariantType, or %NULL
 *
 * Frees a #GVariantType that was allocated with
 * g_variant_type_copy(), g_variant_type_new() or one of the container
 * type constructor functions.
 * In the case that @type is %NULL, this function does nothing.
 * Since 2.24
 */


/**
 * g_variant_type_get_string_length:
 * @type: a #GVariantType
 * @returns: the length of the corresponding type string
 *
 * Returns the length of the type string corresponding to the given
 * the memory region returned by g_variant_type_peek_string().
 * Since 2.24
 */


/**
 * g_variant_type_hash:
 * @type: (type GVariantType): a #GVariantType
 * @returns: the hash value
 *
 * Hashes @type.
 * The argument type of @type is only #gconstpointer to allow use with
 * #GHashTable without function pointer casting.  A valid
 * #GVariantType must be provided.
 * Since 2.24
 */


/**
 * g_variant_type_is_array:
 * @type: a #GVariantType
 * @returns: %TRUE if @type is an array type
 *
 * Determines if the given @type is an array type.  This is true if the
 * type string for @type starts with an 'a'.
 * This function returns %TRUE for any indefinite type for which every
 * definite subtype is an array type -- %G_VARIANT_TYPE_ARRAY, for
 * example.
 * Since 2.24
 */


/**
 * g_variant_type_is_basic:
 * @type: a #GVariantType
 * @returns: %TRUE if @type is a basic type
 *
 * Determines if the given @type is a basic type.
 * Basic types are booleans, bytes, integers, doubles, strings, object
 * paths and signatures.
 * Only a basic type may be used as the key of a dictionary entry.
 * This function returns %FALSE for all indefinite types except
 * %G_VARIANT_TYPE_BASIC.
 * Since 2.24
 */


/**
 * g_variant_type_is_container:
 * @type: a #GVariantType
 * @returns: %TRUE if @type is a container type
 *
 * Determines if the given @type is a container type.
 * Container types are any array, maybe, tuple, or dictionary
 * entry types plus the variant type.
 * This function returns %TRUE for any indefinite type for which every
 * definite subtype is a container -- %G_VARIANT_TYPE_ARRAY, for
 * example.
 * Since 2.24
 */


/**
 * g_variant_type_is_definite:
 * @type: a #GVariantType
 * @returns: %TRUE if @type is definite
 *
 * A type is definite if its type string does not contain any indefinite
 * type characters ('*', '?', or 'r').
 * A #GVariant instance may not have an indefinite type, so calling
 * this function on the result of g_variant_get_type() will always
 * result in %TRUE being returned.  Calling this function on an
 * indefinite type like %G_VARIANT_TYPE_ARRAY, however, will result in
 * %FALSE being returned.
 * Since 2.24
 *
 * Determines if the given @type is definite (ie: not indefinite).
 */


/**
 * g_variant_type_is_dict_entry:
 * @type: a #GVariantType
 * @returns: %TRUE if @type is a dictionary entry type
 *
 * Determines if the given @type is a dictionary entry type.  This is
 * true if the type string for @type starts with a '{'.
 * This function returns %TRUE for any indefinite type for which every
 * definite subtype is a dictionary entry type --
 * %G_VARIANT_TYPE_DICT_ENTRY, for example.
 * Since 2.24
 */


/**
 * g_variant_type_is_maybe:
 * @type: a #GVariantType
 * @returns: %TRUE if @type is a maybe type
 *
 * Determines if the given @type is a maybe type.  This is true if the
 * type string for @type starts with an 'm'.
 * This function returns %TRUE for any indefinite type for which every
 * definite subtype is a maybe type -- %G_VARIANT_TYPE_MAYBE, for
 * example.
 * Since 2.24
 */


/**
 * g_variant_type_is_subtype_of:
 * @type: a #GVariantType
 * @supertype: a #GVariantType
 * @returns: %TRUE if @type is a subtype of @supertype
 *
 * Checks if @type is a subtype of @supertype.
 * This function returns %TRUE if @type is a subtype of @supertype.  All
 * types are considered to be subtypes of themselves.  Aside from that,
 * only indefinite types can have subtypes.
 * Since 2.24
 */


/**
 * g_variant_type_is_tuple:
 * @type: a #GVariantType
 * @returns: %TRUE if @type is a tuple type
 *
 * Determines if the given @type is a tuple type.  This is true if the
 * type string for @type starts with a '(' or if @type is
 * %G_VARIANT_TYPE_TUPLE.
 * This function returns %TRUE for any indefinite type for which every
 * definite subtype is a tuple type -- %G_VARIANT_TYPE_TUPLE, for
 * example.
 * Since 2.24
 */


/**
 * g_variant_type_is_variant:
 * @type: a #GVariantType
 * @returns: %TRUE if @type is the variant type
 *
 * Determines if the given @type is the variant type.
 * Since 2.24
 */


/**
 * g_variant_type_key:
 * @type: a dictionary entry #GVariantType
 * @returns: (transfer none): the key type of the dictionary entry
 *
 * Determines the key type of a dictionary entry type.
 * This function may only be used with a dictionary entry type.  Other
 * than the additional restriction, this call is equivalent to
 * g_variant_type_first().
 * Since 2.24
 */


/**
 * g_variant_type_n_items:
 * @type: a tuple or dictionary entry #GVariantType
 * @returns: the number of items in @type
 *
 * Determines the number of items contained in a tuple or
 * dictionary entry type.
 * This function may only be used with tuple or dictionary entry types,
 * but must not be used with the generic tuple type
 * %G_VARIANT_TYPE_TUPLE.
 * In the case of a dictionary entry type, this function will always
 * return 2.
 * Since 2.24
 */


/**
 * g_variant_type_new:
 * @type_string: a valid GVariant type string
 * @returns: (transfer full): a new #GVariantType
 *
 * Creates a new #GVariantType corresponding to the type string given
 * by @type_string.  It is appropriate to call g_variant_type_free() on
 * the return value.
 * It is a programmer error to call this function with an invalid type
 * string.  Use g_variant_type_string_is_valid() if you are unsure.
 *
 * Since: 2.24
 */


/**
 * g_variant_type_new_array:
 * @element: a #GVariantType
 * @returns: (transfer full): a new array #GVariantType
 *
 * Constructs the type corresponding to an array of elements of the
 * type @type.
 * It is appropriate to call g_variant_type_free() on the return value.
 * Since 2.24
 */


/**
 * g_variant_type_new_dict_entry:
 * @key: a basic #GVariantType
 * @value: a #GVariantType
 * @returns: (transfer full): a new dictionary entry #GVariantType
 *
 * Constructs the type corresponding to a dictionary entry with a key
 * of type @key and a value of type @value.
 * It is appropriate to call g_variant_type_free() on the return value.
 * Since 2.24
 */


/**
 * g_variant_type_new_maybe:
 * @element: a #GVariantType
 * @returns: (transfer full): a new maybe #GVariantType
 *
 * Constructs the type corresponding to a maybe instance containing
 * type @type or Nothing.
 * It is appropriate to call g_variant_type_free() on the return value.
 * Since 2.24
 */


/**
 * g_variant_type_new_tuple:
 * @items: (array length=length): an array of #GVariantTypes, one for each item
 * @length: the length of @items, or -1
 * @returns: (transfer full): a new tuple #GVariantType
 *
 * Constructs a new tuple type, from @items.
 * It is appropriate to call g_variant_type_free() on the return value.
 * Since 2.24
 */


/**
 * g_variant_type_next:
 * @type: a #GVariantType from a previous call
 * @returns: (transfer none): the next #GVariantType after @type, or %NULL
 *
 * Determines the next item type of a tuple or dictionary entry
 * type.
 * g_variant_type_first() or g_variant_type_next().
 * If called on the key type of a dictionary entry then this call
 * returns the value type.  If called on the value type of a dictionary
 * entry then this call returns %NULL.
 * For tuples, %NULL is returned when @type is the last item in a tuple.
 * Since 2.24
 */


/**
 * g_variant_type_peek_string: (skip)
 * @type: a #GVariantType
 * @returns: the corresponding type string (not nul-terminated)
 *
 * Returns the type string corresponding to the given @type.  The
 * result is not nul-terminated; in order to determine its length you
 * must call g_variant_type_get_string_length().
 * To get a nul-terminated string, see g_variant_type_dup_string().
 * Since 2.24
 */


/**
 * g_variant_type_string_is_valid:
 * @type_string: a pointer to any string
 * @returns: %TRUE if @type_string is exactly one valid type string
 *
 * Checks if @type_string is a valid GVariant type string.  This call is
 * equivalent to calling g_variant_type_string_scan() and confirming
 * that the following character is a nul terminator.
 * Since 2.24
 */


/**
 * g_variant_type_string_scan:
 * @string: a pointer to any string
 * @limit: the end of @string, or %NULL
 * @endptr: location to store the end pointer, or %NULL
 * @returns: %TRUE if a valid type string was found
 *
 * Scan for a single complete and valid GVariant type string in @string.
 * The memory pointed to by @limit (or bytes beyond it) is never
 * accessed.
 * If a valid type string is found, @endptr is updated to point to the
 * first character past the end of the string that was found and %TRUE
 * is returned.
 * If there is no valid type string starting at @string, or if the type
 * string does not end before @limit then %FALSE is returned.
 * For the simple case of checking if a string is a valid type string,
 * see g_variant_type_string_is_valid().
 *
 * Since: 2.24
 */


/**
 * g_variant_type_value:
 * @type: a dictionary entry #GVariantType
 * @returns: (transfer none): the value type of the dictionary entry
 *
 * Determines the value type of a dictionary entry type.
 * This function may only be used with a dictionary entry type.
 * Since 2.24
 */


/**
 * g_variant_unref:
 * @value: a #GVariant
 *
 * Decreases the reference count of @value.  When its reference count
 * drops to 0, the memory used by the variant is freed.
 *
 * Since: 2.24
 */


/**
 * g_vasprintf:
 * @string: the return location for the newly-allocated string.
 * @format: a standard printf() format string, but notice <link linkend="string-precision">string precision pitfalls</link>.
 * @args: the list of arguments to insert in the output.
 *
 * An implementation of the GNU vasprintf() function which supports
 * positional parameters, as specified in the Single Unix Specification.
 * This function is similar to g_vsprintf(), except that it allocates a
 * string to hold the output, instead of putting the output in a buffer
 * you allocate in advance.
 *
 * Returns: the number of bytes printed.
 * Since: 2.4
 */


/**
 * g_vfprintf:
 * @file: the stream to write to.
 * @format: a standard printf() format string, but notice <link linkend="string-precision">string precision pitfalls</link>.
 * @args: the list of arguments to insert in the output.
 *
 * An implementation of the standard fprintf() function which supports
 * positional parameters, as specified in the Single Unix Specification.
 *
 * Returns: the number of bytes printed.
 * Since: 2.2
 */


/**
 * g_vprintf:
 * @format: a standard printf() format string, but notice <link linkend="string-precision">string precision pitfalls</link>.
 * @args: the list of arguments to insert in the output.
 *
 * An implementation of the standard vprintf() function which supports
 * positional parameters, as specified in the Single Unix Specification.
 *
 * Returns: the number of bytes printed.
 * Since: 2.2
 */


/**
 * g_vsnprintf:
 * @string: the buffer to hold the output.
 * @n: the maximum number of bytes to produce (including the terminating nul character).
 * @format: a standard printf() format string, but notice <link linkend="string-precision">string precision pitfalls</link>.
 * @args: the list of arguments to insert in the output.
 *
 * A safer form of the standard vsprintf() function. The output is guaranteed
 * to not exceed @n characters (including the terminating nul character), so
 * it is easy to ensure that a buffer overflow cannot occur.
 * See also g_strdup_vprintf().
 * In versions of GLib prior to 1.2.3, this function may return -1 if the
 * output was truncated, and the truncated string may not be nul-terminated.
 * In versions prior to 1.3.12, this function returns the length of the output
 * string.
 * The return value of g_vsnprintf() conforms to the vsnprintf() function
 * as standardized in ISO C99. Note that this is different from traditional
 * vsnprintf(), which returns the length of the output string.
 * The format string may contain positional parameters, as specified in
 * the Single Unix Specification.
 * was large enough.
 *
 * Returns: the number of bytes which would be produced if the buffer
 */


/**
 * g_vsprintf:
 * @string: the buffer to hold the output.
 * @format: a standard printf() format string, but notice <link linkend="string-precision">string precision pitfalls</link>.
 * @args: the list of arguments to insert in the output.
 *
 * An implementation of the standard vsprintf() function which supports
 * positional parameters, as specified in the Single Unix Specification.
 *
 * Returns: the number of bytes printed.
 * Since: 2.2
 */


/**
 * g_win32_error_message:
 * @error: error code.
 *
 * Translate a Win32 error code (as returned by GetLastError()) into
 * the corresponding message. The message is either language neutral,
 * or in the thread's language, or the user's language, the system's
 * language, or US English (see docs for FormatMessage()). The
 * returned string is in UTF-8. It should be deallocated with
 * g_free().
 *
 * Returns: newly-allocated error message
 */


/**
 * g_win32_get_package_installation_directory:
 * @package: You should pass %NULL for this.
 * @dll_name: The name of a DLL that a package provides in UTF-8, or %NULL.
 *
 * Try to determine the installation directory for a software package.
 * This function is deprecated. Use
 * g_win32_get_package_installation_directory_of_module() instead.
 * The use of @package is deprecated. You should always pass %NULL. A
 * warning is printed if non-NULL is passed as @package.
 * The original intended use of @package was for a short identifier of
 * the package, typically the same identifier as used for
 * <literal>GETTEXT_PACKAGE</literal> in software configured using GNU
 * autotools. The function first looks in the Windows Registry for the
 * value <literal>&num;InstallationDirectory</literal> in the key
 * <literal>&num;HKLM\Software\@package</literal>, and if that value
 * exists and is a string, returns that.
 * It is strongly recommended that packagers of GLib-using libraries
 * for Windows do not store installation paths in the Registry to be
 * used by this function as that interfers with having several
 * parallel installations of the library. Enabling multiple
 * installations of different versions of some GLib-using library, or
 * GLib itself, is desirable for various reasons.
 * For this reason it is recommeded to always pass %NULL as
 * Registry. In version 2.20 of GLib the @package parameter
 * will be ignored and this function won't look in the Registry at all.
 * If @package is %NULL, or the above value isn't found in the
 * Registry, but @dll_name is non-%NULL, it should name a DLL loaded
 * into the current process. Typically that would be the name of the
 * DLL calling this function, looking for its installation
 * directory. The function then asks Windows what directory that DLL
 * was loaded from. If that directory's last component is "bin" or
 * "lib", the parent directory is returned, otherwise the directory
 * itself. If that DLL isn't loaded, the function proceeds as if
 * If both @package and @dll_name are %NULL, the directory from where
 * the main executable of the process was loaded is used instead in
 * the same way as above.
 * i.e. UTF-8. The return value should be freed with g_free() when not
 * needed any longer. If the function fails %NULL is returned.
 * g_win32_get_package_installation_directory_of_module() instead.
 *
 * Returns: a string containing the installation directory for
 * Deprecated: 2.18: Pass the HMODULE of a DLL or EXE to
 */


/**
 * g_win32_get_package_installation_directory_of_module:
 * @hmodule: The Win32 handle for a DLL loaded into the current process, or %NULL
 *
 * This function tries to determine the installation directory of a
 * software package based on the location of a DLL of the software
 * package.
 * function looks up the directory that DLL was loaded from. If
 * process is looked up. If that directory's last component is "bin"
 * or "lib", its parent directory is returned, otherwise the directory
 * itself.
 * It thus makes sense to pass only the handle to a "public" DLL of a
 * software package to this function, as such DLLs typically are known
 * to be installed in a "bin" or occasionally "lib" subfolder of the
 * installation folder. DLLs that are of the dynamically loaded module
 * or plugin variety are often located in more private locations
 * deeper down in the tree, from which it is impossible for GLib to
 * deduce the root of the package installation.
 * The typical use case for this function is to have a DllMain() that
 * saves the handle for the DLL. Then when code in the DLL needs to
 * construct names of files in the installation tree it calls this
 * function passing the DLL handle.
 * the software package @hmodule is from. The string is in the GLib
 * file name encoding, i.e. UTF-8. The return value should be freed
 * with g_free() when not needed any longer. If the function fails
 * %NULL is returned.
 *
 * Returns: a string containing the guessed installation directory for
 * Since: 2.16
 */


/**
 * g_win32_get_package_installation_subdirectory:
 * @package: You should pass %NULL for this.
 * @dll_name: The name of a DLL that a package provides, in UTF-8, or %NULL.
 * @subdir: A subdirectory of the package installation directory, also in UTF-8
 *
 * This function is deprecated. Use
 * g_win32_get_package_installation_directory_of_module() and
 * g_build_filename() instead.
 * Returns a newly-allocated string containing the path of the
 * subdirectory @subdir in the return value from calling
 * g_win32_get_package_installation_directory() with the @package and
 * g_win32_get_package_installation_directory() for more details. In
 * particular, note that it is deprecated to pass anything except NULL
 * as @package.
 * the installation directory of @package. The returned string is in
 * the GLib file name encoding, i.e. UTF-8. The return value should be
 * freed with g_free() when no longer needed. If something goes wrong,
 * %NULL is returned.
 * g_win32_get_package_installation_directory_of_module() instead, and
 * then construct a subdirectory pathname with g_build_filename().
 *
 * Returns: a string containing the complete path to @subdir inside
 * Deprecated: 2.18: Pass the HMODULE of a DLL or EXE to
 */


/**
 * g_win32_get_windows_version:
 *
 * Returns version information for the Windows operating system the
 * code is running on. See MSDN documentation for the GetVersion()
 * function. To summarize, the most significant bit is one on Win9x,
 * and zero on NT-based systems. Since version 2.14, GLib works only
 * on NT-based systems, so checking whether your are running on Win9x
 * in your own software is moot. The least significant byte is 4 on
 * Windows NT 4, and 5 on Windows XP. Software that needs really
 * detailled version and feature information should use Win32 API like
 * GetVersionEx() and VerifyVersionInfo().
 *
 * Returns: The version information.
 * Since: 2.6
 */


/**
 * g_win32_getlocale:
 *
 * The setlocale() function in the Microsoft C library uses locale
 * names of the form "English_United States.1252" etc. We want the
 * UNIXish standard form "en_US", "zh_TW" etc. This function gets the
 * current thread locale from Windows - without any encoding info -
 * and returns it as a string of the above form for use in forming
 * file names etc. The returned string should be deallocated with
 * g_free().
 *
 * Returns: newly-allocated locale name.
 */


/**
 * g_win32_locale_filename_from_utf8:
 * @utf8filename: a UTF-8 encoded filename.
 *
 * Converts a filename from UTF-8 to the system codepage.
 * On NT-based Windows, on NTFS file systems, file names are in
 * Unicode. It is quite possible that Unicode file names contain
 * characters not representable in the system codepage. (For instance,
 * Greek or Cyrillic characters on Western European or US Windows
 * installations, or various less common CJK characters on CJK Windows
 * installations.)
 * In such a case, and if the filename refers to an existing file, and
 * the file system stores alternate short (8.3) names for directory
 * entries, the short form of the filename is returned. Note that the
 * "short" name might in fact be longer than the Unicode name if the
 * Unicode name has very short pathname components containing
 * non-ASCII characters. If no system codepage name for the file is
 * possible, %NULL is returned.
 * The return value is dynamically allocated and should be freed with
 * g_free() when no longer needed.
 * failure and lack of short names.
 *
 * Returns: The converted filename, or %NULL on conversion
 * Since: 2.8
 */


/**
 * gchararray:
 *
 * A C representable type name for #G_TYPE_STRING.
 */


/**
 * glib_check_version:
 * @required_major: the required major version.
 * @required_minor: the required minor version.
 * @required_micro: the required micro version.
 *
 * Checks that the GLib library in use is compatible with the
 * given version. Generally you would pass in the constants
 * #GLIB_MAJOR_VERSION, #GLIB_MINOR_VERSION, #GLIB_MICRO_VERSION
 * as the three arguments to this function; that produces
 * a check that the library in use is compatible with
 * the version of GLib the application or module was compiled
 * against.
 * of the running library is newer than the version
 * the running library must be binary compatible with the
 * version @required_major.required_minor.@required_micro
 * (same major version.)
 * given version, or a string describing the version mismatch.
 * The returned string is owned by GLib and must not be modified
 * or freed.
 *
 * Compatibility is defined by two things: first the version
 * Returns: %NULL if the GLib library is compatible with the
 * Since: 2.6
 */


/**
 * glib_gettext:
 * @str: The string to be translated
 *
 * Returns the translated string from the glib translations.
 * This is an internal function and should only be used by
 * the internals of glib (such as libgio).
 *
 * Returns: the transation of @str to the current locale
 */


/**
 * glib_mem_profiler_table:
 *
 * A #GMemVTable containing profiling variants of the memory
 * allocation functions. Use them together with g_mem_profile()
 * in order to get information about the memory allocation pattern
 * of your program.
 */


/**
 * glib_pgettext:
 * @msgctxtid: a combined message context and message id, separated by a \004 character
 * @msgidoffset: the offset of the message id in @msgctxid
 *
 * This function is a variant of glib_gettext() which supports
 * a disambiguating message context. See g_dpgettext() for full
 * details.
 * This is an internal function and should only be used by
 * the internals of glib (such as libgio).
 *
 * Returns: the transation of @str to the current locale
 */



/************************************************************/
/* THIS FILE IS GENERATED DO NOT EDIT */
/************************************************************/
