#include <bits/stdc++.h>

using namespace std;

int main(){
	for (int i = 1; i < 1000; ++i){
		for (int k = i+1; k < 1000; ++k){
			if (sqrt(i*i + k*k) == floor(sqrt(i*i + k*k)) && i + k + sqrt(i*i + k*k) == 1000){
				int product = (sqrt(i*i + k*k)*i*k);
				cout << product;
				break;
			}
		}
	}
}