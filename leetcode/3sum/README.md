# leetcode - 3Sum
Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note: The solution set must not contain duplicate triplets.

For example, given array S = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]

#题解
将3sum分解为"1sum+2sum":对原数组进行排序,排序后选出第一个元素,剩下的元素使用2sum算法.
得到的结果需要查重.

#复杂度分析
排序时间复杂度为O(nlogn),两重循环时间复杂度为O(n^2).使用哈希表(字典)实现,空间复杂度为O(n).

#2sum算法
```cpp
int start = i+1, end = num.size()-1;
int target = -nums[i];
while(start < end) {
	if(start > i+1 && nums[start -1] == nums[start]) {
		start++;
		continue;
	}
	if(nums[start] + nums[end] < target) {
		start++;
	} else if(nums[start] + nums[end] > target) {
		end--;
	} else {
		vector<int> triple;
		triple.push_back(nums[i]);
		triple.push_back(nums[start]);
		triple.push_back(nums[end]);
		result.push_back(triple);
		start++;
	}
}
```
