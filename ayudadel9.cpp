#include<bits/stdc++.h>
using namespace std;
bool  fib(long long n){
    if(n<2)
        return n;
    return fib(n-1) + fib(n-2);
  }
int main() {
  long long n,num[121],i;
  int r=1;
  cin >> n;
  cout<<fib(n);
 
	
  return 0;
}
