/*************************************************************************
  > File Name: 3sum.cpp
  > Author: zhangyan
  > Mail: 1534589721@qq.com 
  > Created Time: Tue 23 Aug 2016 09:15:43 AM CST
 ************************************************************************/

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {

	public:
		Solution(){}
		vector<vector<int> > threeSum(vector<int>& nums) {
			vector<vector<int> > res;

			sort(nums.begin(), nums.end());
			int size = nums.size();
			if(size < 3) return res;

			for(int i = 0; i < size-2; i++) {
				if(nums[i] > 0) break;
				if(i>0 && nums[i] == nums[i-1]) continue;

				//num1;
				vector<int> triplet;
				triplet.push_back(nums[i]);

				//two sum: a+b=target;
				int target = -nums[i];
				int start = i+1, end = size-1;
				while(start < end) {
					if(start > i+1 && nums[start] == nums[start-1]) {
						start++;
						continue;
					}
					if(nums[start] + nums[end] < target) {
						start++;
					} else if(nums[start] + nums[end] > target) {
						end--;
					} else {
						triplet.push_back(nums[start]);
						triplet.push_back(nums[end]);
						res.push_back(triplet);
						triplet.pop_back();
						triplet.pop_back();
						start++;
					}
				}
				triplet.pop_back();
			}
			return res;
		}

		void printres(vector<vector<int> >num) {
			int size = num.size();
			for(int i = 0; i < size; i++) {
				for(int j = 0; j < 3; j++) {
					cout << num.at(i)[j] << " ";
				}
				cout << endl;
			}
		}

};

int main()
{	
	vector<int> num;
	int s[] = {-1, 0, 1, 2, -1, -4};
	for(int i = 0; i < 6; i++) {
		num.push_back(s[i]);
	}

	Solution a;
	vector<vector<int> > res = a.threeSum(num);
	a.printres(res);

	return 0;
}

