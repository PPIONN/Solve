#include <iostream>

using namespace std;
int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int a=0;
  cin >> a;
  int b1[a],b2[a];
  for(int i =0; i< a; i++){
    cin >>b1[i] >>b2[i];
    cout << "Case #"<<i+1<<": " <<b1[i]<<" + "<<b2[i]<<" = "<<b1[i]+b2[i]<<"\n";
  }
  
}