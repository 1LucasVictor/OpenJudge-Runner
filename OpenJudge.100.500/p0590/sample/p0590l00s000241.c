int main()
{
    int a[5]={0},k, i, j;
    for(i=0;i<5;i++)scanf("%d", &a[i]);
    scanf("%d", &k);
    for(i=4;i>=1;i--)
    {
        for(j=i-1;j>=0;j--)
        {
            if(a[i]-a[j]>k)
            {
                printf(":(");
                return 0;
            }
        }
    }
    printf("Yay!");
    return 0;
}
