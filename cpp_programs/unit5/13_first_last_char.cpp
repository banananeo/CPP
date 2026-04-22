// Aim: Print first and last character of string
// Algorithm: Access s[0] and s[length-1]
// Result: Enter: Hello → First=H Last=o

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << "First char: " << s[0];
    cout << "\nLast char: " << s[s.length()-1];
    return 0;
}
