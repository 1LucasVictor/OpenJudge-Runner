#include <stdio.h>
#include <stdlib.h>

#define LENGTH 2000000000

int main(void)
{
    int L, R, i, j, ij_2019;
    scanf("%d %d", &L, &R);
    if (0 > L || 0 > R || L >= R || L > LENGTH || R > LENGTH)
    {
        exit(0);
    }
    else
    {
        {
            if ((R - L) >= 2019)
            {
                printf("0");
            }
            else
            {
                i = L;
                j = R;
                int ij_2019_min = 50000;
                for (int j = R; j >= (i + 1); j--)
                {
                    for (int i = L; i <= (j - 1); i++)
                    {
                        ij_2019 = (i * j) % 2019;
                        if (ij_2019 < ij_2019_min)
                        {
                            ij_2019_min = ij_2019;
                        }
                    }
                }
                printf("%d", ij_2019_min);
            }
        }
    }
}