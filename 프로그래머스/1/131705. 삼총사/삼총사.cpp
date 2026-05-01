#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int result = 0;
    for(int a = 0; a < number.size()-2; a++){
        for(int j = a+1; j < number.size()-1; j++){
            for(int i = j+1; i < number.size(); i++){
                result = number[a] + number[j] + number[i];
                if(result == 0){
                    ++answer;
                }
            }
        }
    }
    return answer;
}