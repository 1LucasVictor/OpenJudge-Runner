#include<stdio.h>
int main()
{
    int a,b,r1,r2,l1,l2,i,j,n;
    scanf("%d%d",&a,&b);
    if(b%a==0){
        printf("%d\n",a+b);
    } else{
        printf("%d\n",b-a);
    }

    return 0;
}
