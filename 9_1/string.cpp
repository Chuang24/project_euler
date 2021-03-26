/*************************************************************************
	> File Name: string.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Mar 16:36:31 2021
 ************************************************************************/
#include<string>
#include<iostream>
using namespace std;

int main(){
    string str = "ABCDEF";
    cout << str.size() << endl;
    cout << str.find("DE") << endl;
    cout << (int)str.find("DE", 5) << endl;
    cout << str.substr(3, 2) << endl;
    str.insert(1, "abc");
    cout << str << endl;
    str.replace(2, 5, "000");
    cout << str << endl;
    getline(cin, str);
    cout << str << endl;
    return 0;
}

