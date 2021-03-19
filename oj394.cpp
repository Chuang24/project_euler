/*************************************************************************
	> File Name: oj394.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 18 Mar 19:01:33 2021
 ************************************************************************/

#include<iostream>
using namespace std;


int ll, n, m, num[50005], rawl = 1000000000;

int func(int x){
    int cnt = 0, last = 0;
    for (int i = 1; i <= n + 1; i++){
        if(num[i] - last < x){
            cnt++;
        }else{
            last = num[i];
        }
    }
    return cnt;
}

int bs(){
    int l = rawl, r = ll;
    while(l != r){
        int mid = ( l + r + 1 ) / 2;
        int s = func(mid);
        if (s <= m){
            l = mid;
        }else{
            r = mid - 1;
        }
    }
    return l;
}

int main(){
    cin >> ll >> n >> m;
    for(int i = 1; i <= n ; i++){
        cin >> num[i];
        rawl = min(rawl, num[i] - num[i - 1]);
    }
    num[n + 1] = ll;
    rawl = min(rawl, num[n + 1] - num[n]);
    cout << bs() << endl;
    return 0;
}
