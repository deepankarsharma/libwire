#ifndef XCORO_MACROS_H
#define XCORO_MACROS_H

#include <stddef.h>

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))
#endif

#ifndef container_of
#define container_of(ptr, type, field) ((type*)((void*)ptr - (void*)offsetof(type, field)))
#endif

#endif
