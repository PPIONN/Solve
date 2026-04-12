
#include <iostream>

using namespace std;

int main() {

	int x = 28;
	int n =0;
	int a[31] = {0};

	for(int i =0; i<x; i++){
		cin >> n;
		a[n] = n;
	}

	for(int i=1; i<31; i++){

		if(a[i] == 0){
			cout <<i<<"\n";
		}
	}
	return 0;
}
