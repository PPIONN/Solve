#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int a,b=0;
	int sum=0;
	cin >> a;
	int s[a];
	for(int i=0; i< a; i++){
		cin >> s[i];
	}
	cin >> b;

	for(int i =0; i<a; i++){
		if(s[i] == b){
			sum+=1;
		}
	}
	cout <<sum;

	return 0;
}