#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
	char palabra[103];
	int longi=0;
	cin>>palabra;
	longi=strlen(palabra);
	if(longi> 10){
		cout<<palabra[0]<<longi-2<<palabra[longi-1]<<'\n';
	} else {
		for(int i=0; i<longi;i++){
			cout<<palabra[i];
		}
		cout<<'\n';
	}
}
    return 0;
}
