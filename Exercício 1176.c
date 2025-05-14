#include <stdio.h>
long long int Fib(long long int n){
    long long int a = 0, b = 1, aux = 0;
    if(n > 2){
    for(int g = 1; g < n ; g++){
        aux = a + b;
        a = b;
        b = aux;
    }
    return aux;
    }
    else if(n  == 1 || n == 2){
        return 1;
    }
    else if(n == 0){
        return 0;
    }

}
int main() {

    long long int T = 0, x = 0;
    long long int N = 0;
    scanf("%i", &T);
    for(int i = 0; i < T; i++){
        scanf("%i", &N);
        x = Fib(N);
        printf("Fib(%lli) = %lli\n", N, x);
    }

    return 0;
}
