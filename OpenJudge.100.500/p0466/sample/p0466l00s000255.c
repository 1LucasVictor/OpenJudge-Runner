#include <stdio.h>
int main(){
    char S[10];
    char T[11];
    int i,j;
    int k=0;
    scanf("%s",&S);
    scanf("%s",&T);
    for(j=0; S[j]!='\0'; ++j);
//    printf("入力した文字列は「%d」文字です。\n",j);
    
    for(i=0;i<j+1;i++){
        if(S[i]==T[i]){
//            printf("Yes");
//            printf("%c %c\n",S[i],T[i]);
            k++;
        }
        else{
//            printf("No");
//            printf("%c %c\n",S[i],T[i]);
            k=k;
        }
    }
//    printf("%d",k);
    if(k==j){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
}