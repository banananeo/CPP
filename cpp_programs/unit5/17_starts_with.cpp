// Aim: Check if string starts with given prefix
// Algorithm: Extract substring of prefix length, compare
// Result: Enter: Hello, check: He → Yes it starts with He

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s, prefix;
    cout << "Enter string: ";
    cin >> s;
    cout << "Check starts with: ";
    cin >> prefix;
    if(s.substr(0, prefix.length()) == prefix)
        cout << "Yes it starts with " << prefix;
    else
        cout << "No it does not start with " << prefix;
    return 0;
}
