#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		double d, x, y;
		cin>>d>>x>>y;
		int ans = -1;
		if(x <= y)
			ans = 0;
		else if(d*x > 100) {
			ans = ceil((x-y)*100/(d*x-100));
			if(ans > y)
				ans = -1;
		}
		cout<<ans<<"\n";
	}
	return 0;
}