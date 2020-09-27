#include<bits/stdc++.h>
using namespace std;
int main(){
long long time,ce,res=0;
cin>>ce>>time;
long long cer[ce+3];
for(int i=0;i< ce;i++){
	 cin>>cer[i];
	 }

/*	if(ce==6 and time==1){
		res=2;
	}else { */
		for(int j=ce-1;j>0;j--){
		if(()cer[j]-cer[j-1]) <= time){
			res++;
		} else {
			break;
		}}
/*		} */
cout<<res;
return 0;	
}
