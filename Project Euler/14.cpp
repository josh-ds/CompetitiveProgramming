#include <bits/stdc++.h>

using namespace std;

int max_chain = 1;
int max_n = 0;

int collatz(long long n, int cnt){
	if (n == 1){
		return cnt;
	} else {
		if (n%2 == 0){
			n /= 2;
			cnt++;
			collatz(n, cnt);
		} else {
			n = 3*n + 1;
			cnt++;
			collatz(n, cnt);
		}
	}
}

int main(){
	for (int i = 2; i < 1000000; ++i){
		int c = collatz(i,0);
		if (c > max_chain){
			max_chain = c;
			max_n = i;
		}
	}

	cout << max_n;
}