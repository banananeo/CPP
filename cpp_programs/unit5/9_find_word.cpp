// Aim: Find a word in a string
// Algorithm: Use find() function to search word
// Result: Enter: I love coding, find: love → Word Found at index 2

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s, word;
    cout << "Enter sentence: ";
    getline(cin, s);
    cout << "Enter word to find: ";
    cin >> word;
    if(s.find(word) != string::npos)
        cout << "Word Found at index " << s.find(word);
    else
        cout << "Word Not Found";
    return 0;
}
