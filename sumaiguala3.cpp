#include<bits/stdc++.h>
using namespace std;
long long respuesta(long long ,long long ,long long);
int main(){
	long long  t=0,consul[120],unos[120],dos[120],resu[120];
	cin>>t;
	long long cori[t][120];
	for(int i=0;i<t;i++){
		cin>>consul[i];
			resu[i]=0; dos[i]; unos[i]=0;
		for(int y=0;y<consul[i];y++){
			cin>>cori[t][y];
			if(cori[i][y]%3==0){
				resu[i]++;	}
			else if(cori[i][y]%3==1){
				unos[i]++;
			} else {
				dos[i]++;
			}}
				resu[i]=resu[i]+abs(dos[i]-unos[i]);
				cout<<resu[i]<<'\n';	
	}
return 0;	
}
long long respuesta(long long ,long long ,long long){


}
