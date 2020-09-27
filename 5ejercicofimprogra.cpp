#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int k=1;k<=n;k++){
	if(k%2==1 ){
		cout<<"I hate ";
	} else {
		cout<<"I love ";
	}
	if(k<n){
		cout<<"that ";
	}
	}
	cout<<"it";


return 0;	}
