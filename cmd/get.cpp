// cmds/get.cpp

#include "./cmds.h"

void commands::get() {
    std::cout << "Current hostname: " << libhostname::get() << "\n";
}