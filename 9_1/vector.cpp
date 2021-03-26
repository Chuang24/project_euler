/*************************************************************************
	> File Name: vector.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Mar 16:47:48 2021
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int> > v(10, vector<int>(10, 9));
    for(int i = 0; i < v.size(); i++){
        for (int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }



    /*
    vector<int> v(10, 88);
    v.push_back(99);
    v.push_back(8);
    v.push_back(6);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    */
    return 0;

}

