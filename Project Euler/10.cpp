#include <bits/stdc++.h>

using namespace std;

int a[2000001];
long long cnt;

int main(){
	for (int i = 1; i < 2000001; ++i){
		a[i] = i;
	}

	set<int> primes;
	int divisor = 2;

	while (true){
		for (int i = 2*divisor; i <= 2000000; i+=divisor){
			a[i] = 0;
		}
		primes.insert(divisor);
		for (int i = divisor+1; i <= 2000000; ++i){
			if (a[i] != 0 && primes.count(a[i]) == 0){
				divisor = i;
				break;
			}
		}
		if (primes.count(divisor) == 1){
			break;
		}
	}

	for (int i = 2; i <= 2000000; ++i){
		if (a[i] != 0){
			cnt += a[i];
		}
	}

	cout << cnt;

}