// main.cpp

#include <iostream>
#include <vector>
#include <string>

#include "cmd/cmds.h"
#include "configuration/data.h"
// #include "libhostname/hostname.h"

int main(int argc, char const *argv[])
{
    configuration::setprogname(argv[0]);
    if (argc > 1) {

        std::vector<std::string> params = {};
        for (int i = 1; i < argc; i++)
        {
            params.insert(params.end(), std::string(argv[i]));
        }

        commands::process(&params);
    } else {
        commands::get();
    }

    return *configuration::getexitcode();
}