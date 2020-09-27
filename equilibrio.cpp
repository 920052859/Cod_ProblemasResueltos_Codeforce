#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,x=0,y=0,z=0;
	cin>>n;
	long long q[n][3];
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>q[i][j];
			switch(j) {
         	case (0):
              x+=q[i][j];    
              break;
            case (1):
              y+=q[i][j];    
              break;  
          	default:
              z+=q[i][j];
              break;}
		}
	}
	
//	for(int i=0;i<n;i++){
//		for(int j=0;j<3;j++){
//			
//      }	
//		}
//	}

	
	if(x==0 and y==0 and z==0){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	return 0;
}

