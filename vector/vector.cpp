#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    double *p {nullptr};
    double x{1};

   p = &x;

   cout << &x << " | "<< p << endl;
   cout << *p << endl;
}
