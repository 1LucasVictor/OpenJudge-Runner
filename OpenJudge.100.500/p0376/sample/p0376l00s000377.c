#include<stdio.h>
int main(void){
    int a,b[1000],i;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for(i=a-1;i>=0;i--){
        printf("%d",b[i]);
        if(i==0){
            printf("\n");
        }
        else printf(" ");
    }
    return 0;
}
