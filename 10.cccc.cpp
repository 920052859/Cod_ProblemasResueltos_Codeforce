#include<bits/stdc++.h>
using namespace std;
	int main() {
  int r=1,n,mini;
  cin >> n;
  fib(n);
  
  
  
  for(int i=1;i<=min(7,n);i++){ 
 		if(i<=3 or i==5){
 			cout<<"O";
		 }else{ cout<<"o";
		 }} 
//		 for(int j=6;j<n;j++){ 
  //		cout<<fib(j);}
		 
  for( int i=7; fib(i) <= n; i++) {
  	for(int q=fib(i-1);q<fib(i) and q<=n;q++){
				cout<<fib(i-1)<<q<<'\n';
			if(q==fib(i-1)){
				cout<<"O";
			}else if(q!=fib(i-1)){
			cout<<"o";	
			}
			}}
  return 0;
}
