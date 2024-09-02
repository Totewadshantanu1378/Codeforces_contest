#include <bits/stdc++.h>
# define sorte(arr) sort(arr.begin(),arr.end())
# define loop1(i,a,n)  for(int i=a;i<n;i++)
# define loop2(i,a,n)  for(int i=a;i<=n;i++)
# define print(arr ,n)   for(int i=0;i<n;i++) cout<<arr[i]<<endl;
# define cout(n) cout<<n<<endl;
#define mod 10000007;
using namespace std;
using ll = long long;

void solve2(){
    string str; 
    cin >> str;
    if(str.size() >= 3) {
    	if(str[0] == '1' && str[1] == '0')
        if(str[2] >= '2' || (str.size() >= 4 && str[2] >= '1')) {
            {
    		cout("yes");
    		return;
            }
    	}
    }

    cout("no");
}

void solve(){
    // int n;
    // cin >> n;
    vector<pair<int,int>>p;
    loop1(i,0,10){
        p.push_back({i,i});
    }
    sorte(p);
    unordered_map<int,int>mp;
    mp[p[0].first] = p[0].second;
    loop1(i,1,10){
        if(mp.count(i-1) || mp.count(i+1)){
            mp[p[i].first] = 2;
        }
        else{
            // cout<<"no"<<endl;
            return;
        }
    }
    solve2();
    // cout<<"yes"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}