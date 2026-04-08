#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
	vector<int> answer;

	for (int i : arr) {
		if (i % divisor == 0) {
			answer.push_back(i);
		}
	}
	
	if (answer.empty()) {
		return { -1 };
	}

	for (int i = 0; i < answer.size() - 1; i++) {
		for (int j = i + 1; j < answer.size(); j++) {
			if (answer[i] > answer[j]) {
				int temp = answer[i];
				answer[i] = answer[j];
				answer[j] = temp;
			}
		}
	}

	return answer;
}