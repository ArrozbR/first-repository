#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m, auxi, cont=1, nx=-1, ny=-1;
    string aux;
    cin >> n >> m;
    string mat[n][m];
    vector<int> x, y;
    map<string, int> ma;
    set<string> s;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m+1; j++){
            if(j < m){
                cin >> mat[i][j];
                if(s.count(mat[i][j]) != 1){
                    s.insert(mat[i][j]);
                }
            }
            else{
                cin >> auxi;
                x.push_back(auxi);
            }
        }
    }
    for(int i = 0; i < m; i++){
        cin >> auxi;
        y.push_back(auxi);
    }
    aux = ' ';
    for(int i = 0; i < n; i++){
        for(int j = 1; j < m; j++){
            if(mat[i][j] == mat[i][j-1]){
                cont++;
            }
        }
        if(cont == m){
            aux = mat[i][0];
            nx = i;
        }
        cont = 1;
    }
    cont = 1;
    if(aux == " "){
        for(int i = 0; i < m; i++){
            for(int j = 1; j < n; j++){
                if(mat[j][i] == mat[j-1][i]){
                    cont++;
                }
            }
            if(cont == n){
                aux = mat[0][i];
                ny = i;
            }
            cont = 1;
        }
    }
    if(nx >= 0){
        ma[aux] = x[nx] / m;
    }
    else{
        ma[aux] = y[ny] / n;
    }
    
    
    return 0;
}