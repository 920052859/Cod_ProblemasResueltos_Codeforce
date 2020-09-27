#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,a,i;
cout<<"digite the number ";
cin>>n;
cout<<"digite the second number ";
cin>>a;
i=0;
while(n!=0){
	if(n%a==0)
	{n=n/a;
	}
	else{n--;
	} i++;
}
cout<<i;
return 0;	
}
