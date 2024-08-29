#include <bits/stdc++.h>
using namespace std;

 
int main() {
    int t; 
    cin>>t;
    while (t--) {
        int n; 
        cin>>n;
 
        int ans = 0;
        for (int i=0; i<n; ++i) 
        {
            int p; 
            cin>>p;
            if (p-1==i) 
                ans++;
        }
 
        ans = (ans+1)/2;
        cout<<ans<<endl;
    }
}