#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    char oldname[100], newname[100];
    cout << "Enter the name of the file to be renamed: ";
    cin >> oldname;
    cout << "Enter the new name for the file: ";
    cin >> newname;

    int status = rename(oldname, newname);

    if(status == 0) {
        cout << "File renamed successfully.\n";
    } else {
        perror("Error renaming file");
    }

    return 0;
}

