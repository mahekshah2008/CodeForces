#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s;
    cin >> s;

    int distinct = 0;

    for (int i = 0; i < s.size() ; i++) 
    {
        bool found = false;

        for (int j = 0; j < i; j++) {

            if(s[i] == s[j]) {
            found = true;
            break;
        }
        }

        if( found == false) {
            distinct++;
        }
        
    }

    if(distinct % 2 == 0) {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }

    return 0;
}