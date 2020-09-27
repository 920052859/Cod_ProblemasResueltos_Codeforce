#include<bits/stdc++.h>
#include<math.h>
using namespace std;
long long  n;
	long long qwe[10009];
int  divisor(int rata);
int main(){
	long long  anca=100000000060, respuesta=0,hola=0,maxi=-1,cori=0;
	cin>>n;
		long long qwe[n];
		for(int i=0;i<n;i++){
			cin>>qwe[i];
			anca=min(qwe[i],anca);
		}

		if(anca==1){
			respuesta=1;
		} else if(anca==2 or anca==3){
			for(int i=0;i<n;i++){
			respuesta=divisor(i);
		}
		} 
		
		cout<<respuesta<<endl;
return 0;	
}
int  divisor(int rata){

  for(int f=0;f< n;f++){
				if(qwe[f]%rata!=0){
				rata=-1;	
				break;
				}
				return rata;
}
           }
