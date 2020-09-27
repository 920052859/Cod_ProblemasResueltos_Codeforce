#include<bits/stdc++.h>
using namespace std;
int main(){
char palabra[103];
int longi;
int pepe=0;
cin>>palabra;
longi=strlen(palabra);
char minuscula[longi];
strcpy(minuscula,palabra);
strlwr(minuscula);
if(longi<2){
	cout<<palabra;
} 
 else{	
	for(int i=0;i<longi;i++){
		if(minuscula[i]==palabra[i]){
			pepe++;
		}
	}
if(((pepe>= longi/2 )and longi%2==0 or longi%2==1 and((longi+1)/2<=pepe))){
	cout<<minuscula<<endl;
 } 
//else if (pepe==2 and longi==3){
//cout<<minuscula<<endl;
//	}
 else {
	strupr(palabra);
	cout<<palabra<<endl;
}}
//strupr(palabra);//mayuscula
//strlwr(palabra);//minuscula

return 0;	
}

