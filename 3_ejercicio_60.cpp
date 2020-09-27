#include<bits/stdc++.h>
 using namespace std;
 int n, mi=0 , ma=0, platudo, pobre;
 
 int main(){
 	cout<<"digite el numero de trabajadores: ";
 	cin>>n;
 	fflush(stdin);
 	struct empleado{
 	char nombre[15];
 	char lugar[20];
 	int edad;
 	int salario;
      }empleado[n];
 	fflush(stdin);
 	     for(int i=0;i<n;i++){
 	     	cout<<"digite el nombre del "<<i+1<<" empleado ";
 	     	cin.getline(empleado[i].nombre,15,'\n');
 	     	cout<<"lugar ";
 	     	cin.getline(empleado[i].lugar,20,'\n');
 	     	cout<<" edad ";
 	     	cin>>empleado[i].edad;
 	     	cout<<"salario ";
 	     	cin>>empleado[i].salario;
 	     	fflush(stdin);
 	     	if(i==0) { ma=empleado[i].salario;  
			  mi=empleado[i].salario;	
			  } else if (empleado[i].salario>ma){
			  ma=empleado[i].salario;
			  platudo=i;  
			  } else if(empleado[i].salario<mi){
			  mi=empleado[i].salario;
			  pobre=i;	
			  }
 	     	fflush(stdin);
		  }
		  
 	     	cout<<"empleado adinerado "<<empleado[platudo].nombre<<endl;
 	     	cout<<"lugar "<<empleado[platudo].lugar<<endl;
 	     	cout<<" edad "<<empleado[platudo].edad<<endl;
 	     	cout<<"salario "<<empleado[platudo].salario<<endl;
 	     	fflush(stdin);
		    
		    cout<<"empleado menos adinerado "<<empleado[pobre].nombre<<endl;
 	     	cout<<"lugar "<<empleado[pobre].lugar<<endl;
 	     	cout<<" edad "<<empleado[pobre].edad<<endl;
 	     	cout<<"salario "<<empleado[pobre].salario<<endl;
 	     	fflush(stdin);
 	 //	getch();
return 0;
 }
