// Aim: Find biggest of 3 numbers using function
// Algorithm: Compare a,b,c in function, return largest
// Result: Enter 3 numbers: 4 9 6 → Biggest = 9

#include<iostream>
using namespace std;
int biggest(int a, int b, int c) {
    if(a>b && a>c) return a;
    else if(b>c) return b;
    else return c;
}
int main() {
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    cout << "Biggest = " << biggest(a,b,c);
    return 0;
}
