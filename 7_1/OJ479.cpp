/*************************************************************************
	> File Name: OJ479.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 21 Mar 12:39:48 2021
 ************************************************************************/
#include<cmath>
#include<iostream>
using namespace std;


int s11[10005][2], s21[5005][2], cnt11, cnt21;

void print(){
    for( int i = 0; i <= cnt11; i++ ){
        cout << s11[i][0] << ":" << s11[i][1] << endl;
    }
    cout << endl;
    for( int i = 0; i <= cnt21; i++ ){
        cout << s21[i][0] << ":" << s21[i][1] << endl;
    }
}

int main(){
    char s[30];
    while(cin >> s){
        for(int i= 0; s[i]; i++){
            if (s[i] == 'E'){
                print();
                return 0;
            }
            if (s[i] == 'W'){
                s11[cnt11][0]++;
                s21[cnt21][0]++;
            } else{
                s11[cnt11][1]++;
                s21[cnt21][1]++;
            }
            if( (s11[cnt11][0] >= 11 || s11[cnt11][1] >= 11) && abs(s11[cnt11][0] - s11[cnt11][1]) >= 2 ){
                cnt11++;
            }
            if( (s21[cnt21][0] >= 21 || s21[cnt21][1] >= 21) && abs(s21[cnt21][0] - s21[cnt21][1]) >= 2 ){
                cnt21++;
            }

        }
    }
    return 0;
}
