#include <iostream>
#include <string>

using namespace std;

string str, ans;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str;
    int so, dae, num, space;
    while (getline(cin, str)) {
        so = dae = num = space = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] >= 'a' && str[i] <= 'z') so++;
            else if (str[i] >='A' && str[i] <= 'Z') dae++;
            else if (str[i] >= '0' && str[i] <= '9') num++;
            else if (str[i] == ' ') space++;
        }
        cout << so << " " << dae << " " << num << " " << space << "\n";
    }
}