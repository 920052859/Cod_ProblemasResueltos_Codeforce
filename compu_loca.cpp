#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,j;
	long long c;
cin>>n>>c;
 	long long cor[n];
 	for(int i=n-1;i>=0;i--){
 		cin>>cor[i];
	 }
	for(j=0;j<n-1;j++){
		if(cor[j]-cor[j+1]>c){
			break;
		}
	} 
	 cout<<j+1;
return 0;	
}
