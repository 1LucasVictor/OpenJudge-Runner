int main(void)
{
    int a,b,c;
    int tmp;
    scanf("%d %d %d",&a,&b,&c);

    if (a>b)
    {
        tmp = b;
        b = a;
        a = tmp;
    }
    if (b>c)
    {
        tmp = c;
        c = b;
        b = tmp;
        if(a>b)
        {
            tmp = b;
            b = a;
            a = tmp;
        }
    }
    printf("%d %d %d\n",a,b,c);
}

