#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, j, comp, cont=0, meio;
    cin >> n;
    j = n-1;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    comp = v[0] + v[j];
    for(int i = 0; i < n/2; i++){
        if(v[i] + v[j] == comp) cont++;
        j--;
    }
    if(n % 2 != 0){
        meio = n / 2;
        if(v[meio] == comp / 2) cont++;
    }
    if(cont == n/2 && n % 2 == 0) cout << 'S' << endl;
    else if(cont == n/2 + 1 && n % 2 != 0) cout << 'S' << endl;
    else cout << 'N' << endl;


    return 0;
}