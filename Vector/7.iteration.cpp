#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n;
    cin>>n;                             
    cout<<"Input Values: ";
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);                         
    }
    //iteration
    vector<int>::iterator x;
    x = v.begin()+3;
    cout<<*x<<endl;
}
