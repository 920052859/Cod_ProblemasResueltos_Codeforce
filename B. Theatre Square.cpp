#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,a,numex=0,numey=0;
	cin>>n>>m>>a;
	numex=n/a;
	if(n%a!=0){
		numex++;
	}
		numey=m/a;
	if(m%a!=0){
		numey++;
	}
	
	cout<<numey*numex;
	
    return 0;
}
