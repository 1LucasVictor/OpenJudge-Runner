#include <stdio.h>
#include <stdlib.h>

struct test {
    long H;
    int N;
    int A[100000];
    char *ans;
} td[] =
    {
        {
            10, 3,
            {4, 5, 6},
            "Yes",
        },
        {
            20, 3,
            {4, 5, 6},
            "No",
        },
        {  
            210, 5,
            {31, 41, 59, 26, 53},
            "Yes",
        },
        {
            211, 5,
            {31, 41, 59, 26, 53},
            "No",
        },
    };

void
solver(long h, int n, int *a)
{
    int i;
    long sum=0;
    for (i=0; i<n; i++)
        sum += a[i];
    if (h>sum)
        printf("No\n");
    else
    {
        printf("Yes\n");
    }
}

int
main(int argc, char *argv[])
{
    int tt;
#if 0
    for(tt=0;tt<sizeof(td)/sizeof(struct test); tt++) {
        solver(td[tt].H, td[tt].N, td[tt].A);
        printf("%s\n",td[tt].ans);
    }
#else
    long H;
    int N;
    int A[100000];
    scanf("%ld%d", &H, &N);
    for(tt=0; tt<N; tt++) {
        scanf("%d", A+tt);
    }
    solver(H, N, A);
#endif
    return 0;
}