#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int X;
	    cin>>X;
	    
	    string Str;
	    cin>>Str;
	    
	    int carlsen = 0;
	    int chef = 0;
	    for(int i = 0; i<14; i++){
	        if(Str[i] == 'C')
	            carlsen++;
	        else if(Str[i] =='N')
	            chef++;
	    }
	    
	    if(carlsen > chef){
	        cout<<60*X;
	    }
	    else if(carlsen == chef){
	        cout<<55*X;
	    }
	    else{
	        cout<<40*X;
	    }
	    cout<<endl;
	}
	return 0;
}