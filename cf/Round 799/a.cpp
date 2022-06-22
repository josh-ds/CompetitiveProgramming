#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i){
		int a;
		cin >> a;
		int count = 0;
		int b;
		cin >> b;
		if (b > a){
			count++;
		}
		int c;
		cin >> c;
		if (c > a){
			count++;
		}
		int d;
		cin >> d;
		if (d > a){
			count++;
		}
		cout << count << "\n";
	}
}