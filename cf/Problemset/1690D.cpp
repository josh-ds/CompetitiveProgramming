#include <bits/stdc++.h>

using namespace std;

int t;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;

	for (int i = 0; i < t; ++i){
		int n, k, wcnt = 0;
		cin >> n >> k;
		string s;
		cin >> s;
		string recolor = s.substr(0, k);

		for (auto x : recolor){
			if (x == 'W'){
				wcnt++;
			}
		}

		int maxcnt = wcnt;
		
		for (int j = k; j < n; ++j){
			wcnt = wcnt - (s[j-k] == 'W') + (s[j] == 'W');
			maxcnt = min(maxcnt, wcnt);
		}

		cout << maxcnt << "\n";

	}
}