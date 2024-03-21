#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
vector <int> v;
int check(int i,int cnt) {
	cout << cnt - v[i] << " ";
	return 0;
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int num;
	for (int i = 0; i < 6; i++) {
		cin >> num;
		v.push_back(num);
	}
	check(0, 1);
	check(1, 1);
	check(2, 2);
	check(3, 2);
	check(4, 2);
	check(5, 8);
}
