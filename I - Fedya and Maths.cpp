#include<bits/stdc++.h>
using namespace std;
int main(){
long long     n;
cin>>n;
n=n%10;
if(n==2){
	cout<<0;
} else if(n==1){
	cout<<1;
} else if(n%2==0){
	cout<<n;
} else if((n+1)%4==0){
	cout<<0;
} else {
	cout<<(n+1)/2;
}
return 0;	
}
