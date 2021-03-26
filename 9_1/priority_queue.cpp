/*************************************************************************
	> File Name: priority_queue.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Mar 18:42:55 2021
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;


struct node{
    int num, cnt;
    bool operator< (const node &b) const{ //operator overloading, needs to overload <
        return this->num < b.num;
    }
};

int main(){
    priority_queue<node> que;
    que.push((node){1, 2});
    que.push((node){4, -2});
    que.push((node){3, -9});
    cout << que.size() << endl;
    while(!que.empty()){
        cout << que.top().num << " " << que.top().cnt << endl;
        que.pop();
    }
    return 0;

}

