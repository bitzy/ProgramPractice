#Problem
Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Credits:
Special thanks to @ts for adding this problem and creating all test cases.

Subscribe to see which companies asked this question

#Solution
> 利用相邻主元素和非主元素配对的方法:
主元素计数为0.
假定第一个元素为主元素,计数为1;
逐个判断其后每个数,如果为非主元素,则主元素消去,计数减一;
如果为主元素,则计数加一;

最后得到主元素.在保证主元素存在的条件下,主元素计数总是大于0.

