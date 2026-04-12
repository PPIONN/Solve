
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

	string abc = "";
	int first = 0;
	cin >> first;
	
	string str[first]  = {};
	int fr[first] = {};
	
	for(int i =0; i < first; i++){
		cin >> fr[i];
		cin >> str[i];
	}
	for(int i =0; i < first; i++){
		for(int j=0; j < str[i].length();j++){
			for(int k =0; k < fr[i];k++){
				cout << str[i].at(j);
			}
		}cout << "\n";
	}


}
