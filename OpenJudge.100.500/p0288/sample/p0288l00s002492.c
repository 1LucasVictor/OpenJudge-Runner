#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int putint(char *string, int *ary){
    char *tp;
    int cnt = 0;
    tp = strtok(string, " ");
    
    ary[cnt] = atoi(tp);
    while (tp != NULL){
         tp = strtok(NULL, " ");
	  if (tp != NULL){
             cnt++;
             ary[cnt] = atoi(tp);  
          }
    }
    return cnt;
}

void print_ary(int *ary, int len){
    int i;
    for (i = 0; i < len; i++){
        printf("%d ", ary[i]);
    }
    printf("\n");
}

void sort(int *ary, int len, int n){
    int scope, i, buf;
    for (scope = 0; scope < len; scope++){
        buf = ary[scope];
        for (i = 0; i < scope; i++){
             if (ary[i] > buf){
                 buf = ary[i];
                 ary[i] = ary[scope];
                 ary[scope] = buf; 
               }
         }
        if (scope < n){
            print_ary(ary, len);
         }
    } 
}

int main(void){
    char *string = malloc(sizeof(char) * 200000);
    int *ary = malloc(sizeof(int) * 1000);
    char _n[6];
    int n;

    fgets(_n, 6, stdin);
    n = atoi(_n);
    fgets(string, 200000, stdin);
    int num = putint(string, ary);

    sort(ary, num+1, n);
    free(ary);
    free(string);
}
