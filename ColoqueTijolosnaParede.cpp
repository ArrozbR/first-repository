#include <iostream>

using namespace std;

int main(){
	
	int N, M[11][11], cont=1;
	scanf("%d", &N);
	
	for(int F = 0; F < N; F++){
	
		for(int i = 1; i < 10; i++){
			for(int j = 1; j < 10; j++){
				if(i % 2 != 0 && j % 2 != 0 && cont <= i){
					scanf("%d", &M[i][j]);
					cont++;
				}
				else{
					M[i][j] = 0;
				}
			}
		}
		printf("\n");
		for(int i = 1; i < 10; i++){
			for(int j = 1; j < 10; j++){
				printf("%d ", M[i][j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}
