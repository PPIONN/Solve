#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> sounds = {"aya", "ye", "woo", "ma"};
    
    for (const string& word : babbling) {
        string str = word;
        string prev = "";
        bool flag = true;
        
        while (!str.empty()) {
            bool found = false;

            for (const string& s : sounds) {
                if (str.substr(0, s.size()) == s && prev != s) {
                    prev = s;
                    str = str.substr(s.size());
                    found = true;
                    break;
                }
            }
            if (!found) {
                flag = false;
                break;
            }
        }
        
        if (flag) answer++;
    }
    
    return answer;
}