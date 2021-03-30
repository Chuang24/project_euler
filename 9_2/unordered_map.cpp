/*************************************************************************
	> File Name: unordered_map.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 29 Mar 12:08:12 2021
 ************************************************************************/
#include<unordered_map>
#include<string>
#include<iostream>
using namespace std;

int main(){
    unordered_map<string, int> m;
    m["1234567890"] = 67890;
    m["abcdefg"] = 12345;
    m["(+_+)"] = 6666666;
    cout << m.size() << endl;
    for (auto it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
