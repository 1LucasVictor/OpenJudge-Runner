#include<stdio.h>
int main()
{
    int n, rem;
    scanf("%d", &n);

    while(n>0)
    {
        rem = n % 10;
        if(rem==7)
        {
            printf("Yes\n");
            break;
        }
        else
            {
                printf("No\n");
                break;
            }
        rem = n / 10;
        continue;
    }
  return 0;
}
