#include <bits/stdc++.h>

using namespace std;


int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	
	int count = 0;
	int mc = 0, lc = 0;
	int largeM = 0, mediumL = 0;

	for (int i = 0; i < s.size(); ++i){
		if (s[i] == 'L'){
			lc++;
		} else if (s[i] == 'M'){
			mc++;
		}
	}

	for (int i = 0; i < lc; ++i){
		if (s[i] == 'M'){
			count++;
			mediumL++;
		} else if (s[i] == 'S'){
			count++;
		}
	}

	for (int i = lc; i < lc+mc; ++i){
		if (s[i] == 'L'){
			count++;
			largeM++;
		} else if (s[i] == 'S'){
			count++;
		}
	}
	
	cout << count-min(mediumL, largeM);
}

