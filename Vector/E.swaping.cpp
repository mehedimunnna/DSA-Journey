#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1;
    int n;
    cin>>n;                                             //5
    cout<<"Before swapping V1; ";
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v1.push_back(x);                                //1 2 3 4 5
    }
    cout<<endl;
    
    vector<int>v2;
    int m;
    cin>>m;
    cout<<"Before swapping V2; ";                       //5
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v2.push_back(x);                                //6 7 8 9 10
    }
    cout<<endl;
    
    swap(v1,v2);
    cout<<"After swap V1 : ";
    for(int i = 0; i<v1.size();i++){
        cout<<v1[i]<<" ";                               //6 7 8 9 10
    }
    cout<<endl;
    
    cout<<"After swap V2 : ";
    for(int i = 0; i<v2.size();i++){
        cout<<v2[i]<<" ";                               //1 2 3 4 5
    }
    cout << endl;
}
