#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> m;
        int p=0, naux;
        string aux;
        vector<string> v(m);
        for(int j = 0; j < m+1; j++){
            getline(cin, aux);
            v[j] = aux;
        }
        for(int j = 0; j < m+1; j++){
            if(v[j] == "LEFT") p--;
            else if(v[j] == "RIGHT") p++;
            else{
                aux = v[j];
                naux = aux[8];
                if(v[naux] == "LEFT") p--;
                if(v[naux] == "RIGHT") p++;
            }
            
        }
        cout << p << endl;
    }

    return 0;
}