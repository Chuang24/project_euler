/*************************************************************************
	> File Name: oj389.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 17 Mar 20:58:30 2021
 ************************************************************************/

// Make sure how to identify the different between each seat 
// Adjust the left and right pointer according to the #of scenario
// Consider special scenario
//
#include<algorithm> 
#include<iostream>
using namespace std;

int n, m, num[100005];

int func(int x){
    int t = 1, last = num[0];
    for(int i = 1; i < n; i++){
        if (num[i] - last >= x){
            t++;
            last = num[i];
        }
    }
    return t;
}

int bs(){
    int l = 1, r = num[n - 1] - num[0];
    while(l != r){
        int mid = (l + r + 1) / 2;
        int s = func(mid);
        if(s >= m){
            l = mid;
        }else {
            r = mid - 1;
        }
    }
    return l;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    sort(num, num + n);
    cout << bs() << endl;
    return 0;
}
