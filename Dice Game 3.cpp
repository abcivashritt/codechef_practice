#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		cout<<(n/2)*13 + (n%2)*6<<"\n";
	}
	return 0;
}