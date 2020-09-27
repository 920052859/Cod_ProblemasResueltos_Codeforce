#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
long long n,cuenta=0;
	cin>>n;	//	344
	while(pow((int)sqrt(n),2)!=n ){ 
		n=n-pow((int)sqrt(n),2);
		cuenta++;
	}
		cout<<cuenta+1;
return 0;	
}
