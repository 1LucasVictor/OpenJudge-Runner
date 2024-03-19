#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void){

    int x,y;

    scanf("%d %d",&x,&y);
    // printf("%d %d\n",x,y);

    int flag=0;
    int tmp=0;
    int a=0;

    if(2*x==y || 4*x==y){
        flag=1;
    }else if (2*x<y){
        tmp=(y-2*x)%2;
        a=x-(y-2*x)/2;
        if (tmp==0 && a>0){
            flag=1;
        }
    }

    if (flag==1)
        printf("Yes\n");
    else
        printf("No\n");
    
    return 0;
}