#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int check = 0;
    string strchk = "";
    for(string i : seoul){
        if(i == "Kim"){
            strchk = to_string(check);
            answer = "김서방은 "+ strchk + "에 있다";
            break;
        }
        ++check;
    }
    return answer;
}