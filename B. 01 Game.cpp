#include<bits/stdc++.h>
using namespace std;
int main() {
	int ene;
	cin>>ene;
	while(ene--){
	string cor;
	int unos=0, ceros=0,gana=0, longi=0,mini=0;
//	getline( cin, cor );
	cin>>cor;
	longi=cor.size();
	for(int i=0;i<longi;i++){
		if(cor[i]=='1'){
			unos++;
		} else {
			ceros++;
		}
	}
	gana=abs(unos-ceros);
	mini=min(unos,ceros);
	if(gana>0 and mini%2==0){
		cout<<"NET"<<'\n';
	} else if (gana==0 and mini%2==0) {
		cout<<"NET"<<'\n';
	} else if (gana>0 and mini%2==1) {
		cout<<"DA"<<'\n';
	}else if (gana==0 and mini%2==1) {
		cout<<"DA"<<'\n';
	} }

	return 0;
}
