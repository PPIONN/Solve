#include <iostream>
using namespace std;
int main() {

  int x, n=0;
  int sum =0;
  cin >> x;
  cin >> n;
  int a[n];
  int b[n];

  for(int i =0; i < n; i++){
    cin >>a[i] >> b[i];
    sum = a[i] * b[i]+sum;
  }
  if(sum == x){
    
    cout <<"Yes";
  }
  else{
    cout <<"No";
  }
  
  

}