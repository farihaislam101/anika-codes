#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;
    
    vector<pair<int, int>> v;

    // Input directed edges
    while (e--) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    int q;
    cin >> q;

    while (q--) {
        int c, d;
        cin >> c >> d;

        // Check if there's an edge between c and d
        bool found = false;

        for (auto p : v) {
            if ((p.first == c && p.second == d) || (p.first == d && p.second == c)) {
                found = true;
                break;
            }
        }

        // Output the result for the query
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
