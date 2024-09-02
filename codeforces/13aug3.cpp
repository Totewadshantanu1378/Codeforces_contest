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
    vector<int>arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    int m;
    cin>>m;
    vector<string>s(m);
    for(auto &it:s){
        cin>>it;
    }

    for(int i=0;i<m;i++){
        unordered_map<int,char>mp1;
        unordered_map<char,int>mp2;
        string str = s[i];
        int flag = 0;
        int k = str.length();
        if(k != n)
        {
            cout<<"no"<<endl;
            continue;
        }
        for(int j=0;j<n;j++){
            int val = arr[j];
            char ch = str[j];
            if(mp1.count(val) && mp1[val] != ch) {
                cout<<"no"<<endl;
                flag = 1;
                break;
            }
            if(mp2.count(ch) && mp2[ch] != val) {
                cout<<"no"<<endl;
                flag = 1;
                break;
            }
            mp1[val] = ch;
            mp2[ch] = val;
        }
        if(flag == 0)
        cout<<"yes"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}