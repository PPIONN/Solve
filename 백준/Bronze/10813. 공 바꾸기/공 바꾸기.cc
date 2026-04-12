
#include <iostream>

using namespace std;

int main() {


	int a,b,c,d =0;
	int x =0;
	cin >> a >> b;

	int A[a];
	for(int i =0; i< a; i++){
		A[i] = i+1;
	}

	for(int i=0; i< b; i++){
		cin >> c >> d;

		x = A[c-1];
		A[c-1] = A[d-1];
		A[d-1] = x;
	}
	for(int i =0; i< a; i++){
		cout << A[i]<< " ";
	}

	return 0;
}
