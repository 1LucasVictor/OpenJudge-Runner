#include<stdio.h>
int main(void)
{

        int a,b,k,i,j=0;

        scanf("%d%d%d",&a,&b,&k);

        for(i=a;j<k;i--){

                if(a%i==0&&b%i==0)
                        j++;
        }

        printf("%d\n",i+1);

        return 0;
}
