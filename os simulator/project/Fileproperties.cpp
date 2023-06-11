#include <iostream>
#include <sys/stat.h>
#include <unistd.h>

int main()
{
    std::string filename;
    while(true)
    {
        std::cout << "Enter File name: ";
        std::cin >> filename;

        struct stat fileStat;

        if (stat(filename.c_str(), &fileStat) < 0) {
            std::cout << "Failed to get file properties\n";
            return 1;
        }

        std::cout << "File name: " << filename << "\n";
        std::cout << "Size: " << fileStat.st_size << " bytes\n";
        std::cout << "Owner ID: " << fileStat.st_uid << "\n";
        std::cout << "Group ID: " << fileStat.st_gid << "\n";
        std::cout << "Permissions: " << fileStat.st_mode << "\n";
    }
    

    return 0;
}