
#include <stdio.h>

int main()
{
int H,N,sum=0,i,a;
scanf("%d %d",&H,&N);

for(i=1;i<=N;i++)
{
    scanf("%d",&a);
    sum+=a;
}
if(sum>=H)
printf("Yes");
 else
    printf("No");

    return 0;
}