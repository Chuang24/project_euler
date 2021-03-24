/*************************************************************************
	> File Name: OJ515.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 24 Mar 14:29:48 2021
 ************************************************************************/
#include<cmath> 
#include<iostream>
using namespace std;

int main(){
    int A, B, L, aa, bb;
    double ratio = 9999999;
    cin >> A >> B >> L;
    double ans = (double) A / B;
    for(int i = 1; i <= L; i++){
        for(int j = 1; j <= L; j++){
            double ans1 = (double) i / j;
            if(ans1 >= ans && ans1 - ans < ratio - ans  ){
                ratio = ans1;
                aa = i;
                bb = j;
                cout << "something?" << endl;
            }
        }
    }
    cout << aa << " " << bb << endl;
    return 0;
}
