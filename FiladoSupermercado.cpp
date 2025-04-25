#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> v(n), c(m);
    for(int i = 0; i < n; i++){
        v[i].first = i;
        cin >> v[i].second;
    }
    for(int i = 0; i < m; i++){
        c[i].first = i;
        cin >> c[i].second;
    }

    return 0;
}