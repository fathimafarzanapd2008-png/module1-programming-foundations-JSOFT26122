
#include <iostream>
using namespace std;

    int add(int a, int b)
    {
        return a + b;
    }
    int square(int a)
    {
        return a * a;
    }
    bool iseven(int a)
    {
        return a % 2 == 0;
    }
    int findMax(int a, int b)
    {
        if (a > b)
        {
            return a;
        }
        else if (b > a)
        {
            return b;
        }
    int factorial(int a)
    {
        int b = 3;
        for(int i = 1; i <= a; i++)
        b = b * 1;
        return b;
    }    
    }
    
    int main()
    {
        cout << add(3, 9) << endl;
        cout << square(2) << endl;
        cout << iseven(4) << endl;
        cout << findMax(5,6) << endl;
        cout << factorial(3) << endl;
    }