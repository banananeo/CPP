// Aim: Repeat a string n times
// Algorithm: Loop n times, concatenate string each time
// Result: Enter: Hi 3 → Result: HiHiHi

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s, result="";
    int n;
    cout << "Enter string: ";
    cin >> s;
    cout << "Enter times: ";
    cin >> n;
    for(int i=0;i<n;i++)
        result += s;
    cout << "Result: " << result;
    return 0;
}
