#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,num=0;
	
	cin>>a>>b;
	
	if(a%2==0){
		num=a/2;
	} else {
		num=(a+1)/2;
	}
	
	if(b<= num){
		cout<<b*2-1;	
	}	else {
		cout<<(b-num)*2;
	}	
    return 0;
}
