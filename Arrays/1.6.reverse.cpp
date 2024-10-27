#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5;

int main(){
    int n;
    cin>>n;                                 //5
    
    int a[mx];
    for(int i=0; i<n; i++){
        cin>>a[i];                          //1 2 3 4 5
    }
    
    for(int i=n-1; i>=0; i--){
        cout<<a[i]<<' ';                     //5 4 3 2 1
    }
    return 0;
}
