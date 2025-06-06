//1367.c

#include <stdio.h>
#include <string.h>

#define MAX_PROBLEMS 26

typedef struct {
    int penalty;
    int solved;
} Problem;

int main() {
    int submissionCount;

    while(1){
        scanf("%d", &submissionCount);
        if (submissionCount == 0)
        break;

    Problem problems[MAX_PROBLEMS];
    for (int i = 0; i < MAX_PROBLEMS; i++) {
        problems[i].penalty = 0;
        problems[i].solved = 0;
    }

    int totalTime = 0;
    int totalSolved = 0;

    for (int i = 0; i < submissionCount; i++) {
        char quest;
        int tempo;
        char julg[10];
        scanf(" %c %i %s", &quest, &tempo, julg);
        int index = quest - 'A';

        if(strcmp(julg, "correct") == 0){
            if(!problems[index].solved){
            problems[index].solved = 1;
            totalTime += tempo + problems[index].penalty;
            totalSolved++;
            }
        }

        else if(strcmp(julg, "incorrect") == 0){
            if(!problems[index].solved){
                problems[index].penalty += 20;
            }
        }
    }

    printf("%d %d\n", totalSolved, totalTime);

    }
    return 0;


}
