#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k, u;
    cin >> n >> k >> u;
    int m[n][k];
    bool bingo[n][k];
    vector<int> v(u);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            cin >> m[i][j];
            bingo[i][j] = false;
        }
    }

    for(int i = 0; i < u; i++) cin >> v[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            if(v[i] == m[i][j]) bingo[i][j] = true;
        }
        int cont = 0;
        for(int j = 0; j < k; j++){
            if(bingo[i][j] == true){
                cont++;
                if(cont == k-1) cout << i+1 << " ";
            }
        }
    }
    cout << endl;

    return 0;
}