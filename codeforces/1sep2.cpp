#include<bits/stdc++.h>
# define sorte(arr) sort(arr.begin(),arr.end())
# define loop1(i,a,n)  for(int i=a;i<n;i++)
# define loop2(i,a,n)  for(int i=a;i<=n;i++)
# define print(arr ,n)   for(int i=0;i<n;i++) cout<<arr[i]<<endl;
// # define cout(n) cout<<n<<endl;
#define mod 10000007;
using namespace std;
using ll = long long;
int num;
bool isPerfect(int n){
    int low = 1;
    int high = n;
    while(low <= high){
        int mid = (low + high) >> 1;
        int sq = mid*mid;
        if(sq == n){
            num = mid;
            return 1;
        }
        else if(sq < n){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return 1;
}
void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    if(!isPerfect(n)){
        cout<<"no"<<endl;
        return;
    }
    int m=1;
    while(m*m<n){
        m++;
    }
    if(m*m != n){
        cout<<"no"<<endl;
        return;
    }
    int one = 0;
    int zero = 0;
    vector<string>s(m,string(m,'0'));
    for(int i=0;i<m;i++){
        s[i][m-1] = '1';
        s[m-1][i] = '1';
        s[0][i] = '1';
        s[i][0] = '1';
    }
    string t = "";
    for(auto it:s){
        t += it;
    }
    if(t != str)
    cout<<"no"<<endl;
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