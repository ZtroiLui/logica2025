#include <stdio.h>
int main(){
    int T, R1, R2;
    scanf("%i", &T);
    for(int i = 0; i < T; i++){
        scanf("%i %i", &R1, &R2);
        printf("%i\n", R1+R2);
    }
    return 0;
}
