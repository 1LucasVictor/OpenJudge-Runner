#include<stdio.h>
int main(void){
    char a[20],b[20],i,j,k;
    scanf("%s",a);
    for(i=0;i<20;i++){
        if(a[i]=='\0'){
            break;
        }
        j++;
    }for(k=j-1;k>-1;k--){
        printf("%c",a[k]);
    }printf("\n");

return 0;
}