// https://codeforces.com/contest/1703/problem/C
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


long long gcd(long long int a, long long int b){
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

void Solve(){
	int n;
	string s;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	int k=0;
	int j=0;
	while(k<n){
		string t;
		int m;
		cin>>m>>t;
		int d=0;
		int u=0;
		for(int i=0;i<m;i++){
			if(t[i]=='D')
				v[k]=(v[k]+1)%10;
			else
				v[k]=(v[k]-1)%10;
		}
		k++;
	}
	for(int i=0;i<n;i++){
		if(v[i]<0){
			v[i]+=10;
		}
		cout<<v[i]<<" ";
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
