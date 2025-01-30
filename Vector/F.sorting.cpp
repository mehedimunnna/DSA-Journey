//Increaing order
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
        v.push_back(x);                                //30 20 50 10 65
    }
    cout<<endl;
    
    cout<<"Before Sorting: ";
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";                                //30 20 50 10 65                
    }
    sort(v.begin(),v.end());
    cout << endl;
    
    cout<<"After Sorting: ";
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";                                //10 20 30 50 65             
    }
    sort(v.begin(),v.end());
    cout << endl;
}
