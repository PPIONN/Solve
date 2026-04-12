#include <iostream>
using namespace std;
int main() {
  int d1, d2, d3 = 0;

  cin >> d1;
  cin >> d2;
  cin >> d3;
  if (d1 == d2 && d1 == d3 && d2 == d3) {
    cout << d1 * 1000 + 10000;
  }

  if ((d1 != d2 && d1 == d3) || (d2 != d3 && d2 == d1) ||
      (d3 != d1 && d3 == d2)) {
    if (d1 == d2 && d1 != d3) {
      cout << d1 * 100 + 1000;
    }
    if (d1 == d3 && d1 != d2) {
      cout << d1 * 100 + 1000;
    }
    if (d2 == d3 && d1 != d3) {
      cout << d3 * 100 + 1000;
    }
  }

  if (d1 != d2 && d1 != d3 && d2 != d3) {
    if (d1 > d2 && d1 > d3) {
      cout << d1 * 100;
    }
    if (d2 > d1 && d2 > d3) {
      cout << d2 * 100;
    }
    if (d3 > d1 && d3 > d2) {
      cout << d3 * 100;
    }
  }

}