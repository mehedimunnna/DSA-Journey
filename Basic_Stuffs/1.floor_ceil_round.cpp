#include <bits/stdc++.h>
using namespace std;

int main() {

  int a = 14, b = 3;

  // Floor
  cout << "Floor of " << a << "/" << b << " is: " << floor((double)a / b) << endl;              //Floor of 14/3 is: 4
  cout << "Floor of " << a << "/" << b << " is: " << (a / b) << endl;                           //Floor of 14/3 is: 4

  // Ceil
  cout << "Ceil of " << a << "/" << b << " is: " << ceil((double)a / b) << endl;                //Ceil of 14/3 is: 5
  cout << "Ceil of " << a << "/" << b << " is: " << (a + b - 1) / b << endl;                    //Ceil of 14/3 is: 5

  // Round
  cout << "Round of " << a << "/" << b << " is: " << round((double)a / b) << endl;              //Round of 14/3 is: 5
  return 0;
}
