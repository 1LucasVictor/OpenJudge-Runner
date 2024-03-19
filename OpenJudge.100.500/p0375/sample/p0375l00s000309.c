#include <stdio.h>

/*
  出す数字は1から順に3の倍数もしくは十進の桁の中に3があるか否か
  nまで
*/ 
int
chk_inc3 (int x)
{
        while (x) {
                if (x % 10 == 3) return 1;
                x /= 10;
        }
        return 0;
}

void
call (int n)
{
        int i, tmp;
        
        for (i = 1; i <= n; i++)
                if ((i % 3 == 0) || chk_inc3(i))
                        printf(" %d", i);
}

int
main(int argc, char *argv[])
{
        int n;

        scanf("%d", &n);
        call(n);
        printf("\n");
        return 0;
}