#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x;
    cin >> n >> x;
    vector<int> v(n), cont(x+1, 0);
    cont[0] = 1;

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < x; i++){ //se inverter os 2 fors o programa conta sem permutacoes
        for(auto j:v){          // :)
            if(i + j <= x){
                cont[i+j] += cont[i];
                cont[i+j] %= (int)1e9+7;
            }
        }
    }
    cout << cont[x] << endl;

    return 0;
}