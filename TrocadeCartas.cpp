#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, ana, beatriz, cont, aux, auxoutra, k;
	vector<int> a, b;
	while(cin >> n >> m && n != 0 && m != 0){
		cont=0;
		a.clear();
		b.clear();
		for(int i = 0; i < n; i++){
			cin >> ana;
			a.push_back(ana);
		}
		for(int i = 0; i < m; i++){
			cin >> beatriz;
			b.push_back(beatriz);
		}
		if(a.size() >= b.size()){
			aux = b.size();
			auxoutra = a.size();
		}
		else{
			aux = a.size();
			auxoutra = b.size();
		}
		for(k = 0; k < aux; k++){
			int vdd=0;
			for(int j = 0; j < auxoutra; j++){
				if(a[k] == b[j]){
					vdd=1;
					j = auxoutra;
				}
				
			}
			if(vdd==0 && (k>0 && a[k]!=a[k-1]))
			{
				cont++;
			}
		}
		cout << cont << endl;
	}		
	
	return 0;
}
