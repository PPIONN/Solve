#include <iostream>
#include <string>
#include <algorithm>
using namespace std;




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int ing = 0;
    string str = "";
    long long result = 0;
    cin >> result >> ing;
    if (result == 0) {
        cout << "0";
        return 0;
    }
    while (result > 0) {
        int pion = result % ing;
        if (pion < 10) {
            str += static_cast<char>(pion + '0');
        }
        else {
            str += static_cast<char>(pion - 10 + 'A');
        }
        result /= ing;
    
    }

    reverse(str.begin(), str.end());
    cout << str;



    return 0;
}