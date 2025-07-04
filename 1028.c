#include <stdio.h>

int mdc(int F1, int F2){
    if(F2 == 0) return F1;
    return mdc(F2, F1 % F2);
}

int main(){
    int N, F1, F2;
    scanf("%i", &N);
    for(int i = 0; i < N; i++){
        scanf("%i %i", &F1, &F2);
        printf("%i\n", mdc(F1, F2));
    }
    return 0;
}
