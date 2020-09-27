#include<bits/stdc++.h>
using namespace std;
const int inf = 0x3f3f3f3f;
int n; 
int judge (int m){
    int t=m*n+1;
    for (int i=2;i*i<=t;i++){
        if (t%i==0)return 1;}
    return 0;}
int main ()
{
    while (cin>>n){
        int m=1;
        while (1){
            if (judge(m))break;//?????????m? 
            else m++;
        }
        cout<<m<<endl;
    }       
    return 0;}

