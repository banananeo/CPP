// Aim: Remove all spaces from string
// Algorithm: Skip spaces, copy rest to new string
// Result: Enter: Hello World → Without spaces: HelloWorld

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s, result="";
    cout << "Enter string: ";
    getline(cin, s);
    for(int i=0;i<s.length();i++)
        if(s[i] != ' ') result += s[i];
    cout << "Without spaces: " << result;
    return 0;
}
