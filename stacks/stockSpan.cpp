#include <algorithm>
#include <iostream>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

#define pb(a) push_back(a)

int main() {
    int arr[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(arr) / sizeof(int);
    vector<int> v;
    stack<pair<int, int>> s;
    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top().second < arr[i]) {
            s.pop();
        }
        if (s.empty()) {
            v.pb(-1);
        } else {
            v.pb(i - s.top().first);
        }
        s.push(make_pair(i, arr[i]));
    }
    for (int i : v) {
        cout << i << " ";
    }
    return 0;
}
