#include<bits/stdc++.h>
using namespace std;
int main(){
   
    //declare variable
    int X;
    float Y;
    //getting user input
    cin>>X>>Y;  
    //check condition 
    if(X%5==0 && X<=Y){
        cout<<(Y-X)-0.5<<endl;
    }
    else{
        cout<<Y<<endl;
    }

}