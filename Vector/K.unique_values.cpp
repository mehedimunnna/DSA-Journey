#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>v(n); for(int &x : v) cin>>x;

    sort(v.begin(), v.end());

    v.erase (unique(v.begin(), v.end()), v.end());

        cout<<"Size = "<<v.size()<<endl;

    for(int x: v){
        cout<<x<<" ";
    }
}
