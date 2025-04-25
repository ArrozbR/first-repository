#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int tam, n, vtam, ptam, cont=0, ant=0;
	bool presente=false;
	string f, aux;
	vector<string> v;
	getline(cin, f);
	tam = f.size();
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> aux;
		v.push_back(aux);
	}
	vtam = v.size();
	for(int i = 0; i < vtam; i++){
		for(int j = 0; j < tam; j++){
			if((v[i][0] == f[j] && f[j-1] == ' ') || (v[i][0] == f[j] && j == 0)){
				ptam = v[i].size();
				for(int k = 0; k < ptam; k++){
					if(v[i][k] == f[j+k]) cont++;
				}
				if(i != ant) cout << endl;
				if(cont == ptam && j < tam-1){
					cout << j << " ";
					presente = true;
				}
				ant = i;
			}
			cont = 0;
		}
		if(presente == false){
			cout << "-1" << endl;
			ant++;
		}
		presente = false;
	}
	
	return 0;
}
