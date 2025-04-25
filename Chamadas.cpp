#include <bits/stdc++.h>

using namespace std;

int cont=0;

int f(int x){
    cont++;
    if(x == 0) return 0;
    if(x == 1) return 1;
    return f(x-1);
}

int main(){

    int n;
    cin >> n;
    f(n);
    cout << cont << endl;

    return 0;
}