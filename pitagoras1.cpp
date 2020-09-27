//mostrar los trios pitagoricos <= n
#include<iostream>
using namespace std;
long long int a,b,c,n;
int main()
{	cout<<"ingrese n: ";
	cin>>n;				//n=1000;
	for(a=1;a<=n;a++)
		for(b=1;b<=n;b++)
			for(c=1;c<=n;c++)
				if (a*a+b*b==c*c && a<=b)
					cout<<a<<","<<b<<","<<c<<"\n";
}
