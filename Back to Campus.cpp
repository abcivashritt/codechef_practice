#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		cout<<(n+k-1)/k<<"\n";
	}
	return 0;
}
