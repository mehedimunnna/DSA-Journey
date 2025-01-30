#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n;
    cin>>n;                                             //5

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);                                //10 20 30 40 50
    }
    
    reverse(v.begin(),v.end());
    for(auto u:v){
      cout<<u<<" ";                                    //65 10 50 20 30 
    }
    cout<<endl;
}
