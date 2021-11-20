/*Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.*/

/*----------------------------------------------------------------------------------------------------------------*/



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
    int low = 0, mid = 0, high = n-1;
    
    while(mid <= high)
    {
        switch(arr[mid])
        {
            case 0:
                swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;
                
            case 1:
                mid++;
                break;
                
            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
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

