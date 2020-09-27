#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[7],n,suma=0,dia=1,co=0,r;
	cin>>n;
	for(int i=0;i<7;i++){
		cin>>a[i];
		suma+=a[i];
	}
	
	 if(suma==1){
		for(int i=0;i<7;i++){
		if(a[i]==1){
		dia=i;
		}
	}
	}
		else{
			
			if(suma<n and suma!=1 and n%suma!=0 ){
	n=n%suma;
	}
	if(n%suma==0){
			r=n/suma;
			n=n-(r-1)*suma;
		}
	 
	 
		for(int j=0;j<7;j++){
			co+=a[j];
			if( n<co and j==0 ){
		dia=0;
		j=70;
		}
		else{
				if( n==co ){
		dia=j;
		j=70;
		}
		else{
			if( n> co and  n<co+a[j+1] and j<6){
		dia=j+1;
		}
		}	
		}
		
		}}
		
	cout<<dia+1;
	
	return 0;
}


