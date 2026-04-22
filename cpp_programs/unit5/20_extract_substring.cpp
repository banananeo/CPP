// Aim: Extract substring from given position
// Algorithm: Use substr(start, length) function
// Result: Enter: HelloWorld, start=5 len=5 → World

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    int start, len;
    cout << "Enter string: ";
    cin >> s;
    cout << "Start position: ";
    cin >> start;
    cout << "Length: ";
    cin >> len;
    cout << "Substring: " << s.substr(start, len);
    return 0;
}
