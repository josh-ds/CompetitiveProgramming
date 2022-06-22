#include <bits/stdc++.h>

using namespace std;

int t, n, m, a;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;

	for (int i = 0; i < t; ++i){
		cin >> n >> m;
		int cnt = 0;
		for (int i = 0; i < n; ++i){
			cin >> a;
			cnt += a;
		}
		cout << max(0, cnt-m) << "\n";
	}
}