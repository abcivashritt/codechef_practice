#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x1,x2,y1,y2,z1,z2;
		cin>>x1>>x2>>y1>>y2>>z1>>z2;
		cout<<((x2 >= x1 && y2 >= y1 && z2 <= z1) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
