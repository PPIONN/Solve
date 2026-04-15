#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    if(s.size()%2 == 0){
        answer += s.at((s.size()-1)/2);
        answer += s.at(((s.size()-1)/2)+1);
        return answer;
    }
    answer += s.at(s.size()/2);
    return answer;
}