#include<bits/stdc++.h>
#include <math.h>
using namespace std;
int fibo(int q,int w,int pos){
	if(pos>1){
		return fibo(q,w,pos-1)+fibo(q,w,pos-2);
	}
	else{
		if(pos==1){
		return w;
	}  
	if(pos==0){
		return q;
	}
	}
}
int main(){
	int a,b,m,i=1,qwe;
	long long n,r;
	cin>>qwe;
		for(int j=0;j<qwe;j++){
			cin>>a>>b>>n>>m;
r=fibo(a,b,n);
a= pow(10,m);
r=r%a;	
	cout<<r;	
		}
	return 0;
}
	
