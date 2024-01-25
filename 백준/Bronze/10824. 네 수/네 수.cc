#include <iostream>
#include <string>
#include<vector>
#include <sstream>
using namespace std;

vector<string> split(string str, char Delimiter) {
    istringstream iss(str);             // istringstream에 str을 담는다.
    string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼

    vector<string> result;

    // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
    }

    return result;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str, answer;
    getline(cin, str);
    vector<string> result = split(str, ' ');

    string x = result[0] + result[1];
    string y = result[2] + result[3];
    cout << stoll(x) + stoll(y);
    return 0;
}