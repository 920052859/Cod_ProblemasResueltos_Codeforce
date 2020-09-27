#include<bits/stdc++.h>
using namespace std;
int main(){
char palabra[105];
int longi, total=0,corina[28]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
cin>>palabra;
longi=strlen(palabra);
//	cout<<longi;
	for(int i=0;i<longi;i++){
		switch(palabra[i]){
		case 'a': corina[0]++;break; 
		case 'b': corina[1]++; break;	
		case 'c': corina[2]++; break;
		case 'd': corina[3]++; break;
		case 'e': corina[4]++; break;	
		case 'f': corina[5]++; break;
		case 'g': corina[6]++; break;
		case 'h': corina[7]++; break;	
		case 'i': corina[8]++; break;
		case 'j': corina[9]++; break;
		case 'k': corina[10]++; break;	
		case 'l': corina[11]++; break;
		case 'm': corina[12]++; break;
		case 'n': corina[13]++; break;	
		case 'ñ': corina[14]++; break;
		case 'o': corina[15]++; break;
		case 'p': corina[16]++; break;
		case 'q': corina[17]++; break;
		case 'r': corina[18]++; break;
		case 's': corina[19]++; break;
		case 't': corina[20]++; break;
		case 'u': corina[21]++; break;
		case 'v': corina[22]++; break;
		case 'w': corina[23]++; break;
		case 'x': corina[24]++; break;
		case 'y': corina[25]++; break;	
		case 'z': corina[26]++; break;	
		}
		
	}
			for(int k=0;k<27;k++){
			if(corina[k]!=0){
				total++;
			}
			}
			//cout<<total<<'\n';
		if(total%2==0){
		cout<<"CHAT WITH HER!";
		} else {
		cout<<"IGNORE HIM!";
		}

return 0;	
}

