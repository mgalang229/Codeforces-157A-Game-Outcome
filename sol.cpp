#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int row_sum = 0;
			// to calculate the row sum, the iteration index for row
			// should be constant, and the iteration index for column
			// should the moving
			for (int k = 0; k < n; k++) {
				row_sum += a[i][k];
			}
			int column_sum = 0;
			// to calculate the column sum, the iteration index for column
			// should be constant, and the iteration index for row
			// should the moving
			for (int k = 0; k < n; k++) {
				column_sum += a[k][j];
			}
			// check if the column sum is STRICTLY greater than the row sum
			if (column_sum > row_sum) {
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}
