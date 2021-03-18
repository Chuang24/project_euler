/*************************************************************************
	> File Name: oj399.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 17 Mar 22:59:09 2021
 ************************************************************************/

#include<iostream>
#include<cmath> 
#include<cstdio> 
using namespace std;

int n, m;
double num[10005], mmax;

int func(double x){
    int cnt = 0;
    for (int i = 0; i < n; i++){
        cnt += num[i] / x;
    }
    return cnt;
}


double bs(){
    double l = 0, r = mmax;
    while (fabs(l -r) > 0.00005){
        double mid = (l + r) / 2;
        int s = func(mid);
        if (s >= m){
            l = mid;
        }else{
            r = mid;
        }
    }
    return r; 
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> num[i];
        mmax = max(mmax, num[i]);
    }
    double ans = bs();
    double t1 = (int)(ans * 100) / 100.0;

    //printf("%.2f\n",t1);
    printf("%.2f\n", ans - 0.005);

    return 0;
}
