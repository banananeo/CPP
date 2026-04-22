// Aim: Calculate x^y using recursion
// Algorithm: power(x,y) = x × power(x,y-1), base y=0 → 1
// Result: Enter 2 4 → Result = 16

#include<iostream>
using namespace std;
int power(int x, int y) {
    if(y == 0) return 1;
    return x * power(x, y-1);
}
int main() {
    int x, y;
    cout << "Enter base and exponent: ";
    cin >> x >> y;
    cout << "Result = " << power(x, y);
    return 0;
}
