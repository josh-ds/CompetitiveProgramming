#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie();

	int n, p;
	int mini = INT_MAX;
	cin >> n >> p;

	unordered_map<string, int> students;

	for (int i = 0; i < n; ++i){
		string name;
		int pos;
		cin >> name >> pos;

		students[name] = pos;
	}

	string winner;

	for (auto x : students){
		if (abs(x.second-p) < mini){
			winner = x.first;
			mini = abs(x.second-p);
		}
	}

	cout << winner;
}