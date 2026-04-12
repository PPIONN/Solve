
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int a,b = 0;
	int x,y = 0;
	int s = 0;
	cin >> a >> b;
	int A[a+1] ={0};

	for(int i =1; i <a+1; i++){
		A[i] = i;
	}
	for(int i =0; i < b; i++){
		cin >> x >> y;
		while(y>x){
			s = A[x];
			A[x] = A[y];
			A[y] = s;
			y -=1;
			x +=1;
		}
	}
	for(int i =1; i<a+1;i++){
		cout << A[i]<< " ";
	}

	return 0;
}