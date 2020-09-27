#include<bits/stdc++.h>
using namespace std;
int main() {
  	int t;
  	cin>>t;
  	for(int q=0;q<t;q++){
  		int n;
  		cin>>n;
  int ka[110],countp=0,counti=0;
  for(int i=0;i<n;i++){
  	cin>>ka[i];
  	if(ka[i]%2==0){
  		countp++;}
		   else {
	  	counti++; }}
	   if(countp>0){
	   	cout<<countp<<'\n';
	   	for(int i=0;i<n;i++){
  	if(ka[i]%2==0){
  		cout<<i+1<<" ";
	  }}} else if(counti>0 and counti%2==0){
	  	cout<<counti<<'\n';
	  	for(int j=0;j<n;j++){
  	if(ka[j]%2==1){
  		cout<<j+1<<" ";
	  }}
	  } else{
	  	cout<<"-1"<<'\n';}
	  }
  return 0;}
