// Aim: Perform calculator operations using function
// Algorithm: Pass two numbers and operator, return result
// Result: Enter 10 + 5 → Result = 15

#include<iostream>
using namespace std;
float calc(float a, float b, char op) {
    if(op=='+') return a+b;
    if(op=='-') return a-b;
    if(op=='*') return a*b;
    if(op=='/') return a/b;
    return 0;
}
int main() {
    float a, b;
    char op;
    cout << "Enter num1 operator num2: ";
    cin >> a >> op >> b;
    cout << "Result = " << calc(a, b, op);
    return 0;
}
