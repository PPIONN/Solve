
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int a,b,c,d,e=0;

	cin >> a >> b;

	int A[a];

	for(int i =0; i< a;i++){
		A[i] = 0;
	}
	for(int i =0; i< b; i++){
		cin >> c >> d >> e;
		int C= c-1;
		for(int j=C; j<d;j++){
			A[j] = e;
		}
		if(c == d){
			A[C] = e;
		}
	}
	for(int i = 0; i<a; i++){
		cout << A[i] << " ";
	}


	return 0;
}