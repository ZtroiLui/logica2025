#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int N = 0;
    scanf("%d", &N);
    getchar();
    for (int i = 0; i < N; i++) {
        char c[51];
        int d = 0;
        fgets(c, 51, stdin);
        c[strcspn(c, "\n")] = '\0';
        scanf("%d", &d);
        getchar();
        for (int i = 0; c[i] != '\0'; i++) {
            if (isupper(c[i])) {
                char o = ((c[i] - 'A' - d) + 26) % 26;
                c[i] = 'A' + o;
            }
        }
        printf("%s\n", c);
    }
    return 0;
}
