#include<bits/stdc++.h>
using namespace std;
int main(){
 	long long n;
 	cin>>n;
 	if(n%10==0){
 	
	 }
 	else if(n%10>5){
 		if(n>10){
 			n=n/10;
 			n++;
 			n=n*10;
		 } else{ n=10;
		 }
		
	 } else{
	 	if(n>=10){
 			n=n/10;
 			n=n*10;
		 } else{ n=0;
		 }
	 	
	 }
	 cout<<n;
return 0;	
}
