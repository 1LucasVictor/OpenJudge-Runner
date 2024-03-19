#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char dots[] = "...";
char rocks[] = "##";
int max (int a, int b) {
    if(a > b) {
        return a;
    }
    else {
        return b;
    }
}
int plan1(int N, int A, int B, int C, int D, char *S) {
    //BD -> S[D]=# -> AC
    int one[] = {0, 0};
    char *temp = (char*)malloc((strlen(S)+1) * sizeof(char));
    strncpy(temp, S+B, D-B+1);
    temp[D-B+1] = '\0';
    //printf("%s\n", temp);
    if(strstr(temp, rocks) == NULL) {
        one[0] = 1;
    }
    free(temp);
    char *tmp = (char*)malloc((strlen(S)+1) * sizeof(char));
    strcpy(tmp, S);
    tmp[B] = '.';
    tmp[D] = '#';
    //printf("%s\n", tmp);
    if(strstr(tmp, rocks) == NULL) {
        one[1] = 1;
    }
    free(tmp);
    if(one[0] * one[1] == 1) {
        return 1;
    }
    else {
        return 0;
    }
}
int plan2(int N, int A, int B, int C, int D, char *S) {
    // dots -> S[B]=. -> AC -> BD
    S[A] = '-';
    S[B] = '-';
    S[C] = '-';
    S[D] = '-';
    //printf("%s\n", S);
    if(strstr(S, dots) == NULL) {
        S[A] = '.';
        S[B] = '.';
        S[C] = '.';
        S[D] = '.';
        return 0;
    }
    S[A] = '.';
    S[B] = '.';
    S[C] = '.';
    S[D] = '.';
    int one[] = {0, 0};
    char *temp = (char*)malloc((strlen(S)+1) * sizeof(char));
    strcpy(temp, S);
    temp[B] = '.';
    //printf("%s\n", temp);
    if(strstr(temp, rocks) == NULL) {
        one[0] = 1;
    }
    free(temp);
    char *tmp = (char*)malloc((strlen(S)+1) * sizeof(char));
    strncpy(tmp, S+B, D-B+1);
    tmp[D-B+1] = '\0';
    //printf("%s\n", tmp);
    if(strstr(tmp, rocks) == NULL) {
        one[1] = 1;
    }
    free(tmp);
    if(one[0] * one[1] == 1) {
        return 1;
    }
    else {
        return 0;
    }
}
int main(void){
    int N, A, B, C ,D;
    scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);
    B -= A;
    C -= A;
    D -= A;
    A = 0;
    char *temp = (char*)malloc((N+1) * sizeof(char));
    scanf("%s", temp);
    char *S = (char*)malloc((max(C, D) + 1) * sizeof(char));
    strncpy(S, temp+A, max(C, D)+1);
    S[max(C, D)+1] = '\0';
    free(temp);
    if(C < D) {
        if(strstr(S, rocks) != NULL) {
            printf("No\n");
            free(S);
        }
        else {
            printf("Yes\n");
            free(S);
        }
        return 0;
    }
    else {
        if(strstr(S, rocks) != NULL) {
            printf("No\n");
            free(S);
            return 0;
        }
        // plan 1
        int one = plan1(N, A, B, C, D, S);
        int two = plan2(N, A, B, C, D, S);
        if( one == 1 || two == 1) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
        free(S);
        return 0;
    }
}