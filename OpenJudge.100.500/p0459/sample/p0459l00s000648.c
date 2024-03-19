#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i=0;i<=x;i++)
      for(int j=0;j<=x-i;j++)
        if(y==4*i+2*j&&x==i+j){ 
            printf("Yes");
            return 0;
        }
    printf("No");
    return 0;
}