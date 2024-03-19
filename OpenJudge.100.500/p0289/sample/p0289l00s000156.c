#include<stdio.h>

int main(void){

    int x,y;

    scanf("%d %d",&x,&y);

    while(x!=0 && y!=0){
         if(x>y){
           x=x-y;
         }else{
           y=y-x;
         }
    }

    if(x==0){
      printf("%d\n",y);
    }else{
      printf("%d\n",x);
    }

    return 0;
}