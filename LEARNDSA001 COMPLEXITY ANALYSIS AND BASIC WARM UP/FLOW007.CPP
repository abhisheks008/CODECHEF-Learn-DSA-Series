#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    	long long int n;
	    cin>>n;
	    int i=0;
	    while(n>0){
	        	long long int k=n%10;
	        	if(i==0 and k==0){
	        	    n=n/10;
	        	}
	        	else{
	        	    i++;
	        cout<<k;
	        n=n/10;
	        	}
	    }
	    cout<<endl;
	}
	return 0;
}
