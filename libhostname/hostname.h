// libhostname/hostname.h

#ifndef _LIBHOSTNAME
#define _LIBHOSTNAME

#include <string>

#include <unistd.h>
#include <errno.h>
#include <limits.h>

namespace libhostname
{
    int getmax();
    std::string get();
    int set(char* name);
} // namespace libhostname


#endif