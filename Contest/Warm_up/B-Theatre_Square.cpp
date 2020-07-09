#include <iostream>
#include <cmath>

using namespace std;
long long int n,m,a,w,h;
int main() {
	// your code goes here
	cin>>n>>m>>a;
	w = n/a+1*(n%a>0);
	h = m/a+1*(m%a>0);
	cout<<w*h<<endl;
	
	return 0;
}

