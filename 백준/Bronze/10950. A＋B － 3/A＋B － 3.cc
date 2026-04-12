#include <iostream>
using namespace std;
int main() {

  int a = 0;
  cin >> a;
  int b1[a];
  int b2[a];
  
  for(int i =0; i < a; i++){
    cin >> b1[i];
    cin >> b2[i];
  }
  for(int i =0; i < a; i++){
    cout << b1[i]+b2[i]<<"\n";
  }

}