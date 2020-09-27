#include<bits/stdc++.h>
using namespace std;
int n;
struct corredor{
	char nombre[20];
	int edad;
	char sexo[20];
	char club[25];
	char categoria[20];
}corredor1;
int main() {
	cout<<"digite su nombre ";
	cin.getline(corredor1.nombre,20,'\n');
	 fflush(stdin);
	 cout<<"digite su edad ";
	cin>>corredor1.edad;
	fflush(stdin);
	if(corredor1.edad<=18){
		strcpy(corredor1.categoria,"juvenil");
	} else{ if(corredor1.edad<=40){
		strcpy(corredor1.categoria,"señor");
	}else{ strcpy(corredor1.categoria,"veterano");
	}
	}	
	fflush(stdin);
	
	cout<<"digite sexo 1=varon 2=mujer 3= otros ";
	cin>>n;
	switch(n){
		case 1 : strcpy(corredor1.sexo,"varon");
		case 2 : strcpy(corredor1.sexo,"mujer");
		case 3 : strcpy(corredor1.sexo,"eres gay o lesviaja");
	} 
	fflush(stdin);
    cout<<"indique el club xd ";
    cin.getline(corredor1.club,25,'\n');
    fflush(stdin);
    
	cout<<" tu eres "<<corredor1.nombre<<endl;
	cout<<"edad "<<corredor1.edad<<endl;
	fflush(stdin);
	cout<<"sexo "<<corredor1.sexo<<endl;
	fflush(stdin);
	cout<<"club "<<corredor1.club<<endl;
	cout<<"categoria "<<corredor1.categoria<<endl;

}
