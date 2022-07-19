// https://codeforces.com/contest/1703/problem/F
// C++
#include <stdio.h>
#include<algorithm>
#include <numeric>
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 2e9+2;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define vii vector<pii>
#define ff first
#define ss second
#define rep(i,a,b) for(int i=a;i<b;i++)
// #define int ll
// #define mod 1000000007
#define all(v) (v).begin(), (v).end()
#define mod 998244353
#define endl "\n"
using namespace std;
// 98244353
int T;


// long long gcd(long long int a, long long int b){
//   if (b == 0)
//     return a;
//   return gcd(b, a % b);
// }
#define ui unsigned ll int

void Solve(){

	int n; 
  cin>>n;
 	vector<int> a(n+1);
 	for(int i=1;i<=n;i++) cin>>a[i];
	vi cnt(n+1);
	for(int i=1;i<=n;i++) cnt[i]=(i>a[i]);
	vi p(n+1);
	for(int i=1;i<=n;i++) p[i]=p[i-1]+cnt[i];
	ll ans=0;
	for(int i=1;i<=n;i++){
		if(1<a[i]&&cnt[i]){// satisfying v[i]<i using cnt[i]
			ans+=p[a[i]-1];
		}
	}
	cout<<ans<<endl;

}
		


int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);

	// T=1;
	cin>>T;
	while(T--){
		Solve();
	}
	return 0;
}
