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
		
	int n,tmp,tmp2;
	cin >> n;
	if (n<10){
		cout << 1;
		return 0;
	}
	tmp = n / 18;
	tmp2 = n % 18;
	if (tmp2 == 0) {
		cout << tmp * 2;
		return 0;
	}
	
	if (tmp2 >= 10 && tmp2 <= 17) {
		if (tmp2 % 2 == 1) {
			cout << tmp*2 + 3;
		}
		else {
			cout << tmp*2 + 2;
		}
	}
	else {
		cout << tmp*2 + 1;
	}
	

}