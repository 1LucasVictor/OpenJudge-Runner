#include <stdio.h>
int main(void){
// Here your code !
    int n,a,min,max,sum=0,i;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a);
        sum += a;
        if(i == 0)
        {
            min = a;
            max = a;
        }
        else
        if(min >= a)
        {
            min = a;
        }
        if(max <= a)
        {
            max = a;
        }
    }
    printf("%d %d %d\n",min,max,sum);return 0;
}