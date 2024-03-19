#include <stdio.h>
int i=0;

int main(void)
{
    int A,B,a[3],max;
    scanf("%d\t%d",&A,&B);
    a[0]=A+B;
    a[1]=A-B;
    a[2]=A*B;
    max=a[0];
    for(i=1;i<3;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d",max);
    return 0;
    
}