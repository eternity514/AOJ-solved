#include <iostream>


int main() {
	int y, m, d, s;
	while (std::cin >> y >> m >> d) {
		s  = y; s *= 100;
		s += m; s *= 100;
		s += d;

		if (18680908 <= s && s <= 19120729) {
			std::cout << "meiji ";
			y -= 1867;
		}
		else if (19120730 <= s && s <= 19261224) {
			std::cout << "taisho ";
			y -= 1911;
		}
		else if (19261225 <= s && s <= 19890107) {
			std::cout << "showa ";
			y -= 1925;
		}
		else if (19890108 <= s) {
			std::cout << "heisei ";
			y -= 1988;
		}
		else {
			std::cout << "pre-meiji" << std::endl;;
			continue;
		}
		std::cout << y << " " << m << " " << d << std::endl;
	}
	return 0;
}