#include<bits/stdc++.h>
using namespace std;
int main(){
char qwer[10][10],f;
int ye=0;
 
 for(int r=0;r<4;r++){
 	for(int o=0;o<4;o++){
 		cin>>qwer[r][o];
	 }}
	 
 for(int i=0;i<3;i++){
 	for(int j=0;j<3;j++){
 		if(qwer[i][j]==qwer[i+1][j+1]and qwer[i+1][j+1]==qwer[i][j+1]){
 				i=4;
 				j=5;
 				ye++;
		 }
		 
		 if(qwer[i][j]==qwer[i+1][j+1] and qwer[i+1][j+1]==qwer[i+1][j] and i<4){
 				i=4;
 				j=5;
 				ye++;
		 } 
		 
		 if(qwer[i][j]==qwer[i][j+1] and qwer[i][j+1]==qwer[i+1][j] and i<4){
 				i=4;
 				j=5;
 				ye++;
		 } 
		 if(qwer[i][j+1]==qwer[i+1][j] and qwer[i+1][j]==qwer[i+1][j+1] and i<4){
 				i=4;
 				j=5;
 				ye++;
		 }
		 }
			}
			if(ye==0){
 				cout<<"NO";
			 } else {
			 	cout<<"YES";
			 }
	
	return 0;
}


