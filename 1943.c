#include <stdio.h>
int main(){
    int K;
    scanf("%i", &K);
    if(K > 100 && K < 1) return 1;
    if(K <= 100 && K > 50) printf("Top 100\n");
    if(K <= 50 && K > 25) printf("Top 50\n");
    if(K <= 25 && K > 10) printf("Top 25\n");
    if(K <= 10 && K > 5) printf("Top 10\n");
    if(K <= 5 && K > 3) printf("Top 5\n");
    if(K <= 3 && K > 1) printf("Top 3\n");
    if(K == 1) printf("Top 1\n");
    return 0;
}
