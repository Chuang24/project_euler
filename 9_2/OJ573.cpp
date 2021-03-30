/*************************************************************************
	> File Name: OJ573.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 29 Mar 22:42:39 2021
 ************************************************************************/

#include<iostream>
#include<queue>
#include<string>
using namespace std;

struct node{
    int id, offset, next;
    bool operator< (const node &b) const{
        if(this->next == b.next) {
            return this->id > b.id;
        }
        return this->next > b.next;
    }
};

int main(){
    int n;
    string t;
    priority_queue<node> que;
    while(cin >> t){
        if (t[0] == '#'){
            break;
        }
        int id, offset;
        cin >> id >> offset;
        que.push((node) {id, offset, offset});
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        node temp = que.top();
        que.pop();
        cout << temp.id << endl;
        temp.next += temp.offset;
        que.push(temp);

    }
    return 0;

}
