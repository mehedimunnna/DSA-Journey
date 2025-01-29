#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>tmp;
    tmp = v;

    cout<<tmp.size()<<endl;
    for(int i = 0; i<tmp.size(); i++){
        cout<<tmp[i]<<" ";
    }
    cout<<endl;
    return 0;
}
