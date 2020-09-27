#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,resu;
	cin>>n;
	int cori[n];
	int uno=0,dos=0;
	for(int i=0;i<n;i++){
		cin>>cori[i];
		if(cori[i]==1){
			uno++;
		} else {
			dos++;
		}
	}
	if(dos<=uno){
		resu=dos+(uno-dos)/3;
	} 
		else{
			resu=uno;
		} 
	cout<<resu;
return 0;	
}
