#include<bits/stdc++.h>
using namespace std;
int subidavaja(int ,int , int);
int main(){
	int t;
	cin>>t;
	int prime[t], segun[t],terce[t],hola[t];
	for(int i=0;i<t;i++){
		cin>>prime[i]>>segun[i]>>terce[i];
		hola[i]=subidavaja(prime[i] ,segun[i],terce[i]);
		
	}


	for(int k=0;k<t;k++){
		cout<<"Case "<<k+1<<": "<<hola[k]<<'\n';
	}


return 0;	}
int subidavaja(int pri,int seg, int ter){
	int maxi=0,mini=0,suma=0;
 	maxi=max(pri,seg);
 	maxi=max(maxi,ter);
 	suma=pri+seg+ter;
 	mini=min(pri,seg);
	mini=min(mini,ter);
	return suma-mini-maxi;
}
