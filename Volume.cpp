#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int X,Y;
   
    for(int i=0;i<T;i++){
        cin>>X>>Y;
        if(X>Y) {
            cout<<X-Y<<endl;
        } else  {
            cout<<Y-X<<endl;
        }   
             
    }
}