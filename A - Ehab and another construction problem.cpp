#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,M=0;
	cin>>n;
	if(n==1){
		cout<<"-1";
	} else  if (n==2){
		cout<<"2 2";
		M=1;
	} 
	else{
		for(int i=n;i>0;i--){
			for(int j=n-1;j>0 ;j--){
				if(n<i*i*j and i*j<n){
					cout<<j*i<<" "<<i<<'\n';
					M=1;
					return 0;
				}
			}
		}	
	}
	if(M==0 and n!=1){
		cout<<"-1";
	}
	return 0;
}
