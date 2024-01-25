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
    

    int x,y;
    cin >> x >> y;

    if (x > y) {
        int a = gcd(x, y);
        cout << a<<endl << lcm(x,y,a);
    }
    else {
        int a = gcd(x, y);
        cout << a << endl << lcm(x, y, a);
    }
    


    
}