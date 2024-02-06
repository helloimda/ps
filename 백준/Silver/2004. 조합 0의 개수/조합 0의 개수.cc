#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include <numeric>
using namespace std;

long long c5(long long n) {
	long long cnt=0;
	for (long long i = 2; i <= n; i *= 2) {
		cnt += n / i;
	}
	return cnt;
}
long long c2(long long n) {
	long long cnt=0;
	for (long long i = 5; i <= n; i *= 5) {
		cnt += n / i;
	}
	return cnt;
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long n, r;

	cin >> n >> r;
	long long cnt5=0, cnt2=0;
	cnt5 = c5(n) - c5(r) - c5(n - r);
	cnt2 = c2(n) - c2(r) - c2(n - r);
	
	if (cnt5 > cnt2) cout << cnt2;
	else cout << cnt5;
}