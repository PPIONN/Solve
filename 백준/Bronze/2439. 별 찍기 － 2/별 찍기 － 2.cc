#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int A,a,b=0;

	cin >> A;
	a= A-1;

	for(int j = 0; j<A; j++){
		for(int i = a; i>j; i--){
			cout <<" ";
		}
		b = b+1;
		for(int k = 0; k <b; k++){
			cout <<"*";
		}
		cout<<"\n";


	}

	return 0;
}
