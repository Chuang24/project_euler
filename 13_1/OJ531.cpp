/*************************************************************************
	> File Name: OJ531.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri  2 Apr 21:41:05 2021
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;

struct node{
    int status, step;
};

int n, two[25], num[25], mark[5000000], start;
 
void init(){
    two[0] = 1;
    for(int i = 1; i <= 20; i++){
        two[i] = two[i - 1] * 2;
    }
}
int main(){
    init();
    cin >> n;
    for (int i = 1; i <= n; i++){
        int t;
        cin >> t;
        if ( t == 1 ){
            start += two[i];
        }
    }  
    
    for(int i = 1; i <= n; i++){
        int t = 0, cnt;
        cin >> cnt; 
        for (int j = 0; j < cnt; j++){
            int temp;
            cin >> temp;
            t += two[temp];
        }
        num[i] = t;
    }
    queue<node> que;
    que.push((node){start, 0});
    mark[start] = 1;
    while(!que.empty()){
        node temp = que.front(); 
        que.pop();
        if (temp.status == 8){
            cout << temp.step << endl;
            return 0;
        }
        for(int i = 1; i <= n; i++){
            if ((temp.status & two[i]) == 0){
                int t = temp.status + two[i];
                t &= ~num[i];
                if (mark[t] == 0){
                    mark[t] = 1;
                    que.push((node){t, temp.step + 1});
                }
            }
        }
    }
    cout << -1 << endl;
    return 0;
}
