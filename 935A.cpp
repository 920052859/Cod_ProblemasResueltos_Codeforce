#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,longi=0;
cin>>n;
if(n==1){
	longi=1;
} else {
for(int i=1;i<=(n+1)/2;i++){
	if(n%i==0){
	 longi++;
	}
}
}
cout<<longi;
return 0;	
}
