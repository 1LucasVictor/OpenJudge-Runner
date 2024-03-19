#include<stdio.h>
int main(){
    char S[3];
    scanf("%s",S);
    for(int i=0;i<2;i++){
        if(S[i]!=S[i+1]){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}