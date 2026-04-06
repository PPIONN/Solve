#include <iostream>
#include <string>
#include <vector>

using namespace std;




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int ing = 1;
    int adum = 0;
    string str = "";
    long long result = 0;
    cin >> str >> ing;

    for (int i = 0; i < str.size(); i++) {
        if (str.at(i) >= '0' && str.at(i) <= '9') {
            adum = str.at(i) - '0';
        }
        else if (str.at(i) >= 'A' && str.at(i) <= 'Z') {
            adum = str.at(i) - 'A' + 10;
        }
        else if (str.at(i) >= 'a' && str.at(i) <= 'z') {
            adum = str.at(i) - 'a' + 10;
        }
        result = result * ing + adum;

    }

    cout << result;



    return 0;
}