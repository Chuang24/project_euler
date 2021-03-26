/*************************************************************************
	> File Name: OJ383.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Mar 23:08:48 2021
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> man, woman;
    int x, y, n;
    cin >> x >> y >> n;
    for(int i = 1; i <= x; i++){
        man.push(i);
    }
    for(int i = 1; i <= n; i++){
        woman.push(i);
    }
    for(int i = 1; i <= n; i++){
        cout << man.front() << " " << woman.front() << endl;
        man.push(man.front());
        man.pop();
        woman.push(woman.front());
        woman.pop();
    }
    return 0;
}
