#include<stdio.h>
#include<stdlib.h>

main()
{
    long int num1,num2,s,k1,k2;
    int count =0;
    scanf("%ld %ld",&num1,&num2);

    s= ((num1 + num2)/2) ;

    k1= abs(num1-s);
    k2= abs(num2-s);

    if(k1 == k2)
        printf("%ld\n",s);
    else
        printf("IMPOSSIBLE\n");


    return 0;
}




