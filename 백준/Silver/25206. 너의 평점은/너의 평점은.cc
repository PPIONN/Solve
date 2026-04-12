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

  double ad=0;
  string subj;
  string alpha;
  double add = 0;
  int ad2 = 0;
  int count =0;

  for(int i =0; i < 20; i++){
  cin >> subj >> ad >> alpha;
  double intg = 0;
  if(alpha == "A+"){
	  intg = 4.5;
  }
  else if(alpha == "A0"){
	  intg = 4.0;
  }
  else if(alpha == "B+"){
	  intg = 3.5;
  }
  else if(alpha == "B0"){
	  intg = 3.0;
  }
  else if(alpha == "C+"){
	  intg = 2.5;
  }
  else if(alpha == "C0"){
	  intg = 2.0;
  }
  else if(alpha == "D+"){
	  intg = 1.5;
  }
  else if(alpha == "D0"){
	  intg = 1.0;
  }
  else if(alpha == "F"){
	  intg = 0;
  }
  else{
	  intg = 5;
  }
  if(intg != 5){
	  ad2 += ad;
	  add+= ad * intg;
	  count++;
  }
  /*
  A+	4.5
A0	4.0
B+	3.5
B0	3.0
C+	2.5
C0	2.0
D+	1.5
D0	1.0
F	0.0
   */
  }
  add = add/ad2;

  cout << add;

}
