#include <bits/stdc++.h>

using namespace std;

int main(){
	int ans = 10000;

	for (int i = 100; i < 1000; ++i){
		for (int k = 100; k < 1000; ++k){
			string s1 = to_string(i*k);
			string s2 = s1;
			reverse(s2.begin(), s2.end());
			if (s1 == s2){
				ans = max(ans, i*k);
				cout << i << " " << k << "\n";
			}
		}
	}

	cout << ans;
}