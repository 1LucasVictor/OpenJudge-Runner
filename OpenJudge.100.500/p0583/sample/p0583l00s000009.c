#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int min(int a, int b) {
    if(a < b) {
        return a;
    }
    else {
        return b;
    }
}
int main(void){
    int N, A, B, C ,D;
    scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);
    char *S = (char*)malloc((N+1) * sizeof(char));
    scanf("%s", S);
    char dot3[] = "...";
    char rock2[] = "##";
    char *s = (char*)malloc((N+1) * sizeof(char));
    strncpy(s, S, min(C, D)-1);
    s[min(C, D)-1] = '\0';
    if(strstr(s, rock2) != NULL) {
        printf("No\n");
        free(S);
        return 0;
    }
    if(D < C) {
        if(strstr(s, dot3) == NULL) {
            printf("No\n");
            free(S);
            return 0;
        }
    }
    printf("Yes\n");
    free(S);
    free(s);
    return 0;
}