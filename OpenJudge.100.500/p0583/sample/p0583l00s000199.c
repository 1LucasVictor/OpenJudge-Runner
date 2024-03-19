#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char dots[] = "...";
char rocks[] = "##";
int plan1(int N, int A, int B, int C, int D, char *S) {
    //BD -> S[D]=# -> AC
    int one[] = {0, 0};
    char *temp = (char*)malloc((strlen(S)+1) * sizeof(char));
    strncpy(temp, S+B, D-B+1);
    temp[D-B+1] = '\0';
    if(strstr(temp, rocks) == NULL) {
        one[0] = 1;
    }
    free(temp);
    char *tmp = (char*)malloc((strlen(S)+1) * sizeof(char));
    strcpy(tmp, S);
    tmp[B] = '.';
    tmp[D] = '#';
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
    if(strstr(S, dots) == NULL) {
        S[A] = '.';
        S[B] = '.';
        return 0;
    }
    S[A] = '.';
    S[B] = '.';
    int one[] = {0, 0};
    char *temp = (char*)malloc((strlen(S)+1) * sizeof(char));
    strcpy(temp, S);
    temp[B] = '.';
    if(strstr(temp, rocks) == NULL) {
        one[0] = 1;
    }
    free(temp);
    char *tmp = (char*)malloc((strlen(S)+1) * sizeof(char));
    strncpy(tmp, S+B, D-B+1);
    tmp[D-B+1] = '\0';
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
    A--;
    B--;
    C--;
    D--;
    char *temp = (char*)malloc((N+1) * sizeof(char));
    scanf("%s", temp);
    char *S = (char*)malloc((N-A+1) * sizeof(char));
    strncpy(S, temp+A, N-A+1);
    S[N-A+1] = '\0';
    B -= A;
    C -= A;
    D -= A;
    A = 0;
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