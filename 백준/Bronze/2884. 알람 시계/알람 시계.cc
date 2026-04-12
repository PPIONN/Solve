#include <iostream>
using namespace std;

int main() {
	int h,m = 0;

	cin >> h;
	cin >> m;

	m = m-45;

	if(m < 0){
		h = h -1;
		m = 60 + m;
		if(h == -1){
			h = 23;
		}

	}
	printf("%d %d",h,m);





	return 0;
}