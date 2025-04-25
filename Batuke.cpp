#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, p1, p2, c=1, cont=0, mov=1;
	cin >> n >> p1 >> p2;
	int m[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			m[i][j] = c;
			c++;
		}
	}
	while(cont < n){
		for(int i = p1; i < mov; i++){
			for(int j = p2; j < mov; j++){
				if(m[i][j] <= m[n-1][n-1]){
					cout << m[i][j] << " ";
					cont++;
				}
			}
			mov++;
			cout << endl;
		}
	}
	return 0;
}
