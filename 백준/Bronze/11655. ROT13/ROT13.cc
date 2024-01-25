#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str;
    getline(cin, str);
    

    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            if ((str[i] + 13) > 'Z') {
                str[i] = 'A' + 13 - ('Z' - str[i]+1);
            }
            else str[i] += 13;
        }
        if (str[i] >= 'a' && str[i] <= 'z') {
            if ((str[i] + 13) > 'z') {
                str[i] = 'A' + 13 - ('Z' - str[i]+1);
            }
            else str[i] += 13;
        }
    }

    for (int i = 0; i < str.size(); i++) {
        cout << str[i];
    }
}