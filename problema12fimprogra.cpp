#include<bits/stdc++.h>
using namespace std;
int main() {
  	int t;
  	cin>>t;
  	for(int q=0;q<t;t++){
  		int n;
  		bool f=false;
  		cin>>n;
  		int ka[n];
  	for(int i=0;i<n;i++){
  	cin>>ka[i];}

	   	for(int i=0;i<n;i++){
  		for(int j=i+2;j<n;j++){
  	if(ka[j]==ka[i]){
  		f=true;
  		break;break;}				}
	   } if(f==false){ cout<<"NO"<<'\n';
	   } else {cout<<"YES"<<'\n';
	   }}
  return 0;
}
