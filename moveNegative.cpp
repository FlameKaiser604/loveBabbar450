#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vl;
void solve(){
  ll n;
    cin>>n;
    vl arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
    for(ll i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
}
int main(){
    solve();
    return 0;
}

