/************************************************************************/
/* 大整数幂求解                                                                     */
/************************************************************************/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int mytpow(int n, int m, int mod = 0) {
	if(m < 0) return 0;

	int ans = 1;
	int tmp = n;
	while(m) {
		if(m&0x1) {
			ans *= tmp;
			if(mod) ans %= mod;
		}
		tmp *= tmp;
		if(mod) tmp %= mod;
		m >>= 1;
	}
	return ans;
}


int main()
{
	int a = 7;
	int b = 1024;
	int k = 100;
	
	cout << mytpow(a, b, k) << endl;
	return 0;
}
