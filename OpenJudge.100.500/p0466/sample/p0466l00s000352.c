#include <stdio.h>
#include <string.h>

int main(void){
    char S[10], T[11];
    int i, cnt=0;

    scanf("%s", &S);
    scanf("%s", &T);

    for(i=0; i<strlen(S); i++){
        if(S[i]!=T[i]){
            cnt++;
        }
    }

    if((strlen(S)+1==strlen(T))&&(cnt==0)){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}