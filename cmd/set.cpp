// cmd/set.cpp

#include "./cmds.h"

void commands::set(std::string* str) {
    std::cout << "Current: " << libhostname::get() << "\n";
    std::cout << "Requested: " << *str << "\n";
    std::cout << "Attempting to apply hostname...\n";

    int result = libhostname::set(const_cast<char*>(str->c_str()));
    configuration::setexitcode(result);

    if (result == 0) {
        std::cout << "Succeeded.\n";
    } else {
        std::cout << "Error: " << strerror(result) << "\n";
    }
}