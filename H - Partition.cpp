#include<bits/stdc++.h>
using namespace std;
int main(){
int n, neg=0,pos=0;
cin>>n;
    int a[n];
	 for(int i=0;i<n;i++){
	 cin>>a[i];
	 if(a[i]>0){ 
	 	pos=pos+a[i];
	 } else {
	 	neg=neg+a[i];
	 }}
			cout<<pos-neg;

    return 0;
}
