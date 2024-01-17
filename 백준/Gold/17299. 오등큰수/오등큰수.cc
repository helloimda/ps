#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, a;
	vector<int> v(1000001), list;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		list.push_back(a);
		v[a]++;
	}
	int max = *max_element(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (v[list[i]] != max) {
				if (v[list[i]] < v[list[j]]) {
					cout << list[j] << ' ';

					break;
				}
				if (j == n - 1) {
					cout << "-1 ";
				}
			}
			else {
				cout << "-1 ";
				break;
			}
		}
	}
	cout << "-1";
}
