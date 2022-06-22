#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie();

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i){
		char a[8][8];
		for (int k = 0; k < 8; ++k){
			for (int j = 0; j < 8; ++j){
				cin >> a[k][j];
			}
		}
		bool found = false;
		for (int k = 0; k < 8; ++k){
			for (int j = 2; j < 8; ++j){
				if (a[k][j] == '#' && a[k][j-2] == '#'){
					cout << k+2 << " " << j << "\n";
					found = true;
					break;
				}
			}
			if (found){
				break;
			}
		}
	}
}