//mostrar los trios pitagoricos <= n
#include<iostream>
#include<cmath>
using namespace std;
long long int a,b,n;
float c;
int main()
{	cout<<"ingrese n: \n";
	cin>>n;			//n=1000;
	for(a=1;a<=n;a++)
		for(b=a;b<=n;b++)
		{	c=pow(a*a+b*b,0.5);
			if (c==int(c) && c<=n)
			cout<<a<<","<<b<<","<<c<<"\n";
		}
}
