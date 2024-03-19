#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 13
#define pi M_PI

int main(){
    int x,y,r;
    scanf("%d%d",&x,&y);
    while(1){
        r=x%y;
        x=y;
        y=r;
        if(y==0) break;
    }
    printf("%d\n",x);
   return 0;
}
