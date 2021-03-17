/*************************************************************************
	> File Name: oj380.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 17 Mar 11:13:03 2021
 ************************************************************************/

#include<iostream>
#include<algorithm> 
#include<string>
using namespace std;

struct node{
    int num;
    string s;
};

node bio[105];
int n;
bool cmp(const node &a, const node &b){
    if(a.s.size() == b.s.size()){
        return a.s > b.s;
    }
    return a.s.size() > b.s.size();
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> bio[i].s;
        bio[i].num = i;

    }
    sort(bio + 1, bio + n + 1, cmp);
    cout << bio[1].num << endl << bio[1].s << endl;
}


