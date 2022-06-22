#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie();

	int n;
	cin >> n;

	vector<int> primes = {2};
	int count = 1;
	bool flag = true;

	for (int i = 3; count < n; i+=2){
		for (int k = 0; k < primes.size(); ++k){
			if (i%primes[k] == 0){
				flag = false;
				break;
			}
		}
		if (flag){
			count++;
			primes.push_back(i);
		}

		flag = true;
	}

	cout << primes[n-1];
}