#include <stdio.h>
int main(){
    int N, a = 1;
    scanf("%i", &N);
    for(int i = 0; i < N*2; i+=2){
        printf("%i %i %i\n", a, a*a, a*a*a);
        printf("%i %i %i\n", a, (a*a)+1, (a*a*a)+1);
        a++;
    }
    return 0;
}
