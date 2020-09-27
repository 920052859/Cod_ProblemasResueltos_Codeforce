#include<bits/stdc++.h>
using namespace std;
int main(){
 long long  n,resu=0,muno=0,cero=0;
 cin>>n;
 for(long long  i=0;i<n;i++){
 	long long cori=0;
 	cin>>cori;
	 if(cori>=1){
	 	resu+=cori-1;
	 } else if(cori<=-1){
	 	resu+=-1-cori;
	 	muno++;
	 } else if(cori==0){
	 	cero++;
	 } }
	 if(muno%2==0){
	 	resu+=cero;
	 } else if(cero==0){
	 resu+=2;
	 } else {
	 	resu+=cero;
	 }
	cout<<resu;

return 0;	}

