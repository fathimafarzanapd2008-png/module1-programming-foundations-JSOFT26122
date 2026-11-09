#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 2;
    int *p = &a;
    p = &b;
    *p = 99;
    cout << a << " " << b;
    return 0;
}