#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,x,y;
		cin>>a>>b>>x>>y;
		cout<<(x*y >= a*b?"YES":"NO")<<"\n";
	}
	return 0;
}
