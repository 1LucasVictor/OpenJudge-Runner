#include <stdio.h>
#include <stdlib.h>


int main()
{
 int m;
 int lp=0;
 scanf("%d",&m);

      if(m>=500){
       int s = m/500;
        lp = lp+s*1000;
          if(m%500==0){
            printf("%d\n",lp);
          }
          else{
            int a = (m%500);
            if(a>=5){
                int b =a/5;
                lp = lp+(b*5);
                printf("%d",lp);
            }

          }
 }
          else{
           int p = m/5;
           lp = lp+5*p;
           printf("%d",lp);
                       }


 return 0;
}
