#include<iostream>
using namespace std;

int main(){
    int a[10];
    
    a[2] = 5;
    a[3] = 10;
    a[3] += 2;                        //now a[3] = 12
    a[4] = 15;
    a[4]++;                           //now a[4] = 16
    a[5] = 3;
    a[5]--;                           //now a[5] = 2
    a[8] = a[2];                      //now a[8] = 5;
    
    a[0] = a[2]+a[3]+a[4]+a[5]+a[8];            //a[0] = 40;
    
    cout<<"Output: "<<a[0]<<endl;   
    
    return 0;
}
