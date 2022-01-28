#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto m = (n - 1) % 8;
	switch (m)
	{
	case 0:
		cout << 1; break;
	case 1: case 7:
		cout << 2; break;
	case 2: case 6:
		cout << 3; break;
	case 3:	case 5:
		cout << 4; break;
	case 4:
		cout << 5; break;
	default: break;
	}

	return 0;
}