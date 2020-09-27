#include<bits/stdc++>
using namespace std;.h>
int encontrarmin(int x, int y);

int main(){
	int n1,n2;
	cout<<" digite dos numeros :"<<endl ;
	cin>>n1>>n2;
	
	cout<<" el menor valor es :"<<encontrarmin(n1,n2)<<endl;
	return 0;
}

int encontrarmin(int x,int y){
	int mini;
	if(x<y)
	mini=x;
	else mini=y;
	return mini;
}

