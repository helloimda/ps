#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    string tmp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        tmp.clear();
        cin >> tmp;
        char a = tmp.front();
        char b = tmp.back();
        cout << a<<b<<endl;
    }
    return 0;
}
