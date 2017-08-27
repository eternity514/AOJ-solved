#include <cstdio>
#include <cmath>
#include <complex>
#include <vector>

#define MAX 101
#define EPS 1e-5

typedef std::complex<double> P;
P p[MAX];

int n;

std::vector<P> point(P a, P b){
    std::vector<P> res;

    if(std::abs(std::abs(b - a) - 2.0) < EPS){
        P c = a + b;
        res.push_back(P(c.real() / 2, c.imag() / 2));
    }else if(abs(b - a) < 2.0){
        P xx = b - a;
        P ce = a + P(xx.real() / 2, xx.imag() / 2);
        P no1 = (xx * P(0, +1)) / std::abs(xx);
        P no2 = (xx * P(0, -1)) / std::abs(xx);
        double dis = sqrt(1 - pow(std::abs(xx) / 2, 2));
        P c = ce + no1 * dis;
        P q = ce + no2 * dis;

        res.push_back(c);
        res.push_back(q);
    }

    return res;
}

int main(){
    while(scanf("%d", &n)){
        if(n == 0) break;

        for(int i = 0; i < n; i++){
            double a, b;
            scanf("%lf,%lf", &a, &b);

            p[i] = P(a, b);
        }

        int ans = 1;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                std::vector<P> v = point(p[i], p[j]);

                if(v.empty()) continue;

                int cnt1 = 2, cnt2 = 2;
                for(int k = 0; k < n; k++){
                    if(k == i || k == j) continue;
                    if(std::abs(v[0] - p[k]) - 1.0 < EPS){ cnt1++; }
                    if(v.size() == 2 && std::abs(v[1] - p[k]) - 1.0 < EPS){ cnt2++; }
                }
                ans = std::max(ans, std::max(cnt1, cnt2));
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
