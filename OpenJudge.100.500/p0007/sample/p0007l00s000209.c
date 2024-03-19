#include<stdio.h>

#define MAX 9
#define MIN 0

int main(void)
{
        int a = 0, b = 0, c = 0, d = 0;

        int n = 0;
        int count = 0;



        while(scanf("%d",&n) != EOF)
        {
                for(a = MIN; a <= MAX; a++)
                {
                        for(b = MIN; b <= MAX; b++)
                        {
                                for(c = MIN; c <= MAX; c++)
                                {
                                        for(d = MIN; d <= MAX; d++)
                                        {
                                                if((a+b+c+d) == n)
                                                {
                                                        count++;
                                                }
                                        }
                                }
                        }
                }

        printf("%d\n", count);
        count = 0;
        n = 0;
        }
        return 0;
}