# 题目描述
Given an array of integers, return indices of the two numbers such that they add up to a specific target.


You may assume that each input would have exactly one solution.

Example:
Given nums = [2, 7, 11, 15], target = 9,

	  Because nums[0] + nums[1] = 2 + 7 = 9,
	  return [0, 1].

# 解题思路
自定义类:存储数据与数据坐标;
需要重载<运算符;
使用c++的sort进行排序.
