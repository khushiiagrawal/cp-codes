#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define db double
#define ld long double
#define str string
#define pb push_back
const int MOD = 1e9+7;
const int MX = 2e5+5;

// SORTING OF VECTOR ARRAY //
    /** sort(a.begin(), a.end()); **/
    /** sort(a.rbegin(), a.rend()); **/

// BINARY SEARCH //
   /**  bool found = binary_search(a.begin(), a.end(), x);
        cout << "x found: " << (found ? "Yes" : "No") << endl; **/

// COUNTING OCCURRENCES OF AN ELEMENT //
    /** int count = count(a.begin(), a.end(), x); **/

// FINDING THE INDEX OF AN ELEMENT IN ARRAY //
   /** auto it = find(a.begin(), a.end(), x);
       if(it != a.end()){
       int index = distance(a.begin(), it);
       cout<<"YES"<<index<<endl;
       }
       else{
       cout<<"NO"<<endl;
       }  **/      

// FINDING THE MIN AND MAX ELEMENT //
   /** int min_val = *min_element(a.begin(), a.end());
       int min_val = *max_element(a.begin(), a.end()); **/

// SUMMING ELEMENTS IN THE VECTOR //
   /** int sum = accumulate(a.begin(), a.end(), 0); **/     

// COUNTING THE NUMBER OF SET BITS (1s), TRAILING (0s), LEADING (0s) IN THE BINARY OF n //
   /** cout << "Number of set bits"<< __builtin_popcountll(n) <<endl; 
       cout << "Number of trailing zeros"<< __builtin_ctzll(n) << endl;
       cout << "Number of leading zeros" << __builtin_clzll(n) << endl; **/



                              ///**....CODE STARTS HERE.... **///


void solve(){
	ll n,x,y;
	cin>>n;
	vector<ll>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	while(a.size()>1){
		x=max(a[a.size()-2],a[a.size()-1]);
		a[a.size()-2]=x;
		a.pop_back();
		if(a.size()==1)break;
		y=min(a[a.size()-2],a[a.size()-1]);
		a[a.size()-2]=y;
		a.pop_back();
		if(a.size()==1)break;
	}
	cout<<a[0]<<endl;
	
	

} 



int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input1.txt", "r", stdin);
//     freopen("output1.txt", "w", stdout);
// #endif
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    //solve();
    return 0;
}       