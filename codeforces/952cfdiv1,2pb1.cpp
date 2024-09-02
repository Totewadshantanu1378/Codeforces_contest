#include <bits/stdc++.h>
# define sort(arr) sort(arr.begin(),arr.end())
# define loop1(i,a,n)  for(int i=a;i<n;i++)
# define loop2(i,a,n)  for(int i=a;i<=n;i++)
# define print(arr ,n)   for(int i=0;i<n;i++) cout<<arr[i]<<endl;

using namespace std;
using ll = long long;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    if(m == 1 && n == 1){
        cout<<-1<<endl;
        return;
    }
    vector<vector<int>>b;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    if(m == 1){
       int mid = n / 2;
       for(int i=mid+1;i<n;i++){
          cout<<a[i][0]<<endl;
       }
       for(int i=0;i<mid+1;i++){
          cout<<a[i][0]<<endl;
       }
       return;
    }
    else{
        int mid = m / 2;
        for(int i=0;i<n;i++){
            vector<int>vec;
            for(int j=mid+1;j<m;j++){
              vec.push_back(a[i][j]);
           }
           for(int j=0;j<mid+1;j++){
              vec.push_back(a[i][j]);
           }
            b.push_back(vec);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}