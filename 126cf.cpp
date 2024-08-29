#include<bits/stdc++.h>
using namespace std;
int main(){
       int n;
       cin>>n;
       double sum=0;
       for(int i=0;i<n;i++)
       {
            int p;
            cin>>p;
            sum+=p;
              
       }
       double avg=sum/n;
       cout << fixed << setprecision(12) << avg << endl;
       return 0;
}