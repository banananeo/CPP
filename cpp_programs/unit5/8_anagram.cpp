// Aim: Check if two strings are anagram
// Algorithm: Sort both strings, compare them
// Result: Enter: listen silent → Anagram

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s1, s2;
    cout << "Enter two strings: ";
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1 == s2) cout << "Anagram";
    else cout << "Not Anagram";
    return 0;
}
