# problem
Given an integer, write a function to determine if it is a power of two.

--- 
## solution 1
if n <= 0 return false;
else 
	统计n从二进制位0-31位中1出现的次数,有且仅有一个,return true;
	否则返回 false;

## solution 2
n <= 0 return false;
n是2的次方数,则n最高二进制位为1,那么(n-1)在低于n的最高二进制位的其他位均为1.
则n&(n-1)必须为0.
if(n&(n-1) == 0) return true;
else return false;
