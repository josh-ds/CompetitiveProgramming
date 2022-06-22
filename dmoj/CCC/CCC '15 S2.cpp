#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int j, a, count = 0;
	cin >> j >> a;
	char jerseys[j+1];
	for (int i = 1; i < j+1; ++i){
		cin >> jerseys[i]; 
	}

	for (int i = 0; i < a; ++i){
		char size;
		int num;
		cin >> size >> num;
		if (jerseys[num] == size || (size == 'S' && (jerseys[num] == 'M' || jerseys[num] == 'L')) || (size == 'M' && jerseys[num] == 'L')){
			count++;
			jerseys[num] = 'N';
		}
	}

	cout << count;
}