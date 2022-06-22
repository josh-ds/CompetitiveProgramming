#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);

	int n, q;
	cin >> n >> q;

	int a[n+1] = {};
	for (int i = 1; i <= n; ++i){
		cin >> a[i];
	}

	sort(a, a+n+1);

	long long p[n+1] = {};

	for (int i = 1; i <= n; ++i){
		p[i] = a[i]+p[i-1];
	}

	for (int i = 0; i < q; ++i){
		int x, y;
		cin >> x >> y;
		cout << p[n-x+y]-p[n-x] << "\n";
	}
}