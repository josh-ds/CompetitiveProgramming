#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v = {1, 2};
	int x = 1, y = 2, temp;
	while (x+y < 4000000){
		v.push_back(x+y);
		temp = y;
		y = x + y;
		x = temp;
	}

	int sum = 0;

	for (int i = 0; i < v.size(); ++i){
		if (v[i]%2 == 0){
			sum += v[i];
		}
	}

	cout << sum;
}