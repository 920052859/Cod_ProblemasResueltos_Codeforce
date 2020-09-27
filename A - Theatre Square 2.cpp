#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,a,nx=0,mx=0;
cin>>n>>m>>a;
if(n%a==0){
	nx=n/a;
} else {
	nx=(n/a) +1;
} 
if(m%a==0){
	mx=m/a;
} else {
	mx=(m/a) +1;
} 
cout<<mx*nx;

return 0;	
}
