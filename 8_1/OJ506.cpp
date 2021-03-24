/*************************************************************************
	> File Name: OJ506.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 23 Mar 22:20:45 2021
 ************************************************************************/

#include<iostream>
#include<cstdio> 
#include<algorithm>
using namespace std;


struct node {
    int cnt, num;
};

bool cmp (const node &a, const node &b){
    return a.num < b.num;
}

node stu[35];
int n;

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> stu[i].num;
        stu[i].cnt = i;
    }

    sort(stu + 1, stu + n + 1, cmp);
    int sum = 0, now = 0;
    for(int i = 1; i <= n; i++){
        if(i != 1){
            cout << " ";
        }
        cout << stu[i].cnt;
        sum += now;
        now += stu[i].num;
    }
    cout << endl;
    printf("%0.2f\n", (double)sum / n);
    return 0;
}
