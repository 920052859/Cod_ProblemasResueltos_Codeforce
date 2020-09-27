#include<bits/stdc++.h>
using namespace std;
int main() {
long long a,b;
cin>>a>>b;
int resu=0;
if(a!=1 and  a<b and b!=1){
long long ert[b];
		for(int i=2;i<b;i++){
		if(b%i==0){
			ert[i]=i;
		} else { ert[i]=0;}
		}
		for(int i=2;i<b;i++){
			if(ert[i]!=0 and ert[i]/i<=a){	
			resu++;
			}}
	    	}
		if(a>=b and a!=1 and b!=1){
			resu+=2;
		} 
		 if(b==1){
			resu++;
		} 
		cout<<resu;	 
return 0;
}
