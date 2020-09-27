#include<bits/stdc++.h>
using namespace std;
char huevos(long long ,long long );
int main(){
	int t;
	cin>>t;
	long long prime[t],segun[t];
	char resul[t+2];
	for(int i=0;i<t;i++){
		cin>>prime[i]>>segun[i];
		cout<<huevos( prime[i],segun[i] )<<'\n';
	}


return 0;	}
char  huevos(long long prim,long long seg ){
char resu;
	if(prim>seg){
		resu='>';
	} else if(prim==seg){
		resu='=';
	} else { resu='<';
	}
 return resu;
}

