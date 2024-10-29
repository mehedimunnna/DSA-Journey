#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long sum = 0;
    
    sum = 1LL*n*(n+1)/2;
    cout<<sum<<endl;
  return 0;
}   


//sum of n odd positive integer : 1+3+5+….+(2n-1) = n² 
//sum of n even positive integer : 2+4+6+….+2n = n(n+1)  
//sum of n squares : 1²+2²+3²+….+n² = n*(n+1)*(2n+1)/6  
//sum of n cubes : 1³+2³+3³+……+n³ ‎ =  n²*(n+1)²/4 = (n*(n+1)/2)² 
