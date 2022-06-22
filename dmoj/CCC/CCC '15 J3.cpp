#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s, output = "";
	cin >> s;
	string alphabet = "abcdefghijklmnopqrstuvwxyz", vowels = "aeiou";

	for (int i = 0 ; i < s.size(); ++i){
		if (vowels.find(s[i]) == string::npos){
			output += s[i];
			int index = alphabet.find(s[i]);
			for (int k = 1; k < 26; ++k){
				if (vowels.find(alphabet[max(index-k, 0)]) != string::npos){
					output += alphabet[index-k];
					break;
				}
				if (vowels.find(alphabet[min(index+k, 25)]) != string::npos){
					output += alphabet[index+k];
					break;
				}
			}
			if (s[i] == 'z'){
				output += 'z';
			} else {
				for (int k = index+1; k < 26; ++k){
					if (vowels.find(alphabet[k]) == string::npos){
						output += alphabet[k];
						break;
					}
				}
			}
		} else {
			output += s[i];
		}
	}

	cout << output;
}