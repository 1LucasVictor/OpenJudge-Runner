#include<stdio.h>
int main()
{
    int N,x,y,z;
    scanf("%d",&N);
    x=N/100;
    y=(N%100)/10;
    z=N%10;
    if((x==7)||(y==7)||(z==7)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}