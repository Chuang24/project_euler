/*************************************************************************
	> File Name: leetcode_127.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat  3 Apr 15:30:27 2021
 ************************************************************************/

#include<iostream>
using namespace std;


struct node {
    string word,
    int step;
};

unordered_set<string> mark, d;
int ladderLength(string beginWord, string endWord, vector<string> & wordList){
    for (int i = 0; i < wordList.size(); i++){
        d.insert(wordList[i]);
    }
    if (d.count(endWord) == 0){
        return 0;
    }
    queue<node> que;
    que.push((node){beginWord, 1});
    mark,insert(beginWord);
    while (!que.empty()) {
        node temp = que.front();
        que.pop();
        for (int i = 0; i < temp.word.size(); i++){
            string t = temp.word;
            for (int j = 0; j < 26; j++){
                t[i] = j + 'a';
                if (t == endWord){
                    return temp.step + 1;
                }
                if (d.count(t) == 1 && mark.count(t) == 0){
                    mark.insert(t); 
                    que.push((node){t, temp.step + 1});
                }
            }
        }
    }
    return 0;
}
