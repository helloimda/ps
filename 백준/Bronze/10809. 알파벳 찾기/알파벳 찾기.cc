#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;
	vector<int>v(27, -1);
	int a;
	for (int i = 0; i < str.size(); i++) {
		a = str[i] - 'a';
		if (v[a] == -1) {
			v[a] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << v[i] << " ";
	}
}