#include <stdio.h>

int main() {

    int p1 = 0, p2 = 0, n1 = 0, n2 = 0;
    double v1 = 0, v2 = 0, v = 0;

    scanf("%i" "%i" "%lf", &p1, &n1, &v1);
    scanf("%i" "%i" "%lf", &p2, &n2, &v2);

    v = (v1 * n1) + (v2 * n2);

    printf("VALOR A PAGAR: R$ %.2lf\n", v);
    return 0;
}
