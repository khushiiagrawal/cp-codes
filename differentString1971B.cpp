#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        int i;
        for (i = 1; i < n; i++) {
            if (s[i] != s[0]) {
                swap(s[i], s[0]);
                cout << "YES" << endl;
                cout << s << endl;
                break;
            }
        }  
        if (i == n) {
            cout << "NO" << endl;
        }
    }
}
