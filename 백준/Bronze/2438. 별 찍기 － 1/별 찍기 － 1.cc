#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int a =0;
	cin >> a;

	for(int j =1; j <a+1; j++){
		for(int i =0; i< j; i++){
			cout << "*";
		}
		cout << "\n";
	}




	return 0;
}
