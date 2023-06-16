#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class File
{
public:
    fstream file;
    void WriteToFile(string Text);
    void CloseFile();
    File(string Filename)
    {
        file.open(Filename.c_str(), ios::out); 
        cout << "Done Open!"<<endl;
    };
    
};



int main()
{
    File testFile("FirstFile.txt");
    testFile.WriteToFile("I");
    testFile.WriteToFile("Hope");
    testFile.WriteToFile("Every");
    testFile.WriteToFile("Thing");
    testFile.WriteToFile("will");
    testFile.WriteToFile("be");
    testFile.WriteToFile("ok.");
    testFile.CloseFile();

    return 0;
}

void File::WriteToFile(string Text)
{
    file << Text << endl;
    cout << "Done Write!"<<endl;
}

void File::CloseFile()
{
    file.close();
    cout << "Done Close!"<<endl;
}