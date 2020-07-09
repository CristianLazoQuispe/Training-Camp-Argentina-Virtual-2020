#include <iostream>
#include <string> 

using namespace std;
int n,d;
string c;
int main() {
	cin>>n;
	getline(cin,c);
	while(n--){
	    getline(cin,c);
	    d = c.size();
	    if (d>10){
	        cout<<c[0]<<d-2<<c[d-1]<<endl;
	    }
	    else{
	        cout<<c<<endl;
	    }
	}
	return 0;
}

