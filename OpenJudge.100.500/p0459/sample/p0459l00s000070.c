#include<stdio.h>
int main()
{
    int x,y,sum=0;
    scanf("%d %d",&x,&y);
    if(y>4){
        sum = y/4;
        if(sum%2==0)
           printf("Yes\n");
        else
           printf("No\n");
    }
    else{
        sum = y/2;
        if(sum%x==0)
           printf("Yes\n");
        else
           printf("No\n");
    }
    return 0;
}
