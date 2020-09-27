#include <bits/stdc++.h>
using namespace std;
int main () {
    int x, y;
    cin>>x; // filas
    cin>>y; // columnas
    char e='#', q='.';
    
		
		for(int j=0;j<y*x;j++){
			if((y)%2==1){
 				cout<<e;
 				
				 }
		if(y%2==0 && (y%4!=0 )){
 			    cout<<q;
				 }		 			
		if(y%2==1 && y%2==1){
 				cout<<q;
				 }
				 if((j> (y-1)) && (j%y==0)){cout<<'/n';
				 }	
		}
		
				 
				
    
    return 0;
}
