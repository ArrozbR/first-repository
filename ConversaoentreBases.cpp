#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long long int n, aux, aux2;
	char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	string l, t;
	cin >> n;
	for(int j = 1; j <= n; j++){
		cin >> l >> t;
		cout << "Case " << j << ":" << endl;
		long long int k=0, soma=0;
		vector<int> b, d;
		string h="", saux="";
		if(t == "dec"){
			aux = stol(l);
			while(aux > 15){
				h += hex[aux % 16];
				aux /= 16;
			}
			h += hex[aux];
			for(int i = 0; i < (int)h.size(); i++){
				saux = h[i] + saux;
			}
			cout << saux << " hex" << endl;
			aux = stol(l);
			while(aux > 0){
				b.push_back(aux % 2);
				aux /= 2;
				k++;
			}
			for(int i = k-1; i >= 0; i--) cout << b[i];
			cout << " bin" << endl;
		}
		if(t == "bin"){
			aux = l.size();
			for(int i = 0; i < aux; i++){
				aux2 = l[i] - '0';
				if(aux2 == 1) aux2 *= pow(2, aux-i);
				soma += aux2;
			}
			cout << soma/2 << " dec" << endl;
			aux = soma/2;
			while(aux > 15){
				h += hex[aux % 16];
				aux /= 16;
			}
			h += hex[aux];
			for(int i = 0; i < (int)h.size(); i++){
				saux = h[i] + saux;
			}
			cout << saux << " hex" << endl;
		}
		if(t == "hex"){
			aux = l.size();
			int pot = 0;
			for(int i = aux-1; i >= 0; i--){
				if(l[i] > 57){
					if(l[i] == 'a') soma += 10 * pow(16, pot);
					if(l[i] == 'b') soma += 11 * pow(16, pot);
					if(l[i] == 'c') soma += 12 * pow(16, pot);
					if(l[i] == 'd') soma += 13 * pow(16, pot);
					if(l[i] == 'e') soma += 14 * pow(16, pot);
					if(l[i] == 'f') soma += 15 * pow(16, pot);
				}
				else soma += (l[i] - '0') * pow(16, pot);
				pot++;
			}
			cout << soma << " dec" << endl;
			while(soma > 0){
				b.push_back(soma % 2);
				soma /= 2;
				k++;
			}
			for(int i = k-1; i >= 0; i--) cout << b[i];
			cout << " bin" << endl;
		}
		cout << endl;
	}
	
	return 0;
}
