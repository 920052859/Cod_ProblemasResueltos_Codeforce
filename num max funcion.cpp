#include<bits/stdc++.h>
using namespace std;
int qwe(int x,int y);
int main(){
	int n1,n2,max;
		cin>>n1>>n2;
	max=qwe(n1,n2);
		
	cout<<max;
}
 	
 	int qwe(int x,int y){
 		int numero=0;
 		if (x>y){
 			numero=x;
		 } else{
		 	numero=y;
		 }
		 return numero;
	 }
