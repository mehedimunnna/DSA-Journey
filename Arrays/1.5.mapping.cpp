#include<bits/stdc++.h>
using namespace std;

const int mx = 1e6;
int freq[mx];

int main(){
    int n;
    cin>>n;                          //7
    
    int a[mx];
    for(int i=0; i<n; i++){
        cin>>a[i];                   // 1 2 2 2 3 4 4 
    }
    
    for(int i=0; i<n; i++){          
        freq[a[i]]++;               //frequency count
    }
    
    int q;
    cin>>q;                         //5
    
    while(q--){
        int val;
        cin>>val;                   // 2
        cout<<freq[val]<<endl;      // 3
    }
  return 0;  
}
