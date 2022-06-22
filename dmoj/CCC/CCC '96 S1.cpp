#include <bits/stdc++.h>

using namespace std;

void find_divisor_sum(int number){
	int sum = 1;
	for (int i = 2; i < floor(sqrt(number))+1; ++i){
		if (number%i == 0){
			if (i == sqrt(number)){
				sum += sqrt(number);
			} else {
				sum += i;
				sum += number/i;
			}
		}
	}
	if (sum == number){
		cout << number << " is a perfect number.\n";
	} else if (sum < number){
		cout << number << " is a deficient number.\n";
	} else {
		cout << number << " is an abundant number.\n";
	}
}

int main(){
	cin.sync_with_stdio(0);
	cin.tie();

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i){
		int k;
		cin >> k;
		find_divisor_sum(k);
	}
}