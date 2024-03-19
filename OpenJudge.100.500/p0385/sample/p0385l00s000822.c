#include<stdio.h>
int main()
{
    int n,sum,rem;
    while( scanf("%d",&n)){
            sum=0;
            if(n==0)
            break;

    while(n>0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
     printf("%d\n",sum);

    }
    return 0;
}

