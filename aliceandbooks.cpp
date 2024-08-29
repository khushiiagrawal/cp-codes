#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,b,c=0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        c=a[n-1];
        sort(a.begin(), a.end()-1);
        b=a[n-2]+c;
        
        cout <<b<< endl;
        om
    }
    return 0;
}
