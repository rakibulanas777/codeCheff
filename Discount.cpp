#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int X[T];
    for(int i=0;i<T;i++){
        cin>>X[i];
    }
    for(int i=0;i<T;i++){
        int diff=100;      
            cout<<diff-X[i]<<endl;          
    }
}