#include <iostream>
using namespace std;
int main() {

  int a = 0;
  int sum = 0;
  cin >> a;
  
  for(int i =1; i < 10; i++){
    sum = a*i;
    cout << a << " * "<< i << " = " << sum<<"\n";
  }

}