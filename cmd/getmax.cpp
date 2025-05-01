// cmd/getmax.cpp

#include "./cmds.h"

void commands::getmax() {
    std::cout << "Kernel hard limit: " << libhostname::getmax() << " bytes\n";
}