#include<stdio.h>
 
int main(void){
   int X,Y;
   int i;
   int count=0;
    scanf("%d %d",&X,&Y);
 
    for(i=1;i<=X;i++){
       int sum=(X-i)*2+i*4;
        if(sum==Y){
            printf("Yes\n");
            count++;
            break;
        }
    }
    if(count==0){
       printf("No\n");
    }
    return 0;
}
