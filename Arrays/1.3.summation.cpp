#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter index number: ";       //let, 4
    cin>>n;
    
    int sum = 0;
    
    int a[n];
    cout<<"Enter index value: ";        //let, 5 2 3 5 10
    for(int i = 0; i<=n; i++){          
        cin>>a[i];
        sum += a[i];
    }
    cout<<"Sum: "<<sum<<endl;           //25
    return 0;
}
