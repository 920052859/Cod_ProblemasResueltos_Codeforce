#include<bits/stdc++.h>
using namespace std;
int main(){
	int t[4],maxi=0,mini=110,suma=0,mi=0,ma=0,r;
	for(int i=0;i<4;i++){
	cin>>t[i];
	suma+=t[i];
			}
			r = sizeof(t)/sizeof(t[0]);
   			 sort(t , t+r);
//   			for(int j=0;j<4;j++){
//	 		cout<<t[j]<<" "; }
	 		if(t[3]+t[0]==t[1]+t[2] or t[3]==t[0]+t[1]+t[2] or t[3]+t[1]==t[0]+t[2]){
	 			cout<<"YES";}
	 		else {
			cout<<"NO";}	
return 0;	}
