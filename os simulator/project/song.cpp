#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the audio file: ";
    cin >> filename;
    string command = "play " + filename + ".mp3";
    system(command.c_str());
    return 0;
}

