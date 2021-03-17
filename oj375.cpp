/*************************************************************************
	> File Name: oj375.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 17 Mar 15:23:39 2021
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

struct student{
    int num, c, m, e, all;
};

int n;
student stu[305];

bool cmp(const student &a, const student &b){
    if(a.all == b.all){
        if(a.c == b.c){
            return a.num < b.num;
        }
        return a.c > b.c;
    }
    return a.all > b.all;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> stu[i].c >> stu[i].m >> stu[i].e;
        stu[i].all = stu[i].c + stu[i].m + stu[i].e;
        stu[i].num = i + 1;
    }
    sort(stu, stu + n, cmp);
    for(int i = 0; i < 5; i++){
        cout << stu[i].num << " " << stu[i].all << endl;
    }
    return 0;
}
