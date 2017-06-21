/*************************************************************************
  > File Name: modle.cpp
  > Author: zhangyan
  > Mail: 1534589721@qq.com 
  > Created Time: Wed 24 Aug 2016 10:48:53 AM CST
 ************************************************************************/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
	public:
		int majorityElement(vector<int>& nums) {
			int size = nums.size();

			int major = nums[0];
			int counter = 1;
			for(int i = 1; i < size; i++) {
				if(!counter) {
					major = nums[i];
					counter = 1;
					continue;
				}

				if(nums[i] != major) counter--;
				else counter++;
			}
			return major;
		}

};
int main()
{
	Solution A;
	int a[] = {2,2,3,2,4,2,3,5,2,2};
	vector<int> p;
	for(int i = 0; i < 10; i++) {
		p.push_back(a[i]);
	}
	cout << A.majorityElement(p) << endl;
	return 0;
}
