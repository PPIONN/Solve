#include <iostream>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  string arr[5];
  int  max = 0;
  for(int i=0; i< 5; i++){
	  cin >> arr[i];
	  if(arr[i].length() >= max){
		  max = arr[i].length();
	  }
  }
  for(int j =0; j < max; j++){
	  for(int i = 0; i < 5; i++){
		  if (j >= arr[i].length()){
			  continue;
		  }
		  cout << arr[i][j];

	  }
  }
}
