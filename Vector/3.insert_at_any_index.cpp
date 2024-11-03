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
    
    v.insert(v.begin()+5,50);               //insert 50 at 5 index  
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    } 
    
    cout<<endl;
    
    v.insert(v.begin()+2,3,10);               //insert 10 three times at index from 2 
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
