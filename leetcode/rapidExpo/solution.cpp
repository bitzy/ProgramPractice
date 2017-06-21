//n^m
//m isn't odd: res = n^m = (n^2)^(m/2);
//m is odd: res = n^m = (n^2)^(m/2)*n;

long long pow(long long n, long long m, long long mod = 0) {
  if(m < 0) return 0;
  long long ans = 1;
  long long k = n;
  while(m) {
    if(m & 1) {//m is odd.
      ans *= k;
      if(mod) ans %= mod;
    }
    k*=k;
    if(mod) k %= mod;
    m >>= 1;
  }
  return ans;
}

int pow(int n, int m, int mod) {
  int res = 1;
  int num = n;
  while(1) {
    if(m & 1) {
      res = (res * num)%mod;
    }
    m >>= 1;
    if(!m) break;
    num = num * num;
  }
  return res;
}
