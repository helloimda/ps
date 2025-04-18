#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {

    int n;
    int v[1000001];
    cin >> n;
    v[1]=0;
    
    for (int i=2; i<=n; i++){

        v[i] = v[i-1] + 1;

        if(i%3==0){
            v[i] = min(v[i], v[i/3]+1);
        }
        if(i%2==0){
            v[i] = min(v[i], v[i/2]+1);
        }
    }
    cout << v[n];

    
}