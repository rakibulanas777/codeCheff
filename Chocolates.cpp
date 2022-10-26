#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int X[T],Y[T],Z[T];
    for(int i=0;i<T;i++){
        cin>>X[i]>>Y[i]>>Z[i];
    }
    for(int i=0;i<T;i++){
        int total = X[i]*5+Y[i]*10;
        int chocolate=total/Z[i];
        cout<<chocolate<<endl;       
             
    }
}