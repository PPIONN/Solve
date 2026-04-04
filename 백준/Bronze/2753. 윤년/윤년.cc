#include <iostream>
using namespace std;

int main() {
	int a = 0;

	cin >> a;

	if( a <= 4000 && a >=1 ){
		if(a%4 == 0 && a%100 != 0){
			printf("1");
		}
		else if(a%100 == 0 && a%400 != 0){
			printf("0");
		}
		else if(a%100 == 0 && a%400 == 0){
			printf("1");
		}

		else(printf("0"));

	}
	return 0;
}