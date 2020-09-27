#include<bits/stdc++.h>
using namespace std;
int main(){
	long long  n,k,pasos=0;;
	cin>>n>>k;
	if(k!=1){
		pasos=1;
		n--;
		while(n!=0){
			pasos=pasos + n%k;//1+2    ,n=26---3+2  +1
			if(n/k >0){
				pasos++;
			}
			n=n/k;// n=8
			
		}
	} else{
		pasos=n;
	}
	cout<<pasos;
return 0;	
}
