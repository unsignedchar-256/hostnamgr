// cmd/cmds.h

#ifndef _COMMANDS
#define _COMMANDS

#include <iostream>
#include <fstream>
#include <vector>

#include <errno.h>
#include <string.h>

#include "../configuration/data.h"
#include "../libhostname/hostname.h"

namespace commands
{
    void process(std::vector<std::string>* strings);

    void get();
    void getmax();
    void set(std::string* str);
    void apply();
    void help();
} // namespace commands


#endif