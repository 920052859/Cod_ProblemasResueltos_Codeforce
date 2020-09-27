#include<bits/stdc++.h>
using namespace std;
int n, x,suma=0,cards=0;
int main(){
	cin>>n;
	cin>>x;
	int vector[n];
	for(int i=0;i<n;i++){
		cin>>vector[i];
		suma+=vector[i];
	}
	suma=abs(suma);
	while(suma!=0){
		if(suma>=x){
			cards=(suma/x)+cards;
			suma=suma%x;
		} 
		x--;
	}
	cout<<cards;
	
	return 0;
}
