#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		cout<<min(x,y)+max(0,(y-x)*2)<<"\n";
	}
	return 0;
}
