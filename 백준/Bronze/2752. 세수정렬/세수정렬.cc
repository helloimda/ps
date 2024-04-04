#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int tmp;
	vector<int> v;
	for (int i = 0; i < 3; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < 3; i++) {
		cout << v[i] << " ";
	}
}