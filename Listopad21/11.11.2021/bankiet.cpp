#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void dfs(vector <int> &lewy, vector <bool> &odwiedzony, int x) {
    odwiedzony[x] = true;
    if (!odwiedzony[lewy[x]]) {
        dfs(lewy, odwiedzony, lewy[x]);
    } 
}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    vector <int> lewy(n+1);
    vector <bool> odwiedzony(n+1);
    
    for (int i = 1; i <= n; i++) {
        cin >> lewy[i];
    }

    int wynik = 0;
    for (int i = 1; i <= n; i++) {
        if (!odwiedzony[i]) {
            dfs(lewy, odwiedzony, i);
            wynik++;
        }
    }
    cout << wynik;
}