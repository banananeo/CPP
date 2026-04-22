// Aim: Count letters and digits in string
// Algorithm: Use isalpha() for letters, isdigit() for digits
// Result: Enter: Hello123 → Letters=5 Digits=3

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    int letters=0, digits=0;
    cout << "Enter string: ";
    cin >> s;
    for(int i=0;i<s.length();i++) {
        if(isalpha(s[i])) letters++;
        else if(isdigit(s[i])) digits++;
    }
    cout << "Letters = " << letters;
    cout << "\nDigits = " << digits;
    return 0;
}
