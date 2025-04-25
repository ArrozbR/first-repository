#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	char aux;
	while(cin >> n && n != 0){
		stack<char> a;
		vector<char> b;
		for(int i = 0; i < n; i++){
			cin >> aux;
			a.push(aux);
		}
		for(int i = 0; i < n; i++){
			cin >> aux;
			b.push_back(aux);
		}
		int j=0;
		for(int i = 0; i <= n; i++){
			cout << "I";
			while(a.size() && a.top() == b[j]){
				cout << "R";
				a.pop();
				j++;
			}
		}
		cout << endl;
	}
	
	return 0;
}
