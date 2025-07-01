#include <stdio.h>
int main(){
    int N, V, T, Total = 0;
    scanf("%i", &N);
    for(int i = 0; i < N; i++){
        scanf("%i %i", &T, &V);
        Total += V*T;
    }
    printf("%i\n", Total);
}
