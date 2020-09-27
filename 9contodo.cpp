#include<bits/stdc++.h>
using namespace std;
int main(){
	long long na,ye=0,yu=0,q=0;;
	while(cin>>na && na!=0){	
	for( int i=1;i<1+na/3;i++){
		q=na-3*i;
		if(q<0){
			ye=0+ye;	
		} else{
			ye=(q-1)/2 +ye;
		}		 
	}
	yu++;
	cout<<"Case "<<yu<<": "<<ye<<endl;
	ye=0;
}
	return 0;
}
