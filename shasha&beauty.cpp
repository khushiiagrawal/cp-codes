#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		cin>>a[n];
		sort(a,a+n);
		cout<<a[n-1]-a[0]<<endl;
	}
}