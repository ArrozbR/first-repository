#include <bits/stdc++.h>

using namespace std;

bool ok(pair<string, int> a, pair<string, int> b){
	return a.second < b.second;
}

int main(){
	
	int t, n, horas, minutos;
	char aux;
	string nome;
	vector<pair<string, int>> antes, pos;
	cin >> t >> n;
	for(int i = 0; i < n; i++){
		scanf("%d %c %d %s ", &horas, &aux, &minutos, nome);
		if(horas == 23 && 60 - t <= minutos) antes.push_back(make_pair(nome, minutos));
		if(horas == 0 && t >= minutos) pos.push_back(make_pair(nome, minutos));
	}
	sort(antes.begin(), antes.end(), ok);
	sort(pos.begin(), pos.end(), ok);
	for(int i = 0; i < (int)antes.size(); i++){
		cout << antes[i].first << endl;
	}
	for(int i = 0; i < (int)pos.size(); i++){
		cout << pos[i].first << endl;
	}
	
	return 0;
}
