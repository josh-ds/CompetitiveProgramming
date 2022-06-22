#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	int cnt[4001] = {};
	
	cin >> n;

	unordered_map<int, int> pieces;

	for (int i = 0; i < n; ++i){
		int l;
		cin >> l;
		if (pieces.count(l)){
			pieces[l]++;
		} else {
			pieces[l] = 1;
		}
	}

	for (int i = 1; i <= 2000; ++i){
		for (int k = i; k <= 2000; ++k){
			if (i == k){
				if (pieces[i] > 1){
					cnt[i+k] += pieces[i]/2;
				}
			}
			else {
				if (pieces.count(i) && pieces.count(k)){
					cnt[i+k] += min(pieces[i], pieces[k]);
				}
			}
		}
	}

	int maxL = 0, height = 1;

	for (int i = 1; i < 4001; ++i){
		if (cnt[i] > maxL){
			maxL = cnt[i];
			height = 1;
		} else if (cnt[i] == maxL){
			height++;
		}
	}

	cout << maxL << " " << height;
}