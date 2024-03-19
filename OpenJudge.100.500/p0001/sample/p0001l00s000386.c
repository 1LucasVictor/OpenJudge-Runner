#include <stdio.h>

int main()
{
        int a;
        int b;
        int d[200];
        int i = 0;
        int j = 0;
        int sum = 0;
        int c = 1;
        while (scanf("%d %d\n", &a, &b) != EOF)
        {   
                c = 1;
                sum = a + b;
                while (sum < 0 || sum > 9)
                {   
                        sum = sum / 10; 
                        c++;
                }   
                d[i] = c;
                i++;
        }   
        for(j = 0; j < i; j++)
        {   
                printf("%d\n", d[j]);
        }   
        return (0);
}
