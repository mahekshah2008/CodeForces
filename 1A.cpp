#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long m;
    cin >> m;

    long long a;
    cin >> a;

    long long tiles_n, tiles_m;
    long long total_tiles;

    if ( n % a == 0) {
        tiles_n = n/a;
    }
    else {
        tiles_n = n/a + 1;
    }

    if ( m % a == 0) {
        tiles_m = m/a;
    }
    else {
        tiles_m = m/a + 1;
    }

    total_tiles = tiles_n * tiles_m;
    cout << total_tiles << endl;

    return 0;
}
