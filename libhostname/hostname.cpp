// libhostname/hostname.cpp

#include "./hostname.h"

// kernel hard limit is 64 chars (64 bytes)
int libhostname::getmax() {
    return HOST_NAME_MAX;
}

// shoulda be safe to get up to 64 chars
// if it fails i gotta swing your balls (or testicles), torvalds
std::string libhostname::get() {
    char* namestr = new char[HOST_NAME_MAX];
    gethostname(namestr, HOST_NAME_MAX);

    return std::string(namestr);
}

// requires SU
// returns errno
int libhostname::set(char* name) {
    return sethostname(name, HOST_NAME_MAX);
}