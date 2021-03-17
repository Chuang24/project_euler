/*************************************************************************
	> File Name: sort2.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 17 Mar 10:27:38 2021
 ************************************************************************/

#include<iostream>
using namespace std;
#include<string> 

struct student {
    int num, age, s;
    string name;
    bool operator< (const student &b) const {
        return this->s > b.s;
    }

};

bool cmp(const student &a, const student &b){
    if(a.s == b.s){
        return a.num > b.num;
    }
    return a.s > b.s;
}

int main(){
    student a_2021[205];
    a_2021[0].name = "chris";
    a_2021[0].num = 1;
    a_2021[0].age = 20;
    a_2021[0].s = 60;
    a_2021[1].name = "jessie";
    a_2021[1].num = 1;
    a_2021[1].age = 20;
    a_2021[1].s = 150;
    a_2021[2].name = "";
    a_2021[2].num = 1;
    a_2021[2].age = 20;
    a_2021[2].s = 50;
    sort(a_2021, a_2021 + 3);
    for(int i = 0; i < 3; i++){
        cout << a_2021[i].num << " " << a_2021[i].name << " " << a_2021[i].s << endl;
    }

    return 0;
}
