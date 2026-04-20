#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int>vtr;
    while(n){
        vtr.push_back(n%10);
        n/=10;
    }
    sort(vtr.begin(),vtr.end());
    int j =1;
    for (const auto& i : vtr){
        answer += (i*j);
        j*=10;
    }
    return answer;
}