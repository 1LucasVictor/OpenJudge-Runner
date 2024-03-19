#include <stdio.h>
#include <math.h>

int main(){
    long int num1=1, num2, i, j, flag,c;
     long h;int l,n=3;
     for(l=1;l<=n;l++){
         scanf("%ld",&num2);
        c = 0;


    for(i=num1;i <= num2; i= i + 2)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if ((i % j) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {

            c++;
        }
    }
    printf("%ld\n",c);

     }
     return 0;

}