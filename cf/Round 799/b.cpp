#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie();

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i){
		int n;
		cin >> n;
		set<int> s;
		for (int k = 0; k < n; ++k){
			int e;
			cin >> e;
			s.insert(e);
		}
		
		cout << s.size() - (n+s.size())%2 << "\n";
	}
}