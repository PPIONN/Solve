#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int exit = 2;
    int seed1 = 0;
    int seed2 = 1;
    while(exit){
        answer = (seed1 + seed2) % 1234567;
        if (n == exit) break;
        seed1 = seed2;
        seed2 = answer;
        exit++;
        
    }
    return answer;
}