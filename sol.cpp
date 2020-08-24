#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	string s;
	cin >> s;
	int cnt=1, ans=0;
	for(int i=0; i<(int)s.size(); ++i) {
		if(s[i]==s[i+1])
			cnt++;
		else 
			cnt=1;
		ans=max(ans, cnt);
	}
	cout << ans << "\n";
}
