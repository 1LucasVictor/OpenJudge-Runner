#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int H,N,i,count=0;
    int a[10000];
    scanf("%d %d",&H,&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        count=count+a[i];
    }
    if(count>=H)  printf("Yes");
    else printf("No");
 
    return 0;
}