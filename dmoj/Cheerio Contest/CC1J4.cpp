#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie();

	int n, d, index = 0;
	cin >> n >> d;

	unordered_map<int, pair<int, int>> lights;
	int p[n];

	for (int i = 0; i < n; ++i){
		int lightLoc;
		cin >> lightLoc;
		p[i] = lightLoc;
		cin >> lights[lightLoc].first >> lights[lightLoc].second;
	}

	long long t = p[0];


	for (int loc = p[0]; loc < d;){
		if (t%(lights[loc].first+lights[loc].second) >= lights[loc].first){
			
		} else {
			t += lights[loc].first - t%(lights[loc].first+lights[loc].second);
		}
		if (index < n-1){
			loc += p[index+1] - p[index];
			t += p[index+1] - p[index];
			index++;
		} else {
			loc = d;
			t += d-p[index];
		}
		
	}

	cout << t;
}