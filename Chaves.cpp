#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n, cont=0;
    char aux;
    stack<char> s;
    cin >> n;
 
    while(cin >> aux){
        if(aux == '{'){
            s.push(aux);
            cont++;
        }
        if(aux == '}' && s.empty()) cont = 99999;
        if(aux == '}' && !s.empty()) cont--;
    }
    if(cont == 0) cout << 'S' << endl;
    else cout << 'N' << endl;
 
    return 0;
}