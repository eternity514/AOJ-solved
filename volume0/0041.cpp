#include <iostream>
#include <cstdio>
using namespace std;

#define FOR(i, a, b) for(int i = a; i < b; i++)
#define REP(a, b) FOR(a, 0, b)

char opr[3] = { '+','-','*' };

int calc(int a, int b, int c) {
	if (c == 0) return a + b;
	if (c == 1) return a - b;
	return a * b;
}

void permutations(int a, int b, int c, int d) {
	int per[4] = {0};
	REP(i, 4) { REP(j, 4) { REP(k, 4) { REP(l, 4) {
		if (k == i || k == j || i == j || 
			l == i || l == j || l == k) continue;
						
		per[i] = a;
		per[j] = b;
		per[k] = c;
		per[l] = d;

		REP(f, 3) { REP(g, 3) { REP(h, 3) {
			if (calc(calc(per[0], per[1], f), calc(per[2], per[3], h), g) == 10) {
				printf("((%d %c %d) %c (%d %c %d))\n",per[0], opr[f], per[1], opr[g], per[2], opr[h], per[3]);
				return;
			}

			if (calc(calc(calc(per[0], per[1], f), per[2], g), per[3], h) == 10) {
				printf("(((%d %c %d) %c %d) %c %d)\n", per[0], opr[f], per[1], opr[g], per[2], opr[h], per[3]);
				return;
			}
		} } }
	} } } }
	cout << 0 << endl;
}

int main() {
	int a, b, c, d;

	while (cin >> a >> b >> c >> d) {
		if (a == 0 && b == 0 && c == 0 && d == 0) break;

		permutations(a, b, c, d);
	}
	return 0;
}