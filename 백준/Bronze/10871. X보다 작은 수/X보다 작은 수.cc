#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);


	int a,b = 0;
	cin >> a >> b;

	int z[a];

	for(int i =0; i< a; i++){
		cin >> z[i];
	}

	for(int i =0; i< a; i++){
		if(z[i] < b){
			cout << z[i] << " ";
		}
	}


	return 0;
}