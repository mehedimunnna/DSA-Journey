#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n;
    cin>>n;
                                                 
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);                                //30 20 50 10 65
    } 

    //Increasing
    sort(v.begin(),v.end());
    for(auto u:v){
      cout<<u<<" ";                                    //10 20 30 50 65                       
    }
    cout << endl;

    //Decreasing
    sort(v.rbegin(),v.rend());
    for(auto u:v){
      cout<<u<<" ";                                    //65 50 30 20 10                       
    }
    cout << endl;

    //sort till index 3
    sort(v.begin(),v.begin()+3);
    for(auto u:v){
      cout<<u<<" ";                                   //30 50 65 20 10 
    }
    cout << endl;
}
