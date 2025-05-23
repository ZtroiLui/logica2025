#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar();
    char l[1001];
    for (int i = 0; i < N; i++) {
        fgets(l, sizeof(l), stdin);
        l[strcspn(l, "\n")] = '\0';
        int len = strlen(l);
        for (int j = 0; j < len; j++) {
            if (isalpha(l[j])) {
                l[j] += 3;
            }
        }
        for (int j = 0; j < len / 2; j++) {
            char aux = l[j];
            l[j] = l[len - 1 - j];
            l[len - 1 - j] = aux;
        }
        int m = len / 2;
        for (int j = m; j < len; j++) {
            l[j] -= 1;
        }
        
        printf("%s\n", l);
    }
    
    return 0;
}
