#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    if (phone_number.size() > 4){
        for(int i = 0; i < phone_number.size()-4;i++){
                answer = answer + "*";
        }
    }
    for(int i = phone_number.size()-4; i <= phone_number.size()-1; i++){
        answer = answer + phone_number.at(i);
    }
    return answer;
}