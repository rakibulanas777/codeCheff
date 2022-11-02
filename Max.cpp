#include<bits/stdc++.h>
using namespace std;
int max(int x,int y,int z){
    if(x>=y && x>=z) return x;
    else if(y>=x && y>=z) return y;
    else return z;
}
int min(int x,int y,int z){
    if(x<=y && x<=z) return x;
    else if(y<=x && y<=z) return y;
    else return z;
}
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int x,y,z;
        cin>>x>>y>>z;
        int maxNum=max(x,y,z);
        int minNum=min(x,y,z);
        cout<<maxNum-minNum<<endl;
    }
 
}