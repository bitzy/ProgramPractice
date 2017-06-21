/*************************************************************************
 *   > File Name: test2Sum.cpp
 *     > Author: zhangyan
 *       > Mail: 1534589721@qq.com 
 *         > Created Time: Tue 23 Aug 2016 11:03:48 AM CST
 *          ************************************************************************/

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
	class node{
		public:
			int idx;
			int num;		
			node(int idx, int num) :idx(idx), num(num){}
			bool operator < (const node& m) const {
				return num < m.num;
			}
	};	

	public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> res;
		int size = nums.size();
		if(size < 2) return res;

		vector<node> numnode;
		for(int i = 0; i < size; i++) {			
			node a(i, nums[i]);
			numnode.push_back(a);
		}
		sort(numnode.begin(), numnode.end());
		int start = 0, end = size-1;
		while(start < end) {
			if(numnode[start].num + numnode[end].num < target) {
				start++;
			} else if(numnode[start].num + numnode[end].num > target) {
				end--;
			} else {
				res.push_back(numnode[start].idx);
				res.push_back(numnode[end].idx);
				break;
			}
		}
		return res;
	}
	void print(vector<int>& res) {
		int size = res.size();
		for(int i = 0; i < size; i++) {
			cout << res[i] << " ";
		}
		cout << endl;
	}
};

int main()
{
	Solution A;
	int a[] = { 2,7, 11, 15 };
	vector<int> tmp;
	for(int i = 0; i < 4; i++) {
		tmp.push_back(a[i]);
	}
	int target = 9;
	vector<int> res = A.twoSum(tmp, target);
	A.print(res);
	return 0;
}
