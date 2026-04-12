#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int a[27] = {0};
	int max = 0;
	int max2 = 0;
	string str = "";
	cin >> str;
	for(int i =0; i < str.length();i++){
		if(str[i] >= 65 && str[i] <=90){
			int sua = str[i];
			sua -=65;
			a[sua]++;
		}
		else if(str[i] >= 97 && str[i] <=122){
			int sua = str[i];
			sua -=97;
			a[sua]++;
		}
	}
	for(int i =0; i < 26; i++){

		if(a[i] > max){
			max = a[i];
			max2 = i;
		}
	}
	for(int i =0; i <26;i++){
		if(max==a[i] && max2 != i){
			cout << "?";
			return 0;
		}
	}
	max2+=65;
	char ex =max2;

	cout << ex;


}

