#include <iostream>
#include <bits/stdc++.h>
using namespace std;


struct str {
  int liczba;
  string rozklad;
  int last;
};

bool cmp(const str &a, const str &b) {
    return a.liczba > b.liczba;
}


int main() {
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    int a;
    int b;
    cin >> a >> b;
    vector <str> rozklad;
    vector <int> pierwsze;
    bool sito[10001];

    for (int i = 2; i <= b; i++) {
        if (!sito[i]) {
            pierwsze.push_back(i);
            for (int j = i*2; j < 10001; j+=i) {
                sito[j] = 1;
            }
        }
    }

    for (int i = 0; i < pierwsze.size(); i++) {
        rozklad.push_back({pierwsze[i],to_string(pierwsze[i]), pierwsze[i]});
    }

    for (int i = 0; i < rozklad.size(); i++) {
        for (int j = 0; j < pierwsze.size(); j++) {
            if (pierwsze[j] >= rozklad[i].last) {
                if (pierwsze[j] * rozklad[i].liczba > b) {
                    break;
                }
                rozklad.push_back({rozklad[i].liczba*pierwsze[j], rozklad[i].rozklad+"*"+to_string(pierwsze[j]), pierwsze[j]});
            }
        }
    }

    sort(rozklad.begin(), rozklad.end(), cmp);

    for (int i = 0; i < rozklad.size(); i++) {
        cout << rozklad[i].liczba << " " << rozklad[i].rozklad << endl;
    }

    return 0;
}