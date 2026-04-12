#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	char a[1000];

	int x,y = 0;

	cin >> x;

	for(int i =0; i< x; i++){
		cin >> a;
		y = strlen(a);
		cout<< a[0] << a[y-1]<<"\n";
	}





	return 0;
}
