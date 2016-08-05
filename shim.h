

#ifndef CArchive_shim_h
#define CArchive_shim_h

//Use the brew version for Apple iOS/OS X, but standard location for Linux
#ifdef __APPLE__
#import "/usr/local/opt/libarchive/include/archive.h"
#import "/usr/local/opt/libarchive/include/archive_entry.h"
#else
#import "/usr/include/archive.h"
#import "/usr/include/archive_entry.h"
#endif // __APPLE__
#endif /* CArchive_shim_h */
