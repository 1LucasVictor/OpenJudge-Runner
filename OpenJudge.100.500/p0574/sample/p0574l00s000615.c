#include<stdio.h>
int main(void){
    char S[3];
    int i;
    int flag = 0;
    
    scanf("%s",S);

    
    for(i = 0 ; i < 4 ; i++){
        if(S[i] == S[i + 1]) break;
            printf("Bad\n");
            flag = 1;
    }
    if(flag == 0){
    printf("Good\n");
    }
  return 0;
}
