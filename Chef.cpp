#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int X,Y;
   
    for(int i=0;i<T;i++){
        cin>>X>>Y;
        if((X*100)>=(Y*10)) cout<<"Cloth"<<endl;
        else cout<<"Disposable"<<endl;
    }
}