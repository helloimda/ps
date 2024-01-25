#include <iostream>
#include <string>
#include<vector>
using namespace std;
int cnt = 0;

int sosu(int x,int i) {
    if (x == i) { cnt++; return 0; }
    if (x % i != 0) return sosu(x, i + 1);
    else return 0;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int x, n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > 1) {
            sosu(x, 2);
        }
    }
    cout << cnt;
}