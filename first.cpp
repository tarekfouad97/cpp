#include <iostream>

using namespace std;
void swap (int &x, int &y){
    x^=y;
    y^=x;
    x^=y;
}
int main() 
{
    cout << "Hello World!" << endl;
    int a {100};
    int b {200};
    swap(a,b);
    cout << " a = "<< a<< ",b = "<< b << endl;
    return 0;
}