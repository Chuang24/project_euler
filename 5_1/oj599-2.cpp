/*************************************************************************
	> File Name: 599-2.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 19 Mar 16:07:50 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int num[1000005], target, n;

int main(){
    scanf("%d%d", &n, &target);
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    for(int i = 0; i < n; i++){
        int t = target - num[i];
        int l = i + 1, r = n - 1;
        while(l <= r){
            int mid = (l + r) / 2;
            if(t == num[mid]){
                cout << i << " " << mid << endl;
                return 0;
            }
            if(t < num[mid]){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
    }
    cout << "not find" << endl;
    return 0;
}
