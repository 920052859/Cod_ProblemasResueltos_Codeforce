#include<bits/stdc++.h>
using namespace std;
char huevos(long long ,long long );
int main(){
	int t;
	cin>>t;
	long long prime[t],segun[t];
	char resu[t+2];
	for(int i=0;i<t;i++){
		cin>>prime[i]>>segun[i];
	if(prime[i]>segun[i]){
		resu[i]='>';
	} else if(prime[i]==segun[i]){
		resu[i]='=';
	} else { resu[i]='<';
	}
	
	}
	for(int j=0;j<t;j++){
	
		cout<<resu[j]<<'\n';
	}


return 0;	}

