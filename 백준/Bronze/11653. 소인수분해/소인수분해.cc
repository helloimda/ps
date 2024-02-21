#include <iostream>
#include<vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m, x;
    cin >> m;
    if (m == 1) return 0;
    vector<bool> check(m + 1);
    vector<int> v;
    for (int i = 2; i <= m; i++) {
        if (check[i]) continue;
        else {
            v.push_back(i);
            for (long long j = (long long)i * i; j <= m; j += i * 2) {
                if (j > m) break;
                check[j] = true;
            }
        }
    }
    for (int i = 0; i < v.size(); i++) {
        while (m % v[i] == 0) {
            cout << v[i] << "\n";
            m /= v[i];
        }
        if (m <= 1) return 0;
    }
}