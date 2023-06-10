#include <iostream>
#include <string>

using namespace std;
class player
{
    public:
    //attributes 
    string name;
    int    age{0};
    int    xp;
    //methods
    void set_age(int new_age)
    {
        age = new_age;
    }
};


int main () 
{
    player tarek;

    tarek.set_age(50);
    cout << tarek.age << endl;
    return 0;

}

