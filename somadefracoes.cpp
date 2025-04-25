#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1, y1, x2, y2, mmc=1, maior, div=2, num1, num2, soma, aux1, aux2, ss;
    cout << "Deseja uma soma ou subtracao de fracoes?" << endl << "1 - Soma" << endl << "2 - Subtracao" << endl;
    cin >> ss;
    cout << "Insira o numerador 1: ";
    cin >> x1;
    cout << "Insira o denominador 1: ";
    cin >> y1;
    cout << "Insira o numerador 2: ";
    cin >> x2;
    cout << "Insira o denominador 2: ";
    cin >> y2;
    aux1 = y1;
    aux2 = y2;
    maior = max(y1, y2);
    for(int i = 0; i < maior; i++){
        if(y1 % div == 0 || y2 % div == 0){ 
            if(y1 % div == 0) y1 = y1 / div;
            if(y2 % div == 0) y2 = y2 / div;
            mmc = mmc * div;
        }
        if(y1 % div != 0 & y2 % div != 0) div++;
    }
    num1 = (mmc / aux1) * x1;
    num2 = (mmc / aux2) * x2;
    if(ss == 1) soma = num1 + num2;
    else soma = num1 - num2;
    for(int i = 2; i < soma+5; i++){
        if(soma % i == 0 && mmc % i == 0){
            soma = soma / i;
            mmc = mmc / i;
            i--;
        }
    } 
    if(mmc != 1) cout << soma << endl << "----" << endl << mmc << endl;
    else cout << "Inteiro: " << soma << endl;
}