/*************************************************************************
	> File Name: deque.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Mar 17:56:14 2021
 ************************************************************************/

#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> que;
    que.push_back(3);
    que.push_back(4);
    que.push_front(5);
    que.push_front(6);
    while(!que.empty()){
        cout << que.front() << " " << que.back() << endl;
        que.pop_back();
    }
    return 0;
}
