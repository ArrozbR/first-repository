#include <bits/stdc++.h>

using namespace std;

//buscas binarias funcionam apenas em vetores ordenados, seja crescente ou decrescente
int main(){

    int n;
    while(scanf("%d", &n) != EOF){
        int v[18] = {0, 2, 4, 5, 6, 8, 10, 11, 13, 15, 18, 22, 25, 30, 33, 35, 36, 40}, esquerda=0, direita=17; //esquerda recebe 0 e direita recebe tamanho do vetor-1
        int meio = (esquerda + direita) / 2; //meio sera um ponteiro para indicar o meio do vetor nas sucessivas divisoes

        while(v[meio] != n && esquerda <= direita){ //a procura termina ao encontrar o alvo ou quando nao encontrar em todas as divisoes possiveis
            if(v[meio] < n){
                esquerda = meio + 1; //caso o alvo esteja a direita do vetor
            }
            else{
                direita = meio - 1; //caso o alvo esteja a esquerda do vetor
            }
            meio = (esquerda + direita) / 2;
        }

        if(v[meio] == n) printf("Encontrado na posicao %d\n", meio);
        else printf("Nao esta presente\n");
    }

    return 0;
}