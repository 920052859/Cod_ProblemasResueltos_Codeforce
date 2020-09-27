#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,r;
	long long x;
	cin>>n;
	while(n!=0){
		cin>>x;
		r=x%7;
		x=x/7;
		if(x%2==0 and x>1 and r!=0){
			cout<<"YES"<<'\n';
		} else{
			cout<<"NO"<<'\n';
		}
		n--;
		x=0;
	}
	
	return 0;
}
