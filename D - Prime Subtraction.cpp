#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(--t){
	long long x=0,y=0,num=0;
	bool qwe=false;
	cin>>x>>y;
	num=x-y;
	if(num>1){
		for(int i=2;i<sqrt(num);i++){
		if(num%i==0){
			qwe=true;
			cout<<"YES"<<'\n';
			break;
		}
	if(qwe==false){
		cout<<"NO"<<'\n';
	}
	
	}} else { cout<<"NO"<<'\n'; } 
	 }
return 0;}
