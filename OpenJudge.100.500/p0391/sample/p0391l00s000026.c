#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
    char A[1010],S[1010],Q[110],T[10];
    int a,b,q;
    int i,j;

    scanf("%s%d",S,&q);
    for(i=0;i<q;i++){
        scanf("%s%d%d",T,&a,&b);
        
        if(!strcmp(T,"print")){
            for(j=a;j<b+1;j++){
                printf("%c",S[j]);
            }
            printf("\n");
        }

        if(!strcmp(T,"reverse")){
            strcpy(A,S);
            for(j=a;j<b+1;j++){
                S[j]=A[a+b-j];
            }
        } 

        if(!strcmp(T,"replace")){
            scanf("%s",A);
            for(j=0;j<b-a+1;j++){
                S[a+j]=A[j];
            }
        }            
    }
    return 0;
}
