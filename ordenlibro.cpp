#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m , suma=0,r,l=0;
	cin>>n>>m;
	long long a[n];	
	 for(int i=0;i<n;i++){
	 cin>>a[i];
	 }
 	r = sizeof(a)/sizeof(a[0]);
    sort(a, a+r);
	 for(int i=0;i<n;i++){
			suma+=a[i];
	if(m>=suma ){
	l++;
	}
	 }
	cout<<l<<endl;
	 for(int i=0;i<n;i++){
	 cout<<a[i]<<" ";
	 }
	return 0;
}

