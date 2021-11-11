#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    vector <string> telefony(n);

    for (int i = 0; i < n; i++) {
        cin >> telefony[i];
    }

    for (int i = 0; i < n; i++) {
        swap(telefony[i][1], telefony[i][3]);
    }

    sort(telefony.begin(), telefony.end());

    for (int i = 0; i < n; i++) {
        swap(telefony[i][1], telefony[i][3]);
        cout << telefony[i] << " ";
    }

    return 0;
}
