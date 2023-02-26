#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int e, f, c; cin >> e >> f >> c;
	auto ans = int{ 0 };
	auto x = e + f;
	while (c <= x) {
		const auto& q = x / c;
		ans += q;
		x -= q * c;
		x += q;
	}

	cout << ans;

	return 0;
}