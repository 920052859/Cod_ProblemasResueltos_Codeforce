#include<bits/stdc++.h>
using namespace std;
//void subidavaja(int , int,int, int);
int main(){
	int  casar[1200],equis[1200],ye[1200],j=0;
while(cin>>casar[j] and casar[j]!=0){
		int ex[casar[j]],yeu[casar[j]];
		cin>>equis[j]>>ye[j];
		for(int i=0;i<casar[j];i++){
			cin>>ex[i]>>yeu[i];
//		 subidavaja( ex[i], yeu[i],equis[j], ye[j]);

			if(ex[i]==equis[j] or yeu[i]==ye[j]){
	 	cout<<"divisa"<<'\n';
	 } else if(ex[i]>equis[j] and yeu[i] > ye[j]){
	 	cout<<"NE"<<'\n';
	 } else if(ex[i]<equis[j] and yeu[i]<ye[j]){
	 	cout<<"SO"<<'\n';
	 } else if(ex[i]<equis[j] and yeu[i]>ye[j]){
	 	cout<<"NO"<<'\n';
	 } else {
	 	cout<<"SE"<<'\n';
	 }

	}
	
	
		
		
 j++; }


return 0;	}
//void subidavaja(int ex,int ye,int refx,int refy){
//
//	 if(ex==refx or ye==refy){
//	 	cout<<"divisa"<<'\n';
//	 } else if(ex>refx and ye > refy){
//	 	cout<<"NE"<<'\n';
//	 } else if(ex<refx and ye<refy){
//	 	cout<<"SO"<<'\n';
//	 } else if(ex<refx and ye>refy){
//	 	cout<<"NO"<<'\n';
//	 } else {
//	 	cout<<"SE"<<'\n';
//	 }
//
//
// }
