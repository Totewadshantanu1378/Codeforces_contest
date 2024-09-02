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
    cin >> n;
    vector<pair<int,int>>p;
    loop1(i,0,n){
        int el ;
        cin>>el;
        p.push_back({i,el});
    }
    sorte(p);
    unordered_map<int,int>mp;
    mp[p[0].first] = p[0].second;
    loop1(i,1,n){
        if(mp.count(i-1) || mp.count(i+1)){
            mp[p[i].first] = 2;
        }
        else{
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}