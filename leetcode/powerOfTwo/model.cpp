/***********************************************************************t
 * *
 t File Name: Reserse.cpp
 > Author: zhangyan
 > Mail: 1534589721@qq.com 
 > Created Time: Tue 23 Aug 2016 01:12:17 PM CST
 ************************************************************************/

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
	public:
		bool isPowerOfTwo(int n) {
			if(n <= 0) return false;
			/*int count = 0;
			for(int i = 0; i < 32; i++) {
				count += (n&0x1);
				n = (n>>1);
			}
			if(count != 1) return false;
			return true;*/
			return !(n&(n-1));
		}
};

int main()
{
	Solution A;
	if(A.isPowerOfTwo(2048)) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
	return 0;
}
