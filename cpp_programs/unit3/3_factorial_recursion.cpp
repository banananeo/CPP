// Aim: Find factorial using recursion
// Algorithm: fact(n) = n × fact(n-1), base case n=0 → 1
// Result: Enter number: 5 → Factorial = 120

#include<iostream>
using namespace std;
int fact(int n) {
    if(n == 0) return 1;
    return n * fact(n-1);
}
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Factorial = " << fact(n);
    return 0;
}
