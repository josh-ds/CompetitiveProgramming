#include <bits/stdc++.h>

using namespace std;

int main(){
	freopen("breedflip.in", "r", stdin);
	freopen("breedflip.out", "w", stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	string a, b;
	cin >> a >> b;

	int cnt = 0;
	bool flipped = false;

	for (int i = 0; i < n; ++i){
		if (a[i] != b[i]){
			flipped = true;
		} else {
			if (flipped){
				cnt++;
			}
			flipped = false;
		}
	}

	cout << cnt << "\n";
}