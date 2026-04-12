#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<int>v(8);

	string str = "";
	string subst = "";
	cin >> str;
	int count = 0;
	int v2 = 0;
	string v21 = "";
	v21 = str;

	int a =0;
	for(int i =7; i > 0; i--){
		v[0] = str.find("c=");
		v[1] = str.find("c-");
		v[2] = str.find("dz=");
		v[3] = str.find("d-");
		v[4] = str.find("lj");
		v[5] = str.find("nj");
		v[6] = str.find("s=");
		v[7] = str.find("z=");
		sort(v.begin(),v.end());
		if(v[i] != -1){
			v2 = str.find("dz=");
			if(v2 != -1){
				str.replace(v2,3,"111");
				i++;
				count++;
			}
			else{
				str.replace(v[i],2,"111");
				i++;
				count++;
			}
		}
	}
	for(int i =0; i < str.length();i++){
		if(str[i] != '1'){
			count++;
		}
	}

	cout << count;



}

