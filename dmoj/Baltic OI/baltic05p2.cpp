#include <bits/stdc++.h>

using namespace std;


int n, m, cntL, cntR, last;

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);
	
	cin >> n >> m;

	char a[n];

	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}

	for (int i = n-1; i >= 0; --i){
		if (a[i] == ')') 
			cntR++;
		else if (a[i] == '(') 
			cntR--;
		else {
			last = i; 
			break;
		}
		if (cntR < 0) {
			cout << 0;
			return 0;
		}
	}

	for (int i = 0; i < last; ++i){
		if (a[i] == '(') 
			cntL++;
		else {
			cntL--;
		}
		if (cntL < 0){
			cout << 0;
			return 0;
		}
	}

	if (cntL <= cntR){
		cout << 0;
		return 0;
	}

	cout << 1 << "\n";

	if (m == 0){
		return 0;
	}

	for (int i = 0; i < m-1; ++i){
		cout << 1 << "\n";
	}

	cout << cntL-cntR;
}