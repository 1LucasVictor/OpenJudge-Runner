#include<stdio.h>
int main(void){
        int n,num[100],i=0;
        scanf("%d",&n);
        for(i=0;n>i;i++){
        scanf("%d",&num[i]);
        }
        for(i=n-1;i>0;i--){
                printf("%d ",num[i]);
        }
        printf("%d\n",num[0]);
}
