#include <stdio.h>

int main() {
    int N = 0;
    double a = 0, b = 0, c = 0, aux = 0;

    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%lf %lf %lf", &a, &b, &c);
        aux = a * 0.2 + b * 0.3 + c * 0.5;
        printf("%.1lf\n", aux);
    }

}
