#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;

        int ct[7] = {0}; 
        for (char c : a) {
            ct[c - 'A']++;
        }

        int z= 0;
        for (int i = 0; i < 7; ++i) {
            if (ct[i] < m) {
                z += m - ct[i];
            }
        }

        cout << z << endl;
    }
    return 0;
}
