#include<stdio.h>
int main(void)
{
    int x,y,z,i,s,a=0;
    scanf("%d%d",&x,&y);
    for(i=0;i<x;i++){
        z=x-i;
        s=(2*i)+(4*z);
        if(s==y){
            a++;
            break;
        }
    }
    if(a==0)
        printf("No\n");
    else 
        printf("Yes\n");
    return 0;
}