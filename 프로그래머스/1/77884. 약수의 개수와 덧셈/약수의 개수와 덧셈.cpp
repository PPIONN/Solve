#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for(int i = left; i <= right; i++){
        vector<int>vtr;
        bool check = false;
        for(int j = 1; j*j <= i; j++){
            if(i%j == 0){
                vtr.push_back(j);
                if(j*j == i){
                    check = true;
                }
            }
        }
        int endsize = (vtr.size()*2);
        if(check){endsize -=1;};
        if(endsize == 2){
            answer += i;
        }
        else if(endsize % 2 == 0){
            answer += i;
        }
        else {
            answer -= i;
        }
        
    }
    return answer;
}