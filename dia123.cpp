#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,c,e=0,u=0;
	while(cin>>n && n!=0){
	e=0;
	for( int i=1;i<1+n/3;i++){
		for( int j=1;j<n-3*i;j++){
		c=n-3*i-2*j;
		if(c>0){
			e++;
		}			
		} 
	}
	u++;
	cout<<"Case "<<u<<": "<<e<<endl;
}
	return 0;
}
