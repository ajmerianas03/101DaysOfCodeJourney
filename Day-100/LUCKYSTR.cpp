#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int k,n;
	cin>>k>>n;
	string a[k],b[n];
	for(int i=0;i<k;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];
	for(int i=0;i<n;i++){
	    int c=0;
	    for(int j=0;j<k;j++){
	        if (b[i].find(a[j]) != std::string::npos) 
	           { cout<<"Good"<<endl;c=1;break;}
	          
	       }
	       if(c==0){
	       if(b[i].length()>=47)
	        cout<<"Good"<<endl;
	        else 
	       cout<<"Bad"<<endl;}
	}
	
	return 0;
}
