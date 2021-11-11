#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool cmp (const int &a, const int &b) {
    return a > b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    
    int n, q;
    int a, b;
    char c;
    cin >> n >> q;
    int liczby[n];
    //vector <int> liczby(n);

    for (int i = 0; i < n; i++) {
        cin >> liczby[i];
    }

    for (int i = 0 ; i < q; i++) {
        cin >> a >> b >> c;
        if (c == 'R') {
            sort(liczby+a-1, liczby+b);
        //    sort(liczby.begin()+a-1, liczby.end()+b-n);
        } else {
            sort(liczby+a-1, liczby+b, cmp);
        //    sort(liczby.begin()+a-1, liczby.end()+b-n, cmp);
        }
    }

    for (int i = 0; i < n; i++) {
         cout << liczby[i] << " ";
    }

    return 0;
}
