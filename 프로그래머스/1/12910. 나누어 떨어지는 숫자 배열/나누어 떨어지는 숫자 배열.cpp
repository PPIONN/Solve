#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
	vector<int> answer;
	int check = 0;
	for (int i : arr) {
		if (i % divisor == 0) {
			answer.push_back(i);
			++check;
		}
	}
	if (check == 0) {
		answer.push_back(-1);
	}
	sort(answer.begin(), answer.end());
	return answer;
}