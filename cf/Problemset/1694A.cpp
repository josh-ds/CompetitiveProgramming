#include <bits/stdc++.h>

using namespace std;

int t;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;

	for (int i = 0; i < t; ++i){
		int a, b;
		cin >> a >> b;
		int length = a+b;
		if (a > b){
			for (int j = 0; j < length; ++j){
				if (j%2 == 0 && a > 0){
					cout << '0';
					a--;
				} else if (j%2 == 1 && b > 0){
					cout << '1';
					b--;
				} else {
					cout << '0';
				}
			}
		} else {
			for (int j = 0; j < length; ++j){
				if (j%2 == 1 && a > 0){
					cout << '0';
					a--;
				} else if (j%2 == 0 && b > 0){
					cout << '1';
					b--;
				} else {
					cout << '1';
				}
			}
		}
		cout << "\n";
	}
}