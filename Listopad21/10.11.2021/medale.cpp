#include <iostream>
#include <algorithm>
using namespace std;

pair <int, string> medale[101];

int main() {
    int n;
    int najWynik = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> medale[i].second >> medale[i].first;
        if (medale[i].first > najWynik) {
            najWynik = medale[i].first;
        }
    }

    for (int i = 0; i < n; i++) {
        if (medale[i].first == najWynik) {
            cout << medale[i].second << endl;
        }
    }

    return 0;
}