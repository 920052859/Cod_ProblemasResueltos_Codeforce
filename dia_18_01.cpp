#include<bits/stdc++.h>
using namespace std;
long long a,b;
int main(){
	cin>>a;
	cin>>b;
	while( a!=0 && b!=0  ){
		if(a>=2*b){
			a%=2*b;
		} else if(b>=2*a){ 
		    b%=2*a;
		}
		else  break;
	}
	cout<<a<<endl;
	cout<<b;
	return 0;
}
