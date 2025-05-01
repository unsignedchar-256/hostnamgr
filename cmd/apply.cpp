// cmd/apply.cpp

#include "./cmds.h"

void commands::apply() {
    std::cout << "Attempting to read \"/etc/hostname\" file...\n";

    std::ifstream hostfile = std::ifstream("/etc/hostname", std::ios::binary);

    if (hostfile) {
        std::vector<char> file_content = {};
        std::vector<char> buffer = std::vector<char>(libhostname::getmax());

        while (hostfile.read(buffer.data(), 4) || hostfile.gcount() > 0)
        {
            std::streamsize size = hostfile.gcount();
            
            for (int i = 0; i < size; i++)
            {
                file_content.insert(file_content.end(), buffer.at(i));
            }   
            
            std::cout << "Read " << size << " bytes (have " << file_content.size() << " bytes)\n";
        }

        std::string name = std::string(file_content.data());

        commands::set(&name);       
    } else {
        std::cout << "Could not open a stream to file\n";
        configuration::setexitcode(1);
    }

    hostfile.close();
}