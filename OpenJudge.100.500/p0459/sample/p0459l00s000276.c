#include <stdio.h>

int main(void){

    int x,y;
    int flag=0;
    int X,Y;

    scanf("%d",&X);
    scanf("%d",&Y);

    for(int i=1;i<=100;i++){
        for(int j=0;j<=100;j++){
            x=i;
            y=j;
            if(x+y==X && 2*x+4*y==Y){
                flag=1;
                break;
            }
        }
    }

    if(flag==1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}