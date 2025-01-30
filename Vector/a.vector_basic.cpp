#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(2);                                           //pushback
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    v.push_back(12);
    v.push_back(14);
    v.push_back(16);
    v.push_back(18);
    v.push_back(20);
    v.push_back(22);
    v.push_back(24);

    cout << "Size = " << v.size() << endl;                     //size()

    for (int i = 0; i<v.size(); i++){
        cout << v.at(i) << endl;                               //print
    }

    cout <<"Front = "<< v.front() << endl;                     //front value
    cout <<"Back = "<< v.back() << endl;                       //back value

    if(v.empty()){                                             //empty
        cout << "Empty"<<endl;
    }
    else{
        cout << "Not Empty"<<endl;
    }

    v.pop_back();
    cout << "Last value delete: ";                             // pop back
    for (int i = 0; i<v.size(); i++){
        cout << v.at(i)<<' ';                                  // print
    }

    cout << endl;

    v.erase(v.begin() + 5,v.begin()+7);                        //erase value
    cout << "Erase: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i)<<' ';
    }

    cout << endl;
    
    cout<<v.empty()<<endl;                                       //if empty then print 1, if not then 0

    v.clear();
     cout << "Size = " << v.size() << endl;                     //clear
    
    cout<<v.empty()<<endl;                                       //1

}
