/*************************************************************************
	> File Name: oj387.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 17 Mar 17:15:19 2021
 ************************************************************************/
#include<cstdio>
#include<algorithm> 
#include<iostream>
using namespace std;
//Special condition for binary search

struct node{
    int num, cnt;
};
bool cmp(const node &a, const node &b){
    return a.cnt < b.cnt;
}

node wm[100005];
int n, m;

int main(){
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%d", &wm[i].cnt);
        wm[i].num = i + 1;
    }
    wm[n].num = 0, wm[n].cnt = 2100000000;
    sort(wm, wm + n, cmp);
    for(int i = 0; i < m; i++){
        int t, l = 0, r = n;
        scanf("%d", &t);
        while(l != r){
            int mid = (l + r) / 2;
            if(wm[mid].cnt >= t){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        printf("%d\n", wm[l].num);
    }
    return 0;
}

