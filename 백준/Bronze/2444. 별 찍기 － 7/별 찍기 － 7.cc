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

	int a=0;
	int b= 0;
	cin >> a;
	b =a;
	for(int j = 0; j <a; j++){
		for(int i =1; i < b; i++){
			cout << " ";
		}b--;
		for(int i =0; i < 1+j;i++){
		cout << "*";
		}
		for(int i =0; i < j; i++){
			cout << "*";
		}
		cout << "\n";
	}
	int c =0;
	c = 1;
	for(int i =a-1; i>0; i--){
		for(int j=0;j < c; j++){
			cout <<" ";
		}c++;
		for(int j =0; j <(i*2)-1;j++){
			cout << "*";
		}
		cout << "\n";
	}

}

