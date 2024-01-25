#include <iostream>
#include<vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   
    int n, m,x;
    cin >> n>>m;

    vector<bool> check(m+1);
    if (n == 1) n = 2;
    for (int i = 2; i <= m; i++) {
        if (check[i]) continue;
        else {
            if (i>=n) cout << i << "\n";
            for (long long j = (long long)i * i; j <= m; j += i) {
                if (j > m) break;
                check[j] = true;
            }
        }
    }
}