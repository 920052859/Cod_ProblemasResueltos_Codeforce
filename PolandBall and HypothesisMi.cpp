#include<bits/stdc++.h>
using namespace std;
int n;
int funciona (int m){
    int t=m*n+1;
    for (int i=2;i*i<=t;i++){
        if (t%i==0)return 1;}
    return 0;}
int main(){
	 while (cin>>n){
	 	
	if(n%2==0 or n==1){
	
	 int m=1;
        while (1){
            if (funciona(m))break;
            else m++;
        }
        cout<<m<<endl;
     
	} else {
		cout<<"1";
	}
}
return 0;	
}
