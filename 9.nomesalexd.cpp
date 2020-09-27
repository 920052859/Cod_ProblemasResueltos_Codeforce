#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,e=0,u=0;
	while(cin>>n && n!=0){
	e=0;
		for( int j=1;j<2+n/2;j++){
		if(n-2*j>0){
			e++;
		}			
		} 
	u++;
	cout<<"Case "<<u<<": "<<e<<endl;
}
	return 0;
}
