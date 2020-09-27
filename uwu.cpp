#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
	
	 for(int i=0;i<5;i++){
	 cin>>a[i];
	 }
	  int n = sizeof(a)/sizeof(a[0]);
    sort(a, a+n);

     for(int i=0;i<5;i++){
	 cout<<a[i];
	 }

    return 0;
}
