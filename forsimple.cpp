//mostrar los cubos de los numeros
//de 1 hasta n
#include<iostream>
using namespace std;
long long int i,n;
int main()
{	cout<<"ingrese n: ";
	cin>>n;
	for(i=1;i<=n;i++)
		cout<<i*i*i<<"\n";
}
