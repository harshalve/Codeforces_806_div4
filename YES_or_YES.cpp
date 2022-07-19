// https://codeforces.com/contest/1703/problem/A
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
// #define int ll
// #define mod 1000000007
#define all(v) (v).begin(), (v).end()
#define mod 998244353
#define endl "\n"

using namespace std;

int T;
 
void Solve(){
	string s;
	cin>>s;
 
	if(s[0]=='Y'||s[0]=='y'){
		if(s[1]=='e'||s[1]=='E'){
			if(s[2]=='s'||s[2]=='S'){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}else{
			cout<<"NO"<<endl;
		}
	}else{
		cout<<"NO"<<endl;
	}
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
