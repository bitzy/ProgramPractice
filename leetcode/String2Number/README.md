# String2Number
Implement atoi to convert a string to an integer.
Hint: Carefully consider all possible input cases. If you want a challenge, please do not see below and ask yourself what are the possible input cases.

# Solution
> 这题主要是需要判断越界问题. `-2147483648 < x < 2147483647`,即为`0x80000000 < x < 0x7fffffff`.
在不考虑符号位情况下,对低31位数值位要求:正负数的数值位在`0x00000000~0x7fffffff`间.(由符号位决定`0x00000000`的值).
因此在计算值`res' = res*10 + num`时,对`res'`进行越界判定不方便,所以对`res`进行判定.
若`res*10+num > 0x7fffffff`时,则`res'`必然越界,如果输入是正数,则需要返回`0x7fffffff`,如果是负数,则需要返回`0x80000000`.
