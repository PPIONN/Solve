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

	string a ="";
	int count = 0;
	cin >> a;
	for(int i =0; i < a.length();i++){
		if(a.at(i) >='A' && a.at(i)<= 'C' ){
			count +=3;
		}
		if(a.at(i) >='D' && a.at(i)<= 'F' ){
			count +=4;
		}
		if(a.at(i) >='G' && a.at(i)<= 'I' ){
			count +=5;
		}
		if(a.at(i) >='J' && a.at(i)<= 'L' ){
			count +=6;
		}
		if(a.at(i) >='M' && a.at(i)<= 'O' ){
			count +=7;
		}
		if(a.at(i) >='P' && a.at(i)<= 'S' ){
			count +=8;
		}
		if(a.at(i) >='T' && a.at(i)<= 'V' ){
			count +=9;
		}
		if(a.at(i) >='W' && a.at(i)<= 'Z' ){
			count +=10;
		}
	}
	cout << count;

}
