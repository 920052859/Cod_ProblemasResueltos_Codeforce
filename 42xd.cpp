#include<bits/stdc++.h>
using namespace std;
int main(){
	int lo=0,cori=0;
	char qwe[10];
	cin>>qwe;
	strlwr(qwe);
	lo=strlen(qwe);
	for(int i=0;i<lo;i++){
		switch(qwe[i]){
			case 'a':cori+=1;
					break;
			case 'b':cori+=2;
					break;	
			case 'c':cori+=3;
					break;
			case 'd':cori+=4;
					break;
			case 'e':cori+=5;
					break;
			case 'f':cori+=6;
					break;
			case 'g':cori+=7;
					break;
			case 'h':cori+=8;
					break;
			case 'i':cori+=9;
					break;
			case 'j':cori+=10;
					break;
			case 'k':cori+=11;
					break;
			case 'l':cori+=12;
					break;
			case 'm':cori+=13;
					break;
			case 'n':cori+=14;
					break;
			case 'o':cori+=15;
					break;
			case 'p':cori+=16;
					break;
			case 'q':cori+=17;
					break;
			case 'r':cori+=18;
					break;
			case 's':cori+=19;
					break;
			case 't':cori+=20;
					break;
			case 'u':cori+=21;
					break;
			case 'v':cori+=22;
					break;
			case 'w':cori+=23;
					break;
			case 'x':cori+=24;
					break;
			case 'y':cori+=25;
					break;
			default:cori+=26;																								
		}
	}
	if(cori==42){
		cout<<'YES';
	} else{
		cout<<'NO';
	}
	
	return 0;
} 
