#include<bits/stdc++.h>
using namespace std;
int main(){
 long long  n,suma=0,min3=-9999,min4=9999;
 cin>>n;
 long long cori[n];
 for(long long  i=0;i<n;i++){
 		cin>>cori[i];
		if(cori[i]%2==0 and cori[i]>0){  suma+=cori[i];}
		else if(cori[i]%2!=0 and cori[i]<0){ min3=max(min3,cori[i]);}
		else if(cori[i]%2!=0 and cori[i]>0){ min4=min(min4,cori[i]);suma+=cori[i];}
 }		if(suma%2!=0){
 			cout<<suma;
 			} else if((min3!=0 and min4!=0) and (suma+min3> suma-min4 )) {
 				cout<<suma+min3;
			 }
			 else if(min3!=0 and min4!=0) {
 				cout<<suma-min4;
			 }
			 else if(min3!=0) {
 				cout<<suma+min3;
			 } else {
			 	cout<<suma-min4;
			 }
return 0;	}
