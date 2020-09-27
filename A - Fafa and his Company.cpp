#include<bits/stdc++.h>
using namespace std;
int main(){
int num,res=0;
cin>>num;
for(int i=1;i< num;i++){
	 if(num%i==0 and num/i >1){
	 	res++;
	 }
}

cout<<res;
return 0;	
}
