#include <bits/stdc++.h>

using namespace std;

int main(){

    int km, op, kmtanque = 500;
    float etanol, gasolina, preco, consumo = 8.8;
    cout << setprecision(2) << fixed;
    cout << "1-Comparar\n2-Consumo\n3-Tanque total\n0-Encerrar" << endl; 
    cin >> op;
    while(op){
        switch(op){
            case 1:
            cout << "Preco Etanol: ";
            cin >> etanol;
            cout << "Preco Gasolina: ";
            cin >> gasolina;
            gasolina = gasolina - (gasolina * 0.3);
            if(gasolina < etanol) cout << "Seria mais barato a Gasolina, saindo por R$" << gasolina << endl;
            else cout << "Seria mais barato o Etanol, saindo por R$" << etanol << endl;
            break;

            case 2:
            cout << "Preco Etanol/Gasolina: ";
            cin >> etanol;
            cout << "KM para andar: ";
            cin >> km;
            preco = (etanol / consumo) * km;
            cout << "O preco para andar " << km << "KM e de: R$"<< preco << endl;
            break;

            case 3:
            cout << "Preco Etanol/Gasolina: ";
            cin >> etanol;
            preco = (etanol / consumo) * kmtanque;
            cout << "O preco para encher o tanque sera: R$" << preco << endl;
            break;
        }
        cout << "\n1-Comparar\n2-Consumo\n3-Tanque total\n0-Encerrar" << endl; 
        cin >> op;
    }

    return 0;
}