#include <iostream>
#define MAX 8


int make(int *num, int c) {
	int res = 0;
	for (int i = 0; i < MAX; i++) {
		res *= 10;
		res += num[(i + c) % MAX];
	}
	return res;
}


int main() {
	int p[MAX];
	int c[MAX] = { 4,1,4,1,2,1,2,1 };
	int ex, mx, fl1, fl2;

	while (std::cin>>p[0]>>p[1]>>p[2]>>p[3]>>p[4]>>p[5]>>p[6]>>p[7]) {
		fl1 = 0;

		mx = 114514;
		fl2 = 114514810;
		for (int i = 0; i < MAX; i++) {
			int temp;
			ex = 0;
			for (int j = 0; j < MAX; j++) {
				temp = p[j] - c[(j + i) % MAX];
				if (temp > 0) ex += temp;
			}

			temp = make(c, i);
			if (mx > ex) {
				mx = ex;
				fl1 = i;
				fl2 = temp;
			} else if (mx == ex && temp < fl2) {
				mx = ex;
				fl1 = i;
				fl2 = temp;
			}
		}


		for (int i = 0; i < MAX; i++) {
			if (i != MAX - 1)
				std::cout << c[(fl1 + i) % MAX] << " ";
			else
				std::cout << c[(fl1 + i) % MAX] << std::endl;
		}
	}

	return 0;
}