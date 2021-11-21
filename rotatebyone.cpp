/*Given an array, rotate the array by one position in clock-wise direction.*/

/*----------------------------------------------------------------------------------------------------------------*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vl;
void solve(){
ll n;
cin>>n;
vl a(n);
for(ll i=0;i<n;i++){
    cin>>a[i];
}
int temp=a[n-1];
for(ll i=n-1;i>=0;i--){
    a[i]=a[i-1];
}
a[0]=temp;
for(ll i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}
int main(){
    solve();
    return 0;
}

