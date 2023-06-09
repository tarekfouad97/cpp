#include <iostream>

using namespace std;

int main()
{
int *p {nullptr};
//Assgining p to a nameless int 
p = new int{0};
cout << *p << endl;
*p = 10;
cout << *p << endl;
delete(p);
cout << *p << endl;
    return 0;
}

/*
0
10
-2144192248
*/