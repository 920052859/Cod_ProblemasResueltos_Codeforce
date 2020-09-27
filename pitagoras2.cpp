//mostrar todos los trios pitagoricos
//a, b, c menores o iguales a 20
//a*a+b*b==c*c
#include<iostream>
using namespace std;
long long int n, a,b,c;
int main()
{ 	cout<<"ingrese n: ";
	cin>>n;			//n=1000;
	for(a=1;a<=n;a++)
	for (b=a;b<=n;b++)
		for (c=b+1;c<=n;c++)
			if (a*a+b*b==c*c)
			{	cout<<a<<"  "<<b<<"  "<<c<<"\n";
			}
}

