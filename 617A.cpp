#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int steps;
    if(x % 5 == 0) {
        steps = x/5;
    }
    else if(x % 5 != 0) {
        steps = x/5 + 1;
    }
   cout << steps;
   return 0;
}