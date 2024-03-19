/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   long long int num1,num2;
    scanf("%lld %lld",&num1,&num2);
    if((num1+num2)%2==0){
        printf("%lld",(num1+num2)/2);
    }else{
        printf("IMPOSSIBLE");
    }

    return 0;
}
