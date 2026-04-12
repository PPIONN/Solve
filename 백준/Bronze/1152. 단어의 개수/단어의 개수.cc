
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
	int count= 1;
	getline(cin,a);

	for(int i =0; i < a.length();i++){
		if(a[i] == ' '){
			count++;
		};
	}
	if(a[0] == ' '){
		count--;
	}
	if(a[a.length()-1] == ' '){
		count--;
	}
	cout << count;
}
