// calcula sumatoria: 1/1 - 1/4 + 1/9 - 1/16 + 1/25 ...+o- 1/i*i
#include<iostream>
using namespace std;
float i,t,s,n, signo, den;
int main()
{	cout<<"ingrese n: ";
	cin>>n;
	s=0;
	for(i=1;i<=n;i++)
	{	den=i*i;
		if(int(i)%2==0)
			signo=-1;
		else
			signo=1;		//aqui termina el if
		t=signo/den;
		s=s+t;		
	}
	cout<<s;
}


