/*Given an array (or string), the task is to reverse the array/string.*/

/*----------------------------------------------------------------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vl;
void solve(){
ll n;
cin>>n;
vl v(n);
for(ll i=0;i<n;i++){
    cin>>v[i];
    
}
while(n--){
    cout<<v[n]<<" ";
}

}
int main(){
    solve();
    return 0;
}


