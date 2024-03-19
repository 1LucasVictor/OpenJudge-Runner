#include <stdio.h>

int main(){
    int tapn,num,tap=1;
    scanf("%d %d",&tapn,&num);
    if (num==1)
    {
        printf("%d",0);
    }else if(tapn >= num)
    {
        printf("%d",tap);
    }else
    {
        int c = num - tapn;
        int d;
        if (c % (tapn-1)==0)
        {
            d=c/(tapn-1);
        }else
        {
            d=c/(tapn-1)+1;
        }
        tap += d;
    
        printf("%d\n",tap);
    }
}