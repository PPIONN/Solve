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

  int a = 0;
  int b = 0;
  cin >> a;
  int count = a;
  char chr[101];

  string str;

  for(int i=0; i < a; i++){

	  //문자받기
	  cin >> str;
	  chr[0] = str[0];
	  b= str.length();
	  if(str.length() > 1){

		  int j;

		  for(j = 0; j < b; j++){
			  if(chr[0]!=str[j]){
				  chr[1] = str[j];
				  j++;
				  break;
				  //두 번째 문자 넣기
			  }
		  }
		  int z =1;
		  for(int k = j; k <b; k++){


			  if(chr[z]!=str[k]){//1번에 저장된 값과 j번째 값이 다르다면
				  for(int n = z-1; n>=0; n--){
					  if(chr[n] == str[k]){
						  count--;
						  k = b;
						  break;
					  }
					  if(n == 0){
						  chr[z+1] = str[k];
					  }
				  }
				  z++;
			  }



		  }




	  }






  }
  cout << count;
}
