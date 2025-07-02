#include <stdio.h>
int main(){
    int N, S, Dia;
    scanf("%i %i", &N, &S);
    int Soma[N+1], Aux = S;
    Soma[0] = S;
    for(int i = 1; i <= N; i++){
        scanf("%i", &Dia);
        Soma[i] = Soma[i-1] + Dia;
        if(Aux > Soma[i]){
            Aux = Soma[i];
        }
    }
    printf("%i\n", Aux);
    return 0;
}
