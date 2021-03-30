#include <iostream>
#include <stack>
using namespace std;

char s[100005];
stack<char> s1;
stack<int> s2;
int ans;

void clear(int x) {
    while (s1.size() != 1) {
        s1.pop();
    }
    while (!s2.empty()) {
        s2.pop();
    }
    s2.push(x);
}

int main() {
    s1.push(' ');
    s2.push(-1);
    cin >> s;
    for (int i = 0; s[i]; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            s1.push(s[i]);
            s2.push(i);
        } else if (s[i] == ')') {
            if (s1.top() == '(') {
                s1.pop();
                s2.pop();
                ans = max(ans, i - s2.top());
            } else {
                clear(i);
            }
        } else if (s[i] == ']') {
            if (s1.top() == '[') {
                s1.pop();
                s2.pop();
                ans = max(ans, i - s2.top());
            } else {
                clear(i);
            }
        } else if (s[i] == '}') {
            if (s1.top() == '{') {
                s1.pop();
                s2.pop();
                ans = max(ans, i - s2.top());
            } else {
                clear(i);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
