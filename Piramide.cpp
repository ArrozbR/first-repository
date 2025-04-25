#include <bits/stdc++.h>

using namespace std;

int pres[105][105], memo[105][105], m[105][105];

int pd(int l, int r, int maxm){
    if(l < 0 || r >= maxm) return INT_MAX;
    if(l == r) return m[0][r];
    if(memo[l][r] != -1) return memo[l][r];
    int pre =  pres[r-l][r];
    if(l != 0) pre = pres[r-l][r] - pres[r-l][l-1];
    int answ = min(pd(l+1, r, maxm) + pre, pd(l, r-1, maxm) + pre);
    return memo[l][r] = answ;
}

int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> m[i][j];
            pres[i][j] = 0;
            memo[i][j] = -1;
        }
    }
    for(int i = 0; i < n; i++){
        pres[i][0] = m[i][0];
        for(int j = 1; j < n; j++){
            pres[i][j] = pres[i][j-1] + m[i][j];
        }
    }
    cout << pd(0, n-1, n) << endl;
    
    
    return 0;
}