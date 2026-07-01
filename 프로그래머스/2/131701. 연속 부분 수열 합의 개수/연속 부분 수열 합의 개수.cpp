#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
        int n = elements.size();
    set<int> sums;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int len = 1; len <= n; len++) {
            sum += elements[(i + len - 1) % n];
            sums.insert(sum);
        }
    }

    answer = sums.size();
    return answer;
}