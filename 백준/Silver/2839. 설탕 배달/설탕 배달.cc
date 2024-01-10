#include<iostream>
#include <limits.h>
using namespace std;

int main()
{
	int n,min= INT_MAX,cnt=0,tmp=0;
	cin >> n;

	for (int i = 3; i <= n; i += 3) {
		tmp = n - i;
		if (tmp % 5 == 0) {
			cnt = (i / 3 + tmp / 5);
			if (cnt < min) {
				min = cnt;
			}
		}
	}

	for (int i = 5; i <= n; i += 5) {
		tmp = n - i;
		if (tmp % 3 == 0) {
			cnt = (i / 5 + tmp / 3);
			if (cnt < min) {
				min = cnt;
			}
		}
	}
	if (min != INT_MAX) cout << min;
	else cout << -1;
}
