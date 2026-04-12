#include <iostream>
using namespace std;

int main() {
	int h,m,addm = 0;
	int sin;

	cin >> h;
	cin >> m;
	cin >> addm;

	m = m+addm;

	if(m >59 ){
		sin = m/60;
		h = h +sin;
		m = m - (60*sin);

		if(h > 23){
			h = h-24;
		}

	}
	printf("%d %d",h,m);





	return 0;
}