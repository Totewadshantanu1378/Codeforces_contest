#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin>>n;
    vector<ll>ans;
    int cnt = 0;
    vector<ll>temp(60,0);
    for(ll i=0;i<60;i++){
        ll val = (1ll << i);
        if((val & n) != 0ll){
            temp[i] = 1;
            cnt++;
        }
    }
    if(cnt == 1){
        cout<<1<<endl;
        cout<<n<<endl;
        return;
    }
    ans.push_back(n);
    for(ll i=0;i<60;i++){
        if(temp[i] == 1){
            ans.push_back(n - (1ll << i));
        }
    }
    cout<<ans.size()<<endl;
    for(ll i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}