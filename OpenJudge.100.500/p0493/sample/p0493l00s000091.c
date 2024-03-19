#include<stdio.h>
 int main ()
   {
        long int a, i;
        scanf("%li", &a);
         if (a>0)
            {
                if (a%500==0)
                {
                    long int b=a*2;
                printf("%li", b);
                }
            }
           if (a%500 !=0)
           {
               long int x, y,z, m, n, o;
               x= a%500;
               y=a-x;
               z=y*2; 
              m=x/5;
               n= m*5;
               o=z+n;
               printf("%d", o);

           }
       if (a==0)
            {
             printf("0\n");
            }
   return 0;
   }
