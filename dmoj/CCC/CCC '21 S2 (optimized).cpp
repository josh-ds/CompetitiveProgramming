#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie();

	int m, n;
	cin >> m >> n;
	int k;
	cin >> k;

	int rows[m] = {}, columns[n] = {};

	for (int i = 0; i < k; ++i){
		char rc;
		int num;
		cin >> rc >> num;

		if (rc == 'R'){
			rows[num-1]++;
		} else {
			columns[num-1]++;
		}
	}


	int count = 0;

	for (int i = 0; i < m; ++i){
		for (int j = 0; j < n; ++j){
			if ((rows[i]+columns[j])%2){
				count++;
			} 
		}
	}

	cout << count;
}
