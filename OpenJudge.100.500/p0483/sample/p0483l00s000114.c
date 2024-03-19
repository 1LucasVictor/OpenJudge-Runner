#include<stdio.h>
int main()
{
    int num, rem;
    scanf("%d", &num);

    while(num>0)
    {
        rem = num % 10;

        if(rem == 7)
        {
            printf("Yes\n");
            return 0;
        }
        num = num/10;
    }
        printf("No\n");
  	return 0;
}
