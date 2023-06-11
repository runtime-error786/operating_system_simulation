#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the video file to play: ";
    cin >> filename;
    string command = "vlc " + filename + ".mp4";
    system(command.c_str());
    return 0;
}

