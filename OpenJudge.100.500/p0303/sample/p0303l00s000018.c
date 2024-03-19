w[100000],n,k,g;
f(p)
{
    int c=1;g=0;
    for(int i=0;i<n;)
    {
        if(g+w[i]<=p)
        {
            g+=w[i++];
        }
        else
        {
            if(g>0)c++;
            else return k+1; 
            g=0;
        }
    }
    return c;
}
main()
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;scanf("%d",w+i++));
    int l=0,r=1e9,m;
    while(l<r)
    {
        m=(l+r)/2;
        if(f(m)>k)l=m+1;
        else r=m;
    }
    for(m--;;m++)
    {
        if(f(m)<=k)break;
    }
    printf("%d\n",m);
    return 0;
}