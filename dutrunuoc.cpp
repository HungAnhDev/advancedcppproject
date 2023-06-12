#include <bits/stdc++.h>
using namespace std;
bool cmp (pair <int, int> a, pair <int, int> b){
    return a.second < b.second;
}
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    int nuoc = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
        nuoc += a[i].first;
    }

    sort(a.begin(), a.end(), cmp);

    int i;
    for (i = 0; i < n; i++) {
        if (nuoc > 0)
            nuoc -= a[i].second;
        if (nuoc == 0)
            i++;
        if (nuoc <= 0)
            break;
    }

    cout << n - i;

    return 0;
}
