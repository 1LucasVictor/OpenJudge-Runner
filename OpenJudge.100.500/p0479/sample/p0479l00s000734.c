#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *a,*b;

    do{
        scanf("%d",&n);
    }while(n<2||n>200000);

    a=(int *)malloc(n*sizeof(int));
    b=(int *)malloc(n*sizeof(int));

    for (int i = 0; i < n;i++){
        b[i] = 0;
    }

        for (int i = 1; i < n; i++)
        {
            do
            {
                scanf("%d", &a[i]);
            } while (a[i] < 1 || a[i] > i);
            b[a[i] - 1]++;
        }

    for(int i=0;i<n;i++){
        printf("%d\n",b[i]);
    }

    free(a);
    free(b);

    return 0;
}