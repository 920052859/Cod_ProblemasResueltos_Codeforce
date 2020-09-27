//Lee un entero>0 e invierte los dígitos
#include<iostream>
using namespace std;
long long int a,n,u,x;
int main()
{	cout<<"ingrese un entero >0 : ";
	cin>>n;
	a=n;
	x=0;
	while (n>0)	
	{	u=n%10;			// ultimo digito
		x=x*10+u;			
		n=n/10;
	}
	if (x==a)
	{	cout<<"es capicua";
	}
	else
	{	cout<<"no es capicua";
	}
}
