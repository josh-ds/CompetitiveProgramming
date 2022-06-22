#include <bits/stdc++.h>

using namespace std;

int n, k;

int main(){
	freopen("word.in", "r", stdin);
	freopen("word.out", "w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;

	string temp = "";
	int count = 0;

	for (int i = 0; i < n; ++i){
		string s;
		cin >> s;
		count += s.size();
		if (count > k){
			temp = temp.substr(0, temp.size()-1);
			cout << temp << "\n";
			temp = s + " ";
			count = s.size();
		} else {
			temp += s;
			temp += " ";
		}
	}

	cout << temp.substr(0, temp.size()-1);
}