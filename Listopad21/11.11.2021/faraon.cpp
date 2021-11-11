#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int x;
    int poziom = 1;
    int wynik = 0;
    cin >> x;
    
    while (wynik <= x) {
        wynik += poziom * poziom;
        poziom++;
    }

    cout << poziom-2;
    return 0;
}