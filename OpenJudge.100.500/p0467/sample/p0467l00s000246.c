#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,b,c,k,i,j;
    scanf("%d %d %d %d",&a,&b,&c,&k);
    if(a+b+c>k){
            i=abs((a+b)-c);
        printf("%d\n",i);

    }
    if(a+b+c==k){
            j=abs(a-c);
        printf("%d\n",j);
    }

    return 0;
}
