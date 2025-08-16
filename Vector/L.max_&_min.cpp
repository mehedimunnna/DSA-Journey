#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    vector<int> v(n);
    for (int &x : v)  cin>>x;

    // maximum value 
    int maxIdx = max_element(v.begin(), v.end()) - v.begin();
    // minimum value 
    int minIdx = min_element(v.begin(), v.end()) - v.begin();

    cout << "Maximum value: " << v[maxIdx] << " at index " << maxIdx << endl;
    cout << "Minimum value: " << v[minIdx] << " at index " << minIdx << endl;

    return 0;
}
