// Aim: Remove first character from string
// Algorithm: Use erase(0,1) to delete first character
// Result: Enter: Hello → After: ello

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    s.erase(0,1);
    cout << "After removing first char: " << s;
    return 0;
}
