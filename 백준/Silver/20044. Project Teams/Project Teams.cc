#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<climits>
using namespace std;
vector<int> v;


int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n,tmp,min=200001;

	cin >> n;

	for (int i = 0; i < 2 * n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	int a = v.size();
	for (int i = 0; i < a/2; i++) {
		tmp = v[i] + v[a - i-1];
		if (min > tmp) min = tmp;
	}
	cout << min;
}