#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<ll> v1,v2;
    for(ll i=0; i<n; i++){
        ll a;
        cin>>a;
        v1.push_back(a);
    }
    for(ll i=0; i<n; i++){
        ll a;
        cin>>a;
        v2.push_back(a);
    }

    ll ai = *max_element(v1.begin(),v1.end());
    ll bi = *max_element(v2.begin(),v2.end());
    if(v1[n-1]==ai && v2[n-1]==bi){
        cout<<"yes"<<endl;
        return;
    }

    ll te = n-1;
    // ll f=0;
    while(te--){
        // te--;
        if(v1[n-1]>=v1[te] && v2[n-1]>=v2[te]){
            continue;
        }
        else if(v1[n-1]>=v2[te] && v2[n-1]>=v1[te]){
            continue;
        }
        else{
            // f=1;
            cout<<"no"<<endl;
            return;
        }
        
    }

    cout<<"yes"<<endl;
    // cout<<te<<endl;
    
    
    // cout<<a<<" "<<b<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}

a
b