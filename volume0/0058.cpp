#include <cstdio>
#include <cmath>
using namespace std;

#define EPS 1e-10

int main() {
	double ax, ay, bx, by, cx, cy, dx, dy;
	while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&ax,&ay,&bx,&by,&cx,&cy,&dx,&dy) != EOF) {
		if (fabs((ax - bx)*(cx - dx) + (ay - by)*(cy - dy)) < EPS) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
