#include <bits/stdc++.h>

using namespace std;

int n = 5;
vector<int> subsets;

void recursion(int k) {
    if (n == k) {
        // process subsets
        cout << ":v" << endl;
    }
    recursion(k + 1);
    subsets.push_back(k);
    recursion(k + 1);
    subsets.pop_back();
}

int main() {
    recursion(0);
    return 0;
}
