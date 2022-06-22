#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie();

	int n;
	cin >> n;

	char a[n][n];

	for (int i = 0; i < n; ++i){
		for (int k = 0; k < n; ++k){
			cin >> a[k][i];
		}
	}
	
	int count;

	for (int i = 0; i < n; ++i){
		count = 0;
		
		for (int k = 0; k < n; ++k){
			if (a[i][k] == 'S'){
				count++;
			}
		}
		for (int k = 0; k < n-count; ++k){
			a[i][k] = '.';
		}
		for (int k = n-count; k < n; ++k){
			a[i][k] = 'S';
		}
	}

	for (int i = 0; i < n; ++i){
		for (int k = 0; k < n; ++k){
			cout << a[k][i];
		}
		cout << "\n";
	}
}