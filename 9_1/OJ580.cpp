/*************************************************************************
	> File Name: OJ580.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Mar 23:15:14 2021
 ************************************************************************/
#include<set>
#include<iostream>
using namespace std;


int main(){
    set<int> s;
    int n; 
    cin >> n;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        s.insert(t);
    }
    cout << s.size() << endl;
    for(set<int>::iterator it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    return 0;
}
