// Aim: Convert string to integer
// Algorithm: Use stoi() to convert string to int
// Result: Enter: 25 → Integer=25 Doubled=50

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    cout << "Enter number as string: ";
    cin >> s;
    int n = stoi(s);
    cout << "Integer = " << n;
    cout << "\nDoubled = " << n*2;
    return 0;
}
