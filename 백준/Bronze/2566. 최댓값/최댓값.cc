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

  int arr[9][9];
  int check = -1;
  int check2 = 1;
  int check3 = 1;

  for(int j = 0; j < 9; j++){
	  for(int i = 0; i < 9; i++){

		  cin >> arr[j][i];
		  if(check < arr[j][i]){
			  check = arr[j][i];
			  check2 = j+1;
			  check3 = i+1;
		  }
	  }
  }

  cout << check<< "\n";
  cout << check2 << " " << check3;








}
