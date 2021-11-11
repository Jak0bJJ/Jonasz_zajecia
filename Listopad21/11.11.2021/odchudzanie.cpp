#include <iostream>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    int najw = 0;
    int wynik = 0;
    cin >> n;
    int waga[n];

    for (int i = 0; i < n; i++) {
        cin >> waga[i];
        if (waga[i] > najw) {
            najw = waga[i];
        } 
        else if (najw - waga[i] > wynik) {
            wynik = najw - waga[i];
        }
    }

    cout << wynik;
    return 0;
}