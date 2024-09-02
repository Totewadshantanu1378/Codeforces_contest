#include <bits/stdc++.h>
# define sorte(arr) sort(arr.begin(),arr.end())
# define loop1(i,a,n)  for(int i=a;i<n;i++)
# define loop2(i,a,n)  for(int i=a;i<=n;i++)
# define print(arr ,n)   for(int i=0;i<n;i++) cout<<arr[i]<<endl;
# define cout(n) cout<<n<<endl;
#define mod 10000007;
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
   
    for(auto &it:arr){
        cin>>it;
    }
    if(n > 2){
        cout("no");
        return;
    }
    //  sorte(arr);
    int diff = 1e9;
    loop1(i,0,n-1){
        diff = max(diff,arr[i]-arr[i+1]);
    }
    loop1(i,0,n-1){
        diff = max(diff,arr[i]-arr[i+1]);
    }
    loop1(i,0,n-1){
        diff = max(diff,arr[i]-arr[i+1]);
    }
    if(arr[1] != arr[0] + 1){
        cout("yes");
        return;
    }
    cout("no");   
}

int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}