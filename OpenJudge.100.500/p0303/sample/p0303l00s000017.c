w[100000],n,k;
cntp(int p)
{
    int cnt=1,wgh=0;
    for(int i=0;i<n;)
    {
        if(wgh+w[i]<=p)
        {
            wgh+=w[i++];
        }
        else
        {
            if(wgh>0)cnt++;
            else return k+1; 
            wgh=0;
        }
    }
    return cnt;
}
main()
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;scanf("%d",w+i++));
    int l=0,r=1e9,m;
    while(l<r)
    {
        m=(l+r)/2;
        if(cntp(m)>k)l=m+1;
        else r=m;
    }
    for(m--;;m++)
    {
        if(cntp(m)<=k)break;
    }
    printf("%d\n",m);
    return 0;
}