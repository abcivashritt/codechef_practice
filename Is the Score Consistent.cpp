#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<<((a <= c && b <= d)?"POSSIBLE":"IMPOSSIBLE")<<"\n";
	}
	return 0;
}
