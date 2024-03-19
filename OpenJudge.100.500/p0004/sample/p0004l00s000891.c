#include<stdio.h>

int main(void)
{
        unsigned int a = 0, b = 0, min = 0, max = 0;
        int i = 0 , j = 0,r = 0;
        while(scanf("%d %d",&a , &b) != EOF)
        {

                r = b%a;
                i = r;
                while(1)
                {
                        if(a % i == 0 && r % i == 0)
                        {
                                max = i;
                                min = b / max * a;
                                printf("%d %d\n", max, min);
                                break;
                        }
                        i--;
                }
        }
        return 0;
}