// configuration/data.cpp

#include "./data.h"

char* program_name = "";
int exit_code = 0;

char* configuration::getprogname() {
    return program_name;
}

void configuration::setprogname(const char* name) {
    program_name = const_cast<char*>(name);
}

int* configuration::getexitcode() {
    return &exit_code;
}

void configuration::setexitcode(int code) {
    exit_code = code;
}

std::string configuration::getrepo() {
    return std::string("https://github.com/unsignedchar256/hostname");
}