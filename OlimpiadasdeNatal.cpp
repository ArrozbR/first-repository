#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string aux; 
	map<string, pair<int, pair<int, int>>> m;
	vector<pair<string,pair<int,pair<int,int>>>> v;
	while(getline(cin, aux)){
		getline(cin, aux);
		m[aux].first++;
		v.push_back(aux).first;
		getline(cin, aux);
		m[aux].second.first++;
		v.push_back(aux).first;
		getline(cin, aux);
		m[aux].second.second++;
		v.push_back(aux).first;
	}
	cout << "Quadro de Medalhas" << endl;
	
	
	return 0;
}
