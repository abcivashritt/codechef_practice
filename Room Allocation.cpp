#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,ans = 0;
		cin>>n;
		while(n--) {
			cin>>temp;
			ans += (temp+1)/2;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
