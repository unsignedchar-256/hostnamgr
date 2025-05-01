// cmd/cmds.cpp

#include "./cmds.h"

void commands::process(std::vector<std::string>* strings) {
    for (int i = 0; i < strings->size(); i++)
    {
        if (strings->at(i).substr(0, 5) == "--get") {
            commands::get();
        } else if (strings->at(i).substr(0, 5) == "--max") {
            commands::getmax();
        } else if (strings->at(i).substr(0, 5) == "--set") {
            if ((i + 1) < strings->size()) {
                std::string arg = strings->at(i + 1);
                commands::set(&arg);
            } else {
                std::cout << "parameter \"--set\" requires <name> field\n";
                configuration::setexitcode(1);
            }
        } else if (strings->at(i).substr(0, 7) == "--apply") {
            commands::apply();
        } else if (strings->at(i).substr(0, 6) == "--help") {
            commands::help();
        }
    }
    
}