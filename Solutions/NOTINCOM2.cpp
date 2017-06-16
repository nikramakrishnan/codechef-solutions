#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
    int n, m;
  	cin>>n>>m;
  	set<int> a, b, c;
  	for(int i = 0; i < n; ++i) {
  		int x;
  		cin>>x;
  		a.insert(x);
  		c.insert(x);
  	}
  	for(int i = 0; i < m; ++i) {
  		int x;
  		cin>>x;
  		b.insert(x);
  		c.insert(x);
  	}
  	std::cout << int(a.size() + b.size() - c.size()) << '\n';
  }
}
