#include <iostream>
#include <stack>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	set<int> s;
	int n,tmp;
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> tmp;
		s.insert(tmp);
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		auto iter = s.find(tmp); // tmp의 반복자를 반환
		if (iter != s.end()) cout << 1 << " ";
		else cout << 0 << " ";
	}
}