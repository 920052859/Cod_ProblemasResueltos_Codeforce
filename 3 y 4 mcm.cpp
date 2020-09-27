#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,resu=1,mini,m;
	cin>>n>>m;
	mini=min(n,m);
	
	for(int i=1;i<=mini;i++){
	resu=resu*i;
	}

	cout<<resu;
return 0;	
}
