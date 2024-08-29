#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int mx=0;
		int bx=2;
		for(int i=2;i<=n;i++){
			int sum=0;
			for(int j=1;j*i<=n;j++){
				sum+=i*j;
			}
			if(sum>mx){
				mx=sum;
				bx=i;

			}
		}
		cout<<bx<<endl;
		
	}
}