#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5;

int main(){
    int n;
    cin>>n;                             //3
    
    int a[mx];
    for(int i=0; i<n; i++){
        cin>>a[i];                      //1 2 3
    }
    
    int b[mx];
    for(int i=0; i<n; i++){
        cin>>b[i];                      //2 4 6
    }
    
    int c[mx];
    for(int i=0; i<n; i++){
        cin>>c[i];                      //3 8 12
    }
    
    for(int i=0; i<n; i++){
        cout<<a[i] +b[i] +c[i]<<" ";    //6 14 21
    }
   return 0; 
}
