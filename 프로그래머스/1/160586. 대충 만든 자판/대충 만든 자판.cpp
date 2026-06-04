#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    vector<int> v(26, 9999);
    
    for (int i = 0; i < keymap.size(); i++) {
        string s = keymap[i];
        for (int j = 0; j < s.length(); j++) {
            int cur = s[j] - 'A';
            v[cur] = min(v[cur], j + 1);
        }
    }
    
    for (int i = 0; i < targets.size(); i++) {
        string t = targets[i];
        int sum = 0;
        bool flag = true;
        
        for (int j = 0; j < t.length(); j++) {
            int cur = t[j] - 'A';
            if (v[cur] == 9999) {
                flag = false;
                break;
            }
            sum += v[cur];
        }
        
        if (flag) answer.push_back(sum);
        else answer.push_back(-1);
    }
    
    return answer;
}