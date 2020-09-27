#include<bits/stdc++.h>
using namespace std;
int main(){
char primero[10];
char segundo[10];
int lo,corina=0;
cin>>primero;
cin>>segundo;
	strrev(segundo);
	lo=strlen(primero); 
	for(int i=0;i<lo;i++){
		if(primero[i]!=segundo[i]){
		corina=1;
		i=200;
		} 
	}
		if(corina== 0){
			cout<<'YES';
		}
			else{
			cout<<'NO';
		}
		
//http://codeforces.com/problemset/problem/41/A
return 0;	
}
