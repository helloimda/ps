#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	

	cin >> n;
	vector<int>v;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());
	for (int i = 0; i < n-1; i++) {
		cout << v[i] << " \n";
	}
	cout << v[n-1];

}