#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    int N, A, B, C ,D;
    scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);
    char *S = (char*)malloc((N+1) * sizeof(char));
    scanf("%s", S);
    char dot3[] = "...";
    char rock2[] = "##";

    if(strstr(S, rock2) != NULL) {
        printf("No\n");
        free(S);
        return 0;
    }
    if(D < C) {
        if(strstr(S, dot3) == NULL) {
            printf("No\n");
            free(S);
            return 0;
        }
    }
    printf("Yes\n");
    free(S);
    return 0;
}