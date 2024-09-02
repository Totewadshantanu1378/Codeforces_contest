#include<bits/stdc++.h>
# define sorte(arr) sort(arr.begin(),arr.end())
# define loop1(i,a,n)  for(int i=a;i<n;i++)
# define loop2(i,a,n)  for(int i=a;i<=n;i++)
# define print(arr ,n)   for(int i=0;i<n;i++) cout<<arr[i]<<endl;
// # define cout(n) cout<<n<<endl;
#define mod 10000007;
using namespace std;
using ll = long long;
void solve2(int l,int r){
    ll dist = (r - l);
    while(ans*(ans+1)/2 <= dist){
        ans++;
    }
    ans--;
    cout<<ans<<endl;
}
void solve(){
    ll l,r;
    cin>>l>>r;
    if(l == r){
        cout<<1<<endl;
        return;
    }
    ll cnt = 1;
    ll ans = 1;
    for(ll i=l;i<=r;i+=cnt){
         cnt++;
         ans++;
    }
    
     solve2(l,r);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}