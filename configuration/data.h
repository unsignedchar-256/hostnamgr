// configuration/data.h

#ifndef _CONFIGURATIONDATA
#define _CONFIGURATIONDATA

#include <string>

namespace configuration
{
    char* getprogname();
    void setprogname(const char* name);

    int* getexitcode();
    void setexitcode(int code);

    std::string getrepo();
} // namespace configuration


#endif