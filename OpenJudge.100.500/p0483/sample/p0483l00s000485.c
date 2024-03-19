#include<stdio.h>

int main(void)
{
    int n;
    int i;
    int each_digit[5] ;
    int ok =0;
    for ( i = 0 ; i < 5 ; i++ ) each_digit[i]=0;

    scanf("%d", &n);

    for(i = 0 ; i < 5 ; i++ )
    {
//        printf("n= %d \n",n);
        each_digit[i] = n;
        n = n / 10; 
    }

    for(i = 0 ; i < 5 ; i++ )
    {
 //       printf("n= %d \n",each_digit[i]);
        each_digit[i] = each_digit[i] % 10 ;
    }

    for(i = 0 ; i < 5 ; i++ )
    {
        if(each_digit[i] == 7)
        {
            ok =1;
        }
    }

    if(ok == 1 )    printf("Yes");
    else            printf("No");

    return 0;


}


