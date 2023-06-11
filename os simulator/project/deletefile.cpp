#include "pthread.h"
#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "bits/stdc++.h"
#include "ctime"
#include "cstdlib"
#include<fstream>
using namespace std;
int main()
{
    float n = 0.05;
    int status;
    char fileName[20];
    cout << "Enter the Name of File: " << endl;
    cin >> fileName;
    status = remove(fileName);
    if (status == 0)
        cout << "\nFile Deleted Successfully!" << endl;
    else
        cout << "\nErorr Occurred!" << endl;
    cout << endl;
}

