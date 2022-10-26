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
        int diff;
        diff=Y[i]-X[i];
        if(diff<=200 && diff>=0){
            cout<<"YES"<<endl;  
        }
         else{
            cout<<"NO"<<endl;
        }
    }
}