#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    vector<vector<char>>a;
    for(int i=0;i<n;i++){
        vector<char> s;
        for(int j=0;j<10;j++){
            char m;
            cin>>m;
            s.push_back(m);
        }
        sort(s.begin(),s.end());
        a.push_back(s);
    }
    int x=0;
    for(int i=0;i<n-1;i++){        
        for(int j=i+1;j<n;j++ ){
            if(a[i]==a[j]){
                x++;                
            }
        }
    }
    cout<<x;
    return 0;
}
