#include <iostream>
using namespace std;

int main() {
	int a=0;

	cin >>a;

	if( 90<= a && a <= 100) printf("A");
	else if(80 <= a && a <= 90) printf("B");
	else if(70 <= a && a<= 80) printf("C");
	else if (60 <= a && a<= 70) printf("D");
	else printf("F");
	return 0;
}