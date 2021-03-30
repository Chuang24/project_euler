/*************************************************************************
	> File Name: OJ566.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 29 Mar 22:30:18 2021
 ************************************************************************/

#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;

int n, m, cnt;
unordered_map<string, int> um;

int main(){
    cin >> n >> m;
    vector<vector<string> > v(n, vector<string>{});
    for(int i = 0; i < m; i++){
        string a, b;
        cin >> a >> b;
        if(um.count(a) == 0){
            um[a] = cnt;
            v[cnt].push_back(a);
            v[cnt].push_back(b);
            cnt++;
        } else{
            v[um[a]].push_back(b);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < v[i].size(); j++){
            if (j){
                cout << " ";
            }
            cout << v[i][j];
        }
        cout << endl;
    }
    return 0;
}
