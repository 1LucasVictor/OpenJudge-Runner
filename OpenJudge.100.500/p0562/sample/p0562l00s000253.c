#include <stdio.h>

int main()
{
    int a,b,i,count=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<b;i=i+a-1){
        count++;
    }

    printf("%d\n",count);
    return 0;

}
