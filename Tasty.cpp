#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int X,Y;
   
    for(int i=0; i<T; i++){
        cin>>X>>Y;
        if(X*2==Y*5) cout<<"Either"<<endl;
        else if(X*2>Y*5) cout<<"Chocolate"<<endl;
        else cout<<"Candy"<<endl;
    }
}