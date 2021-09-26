#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

#define pb(a) push_back(a)

using namespace std;

int main() {
    int arr[5] = {4, 5, 2, 10, 8};
    int n = 5;
    stack<int> s;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top() >= arr[i]) {
            s.pop();
        }
        if (s.empty()) {
            v.pb(-1);
        } else {
            v.pb(s.top());
        }
        s.push(arr[i]);
    }

    for (int i : v) {
        cout << i << " ";
    }
    return 0;
}
