#include<bits/stdc++.h>
using namespace std;
long long huevos(long long ,long long ,long long);
int main(){
	int p;
	cin>>p;
	long long n[p],s[p],t[p], huevos1[p];
			for(int y=0;y<p;y++){
			cin>>n[y]>>s[y]>>t[y];
			huevos1[y]=huevos(n[y],s[y],t[y])+1;
			}
			
			for(int i=0;i<p;i++){
			cout<<huevos1[i]<<'\n';
			}
return 0;	
}
long long huevos(long long n,long long s,long long t){
	long long resu=0, suma=0, maxi=0,huevo=0;
	suma=s+t;
	resu=suma-n;
	maxi=max(s,t);
     huevo=maxi-resu;
    return huevo;
}
