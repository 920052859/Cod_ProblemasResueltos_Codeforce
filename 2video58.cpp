#include<iostream>
#include<conio.h>
using namespace std;
struct inf_direccion{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};
struct empleado{
	char nombre[20];
	struct inf_direccion dir_empleado;
	double salario;
}empleado[2];
int main(){
	for(int i=0;i<2;i++){
		fflush(stdin);// cuando el buffer no se llene
		cout<<"digite el nombre ";
		cin.getline(empleado[i].nombre,20,'\n');
		cout<<"digite la direccion ";
		cin.getline(empleado[i].dir_empleado.direccion,30,'\n');
		cout<<"digite el ciudad ";
		cin.getline(empleado[i].dir_empleado.ciudad,20,'\n');
		cout<<"digite el provincia ";
		cin.getline(empleado[i].dir_empleado.provincia,20,'\n');
		cout<<"digite el salario ";
		cin>>empleado[i].salario;
	}
	
	for(int i=0;i<2;i++){
		cout<<"nombre "<<empleado[i].nombre<<endl;
		cout<<"direccion "<<empleado[i].dir_empleado.direccion<<endl;
		cout<<"ciudad "<<empleado[i].dir_empleado.ciudad<<endl;
		cout<<"provincia "<<empleado[i].dir_empleado.provincia<<endl;
		cout<<"salario "<<empleado[i].salario<<endl;
		
	}
	getch();
	return 0;
}
