#include<bits/stdc++.h>
using namespace std;
long long huevos(long long );
int main(){
		long long lon;
		cin>>lon;
		long long n[lon],resulta[lon];
		for(int j=0;j<lon;j++){
			cin>>n[j];
			resulta[j]=huevos(n[j]);
		}
		 
		for(int j=0;j<lon;j++){
		cout<<resulta[j]<<'\n';
		} 
	

return 0;	}
long long huevos(long long n){
		long long uno=0,dos=0,resu=0,arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]%3==0){
				resu++;
			} else if(arr[i]%3==2){
				dos++;
			} else { uno++;
			}}
		resu+=abs(uno-dos);
		return resu;
}


