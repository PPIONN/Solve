#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string a = "";
	int count = 0;
	cin >> a;

	for(int i =0; i < a.length()/2;i++){
		if(a[a.length()-1-i] != a[i]){
			count++;
		}
	}

	if(count != 0){
		cout << 0;
	}
	else{
		cout << 1;
	}


}

