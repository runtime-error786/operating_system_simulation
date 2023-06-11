#include <iostream>
#include <fstream>
#include <string>
using namespace std;
bool transferFile(const std::string& sourceFolder, const std::string& targetFolder, const std::string& fileName)
{
    // Open the source file for reading
    ifstream sourceFile(sourceFolder + "/" + fileName, std::ios::binary);
    if (!sourceFile)
    {
        cout << "Error: Failed to open source file " << fileName << std::endl;
        return false;
    }

    // Open the target file for writing
    ofstream targetFile(targetFolder + "/" + fileName, std::ios::binary);
    if (!targetFile)
    {
        cout << "Error: Failed to open target file " << fileName << std::endl;
        return false;
    }

    // Transfer the file contents
    targetFile << sourceFile.rdbuf();

    // Check for any errors during the transfer
    if (sourceFile.bad() || targetFile.bad())
    {
        cout << "Error: Failed to transfer file " << fileName << std::endl;
        return false;
    }

    cout << "File transfer successful: " << fileName << std::endl;
    return true;
}

int main()
{
    string sourceFolder;
cout<<"enter path of source folder:"<<endl;
cin>>sourceFolder;
     string targetFolder;
cout<<"enter path of target folder:"<<endl;
cin>>targetFolder;
     string fileName;
cout<<"enter file name : "<<endl;
cin>>fileName;

    if (transferFile(sourceFolder, targetFolder, fileName))
    {
        cout<<" File transfer successful"<<endl;
    }
    else
    {
        cout<<" File transfer failed "<<endl;
    }

    return 0;
}

