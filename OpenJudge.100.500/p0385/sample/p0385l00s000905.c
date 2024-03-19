#include<stdio.h>
int main(void){
    char C[1200]={};
    int i=0,sum=0;
    while(scanf("%s",C)==1){
        if((C[0]-48)==0) break;
       do{
           sum+=(C[i]-48);
           i++;
       }while(C[i]!='\0');
        printf("%d\n",sum);
        i=0;
        sum=0;
    }
    return 0;
}
