#include <bits/stdc++.h>

using namespace std;

int t;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;

	for (int i = 0; i < t; ++i){
		map<int,int> sizes;
		bool flag = true;
		int n;
		cin >> n;
		for (int j = 0; j < n; ++j){
			int s;
			cin >> s;
			if (sizes[s] >= 1){
				sizes[s]++;
			} else {
				sizes[s] = 1;
			}
		}
		

		for (auto x : sizes){
			if (x.second == 1){
				cout << -1 << "\n";
				flag = false;
				break;
			}
		}

		if (!flag){
			continue;
		}

		int index = 1;
		for (auto x : sizes){
			for (int i = index; i < x.second+index-1; ++i){
				cout << i+1 << " ";
			}
			cout << index << " ";
			index += x.second;
		}
		cout << "\n";
	}

	
}