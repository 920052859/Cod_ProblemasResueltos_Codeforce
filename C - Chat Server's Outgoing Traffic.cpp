#include<bits/stdc++.h>
using namespace std;
int main(){	
char palabra[103];
int longi;
int pepe=0,res=0,efe=0;
while(cin>>palabra){
 	if(palabra[0]=='+'){
 		pepe++;
	 } else if(palabra[0]=='-'){
 		pepe--;
	 } else {
	 	longi=strlen(palabra);
	 	for(int i=0;i<longi;i++){
	 	if(palabra[i]==':'){
 		res=(longi-i-1)*pepe+res;
	 	}	
		 } 
	 } 
	 cout<<res<<'\n'; 
}

return 0;	
}
