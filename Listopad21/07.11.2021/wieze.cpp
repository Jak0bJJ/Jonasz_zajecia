//https://szkopul.edu.pl/problemset/problem/7YVSA5kIOIVX_zRHqZf1qTHn/site/?key=statement
#include <iostream>
using namespace std;

int main() {
    int k;
    int h, n;
    int x;
    int suma = 0;
    cin >> k;

    for (int i = 0; i < k; i++) {
        cin >> h >> n;
        for (int j = 0; j < n; j++) {
            cin >> x;
            if (x == h) {
                suma++;
            }
        }
        cout << suma << endl;
        suma = 0;
    }


    return 0;
}