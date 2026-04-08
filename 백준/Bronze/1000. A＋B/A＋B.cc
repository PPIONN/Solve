#include <iostream>
#include <vector>

using namespace std;
int main() {
	
	vector<int>vtr;
	int a = 0;
	int b = 0;

	while (cin >> a >> b){
		vtr.push_back(a + b);
	}

	for(int i : vtr){
        cout << i << endl;
    }


    
}