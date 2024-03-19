#include<stdio.h>
int main()
{
    int a;
    int b;
    int d1;
    int k=0;
    int s1,s2=0;

    
            while(scanf("%d%d",&a,&b)!=EOF && k<200){
        s1=a+b;
        for(;;)
            {
                d1=s1%10;
                s2+=1;
                s1=s1/10;

                if(s1==0)
                    {
                        break;
                    }
            }

            k++;
            printf("%d\n",s2);
            s2=0;

    }
return 0;
}