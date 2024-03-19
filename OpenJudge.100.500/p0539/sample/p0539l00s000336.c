#include<stdio.h>

int main(void)
{
        int n,a,b,i;

        scanf("%d",&n);

        for(i=1;i<=9;i++){
          a = n % i;
          b = n / i;
          if((a == 0) &&(b <= 9)){
            printf("Yes\n");
            return 0;
          }
        }

        printf("No\n");

        return 0;
          


}
