#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;
    answer = 1+2+3+4+5+6+7+8+9;
    for(int i : numbers){
        answer-=i;
    }
    
    return answer;
}