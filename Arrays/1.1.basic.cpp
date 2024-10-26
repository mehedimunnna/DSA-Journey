#include<iostream>
using namespace std;

int main(){
    int a[5];
    a[2] = 4;
    a[4] = 6;
    a[4]++;                           //now a[4] = 7
    
    a[0] = a[2]+a[4];                 //a[0] = 11;
    
    cout<<"Output: "<<a[0]<<endl;      
    return 0;
}
