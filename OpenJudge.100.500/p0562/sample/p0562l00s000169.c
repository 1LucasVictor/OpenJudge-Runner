#include<stdio.h>

int main(void){
    int a,b;
    int tap=-1;
    scanf("%d",&a);
    scanf("%d",&b);
    int i;
    for (i = 1; ((a*i)-i+1)-b<0; i++)
    {
        tap=((a*i)-i+1)-b;
        //printf("%d\n",tap);
    }
    printf("%d\n",i);
    
    return 0;
}