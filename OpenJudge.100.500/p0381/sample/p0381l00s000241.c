#include <stdio.h>
int main (void)
{
    int kazu=1,tou=1;//???????????\??????????????????¨??????
    int a,b,c;//for???????????????¨?????????¢???°
    int an=0;//??????????????????¨??????¢???°
 
     
    while(1)
    {
         
        scanf("%d %d",&kazu,&tou);
        if((kazu==0)&&(tou==0)) break;
         
 
        for(a=1;a<=kazu;a++)//???°????????¢???????????????????????????????°?????\?????????
        {
            for(b=a+1;b<=kazu;b++)
            {
                for(c=b+1;c<=kazu;c++)
                {
                    if((a+b+c==tou)&&(a!=b)&&(b!=c)&&(c!=a)) 
                    {
                        an++;
                    }
                }
            }
        }
         
        printf("%d\n",an);
        an=0;
    }
 
    return 0;
}