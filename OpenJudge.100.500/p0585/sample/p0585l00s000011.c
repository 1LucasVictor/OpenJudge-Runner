#include <stdio.h>
int main()
{
    int a=0,b=0,x=0,i=2,total=0;
    float t=0;
    scanf("%d %d %f",&a,&b,&t);
    x=a;
    while(x<=t+0.5)
    {
        total+=b;
        x=i*a;
        i++;
    }
    printf("%d",total);
    
return 0;
}