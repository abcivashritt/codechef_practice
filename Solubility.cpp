#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,a,b;
		cin>>x>>a>>b;
		cout<<a*10 + (100-x)*b*10<<"\n";
	}
	return 0;
}
