#include<stdio.h>
int main(void){
        int i,j,n,f=0;
        scanf("%d",&n);
        for(i=1;i<=9;i++){
                for(j=1;j<=9;j++){
                if(i*j==n){f=1;break;}
                }
        }
        if(f==1)printf("Yes");
        else printf("No");
 }