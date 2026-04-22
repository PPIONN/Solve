
using namespace std;

long long solution(int price, int money, int count){
    long long answer = -1;
    long long max = 0;
    
    for(int i = price, a = 1; a <= count; a++ ){
        max += i;
        if(a != count)  i+=price;
    }
    if(money >= max) return 0;
    
    answer = max - money;
    return answer;
}