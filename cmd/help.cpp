// cmd/help.cpp

#include "./cmds.h"

void commands::help() {
    std::cout << "hostname -- Change your shitty ass machine host name\n";
    std::cout << "WARNING: Every host name changes are temporary and will not be applied at the next boot.\n\n";

    std::cout << "Usage:\n";
    std::cout << "  " << configuration::getprogname() << " [OPTIONS]" << "\n";

    std::cout << "\n";

    std::cout << "--max           Obtain hostname character limit\n";
    std::cout << "--get           Get current hostname\n";
    std::cout << "--set <name>    Change current hostname temporarily\n";
    std::cout << "--apply         Apply hostname from \"/etc/hostname\"\n";

    std::cout << "\n";

    std::cout << "Project repository: " << configuration::getrepo() << "\n";
}