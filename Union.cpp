/*Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.

/*----------------------------------------------------------------------------------------------------------------*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vl;
void solve(){
ll n,m;
cin>>n>>m;
unordered_set<int>s;
vl a(n),b(m);
for(ll i=0;i<n;i++){
    cin>>a[i];
    s.insert(a[i]);
}
for(ll i=0;i<m;i++){
    cin>>b[i];
    s.insert(b[i]);
}
cout<<s.size();
}
int main(){
    solve();
    return 0;
}

