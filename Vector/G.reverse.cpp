#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n;
    cin>>n;                                             //5
    cout<<"Input Values: ";
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);                                //10 20 30 40 50
    }
    cout<<endl;
    
    cout<<"Before Reverse: ";
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";                                //10 20 30 40 50               
    }
    reverse(v.begin(),v.end());
    cout << endl;
    
    cout<<"After Reverse: ";
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";                                //50 40 30 20 10            
    }
    sort(v.begin(),v.end());
    cout << endl;
}
