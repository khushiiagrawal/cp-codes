#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		vector<int>x={a,b,c};
		sort(x.begin(),x.end());
		int y=x[1];
		int value=abs(a-y)+abs(b-y)+abs(c-y);

		cout<<value<<endl;
	}
}