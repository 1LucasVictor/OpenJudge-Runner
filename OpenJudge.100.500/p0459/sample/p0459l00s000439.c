#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(y==(x-2)*4+(x-1)*2||y==4||y==2){
        printf("Yes");
    }
    else
        printf("No");


}
