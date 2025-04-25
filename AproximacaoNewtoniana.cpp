#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double x, y, raiz;
	int cont=0;
	scanf("%lf", &y);
	raiz = sqrt(y);
	x = y / 2;
	
	while(x != raiz){
		x = (x * x + y) / (2 * x);
		cont++;
	}
	
	printf("Aproximacao: %.10lf\nRaiz:        %.10lf\nQuantidade de Aproximacoes: %d\n", x, raiz, cont);
	
	return 0;
}
