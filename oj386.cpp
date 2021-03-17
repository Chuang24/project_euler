/*************************************************************************
	> File Name: oj386.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 17 Mar 16:23:53 2021
 ************************************************************************/

#include<iostream>
#include<cstdio> 
#include<algorithm>

using namespace std;

struct node {
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
    sort(wm, wm + n, cmp);
    for(int i = 0; i < m; i++){
        int t, l = 0, r = n - 1, f = 0;
        scanf("%d", &t);
        while(l <= r){
            int mid = (l + r) / 2;
            if (wm[mid].cnt == t){
                f = 1;
                printf("%d\n", wm[mid].num);
                break;
            } else if (wm[mid].cnt > t){
                r = mid - 1;
            }else{ 
                l = mid + 1;
            }
        }
        if (f == 0){
            printf("0\n");
        }
    }
    return 0;
}
