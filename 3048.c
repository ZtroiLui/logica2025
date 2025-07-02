#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int V[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }
    int cont = 1;   
    for (int i = 1; i < N; i++) {
        if (V[i] != V[i-1]) {
            cont++;
        }
    }
    printf("%d\n", cont);
    return 0;
}
