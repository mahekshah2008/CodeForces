#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    int upper = 0;
    int lower = 0;

    // Count uppercase and lowercase letters
    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[i])) {
            upper++;
        } else {
            lower++;
        }
    }

    // Convert the whole word
    if (upper > lower) {
        for (int i = 0; i < s.size(); i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
    }

    cout << s;

    return 0;
}