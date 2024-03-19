#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    int count = 0;
    while(number != 0)
        {
            int temp = number % 10;
            number = number/10;
            if(temp == 7)
            {
                printf("Yes\n") ;
                count = 1;
            }
        }
            if(count == 0)
            {
                printf("No\n") ;
            }
            return 0;
}
