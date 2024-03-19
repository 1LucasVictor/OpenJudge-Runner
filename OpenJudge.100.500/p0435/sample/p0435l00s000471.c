#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int result=0;
    double n, d, x, y, t;

    scanf("%lf %lf \n", &n, &d);

    if(n>=1 && d>=0)
    {
        for(int cont=0; cont< n; cont++)
           {
               scanf("%lf %lf",&x,&y);

               t = sqrt(pow(x,2)+ pow(y,2));

               if(t<=d)
                   {
                      result++;
                   }

           }

    }


    printf("%d \n", result);

}
