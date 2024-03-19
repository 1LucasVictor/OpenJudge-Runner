#include<stdio.h>
int main(void){
    int n,i;
    int b[110];
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d",b[i]);
        if(i>0){
            printf(" ");
        }
        else{
            printf("\n");

        }


    }




    return 0;
 }