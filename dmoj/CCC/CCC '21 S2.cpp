#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie();

	int m, n;
	cin >> m >> n;

	int a[m][n] = {}; //black = zero
	int k;
	cin >> k;

	map<pair<char, int>, int> choices;

	for (int i = 0; i < k; ++i){
		char c;
		int rc;
		cin >> c >> rc;
		if (choices.count(make_pair(c,rc))){
			choices[make_pair(c, rc)]++;
		} else {
			choices[make_pair(c, rc)] = 1;
		}
	}

	for (auto x : choices){
		x.second %= 2;
		if ((x.first).first == 'R' && x.second == 1){
			for (int i = 0; i < n; ++i){
				a[(x.first).second-1][i] = !a[(x.first).second-1][i];
			}
		} else if (x.second == 1){
			for (int i = 0; i < m; ++i){
				a[i][(x.first).second-1] = !a[i][(x.first).second-1];
			}
		}

	}

	int count = 0;

	for (int i = 0; i < m; ++i){
		for (int j = 0; j < n; ++j){
			if (a[i][j]){
				count++;
			} 
		}
	}

	cout << count;
}
