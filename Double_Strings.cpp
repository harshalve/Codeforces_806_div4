// https://codeforces.com/contest/1703/problem/D
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
#define pii pair<int,int>
#define vii vector<pii>
#define ff first
#define ss second
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(v) (v).begin(), (v).end()
#define mod 998244353
#define endl "\n"
using namespace std;
int T;


// long long gcd(long long int a, long long int b){
//   if (b == 0)
//     return a;
//   return gcd(b, a % b);
// }

void Solve(){
	int n;
	string s;
	cin>>n;
	vector<string> v;
	map<string,int> m1;
	for(int i=0;i<n;i++){
		string t;
		cin>>t;
		v.push_back(t);
		m1[t]++;
	}
	
	
	string ans(n,'0');
	int i=0;
	for(int i=0;i<n;i++)
		for(int j=1;j<v[i].size();j++){
			string l=v[i].substr(0,j);
			string r=v[i].substr(j);
			// cout<<l<<" "<<r<<endl;
			if(m1[l] && m1[r]){
				ans[i]='1';
				break;
			}
		}
	for(int i=0;i<n;i++){
		cout<<ans[i];
	}
	cout<<endl;
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
