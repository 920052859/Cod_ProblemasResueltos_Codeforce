#include<bits/stdc++.h>
using namespace std;
int main(){
	double n,win=0;
	cin>>n;
	for(double i=n;i>0;i--){
		win+=1/i;
	}
cout <<fixed<<setprecision(12)<<win;	
	return 0;
}
