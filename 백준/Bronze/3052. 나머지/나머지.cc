
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int A[10] = {0};
	int B[43] = {500};

	for(int i=0; i< 43;i++){
		B[i] = 500;
	}
	int count =0;
	for(int i = 0; i < 10; i++){
		cin >>A[i];
	}
	for(int i =0; i< 10;i++){
		 B[A[i]%42]= A[i]%42;
	}

	for(int i =0; i< 43; i++){
		if(B[i] !=500){
			count +=1;
		}
	}
	cout << count;







	return 0;
}
