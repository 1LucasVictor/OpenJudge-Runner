#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int compare(const void *a,const void *b){
    if(*(int *)a>*(int *)b)return 1;
    return -1;
}
int main()
{   int a,b,x,y,n,m,k,c;
    scanf("%d%d",&x,&a);
    if(x<a)
    printf("0");
    else 
    printf("10");

    return 0;
}
