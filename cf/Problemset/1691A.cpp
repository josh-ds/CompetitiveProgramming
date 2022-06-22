#include <bits/stdc++.h>

using namespace std;

int t;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;

	for (int i = 0; i < t; ++i){
		int n, ec = 0, oc = 0;
		cin >> n;
		for (int j = 0; j < n; ++j){
			int a;
			cin >> a;
			if (a%2 == 0){
				ec++;
			} else {
				oc++;
			}
		}
		cout << min(ec, oc) << "\n";
	}
}