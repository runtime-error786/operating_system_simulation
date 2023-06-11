#include "pthread.h"
#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "bits/stdc++.h"
#include "ctime"
#include "cstdlib"
#include <fstream>
using namespace std;
int main()
{
    
    char ch, sourceFile[20], targetFile[20];
    FILE* fs, * ft;
    cout << "Enter the Name of Source File: ";
    cin >> sourceFile;
    fs = fopen(sourceFile, "r");
    if (fs == NULL)
    {
        cout << "\nError Occurred!";
    }
    cout << "\nEnter the Name of Target File: ";
    cin >> targetFile;
    ft = fopen(targetFile, "w");
    if (ft == NULL)
    {
        cout << "\nError Occurred!";
    }
    ch = fgetc(fs);
    while (ch != EOF)
    {
        fputc(ch, ft);
        ch = fgetc(fs);
    }
    cout << "\nFile copied successfully.";
    fclose(fs);
    fclose(ft);
    cout << endl;
}

