#include <iostream>
using namespace std;


int main() {
	int a;
	char b[300];
	int sum[3];
	int result[3];
	int value = 1;
	int PPion = 0;
	cin >> a;
	cin.ignore();
	cin >>b;
	for(int i =0; i <3; i++){
		sum[i] = b[i] -'0';
	}
	for(int i =2; i >= 0; i--){
		result[i] = sum[i]* a;
		PPion += result[i]* value;
		value*=10;
		cout <<result[i]<<endl;
	}

	cout << PPion<<endl;
/*
472
385

2360
3776
1416
181720
 *
 */



	return 0;
}
