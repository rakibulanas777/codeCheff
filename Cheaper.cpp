#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int X[T],Y[T];
    for(int i=0;i<T;i++){
        cin>>X[i]>>Y[i];
    }
    for(int i=0;i<T;i++){
        if(X[i]<Y[i]){
            cout<<"FIRST"<<endl;
        } else if(X[i]==Y[i]){
            cout<<"ANY"<<endl;
        } else if(Y[i]<X[i]){
            cout<<"SECOND"<<endl;
        }
    }
}