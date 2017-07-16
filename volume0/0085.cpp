#include <iostream>
#include <vector>

int main() {
	int n, m, cnt;

	while (1) {
		std::cin >> n >> m;
		if (n == 0 && m == 0) break;

		std::vector<int> people;
		for (int i = 1; i <= n; i++) {
			people.push_back(i);
		}

		cnt = -1;
		while (people.size() > 1) {
			cnt = (cnt + m) % people.size();
			people.erase(people.begin() + cnt);
			cnt -= 1;
		}

		std::cout << people[0] << std::endl;
	}

	return 0;
}