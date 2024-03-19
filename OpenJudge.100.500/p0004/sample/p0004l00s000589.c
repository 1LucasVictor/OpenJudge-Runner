#include<stdio.h>

/*int max_bai(long a long b);*/

int min_yaku(long a, long max ,long b);

int main(void)
{
        unsigned long a = 0, b = 0, min = 0, max = 0;
        unsigned long i = 0 ,t = 0, j = 0, m = 0, n = 0,r = 0;

        while(scanf("%ld %ld", &a , &b) != EOF)
        {
                if(a == b)
                {
                        max = a;
                        min = min_yaku(a, max, b);
                        printf("%ld %ld\n", max, min);
                }
                else
                {
                        r = a-b;
                        i = r;
                        while(1)
                        {
                                if(b % i == 0 && r % i == 0)
                                {
                                        max = i;
                                        min = min_yaku(a, max, b);
                                        printf("%ld %ld\n", max, min);
                                        break;
                                }
                                i--;
                        }
                }
        }
        return 0;
}
/*
int max(long a long b);
{


}
*/

int min_yaku(long a ,long max ,long b)
{
        long min=0;
        min = a / max * b;
        return min;
}