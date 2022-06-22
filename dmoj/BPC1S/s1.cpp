#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	vector<int> questions = {};
	map<int, int> cnts;

	for (int i = 0; i < n*n; ++i){
		int b;
		cin >> b;
		if (b%2 == 0){
			if (cnts[b] >= 1){
				cnts[b]++;
			} else {
				cnts[b] = 1;
			}
		}
	}

	for (auto x : cnts){
		if (x.second%2 == 1){
			questions.push_back(x.first/2);
		}
	}

	sort(questions.begin(), questions.end());

	for (int i = 0; i < n-1; ++i){
		cout << questions[i] << " ";
	}
	cout << questions[n-1] << "\n";
	return 0;
}