#include<stdio.h>
void main()
{ long long int X,h;
int count1=0,count2=0;
    scanf("%lld",&X);
    while(X>=500)
    {X=X-500;
       count1++;
    }
     while(X>=5)
    {X=X-5;
       count2++;
    }

    h=(1000*count1)+(5*count2);

    printf("%lld",h);

}


