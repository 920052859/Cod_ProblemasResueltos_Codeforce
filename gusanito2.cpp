#include <bits/stdc++.h>
using namespace std;
int main () {
    int x, y;
    cin>>x; // filas
    cin>>y; // columnas
		for(int i=0;i<x;i++){
			for( int j=0; j<y;j++){
				if( i+1 %2==1){
 				cout<<'#';
 				
				 }
		if(y%2==0 && (y%4!=0 )){
 			    cout<<'.';
				 }		 			
		if(y%2==1 && y%2==1){
 				cout<<'.';	 
			}
			cout<<endl;
		}
    return 0;
}
