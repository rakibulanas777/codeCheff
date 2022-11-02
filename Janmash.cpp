#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>x;
	    if((10-x)>=3){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
