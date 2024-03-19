int main(void)
{
    int n, a[10000], i;
    long long goukei=0,max=-1000000,min=1000000;

    scanf("%d", &n);

    for (i = 1;i <= n;i++)
    {
        scanf("%d", &a[i]);
        goukei = goukei + a[i];

        if (max < a[i])
        {
            max = a[i];
        }
        else
        {
            if (min > a[i])
            {
                min = a[i];
            }
        }
    }

    printf("%lld %lld %lld\n", min,max,goukei);

    return 0;
}

