#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <limits>
#include <unistd.h>
#include "fstream"
using namespace std;

int main()
{
    fstream file;
cout<<"enter name : "<<endl;
string na;
cin>>na;
    file.open(na+".txt",ios::out);
    if (!file)
    {
        cout << "Error in creating file!!!";
    }

    cout << "File created successfully.";
}

