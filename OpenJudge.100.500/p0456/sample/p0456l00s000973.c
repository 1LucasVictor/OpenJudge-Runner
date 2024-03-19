#include <stdio.h>

int main(void){
     char S[200001];
     char T[200001];
     int i;
     int w=0;

    scanf("%s", &S);
    scanf("%s", &T);
    for(i = 0;i<strlen(S);i++){
        if(S[i]!=T[i]){
            w+=1;
        }
    }
    
    printf("%d",w);
    return 0;
} 