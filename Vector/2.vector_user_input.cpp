#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n;
    cout<<"Enter elements number: ";
    cin>>n;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<v.size()<<endl;
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
