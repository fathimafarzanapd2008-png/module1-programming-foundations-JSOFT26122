#include <iostream>
using namespace std;

int main() {
    int a[5] = {10, 50, 20, 40, 30};
    int max = a[0];

    for(int i=1; i<5; i++) {
        if(a[i] > max)
            max = a[i];
    }

    cout << "Maximum = " << max;

    return 0;
}