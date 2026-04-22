// Aim: Find roots of quadratic equation
// Algorithm: Calculate discriminant d=b²-4ac, find roots
// Result: Enter 1 -5 6 → Root1=3 Root2=2

#include<iostream>
#include<cmath>
using namespace std;
int main() {
    float a, b, c, d;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    d = b*b - 4*a*c;
    if(d > 0) {
        cout << "Root1 = " << (-b+sqrt(d))/(2*a);
        cout << "\nRoot2 = " << (-b-sqrt(d))/(2*a);
    }
    else if(d == 0)
        cout << "Root = " << -b/(2*a);
    else
        cout << "No Real Roots";
    return 0;
}
