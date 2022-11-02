#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int x,y,z;
        cin>>x>>y>>z;
        if((x+y)%2!=0 || (x+z)%2!=0 || (z+y)%2!=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
}