#include<bits/stdc++.h>
using namespace std;
int main(){
	int veces;
	cin>>veces;
	for(int i=0;i<veces;i++){
		long long n,cinco=0,tres=0,dos=0;
	cin>>n;
	while(n%5==0){
		cinco++;
		n=n/5; }
	while(n%3==0){
		tres++;
		n=n/3;}
	while(n%2==0){
		dos++;
		n=n/2;}
	if(n==1){
		cout<<2*tres+dos+3*cinco<<'\n';
	} else{
		cout<<"-1"<<'\n';}
	}
return 0; }
