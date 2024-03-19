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
        for (int i = 1; tapn * i < num; i++)
        {
            tap++;
        }
    
        printf("%d\n",tap);
    }
}