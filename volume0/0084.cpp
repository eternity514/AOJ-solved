#include <iostream>
#include <string>


int main() {
	std::string str = "", res = "";
	std::getline(std::cin, str);

	int i = 0, c = 0;
	while (1) {
		if (str[i] == ',' || str[i] == '.' || str[i] == ' ') {
			if(3 <= c && c <= 6)
				res += str.substr(i - c, c) + " ";

			c = 0;
		} else {
			c++;
		}

		if (str[i] == '\0')
			break;

		i++;
	}

	std::cout << res.substr(0, res.size() - 1) << std::endl;

	return 0;
}