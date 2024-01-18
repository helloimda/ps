#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a;
	string str;
	vector<int>answer(28);
	cin >> str;
	
	for (int i = 0; i < str.size(); i++) {
		if (97 <= str[i] && str[i] <= 122) {
			a = str[i] - 97;
			answer[a]++;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << answer[i] << " ";
	}
}