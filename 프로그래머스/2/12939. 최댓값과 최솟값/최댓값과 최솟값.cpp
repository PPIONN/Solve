#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string solution(string s) {
    istringstream ss(s);
    vector<int> nums;
    int n;
    
    while (ss >> n)
        nums.push_back(n);
    
    int mn = *min_element(nums.begin(), nums.end());
    int mx = *max_element(nums.begin(), nums.end());
    
    return to_string(mn) + " " + to_string(mx);
}