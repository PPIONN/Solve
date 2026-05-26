#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int check = 0;
    for (int s : section) {
        if (s <= check) continue;
        check = s + m - 1;
        answer += 1;
    }
    
    return answer;
}