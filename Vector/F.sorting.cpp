#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> v(n);
    for (int &x : v) cin >> x;

    sort(v.begin(), v.end());           // Increasing
    for (int x : v) cout << x << " "; 
    cout << "\n";

    sort(v.rbegin(), v.rend());         // Decreasing
    for (int x : v) cout << x << " "; 
    cout << "\n";

    sort(v.begin(), v.begin() + min(5, n));  // Sort till index 4
    for (int x : v) cout << x << " "; 
}
