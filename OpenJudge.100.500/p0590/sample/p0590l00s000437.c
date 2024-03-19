#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,k;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
    if(fabs(a-b)>k){printf(":(");return 0;}
    if(fabs(a-c)>k){printf(":(");return 0;}
    if(fabs(a-d)>k){printf(":(");return 0;}
    if(fabs(a-e)>k){printf(":(");return 0;}
    if(fabs(b-c)>k){printf(":(");return 0;}
    if(fabs(b-d)>k){printf(":(");return 0;}
    if(fabs(b-e)>k){printf(":(");return 0;}
    if(fabs(c-d)>k){printf(":(");return 0;}
    if(fabs(c-e)>k){printf(":(");return 0;}
    if(fabs(d-e)>k){printf(":(");return 0;}
    printf("Yay!");
    return 0;
}