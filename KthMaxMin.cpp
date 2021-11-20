#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vl;
void solve(){
ll n,k;
cin>>n;
vl v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
cin>>k;
sort(v.begin(),v.end());
int kmax=v[n-k-1];
int kmin=v[k-1];
cout<<kmax<<" "<<kmin<<endl;
}
int main(){
    solve();
    return 0;
}

