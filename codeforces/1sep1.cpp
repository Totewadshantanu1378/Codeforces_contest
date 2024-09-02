#include<bits/stdc++.h>
# define sorte(arr) sort(arr.begin(),arr.end())
# define loop1(i,a,n)  for(int i=a;i<n;i++)
# define loop2(i,a,n)  for(int i=a;i<=n;i++)
# define print(arr ,n)   for(int i=0;i<n;i++) cout<<arr[i]<<endl;
// # define cout(n) cout<<n<<endl;
#define mod 10000007;
using namespace std;
using ll = long long;
void solve(){
    ll a,b;
    cin>>a>>b;
    if(a % 2 != 0){
        cout<<"no"<<endl;
        return;
    }
    if(a == 0){
        if(b % 2 == 0){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
        return;
    }
    else{
        cout<<"yes"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}