#include<bits/stdc++.h>
using namespace std;
long long  cor[1000000];
void sieve(){
	for(long long  i=2;i<1000000;i++){
		if(cor[i]){
			cor[i]=i;
			for(long long  j=i*i; j<1000000; j+=i){
				if(cor[j]) cor[j]=i;
			}
		}
	}
}
int main(){
	long long  conta=0,n;
	cin>>n;
	
	sieve();
	while(n!=0){
		n=n-cor[n];
		conta++;
	}
	cout<<conta;
	return 0; 
}
