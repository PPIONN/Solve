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


	string str;
	cin >> str;
	char a = 'a';
	int b[26];
	for(int i =0; i < 26; i ++){
		b[i] = -1;
	}
	int j =0;
	for(int i =0 ;i < str.length(); i++){
		for(j =0; j < 26; j++){
			if(str[i] == a+j){
				if(b[j] == -1){
					b[j] = i;
				}
			}
		}
	}

	for(int i =0; i<26; i++){
		cout << b[i]<< " ";
	}



}
