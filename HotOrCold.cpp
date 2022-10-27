#include<bits/stdc++.h>
using namespace std;
int main(){
   
    //declare variable
    int T;
    int C;
    //getting user input
    cin>>T;  
    //use for loop for taking n input
    for(int i=0;i<T;i++){
        cin>>C;
        if(C>20) cout<<"HOT"<<endl;
        else cout<<"COLD"<<endl;
    }

}