#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<climits>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int hap=0, tmp;
	for (int i = 0; i < 5; i++) {
		cin >> tmp;
		hap += tmp;
	}
	cout << hap;
}