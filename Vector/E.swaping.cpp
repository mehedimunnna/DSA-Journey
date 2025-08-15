#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; 
    cin >> n; vector<int> v1(n); for (int &x : v1) cin >> x;
    cin >> m; vector<int> v2(m); for (int &x : v2) cin >> x;
    v1.swap(v2);
    for (int x : v1) cout << x << " "; cout << "\n";
    for (int x : v2) cout << x << " ";
}

