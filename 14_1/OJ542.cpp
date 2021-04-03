/*************************************************************************
	> File Name: OJ542.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri  2 Apr 23:18:04 2021
 ************************************************************************/

#include<iostream>
#include<cstring> 
#include<cmath>
using namespace std;

long long t, n, h, r, xyz[1005][3], mark[1005], arr[1005][1005], s[1005], cnt, e[1005];

int func(int now){
    if (e[now] == 1){
        return 1;
    }
    for (int i = 1; i <= n; i++){
        if (arr[now][i] == 1 && mark[i] == 0){
            mark[i] = 1;
            if (func(i) == 1){
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    cin >> t;
    while (t--) {
        memset(mark, 0, sizeof(mark));
        memset(arr, 0, sizeof(arr));
        cnt = 0;
        memset(e, 0, sizeof(e));
        cin >> n >> h >> r;
        for (int i = 1; i <= n; i++){
            cin >> xyz[i][0] >> xyz[i][1] >> xyz[i][2];
            if (xyz[i][2] <= r){
                s[cnt++] = i;
            }
            if (xyz[i][2] + r >= h){
                e[i] = 1;
            }
            for(int j =1 ; j < i; j++){
                int t1 = xyz[i][0] - xyz[j][0];
                int t2 = xyz[i][1] - xyz[j][1];
                int t3 = xyz[i][2] - xyz[j][2];
                double t4 = sqrt(t1 * t1 + t2 * t2 + t3 *t3);
                if (t4 <= 2 * r){
                    arr[i][j] = arr[j][i] = 1;
                }
            }
        }
        int flag = 0;
        for (int i = 0; i < cnt; i++){
            if (mark[s[i]] == 0 ){
                mark[s[i]] = 1;
                if (func(s[i]) == 1) {
                    cout << "Yes" << endl;
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0){
            cout << "No" << endl;
        }
    }
    return 0;
}
