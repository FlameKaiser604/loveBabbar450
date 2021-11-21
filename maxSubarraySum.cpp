/*Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.*/

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
int res=a[0];
   int kd=a[0];
   for(int i=1;i<n;i++)
   {
       kd=max(kd+a[i],a[i]);
       
       res=max(res,kd);
   }
   cout<<res;
}
int main(){
    solve();
    return 0;
}

