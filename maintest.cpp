#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PALAVRAS 100 // Ajuste este valor conforme necessário

struct palavra {
    char palavra[50];
    int frequencia;
};

void contar_todas_palavras(char *str, struct palavra *resultados, int *num_palavras) {
    char *ptr = strtok(str, " ,.;\n"); // Separa as palavras por espaços, vírgulas, pontos, etc.
    int i, j;

    while (ptr != NULL) {
        // Verifica se a palavra já existe no array de resultados
        for (i = 0; i < *num_palavras; i++) {
            if (strcmp(ptr, resultados[i].palavra) == 0) {
                resultados[i].frequencia++;
                break;
            }
        }

        // Se a palavra não foi encontrada, adiciona ao array
        if (i == *num_palavras) {
            strcpy(resultados[*num_palavras].palavra, ptr);
            resultados[*num_palavras].frequencia = 1;
            (*num_palavras)++;
        }

        ptr = strtok(NULL, " ,.;\n");
    }
}

int main() {
    char str[] = "Esta e uma string de exemplo. A palavra exemplo aparece duas vezes.";
    struct palavra resultados[MAX_PALAVRAS];
    int num_palavras = 0;

    contar_todas_palavras(str, resultados, &num_palavras);

    // Imprimir os resultados
    for (int i = 0; i < num_palavras; i++) {
        printf("%s: %d\n", resultados[i].palavra, resultados[i].frequencia);
    }

    return 0;
}