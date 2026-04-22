// Aim: Check if string is palindrome
// Algorithm: Reverse string, compare with original
// Result: Enter: madam → Palindrome

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s, rev;
    cout << "Enter string: ";
    cin >> s;
    rev = s;
    reverse(rev.begin(), rev.end());
    if(s == rev) cout << "Palindrome";
    else cout << "Not Palindrome";
    return 0;
}
