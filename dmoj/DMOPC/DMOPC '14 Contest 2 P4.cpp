#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int a[n+1] = {};
	int temp;
	for (int i = 1; i <= n; ++i){
		cin >> temp;
		a[i] = a[i-1] + temp;
	}

	int q;
	cin >> q;
	for (int i = 0; i < q; ++i){
		int start, end;
		cin >> start >> end;
		cout << a[end+1]-a[start] << "\n";
	}
}