#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n1,suma1=0,y1;
	cin>>n1;
	y1=n1*2;
	long long c1[y1];
	for(int i=0;i<y1;i++){
		cin>>c1[i];
		}
	for(int i=0;i<n1;i++){
		if(c1[i]-c1[i+n1]>0){
			suma1=suma1+(c1[i]-c1[i+n1]);
		}
	}
	cout<<suma1;
	return 0;
}
