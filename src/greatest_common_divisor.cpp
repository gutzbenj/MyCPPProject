#include <iostream>
using namespace std;

int gcd (int a, int b) {
    int t;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    
    return a;
}

int main () {
    cout << "gcd(12, 18): " << gcd(12, 18) << endl;

    cout << "gcd(-4, 14): " << gcd(-4, 14) << endl;
}