#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		cout<<(n+1 <= k?"YES":"NO")<<"\n";
	}
	return 0;
}
