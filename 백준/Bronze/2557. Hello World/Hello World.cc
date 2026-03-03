#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;


struct Wolrdstr {

	void HelloWorld() {
		cout << "Hello World!";
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	Wolrdstr str;

	str.HelloWorld();

}