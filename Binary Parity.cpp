#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,c=0;
		cin>>n;
		while(n) {
			if(n&1)
				c++;
			n = n>>1;
		}
		cout<<(c%2?"ODD":"EVEN")<<"\n";
	}
	return 0;
}
