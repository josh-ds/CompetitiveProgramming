#include <bits/stdc++.h>

using namespace std;

void find_divisors(long long n);
set<long long> prime_divisors;

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
	long long x;
	cin >> x;
	find_divisors(x);
	cout << *prime_divisors.rbegin();
}

void find_divisors(long long n){
	vector<long long> divisors;
	for (long long i = 1; i < floor(sqrt(n)) + 1; ++i){
		if (n%i == 0){
			divisors.push_back(i);
			divisors.push_back(n/i);
		}
	}

	sort(divisors.begin(), divisors.end());

	if (divisors.size() == 2){
		prime_divisors.insert(n);
	} else {
		for (int i = 1; i < divisors.size()-1; ++i){
			find_divisors(divisors[i]);
		}
	}
}