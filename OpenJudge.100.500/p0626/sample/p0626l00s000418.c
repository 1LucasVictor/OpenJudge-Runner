#include<stdio.h>
int main()
{
    unsigned long int n,d,ans;
    scanf("%u %u",&d,&n);
    if(d==0)
        printf("%u\n",n);
    else if(d==1 && n<100)
        printf("%u\n",n*100);
        else if(d==1 && n==100)
            printf("%u\n",n);
    else if(d==2 && n<100)
        printf("%u\n",n*10000);
        else if(d==2 && n==100)
            printf("%u\n",n*100);
    return 0;
}
