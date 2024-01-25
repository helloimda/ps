#include <iostream>
#include <string>
#include<vector>
using namespace std;

int gcd(int x, int y) {
    int tmp;
    while (y != 0) {
        tmp = x % y;
        x = y;
        y = tmp;
       }
    return x;
}

int lcm(int x, int y,int a) {
    return a * (x / a) * (y / a);
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int x,y,n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (x > y) {
            int a = gcd(x, y);
            cout << lcm(x, y, a)<<"\n";
        }
        else {
            int a = gcd(x, y);
            cout << lcm(x, y, a) <<"\n";
        }
    }
}