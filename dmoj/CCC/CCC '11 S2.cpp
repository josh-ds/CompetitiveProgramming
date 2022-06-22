#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, count = 0;
	cin >> n;
	char response[n], answer[n];
	for (int i = 0; i < n; ++i){
		cin >> response[i]; 
	}
	for (int i = 0; i < n; ++i){
		cin >> answer[i];
	}
	for (int i = 0; i < n; ++i){
		if (response[i] == answer[i]){
			count++;
		}
	}
	cout << count;
}