#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define STR 11
int main(){
    char S[STR],T[STR+1];
    scanf("%s %s",S,T);
    for(int i=0;S[i] != '\0';i++){
        if(S[i]!=T[i]){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}