/*************************************************************************
	> File Name: oj391.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 18 Mar 17:47:13 2021
 ************************************************************************/

#include<iostream>
using namespace std;

long long n, m, num[100005], rawl, rawr;

long long func(long long x){
    long long t = 0, now = 0;
    for(int i = 0; i < n; i++){
        if(now + num[i] > x){
            t++;
            now = num[i];
        }else if (now + num[i] == x){
            t++;
            now = 0;
        }else{
            now += num[i];
        }
    }
    if (now != 0){
        t++;
    }
    return t;
}

long long bs(){
    long long l = rawl, r = rawr;
    while(l != r){
        long long mid = (l + r) / 2;
        long long s = func(mid);
        if(s <= m){
            r = mid;
        }else{
            l = mid + 1;
        }
    }
    return r;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> num[i];
        rawl = max(rawl, num[i]);
        rawr += num[i];
    }
    cout << bs() << endl;
    return 0;
}
