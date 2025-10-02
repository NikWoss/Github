#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
int const N = 200005;
ll n;
vector<int> g[N];
void Print(){
    for(int i=1; i<n; i++){
        cout<<i<<" : ";
        for(int nx: g[i]){
            cout<<nx<<" ";
        }cout<<endl;
    }
}

void solve(){
    cin>>n;
    for(int i=1; i<n; i++){
        int x, y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    Print();
}

int main(){
    int t=1;
    while(t--){
        solve();
    }
}