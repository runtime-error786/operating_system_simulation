#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    string fileName;
    string filePath = "/home/f219085/Desktop/project/"; //change this to your desired directory

    cout << "Enter the file name: ";
    cin >> fileName;

    string command = "gedit " + filePath + fileName;
    system(command.c_str());

    return 0;
}

