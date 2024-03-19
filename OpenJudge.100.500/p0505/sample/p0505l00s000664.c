#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    long long int H,N,i,count=0;
    ;long long int a[100000];
    scanf("%ld %ld",&H,&N);
    for(i=0;i<N;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        count=count+a[i];
    }
    if(count>=H)  printf("Yes");
    else printf("No");
 
    return 0;
}