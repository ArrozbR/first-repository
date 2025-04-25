#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	queue<int> q;
	while(cin >> n && n != 0){
		int k=1;
		while(q.front() != 13){
			for(int i = 1; i <= n; i++){
				q.push(i);
			}
			for(int i = 0; i <= n; i = i + k){
				cout << q.front() << " ";
				q.pop();
			}
			k++;
		}
		cout << endl << k << endl;
	}
	return 0;
}
