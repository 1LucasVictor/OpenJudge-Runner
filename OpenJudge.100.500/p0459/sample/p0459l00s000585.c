#include <stdio.h>

int main(){

    int X,Y;
    scanf("%d %d",&X,&Y);
    int sum;
    int flag=0;

    for(int i=0;i<=X;i++){
        sum=i*2+(X-i)*4;
        if(sum==Y)
            flag=1;
    }

    if(flag==1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}