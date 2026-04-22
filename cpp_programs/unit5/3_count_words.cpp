// Aim: Count number of words in string
// Algorithm: Count spaces, words = spaces + 1
// Result: Enter: Hello World Hi → Word Count = 3

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    int count=1;
    cout << "Enter sentence: ";
    getline(cin, s);
    for(int i=0;i<s.length();i++)
        if(s[i]==' ') count++;
    cout << "Word Count = " << count;
    return 0;
}
