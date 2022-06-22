#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6;
	cin >> x1 >> y1 >> x2 >> y2;
	cin >> x3 >> y3 >> x4 >> y4;
	cin >> x5 >> y5 >> x6 >> y6;

	if (x3 <= x1 && x4 >= x2){
		if (y3 <= y1 && y4 >= y2){
			cout << "NO";
			return 0;
		} else if (y4 >= y2 && y3 <= y2){
			y2 = y3;
		} else if (y3 <= y1 && y4 >= y1){
			y1 = y4;
		}
	} else if (y3 <= y1 && y4 >= y2){
		if (x4 >= x2 && x3 <= x2){
			x2 = x3;
		} else if (x3 <= x1 && x4 >= x1){
			x1 = x4;
		}
	}

	if (x6 >= x2 && x5 <= x1 && y6 >= y2 && y5 <= y1){
		cout << "NO";
	} else {
		cout << "YES";
	}
}