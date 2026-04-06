#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long n = num;
    if (num == 1) {
        return 0;
    }
    while (1) {
        if (n % 2 == 0) {
            n = n / 2;
            ++answer;
            if (n == 1) break;
        }
        else {
            n = n * 3 + 1;
            ++answer;
            if (n == 1) break;
        }
        if (answer == 500) {
            return -1;
        }
    }

    return answer;
}