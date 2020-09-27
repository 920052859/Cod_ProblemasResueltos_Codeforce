#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,suma=0;
		cin>>n;
		int o1[n],o2[n];
		for (int i=0;i<n;i++){
			cin>>o1[i];}
		for (int i=0;i<n;i++){
			cin>>o2[i];}
		
		for (int i=0;i<n;i++){
			if(o1[i]>o2[i]){
				suma=suma+(o1[i]-o2[i]);
			}
			}
		cout<<suma;
	return 0;
}
