#include <iostream>
#include <algorithm>
using namespace std;

int n;
int d[1001];
int p[10001];

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &p[i]);
        d[i] = 1000 * 1000;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            d[i] = min(d[i], p[j] + d[i - j]);
        }
    }

    printf("%d\n", d[n]);

    return 0;
}
