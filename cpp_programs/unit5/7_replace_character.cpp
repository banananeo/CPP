// Aim: Replace a character in string
// Algorithm: Find old character, replace with new one
// Result: Enter: Hello, replace l with r → Herro

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    char oldC, newC;
    cout << "Enter string: ";
    cin >> s;
    cout << "Replace char: "; cin >> oldC;
    cout << "With char: "; cin >> newC;
    for(int i=0;i<s.length();i++)
        if(s[i]==oldC) s[i]=newC;
    cout << "Result: " << s;
    return 0;
}
