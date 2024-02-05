#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector <int>su;

    int c;
    while (1) {
        cin >> c;
        su.push_back(c);
        if (c == 0) break;
        
    }
    
    int m = *max_element(su.begin(), su.end());
    vector<int>sosu;
    vector<bool> check(m+1);
    sosu.push_back(2);
    for (int i = 3; i <= m; i += 2) {
        if (check[i]) continue;
        else {
            sosu.push_back(i);
            for (long long j = (long long)i * i; j <= m; j += i * 2) {
                if (j > m) break;
                check[j] = true;
            }
        }
    }


    int cnt, tmp, min = 0, max, b,flag=1,sucnt=0;
    int a;
    while (1) {
        a = su[sucnt++];
        if (a == 0) return 0;
        max = upper_bound(sosu.begin(), sosu.end(), a) - sosu.begin() - 1;
        tmp = max;
        min = 0;
        while (min <= max) {
            flag = 1;
            b = (sosu[min] + sosu[max]);
            if (b < a) {
                min++;
                continue;
            }
            else if (b > a) {
                max = tmp--;
                continue;
            }
            else if (b == a) {
                cout << a << " = " << sosu[min] << " + " << sosu[max] << "\n";
                flag = 0;
                break;
            }
        }
        if (flag) cout << "Goldbach's conjecture is wrong.\n";
    }
}