#include<stdio.h>
    int main()
    {
        char A[200000];
        int n, i,j,flag=0;
        scanf("%d", &n);
        for (i = 0;i < n;i++)
        {
            scanf("%d",&A[i]);
        }
        if (n == 1) { printf("YSE"); }
        else if (n == 2) {
            if (A[1] == A[0]) { printf("YES"); }
            else { printf("NO"); }
        }
        else
        {
            for (i = 0;i < n - 1;i++)
            {
                for (j = i + 1;j < n;j++)
                {
                    if (A[i] == A[j])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                {
                    printf("NO");
                    break;
                }
            }
            if (flag == 0)
            {
                printf("YES");
            }
        }
        return 0;
    }