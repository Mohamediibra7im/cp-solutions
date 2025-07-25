#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Problem: Weird Algorithm
// Link: https://cses.fi/problemset/task/1068

void solve() {
    ll n;
    cin >> n;
    while (n != 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }
    }
    cout << n << " ";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}