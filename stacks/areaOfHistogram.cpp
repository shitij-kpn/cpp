#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

#define pb(a) push_back(a)

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    int n = arr.size();
    stack<pair<int, int>> s;
    vector<int> left;
    // calculating left smaller
    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top().second >= arr[i]) {
            s.pop();
        }
        if (s.empty()) {
            left.pb(-1);
        } else {
            left.pb(s.top().first);
        }
        s.push(make_pair(i, arr[i]));
    }
    while (!s.empty()) {
        s.pop();
    }
    // calculating right smaller
    vector<int> right;
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && s.top().second >= arr[i]) {
            s.pop();
        }
        if (s.empty()) {
            right.pb(n);
        } else {
            right.pb(s.top().first);
        }
        s.push(make_pair(i, arr[i]));
    }
    reverse(right.begin(), right.end());
    for (int i : right) {
        cout << i << " ";
    }
    cout << endl;

    for (int i : left) {
        cout << i << " ";
    }
    cout << endl;
    int maxi = -100;

    for (int i = 0; i < n; i++) {
        int temp = (right[i] - left[i] - 1) * arr[i];
        maxi = max(maxi, temp);
        cout << temp << " ";
    }
    cout << endl;
    cout << maxi;
    return 0;
}
