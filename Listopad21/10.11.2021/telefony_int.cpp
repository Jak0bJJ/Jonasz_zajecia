#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    int  b, d, cos;
    vector <int> telefony(n);

    for (int i = 0; i < n; i++) {
        cin >> telefony[i];
    }

    for (int i = 0; i < n; i++) {
        d = telefony[i]%10;
        b = (telefony[i] % 1000) / 100;
        cos = d-b;
        telefony[i] -= cos;
        telefony[i] += cos*100;
    }

    sort(telefony.begin(), telefony.end());

    for (int i = 0; i < n; i++) {
        d = telefony[i]%10;
        b = (telefony[i] % 1000) / 100;
        cos = d-b;
        telefony[i] -= cos;
        telefony[i] += cos*100;
        cout << telefony[i] << " ";
    }

    return 0;
}
