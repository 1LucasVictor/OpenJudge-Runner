#include<stdio.h>
int main(void)
{
  
    int n,i;
    int money=100000;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        money=money*1.05;
    }
    {
    money=money/10000;
    money=money+1;
    money=money*10000;
    printf("%d\n",money);
    }
    return 0;
}  

