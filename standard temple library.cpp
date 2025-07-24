#include <iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> nums={1,2,3,4,5, 6,7,8 };
	nums.push_back(9);
		for(int n : nums){
			cout<<n<<" ";
		}
		return 0;
}