#include <iostream>

using namespace std;

int main(void) {
    int angle1;
    int angle2;
    cin >> angle1 >> angle2;
    
    int sum_angle = angle1 + angle2; int j = 0;for(int i =0; i<28;i++){  if(sum_angle >= 360*i){j = i;} else{sum_angle -= 360*j;break;} }
    cout << sum_angle << endl;
    return 0;
}