
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class File
{
private:
    
    
public:
    FILE* file;
    File(string Filename)
    {
        FILE *file = fopen(Filename.c_str(), "w+"); 
        cout << "Done Open!"<<endl;
    };
    
    void WriteToFile(string Text);
    void CloseFile();
    
};
