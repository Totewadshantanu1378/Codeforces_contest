#include <bits/stdc++.h>
# define sorte(arr) sort(arr.begin(),arr.end())
# define loop1(i,a,n)  for(int i=a;i<n;i++)
# define loop2(i,a,n)  for(int i=a;i<=n;i++)
# define print(arr ,n)   for(int i=0;i<n;i++) cout<<arr[i]<<endl;
// # define cout(n) cout<<n<<endl;
#define mod 10000007;
using namespace std;
using ll = long long;

void solve3(){
    int l1, r1; cin >> l1 >> r1;
	int l2, r2; cin >> l2 >> r2;
	vector<int> arr(105, 0);
	int temp = min(r1, r2) - max(l1, l2);
	if(l1 < l2) arr[l2 - 1] = 1;
	if(l2 < l1) arr[l1 - 1] = 1;
	if(r2 > r1) arr[r2] = 1;
	if(r1 > r2) arr[r1] = 1;

	int ans = 0;
	for(int i = 1; i <= 101; i++) {
		ans += arr[i];
	}

	if(temp < 0) ans = 0;
	cout << max(1, ans + max(0, min(r1, r2) - max(l1, l2))) << endl;
}
void solve2(){
    int l1,r1,l2,r2;
    // cin>>l1>>r1>>l2>>r2;
    int ans = 0;

    if(r1 < l2){
        ans += max(0,l2 - r1- 1);
    }
    else if(r2 < l1){
        ans += max(0,l1 - r2- 1);
    }
    else{
        ans = 0;
    }

    // cout<<ans<<endl;
    solve3();
}
void solve(){
    set<int>st;
    int l1,r1,l2,r2;
    // cin>>l1>>r1>>l2>>r2;
   
    if(l1 == r1 && l2 == r2){
        if(l1 != l2){
            // cout<<1<<endl;
            int adjso = 4;
            // return;
        }
        // cout<<0<<endl;
        // return;
    }
    if(l2 > r1 || r2 < l1){
        int adsds= l2;
    } 
    if(l1 == l2 && r1 == r2){
        int j = r1;
    }
     
    // st.insert(l1);
    // st.insert(l2);
    // st.insert(r1);
    // st.insert(r2);

    // cout<<3<<endl;
     solve2();
}

int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}