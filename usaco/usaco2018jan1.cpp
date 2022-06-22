#include <bits/stdc++.h>

using namespace std;

struct Rect{
	int x1;
	int x2;
	int y1;
	int y2;
};

int main(){
	//freopen("billboard.in", "r", stdin);
	//freopen("billboard.out", "w", stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);

	Rect mower, cow;
	cin >> mower.x1 >> mower.y1 >> mower.x2 >> mower.y2;
	cin >> cow.x1 >> cow.y1 >> cow.x2 >> cow.y2;

	if (mower.x1 > cow.x1 && mower.x2 < cow.x2 && mower.y1 > cow.y1 && mower.y2 < cow.y2){
		cout << 0 << "\n";
		return 0;
	} else if (mower.x1 > cow.x1 && mower.x2 < cow.x2){
		if (mower.y1 < cow.y1 && mower.y2 > cow.y2){
			cout << (mower.x2 - mower.x1)*(mower.y2-mower.y1) << "\n";
			return 0;
		} else {
			cout << (mower.x2-mower.x1)*max(mower.y2-cow.y2, cow.y1-mower.y1);
			return 0;
		}
		
	} else if (mower.y1 > cow.y1 && mower.y2 < cow.y2){
		if (mower.x1 < cow.x1 && mower.x2 > cow.x2){
			cout << (mower.x2 - mower.x1)*(mower.y2-mower.y1) << "\n";
			return 0;
		} else {
			cout << (mower.y2-mower.y1)*max(mower.x2-cow.x2, cow.x1-mower.x1);
			return 0;
		}
	} else {
		cout << (mower.x2 - mower.x1)*(mower.y2-mower.y1) << "\n";
		return 0;
	}

}