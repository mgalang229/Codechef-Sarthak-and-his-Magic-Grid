#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// simply print the same number in all the cells
		// if n is odd, then the answer will always be n itself, otherwise 0
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << 2 << " ";
			}
			cout << '\n';
		}
		cout << '\n';
	}
	return 0;
}
