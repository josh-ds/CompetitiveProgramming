#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie();

	string s;
	cin >> s;

	string vowels = "aeiou";
	bool current, success = true;

	if (vowels.find(s[0]) != string::npos){
		current = true;
	} else {
		current = false;
	}

	for (int i = 1; i < s.size(); ++i){
		if ((vowels.find(s[i]) != string::npos && current == false) || (vowels.find(s[i]) == string::npos && current == true)){
			current = !current;
		} else {
			success = false;
			break;
		}
	}

	if (success){
		cout << "YES";
	} else {
		cout << "NO";
	}
}