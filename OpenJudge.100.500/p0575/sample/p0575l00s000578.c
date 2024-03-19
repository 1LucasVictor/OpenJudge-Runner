#include<stdio.h>
int main()
{
    int x,a,flag=0;
    scanf("%d %d",&x,&a);
    if(x<a){
        flag=1;
    }
    if(flag==1){
    printf("0");}
    else{
       printf("10");
    }
    return 0;
}
