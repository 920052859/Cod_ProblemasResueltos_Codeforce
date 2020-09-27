#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int casosa[n];
int casosb[n];
int casos[n];
for(int i=0;i<n;i++){
	cin>>casosa[i];
	cin>>casosb[i];
	if(casosa[i]%casosb[i]==0){
		casos[i]=0;
	} else {
	
		casos[i]=casosb[i]-casosa[i]%casosb[i];	
}}
for(int j=0;j<n;j++){
	cout<<casos[j]<<endl;
}
return 0;	
}
