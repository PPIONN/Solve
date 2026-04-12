#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int x =0;
  int y =0;

  cin >> x >> y;

  int** a = new int*[y];
  int** ab = new int*[y];
  for (int i = 0; i < y; ++i) {
      a[i] = new int[x]();
      ab[i] = new int[x]();
  }

  for(int i =0; i < 2;i++){
	  for(int k = 0; k < y; k++){
		  for(int j = 0; j < x; j++){
			  cin >> a[k][j];
			  ab[k][j] =ab[k][j]+ a[k][j];

		  }
	  }
  }

  for(int k = 0; k <y; k++){
	  for(int j = 0; j< x; j++){
		  cout << ab[k][j];
		  if(j < x-1){
			  cout << " ";
		  }
	  }
	  cout << "\n";
  }

  for (int i = 0; i < y; ++i) {
      delete[] a[i];
      delete[] ab[i];
  }
  delete[] a;
  delete[] ab;

}
