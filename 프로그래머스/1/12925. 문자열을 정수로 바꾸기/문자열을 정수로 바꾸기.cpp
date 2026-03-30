#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<char> a(s.begin(), s.end());
    for (int i = 1; 0 < a.size();i*=10) {
        if (a.front() == '+') {
            if (a.back() == '+') {
                break;
            }
          answer += (a.back() - '0') * i; 
          a.pop_back();

        }
        else if(a.front() == '-') {
            if (a.back() == '-') {
                answer *= -1;
                break;
            }
            answer += (a.back() - '0') * i;
            a.pop_back();

        }
        else {
            answer += (a.back() - '0') * i;
            a.pop_back();
        }
    }

    return answer;
}