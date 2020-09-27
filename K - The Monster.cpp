#include<bits/stdc++.h>
using namespace std;
int main(){
long long c,a;
int b,d;
bool resul= false; 
cin>>a>>b;
cin>>c>>d;
for (long long i=0;c*i+d<1+b+a*i;i++){
	if(c*i+d==b+a*i){
		cout<<i<<'\n';
		resul= true;
		break;
	}
}
	if (!resul){
		cout<<"-1"<<'\n';
	}
return 0;	
}
