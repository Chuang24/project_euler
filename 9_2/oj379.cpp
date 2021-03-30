/*************************************************************************
	> File Name: oj379.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 29 Mar 21:33:31 2021
 ************************************************************************/

#include<iostream>
#include<stack>
using namespace std;

stack<int> cnt, mmax;
int n;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        if (t == 0){
            cin >> t;
            cnt. push(t);
            if(cnt.size() == 1) {
                mmax.push(t);
            }else{
                mmax.push(max(mmax.top(), t));
            }
        } else if (t == 1){
            if (!cnt.empty()){
                cnt.pop();
                mmax.pop();
            }
        } else if (t == 2){
            if(!mmax.empty()){
                cout << mmax.top() << endl;
            }else{
                cout << 0 << endl;
            }
        }
    }
    return 0;
}
