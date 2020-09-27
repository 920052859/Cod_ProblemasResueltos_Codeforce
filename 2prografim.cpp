#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int prime=0, segun=0,colu;
			cin>>colu;
	 	int casos[colu];
	for(int j=0;j<colu;j++){
		
			cin>>casos[j];
	if((casos[j-1]<casos[j]) and j>0){
		prime++;
	} else if(j>0 and casos[j-1]>casos[j]){
		segun++;
	}
	}
		cout<<"Case "<<i+1<<": "<<prime<<" "<<segun<<'\n';
	
	}
return 0;	}

